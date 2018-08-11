/*************************************************************************
	> File Name: EP02.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月20日 星期五 15时21分44秒
 ************************************************************************/

#include<stdio.h>
int main()
{int a=0;
 int b=1;
 int temp;
 int sum =0;
 while((a+b)<=4000000)
 {   temp=a+b;
     a=b;
     b=temp;
     if(b&1)continue;
     sum+=b;
 }
printf("%d\n",sum);




return 0;


}


