#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n;
    cin >> n;

    int num[n] = {};
    int near;
    int distance = 10;
    int minnum = 200;

    for(int i = 0; i < n; i++) {
        cin >> num[i];
        if(abs(100 - num[i]) < distance) {
            near = num[i];
            distance = 100 - num[i];
        }
        if(num[i] >= 100 && num[i] < minnum)
            minnum = num[i];
    }
    cout << near << " " << minnum;
    return 0;
}