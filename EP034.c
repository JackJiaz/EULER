/*************************************************************************
	> File Name: EP034.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 16时10分52秒
 ************************************************************************/

#include<stdio.h>
#define MAX 2540160
void init (int *num) {
    num[0] = 1;
    for (int i = 1; i <= 9 ; i++){
        num[i] = num[i-1] * i;
    }
}

int is_y (int n, int *num) {
    if (n == 1 || n == 2) return 0;
    int temp = n, sum = 0;
    while(n) {
    sum += num[n % 10];
    n /= 10;
    }
    return sum == temp;
}

int jsum(int *num) {
    int sum =  0;
    for (int i = 10; i <= MAX; i++) {
        if(is_y(i,num))
        sum += i;
    }
    return sum;
}
int main(){
    int num[10] = {0};
    init(num);
    int sum = jsum(num);
    printf("%d\n",sum);
    return 0;
}
