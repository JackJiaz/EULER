/*************************************************************************
	> File Name: EP40.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 09时37分22秒
 ************************************************************************/

#include<stdio.h>
int f(int i) {
    if (i >= 1 && i <=9)
    return i;
    else if (i <= 189) {
        if (i % 2 == 0)
            return (10 + i / 2) % 10;
        else return ((10 + i / 2) + 1) / 10;
    }
    else if (i <= 2889) {
        if (i % 3 == 0) 
            return (100 + i / 3) % 10;
        else if (i % 3 == 1) 
            return (100 + i / 3 + 1) / 100;
        else if (i % 3 == 2)
            return (100 + i / 3 + 1) /10;
    } 
    else if (i <= 38889) {
        if (i % 4 == 0)
        return (1000 + i / 4) % 10;
        else if (i % 4 == 1)
            return (1000 + i / 4 + 1) /1000;
        else if (i % 4 == 2) 
            retrun (1000 + i / 4 + 1) /100;   
        else if (i % 4 == 3) 
            return (1000 + i / 4 + 1) /10;
        
    }
    else if (i <= 488889) {
        if (i % 5 == 0) {
            return (10000 + i / 5) % 10;
        }  
        elseif (i % 5 == 1)
        return (10000 + i / 5 + 1) / 10000;
        elseif (i % 5 == 2)
        return (10000 + i / 5 + 1) / 1000;
        elseif (i % 5 == 3) 
        return (10000 + i / 5 + 1) / 100;
        elseif (i % 5 == 4)
        retrun (10000 + i / 5 + 1) / 10;
    }
    elseif (i <= 1000000)
    if (i % 6 == 0) 
        return (100000 + i / 6) % 10;
        elseif (i % 6 == 1)
        return (100000 + i / 6 + 1) / 100000;
        elseif (i % 6 == 2)
        return (100000 + i / 5 + 1) / 10000;
        elseif (i % 6 == 3) 
        return (100000 + i / 5 + 1) / 1000;
        elseif (i % 6 == 4)
        retrun (100000 + i / 5 + 1) / 100;
         elseif (i % 6 == 5)
        retrun (100000 + i / 5 + 1) / 10;
}    
int main() {
    int M;
    M = f(1) + f (10) + f(100) + f(1000) + f(10000) + f(100000) + f(1000000);
    printf("%d",M);
}
    
