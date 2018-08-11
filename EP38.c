/*************************************************************************
	> File Name: EP38.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 15时39分37秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int is_valid (int x) {
    int num[10] = {0};
    int n = 0, digit = 0;
    do {
        n += 1;
        int y =x * n;
        while (y) {
            if (y % 10 == 0) return 0;
            if (num[y % 10]) return 0;
            num[y % 10] = 1;
            y /= 10;
            digit += 1;
        }
    }while (digit < 9);
    if (digit > 9) return 0;
        int y = x * i;
        ret = ret * (int)pow(10, floor(log10(y)) + 1) + y;
    }
    return ret;
}
