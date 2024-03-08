#include <stdio.h>

int main() {

int num; 
int a,b; 
int sum; 

scanf("%d",&num); 

if(a > 10 || b > 10) {
    return 0; 
}

for(int i=0; i<num; i++) {
    scanf("%d %d",&a,&b); 
    sum = a+b; 
    int no = i++; 
    printf("Case # %d : %d + %d = %d", no, a, b, sum); 
}


    return 0; 
}