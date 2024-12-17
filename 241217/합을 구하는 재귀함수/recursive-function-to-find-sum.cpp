#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = n;

    for(int i = 1; n + i < 100; i++) {
        count += (n + i);
    }
    cout << count;
    return 0;
}