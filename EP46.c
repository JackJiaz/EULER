/*************************************************************************
	> File Name: EP46.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 22时44分42秒
 ************************************************************************/

#include<stdio.h>
int is_prime(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
} 
int main() {
    for (int i = 33; i; i +=2) {
        if (is_prime(i)) continue;
        int flag = 1;
        for (int j = 1; j * j * 2 <= i && flag; j++) {
            if(is_prime(i) == 0 && is_prime(i - j * j * 2)) flag = 0;
        }
        if (flag) {
            printf("%d", i);
            break;
        }
    }
     return 0;
}
