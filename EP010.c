/*************************************************************************
	> File Name: EP010.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 17时58分21秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#define MAX 2000000
int64_t prime [MAX + 5] = {0};
int main() {
    int64_t sum = 0;
    for (int64_t i = 2; i <= MAX ; i++) {
        if(prime[i]) continue;
        prime[++prime[0]] = i;
        sum += i;
        for (int j = 2;j <= prime[0] && j * prime[i] <=MAX; j++) {
            prime [i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    printf("%" PRId64 "",sum);
    return 0;
}
