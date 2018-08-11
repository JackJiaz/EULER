/*************************************************************************
	> File Name: EP006.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时27分09秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int sumj = 0, sumc = 0, ans = 0;
    for (int i = 1; i <= 100; i++) {
        sumj += i;
        sumc += i * i;
    }
    sumj *= sumj; 
    ans = sumj - sumc;
    printf("%d",ans);
    return 0;
}
