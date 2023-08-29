#include <iostream>
#include <string>
using namespace std;

void generateStrings(int n, string current) {
    if (n == 0) {
        cout << current << endl;
        return;
    }

    generateStrings(n - 1, current + 'A');
    if (current.empty() || current.back() != 'B') {
        generateStrings(n - 1, current + 'B');
    }
}

int main() {
    int n;
    cin >> n;

    generateStrings(n, "");

    return 0;
}
