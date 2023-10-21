// 단계별로 풀어보기 
// 2023.10.21 토
// 2884번 

// 입력 첫째 줄에 두 정수 H와 M이 주어진다. (0 ≤ H ≤ 23, 0 ≤ M ≤ 59) 
// 그리고 이것은 현재 상근이가 설정한 알람 시간 H시 M분을 의미한다.
// 입력시간은 24시간 표현을 사용한다. 24시간 표현에서 하루의 시작은 0:0(자정)이고, 
// 끝은 23:59(다음날 자정 1분 전)이다. 시간을 나타낼 때, 불필요한 0은 사용하지 않는다.

// 출력 첫째 줄에 상근이가 창영이의 방법을 사용할 때, 설정해야 하는 알람 시간을 출력한다. 
// (입력과 같은 형태로 출력하면 된다.)

#include <stdio.h>
//#include <stdlib.h>
int main() {

int H, M, newM; 

scanf("%d %d", &H, &M); 
if(H == 0) {
    H = 24; }
else if(H ==1) {
    H == 0; 
}
if(M < 45 ) {
    H = H-1; 
    // M = 60 - abs(M-45);  // 백준 이거 안대요 
    newM = 60 + (M-45); // 45보다 작을때 45를 빼면 어차피 음수이기 때문에 60과 바로 더해줘도 빼기로 계산됨 
}
else {
    newM = M - 45; 
}

if(M != 45 && H != 0) {
    printf("%d %d \n",H, newM); 
}

else if(M == 45 && H == 0){
    printf(" \n");
}

    return 0;
}
