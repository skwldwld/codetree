#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    if(n % 2 == 0) {
        for(int i = 0; n + 2 * i <= 100; i++) {
            count += n + 2 * i;
        }
    }
    else {
        for(int i = 0; n + 2 * i < 100; i++) {
            count += n + 2 * i ;
        }
    }
    
    cout << count;
    return 0;
}