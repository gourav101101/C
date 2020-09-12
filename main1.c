#include<stdio.h>
#include<conio.h>
void main()
{
    int size,search,first,last,middle,list[30],i;
    printf("\nEnter number of element : ");
    scanf("%d",&size);
    printf("\nEnter %d element in the list in sorted\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&list[i]);
    printf("\nEnter the value is search ");
    scanf("%d",&search);

    first=0;
    last=size-1;
    middle=(first+last)/2;

    while(first<=last)
    {
        if(list[middle]<search)
            first=middle+1;
        else if(list[middle]==search)
        {
            printf("\n%d found at location %d",search,middle);
            break;
        }
        else
        last=middle-1;
    middle=(first+last)/2;
    }
if(first>last)
    printf("\nElement not found the list ");

}