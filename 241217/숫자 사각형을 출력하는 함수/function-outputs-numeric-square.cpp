#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n][n] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            num[i][j] = (i + 1) + (4 * j);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}