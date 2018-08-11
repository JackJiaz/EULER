/*************************************************************************
	> File Name: EP003.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时33分27秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#define MAX 600851475143
int main() {
    int64_t ans = 0, i = 2, num = MAX;
    while(i * i < num) {
        if(num % i == 0) ans = i;
        while (num % i == 0) num /= i;
        i++;
    }
    if(num != 1) ans = num;
    printf("%" PRId64 "",ans);
    return 0;
}
