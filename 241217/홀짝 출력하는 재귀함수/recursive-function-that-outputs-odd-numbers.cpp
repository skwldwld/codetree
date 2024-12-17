#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n] = {};

    if(n % 2 == 0) {
        for (int i = 0; i < (n / 2); i++) {
            num[i] = (i + 1) * 2;
            cout << num[i] << " ";
        }
    }
    else {
        for (int i = 0; i < (n / 2) + 1; i++) {
            num[i] = i * 2 + 1;
            cout << num[i] << " ";
        }
    }
    

    return 0;
}