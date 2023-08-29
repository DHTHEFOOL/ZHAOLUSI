#include <iostream>
using namespace std;

const int MAX_N = 1000000;
long long f[MAX_N + 1];
long long g[MAX_N + 1];

int main() {
    int n;
    cin >> n;

    f[1] = g[1] = 1;
    f[2] = 1;
    g[2] = 2;

    for (int i = 3; i <= n; i++) {
        f[i] = g[i - 1];
        g[i] = f[i - 1] + g[i - 1];
    }

    long long total_ways = f[n] + g[n];
    cout << total_ways << endl;

    return 0;
}
