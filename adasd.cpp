#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long calculate_sum(long long a, long long n) {
    if (n == 0) {
        return 0;
    } else {
        long long half_sum = calculate_sum(a, n / 2);  // Tính tổng nửa đầu của dãy
        long long result = (half_sum * 2 + (n % 2) * a) % MOD;  // Tính tổng của dãy
        return result;
    }
}

int main() {
    long long a, n;
    cin >> a >> n;

    // Tính và in ra kết quả
    long long result = calculate_sum(a, n+1)+1;
    cout << result << endl;

    return 0;
}
