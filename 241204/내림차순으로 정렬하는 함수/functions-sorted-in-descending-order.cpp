#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;
    int v[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v, v + n, compare);

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}