/*************************************************************************
	> File Name: EP15.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 11时58分14秒
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>
int main(){
    int64_t ans = 1024;
    int64_t j = 1;
    for(int64_t i = 39; i >= 21; i -= 2) {
        ans *= i;
        ans /= j;
        j++;
    }
    printf("%" PRId64 "",ans);
}
