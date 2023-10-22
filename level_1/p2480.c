// 단계별로 풀어보기 
// 2023.10.21 토
// 2480번 주사위 세개 

// 입력 첫째 줄에 3개의 눈이 빈칸을 사이에 두고 각각 주어진다. 
// 출력 첫째 줄에 게임의 상금을 출력 한다.

#include <stdio.h>
int main() {

// 케이스 : 다 다른 경우 , 다 같은 경우, 2개만 같은 경우 

    int n1, n2, n3; 
    int price; 
    int max; 
    scanf("%d %d %d", &n1, &n2, &n3); 
    int mus21 = n2 - n1; 
    int mus23 = n2 - n3; 

    // 다 같은 경우 
    if( (n1 == n2) && (n1 == n3)) {
        price = 10000 + n1*1000; 
    }

    // 두개만 같은 경우 
    else if((n1 == n2) || (n1 || n3) || (n2 == n3 )) {
        if(n1 == n2) {
            price = 1000 + 100 * n1; 
        }
        else if(n1 == n3) {
            price = 1000 + 100 * n1; 
        }
        else if(n2 == n3) {
            price = 1000 + 100 * n2; 
        }

    }

    // 세개 다 다른 경우 
    else if((n1 != n2) && (n1 != n3) && (n2 != n3)) {
        // 3개 중 중간 값 이용하기 
    if(mus21 > 0 && mus23 > 0) {
        price = n2*100; 
    }
    else if(mus21 < 0) {
        price = n1*100; 
    }
    else if(mus23 < 0) {
        price = n3*100;
    } 
    else {
        if(mus21 > mus23) {
            price = n3*100; 
        } 
        else if(mus23 > mus21) {
            price = n1*100; 
        } 
    }

    }

    printf("%d %d %d \n", n1,n2,n3); 
    printf("%d \n", price) ; 

    return 0; 
}