#include<stdio.h>
int main()
{
    char x[ 50];    
    int n;
    printf("Enter your Name:");
    scanf("%s",&x);

    printf("Enter the amount:");
    scanf("%d",&n);

    printf("%s, you have send $%d via on Google pay",x,n);
     
     return 0;
}