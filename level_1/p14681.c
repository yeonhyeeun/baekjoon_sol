// 단계별로 풀어보기 
// 2023.10.21 토
// 14681번 

// 점의 좌표를 입력받아 그 점이 어느 사분면에 속하는지 알아내는 프로그램을 작성하시오. 
// 단, x좌표와 y좌표는 모두 양수나 음수라고 가정한다.

// 입력 첫 줄에는 정수 x가 주어진다. (−1000 ≤ x ≤ 1000; x ≠ 0) 
// 다음 줄에는 정수 y가 주어진다. (−1000 ≤ y ≤ 1000; y ≠ 0)
// 출력 점 (x, y)의 사분면 번호(1, 2, 3, 4 중 하나)를 출력한다.

// ++ : 1  / -+ :2  / -- : 3 / +- : 4 

#include <stdio.h>
int main() {

int x, y;

scanf("%d", &x); 
scanf("%d", &y); 
// printf("x : %d , y : %d", x,y); 
if(x > 0 && y > 0 ) printf("1 \n"); 
else if(x < 0 && y > 0 ) printf("2 \n"); 
else if(x < 0 && y < 0 ) printf("3 \n"); 
else if(x > 0 && y < 0 ) printf("4 \n"); 

    return 0; 
}