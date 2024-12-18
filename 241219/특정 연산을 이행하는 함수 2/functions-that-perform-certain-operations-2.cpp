#include <iostream>
#include <cmath>
using namespace std;

// 함수 선언
void mathfunction(float old[3]);

int main() {
    float old[3];
    
    // 입력 받기
    cin >> old[0] >> old[1] >> old[2];

    // 함수 호출
    mathfunction(old);

    return 0;
}

// 함수 정의
void mathfunction(float old[3]) {
    int result[3];
    float max = -INFINITY;  
    float min = INFINITY;   
    float mid = 0.0;
    int maxidx = -1, minidx = -1, mididx = -1;

    // 최대값 찾기
    for (int i = 0; i < 3; i++) {
        if (old[i] > max) {
            max = old[i];
            maxidx = i;
        }
    }

    // 최소값 찾기
    for (int i = 0; i < 3; i++) {
        if (old[i] < min) {
            min = old[i];
            minidx = i;
        }
    }

    // 중간값 찾기
    for (int i = 0; i < 3; i++) {
        if (i != maxidx && i != minidx) {
            mid = old[i];
            mididx = i;
        }
    }

    // 변환된 값 저장
    result[maxidx] = ceil(max);   
    result[minidx] = floor(min);  
    result[mididx] = round(mid);  

    // 입력 순서대로 출력
    for (int i = 0; i < 3; i++) {
        cout << result[i] << " ";
    }
}
