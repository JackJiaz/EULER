/*************************************************************************
	> File Name: EP036.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 16时43分11秒
 ************************************************************************/

#include<stdio.h>
int is_y (int n, int x) {
    int temp = n; int num = 0;
    while (n){
        num = num * x + n % x;
        n /= x;
    }
    return num == temp;
}
int main() {
    int ans = 0;
    for ( int i = 1; i <= 1000000; i++) {
        if (!is_y(i, 10))continue;
        if (!is_y(i, 2))continue;
        ans += i;
    }
    printf("%d",ans);
    return 0;
}
