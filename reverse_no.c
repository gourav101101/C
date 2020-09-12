#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[10],r,i=0;
    printf("Enter any Number : ");
    scanf("%d",&n);   
    while(n!=0){    
    r=n%10;
    a[i]=r;
    n=n/10;
    printf("%d",a[i]);
    i++;
    }
}
