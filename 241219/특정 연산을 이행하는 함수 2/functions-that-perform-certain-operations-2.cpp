#include <iostream>
#include <cmath>
using namespace std;
void mathfunction(float old[3]) {
    int newnum[3] = {};
    float max = 1.0; 
    float min = 1000.0;
    float mid;
    int maxidx, minidx, mididx;

    for (int i = 0; i < 3; i++ ) {
        if(old[i] > max) {
            max = old[i];
            maxidx = i;
        }
        else if(old[i] < min) {
            min = old[i];
            minidx = i;
        }
        else {
            mid = old[i];
            mididx = i;
        }
    }

    newnum[maxidx] = ceil(max);
    newnum[minidx] = floor(min);
    newnum[mididx] = round(mid);

    for(int i = 0; i < 3; i++) {
        cout << newnum[i] << " ";
    }
}

int main() {
    float old[3] = {};
    
    cin >> old[0] >> old[1] >> old[2];

    mathfunction(old);

    return 0;
}

