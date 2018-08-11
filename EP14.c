/*************************************************************************
	> File Name: EP14.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 15时58分49秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#define MAX_N 1000000
#define KEEP_RANGE 1000000
int keep_ans[KEEP_RANGE + 5] = {0};
int get_length(int x) {
    if (x == 1) return 1;
    if (keep_ans[x] && x < KEEP_RANGE) return keep_ans[x];
    int temp_ans;
    if ( x & 1) temp_ans = get_length(x * 3 + 1) + 1;
    else temp_ans = get_length(x >> 1) + 1;
    if (x <= KEEP_RANGE) keep_ans[x] = temp_ans;
    return temp_ans;

}
int main() {





    return 0;
}
