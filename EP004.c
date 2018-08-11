/*************************************************************************
	> File Name: EP004.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时09分49秒
 ************************************************************************/

#include<stdio.h>
int is_palindromic(int n) {
    int temp1 = n;
    int temp = 0;
    while(n / 10 > 1){
        temp =temp * 10 + (n % 10);
        n /= 10;
    }
    temp = temp * 10 + n; 
    if(temp1 == temp)
    return 1;
    return 0;
}
int main() {
    int ans = 0, temp = 0;
    for (int i = 100 ; i <= 999; i++) {
        for (int j = 100 ; j <= 999; j++) {
            temp = i * j;
            if (is_palindromic(temp) && temp > ans){
                ans = temp;
            }
        }
    }
    printf("%d",ans);
    return 0;
}
