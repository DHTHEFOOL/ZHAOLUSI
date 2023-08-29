#include <bits/stdc++.h>

using namespace std;

int n ;
int arr[100000];

void findSubArrayMax() {
    int best = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++) {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    cout << best << "\n";
}

void findSubArrayMaxWithIndices() {
    int best = INT_MIN, sum = 0;
    int best_start = 0, best_end = 0, current_start = 0;
    for (int i = 0; i < n; i++) {
        if (sum + arr[i] < arr[i]) {
            current_start = i;
            sum = arr[i];
        } else {
            sum += arr[i];
        }

        if (best < sum) {
            best = sum;
            best_start = current_start;
            best_end = i;
        }
    }
    cout << best << "\n";
    cout << "start from " << best_start << " to " << best_end << "\n";
}

int main() {
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
    findSubArrayMax();
    findSubArrayMaxWithIndices();
}