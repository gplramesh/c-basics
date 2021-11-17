#include<stdio.h>
int main()
{ 
    int x=10,y=6;
    x+=y;//16 6
    y+=x;//16 22
    x-=y;//-6 22
    y-=x;//-6 28
    x*=y;//-168  28
    x/=y;//-6 28
    y/=x;//-6 -4
    x%=y;// 2   -4
    y%=x;//2 0
    printf("%d %d",x,y);
}
