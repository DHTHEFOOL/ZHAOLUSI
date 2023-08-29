#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool can_destroy_all(const vector<int>& X, int k, int R) {
    int count = 1;
    int last_point = X[0];

    for (size_t i = 1; i < X.size(); ++i) {
        if (X[i] - last_point > 2 * R) {
            count++;
            last_point = X[i];
        }
    }

    return count <= k;
}

int find_min_explosion(const vector<int>& X, int k) {
    int left = 0;
    int right = X.back() - X.front();

    while (left <= right) {
        int mid = (left + right) / 2;
        if (can_destroy_all(X, k, mid)) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> X(n);
    for (int i = 0; i < n; ++i) {
        cin >> X[i];
    }

    int result = find_min_explosion(X, k);
    cout << result << endl;

    return 0;
}
