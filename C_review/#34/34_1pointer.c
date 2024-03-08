// 34.1 포인터 변수 선언하기 

// c언어에서 메모리 주소(0x~~)는 포인터 변수에 저장한다. 
// 포인터 변수는 *를 사용하여 선언한다. 
// 데이터 타입 *포인터 이름; (특정 데이터 타입의 포인터 생성)
// 포인터 = &변수; (변수의 메모리 주소를 포인터에 할당/저장하기)

#include <stdio.h>
int main() {
    int *numPtr; //포인터 선언 
    int num1 = 10; 

    numPtr = &num1; 

    printf("%p \n", numPtr); //pointer에 할당되어있는 num1의 메모리 주소 출력 
    
    printf("%p \n", &num1); // num1에서 셀프로 메모리 주소 출력 

    printf("%d \n",num1); //그냥 num1변수값 출력 

    // printf("%d \n", numPtr); //int 타입이었던 포인터변수 자체 출력 

// 0x16d27f024 
// 0x16d27f024 
// 10 
// 1831333924 

}

// 아래 표현들은 *위치에 관계없이 다 같은 말임 
// int* numPtr == int *numPtr == int * numPtr



