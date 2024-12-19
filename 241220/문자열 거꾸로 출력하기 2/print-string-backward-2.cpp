#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    string str[n];

    for(int i = 0; i < n; i++) {
        getline(cin, str[i]); 
        reverse(str[i].begin(), str[i].end());
    }

    for(int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }

    return 0;
}