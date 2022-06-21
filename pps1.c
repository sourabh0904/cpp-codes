#include<stdio.h>
int main()
{
    int index1,index2,input;
    char alphabet='A';
    printf("enter the limit: ");
    scanf("%d",&input);

for(index1=1;index1<=input;++index1)
{
    for(index2=1;index2<=index1;++index2)
    {
        printf("%c",alphabet);

    }
    ++alphabet;
    printf("\n");
}
return 0;
}