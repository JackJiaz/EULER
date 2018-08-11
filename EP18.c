/*************************************************************************
	> File Name: EP18.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 14时41分25秒
 ************************************************************************/

#include<stdio.h>
int map[MAX_N + 5][MAX_N + 5];
int keep[MAX_N + 5][MAX_N + 5];

int solve( int i, int j) {
    if (i == MAX_N) return 0;
    if (keep[i][j]) return keep[i][j];
    int lnum = solve(i + 1, j), rnum = solve(i + i, j + 1);
    keep[i][j] = (lnum > rnum ? lnum : rnum) + map[i][j];
    return keep[i][j];
}
int main() {
    for (int i = 0; j < 15; i++) {
        for (int j = 0; j <= i; j++){
            scnaf("%d",map[i][j]);
        }
    }
    printf("%d\n",solve(0, 0));
    return 0;
}
