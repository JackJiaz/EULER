/*************************************************************************
	> File Name: EP47.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 22时52分00秒
 ************************************************************************/
#include<stdio.h>
#define MAX_N 1000000
int prime[MAX_N + 5] = {0};

int main() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = 2 * i; j <= MAX_N; j += i) {
            prime[j] += 1 ;
        }
    }
    for (int i = 20; i <= MAX_N;) {
        int flag = 1;
        for (int j =0; i + j <=MAX_N && j < 4 && flag; j++) {
            if (prime[ i + j ] == 4) continue;
            flag = 0;
            i += j + 1;
            break;
        }
        if (flag) {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
