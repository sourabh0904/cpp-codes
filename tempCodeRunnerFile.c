#include <stdio.h>
#include <math.h>

void main() 
{
    int a,count=0;
    int r;
    int s=0.0;
    int t;
    int d;
    printf("enter the value of a \n");
    scanf("%d", &a);
    t=a;
    d=a;
    while(a>=1) 
    {
       count++;
       a=a/10;
    }
    while(t>=1)
    {
        r=t%10;
        s+=(pow(r,count));
        t=t/10; 
    }
    if(s==d) 
    {
        printf("%d is an armstrong number \n",s);
    }
    else {
        printf("%d is not an armstrong number \n",s);
    }

}