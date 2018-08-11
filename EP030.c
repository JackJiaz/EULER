/*************************************************************************
	> File Name: EP030.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时44分57秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX 354294
int is_y (int n) {
    int sum = 0, temp = n;
    while(n){
    sum += (int)pow(n % 10 , 5);
    n /= 10;
    }
    if (sum == temp)
    return 1;
    return 0;
}
int main() {
    int sum;
    for (int i; i <= MAX; i++) {
        if(is_y(i)) sum += i;
    }
    printf("%d",sum);
    return 0;
}
