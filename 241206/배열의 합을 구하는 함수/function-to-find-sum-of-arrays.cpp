#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 0;
    
    cin >> n;

    int a[n][n] = {};
    int sum[n] = {0};
    int sumsum[n] = {0};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            sum[i] += a[i][j];
            total += a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
            sumsum[i] += a[j][i];
        }
        cout << sum[i] << endl;
    }

    for(int i = 0; i < n; i++) {
        cout << sumsum[i] << " ";
    }
    cout << total;
    return 0;
}