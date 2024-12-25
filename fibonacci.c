#include <stdio.h>

int main()
{
    int i=0,j=1,count,sum,num_count;

    printf("enter how many times we want the sequence: ");
    scanf("%d",&num_count);
    printf("%d %d",i,j);

    for (count=1;count<=num_count-2;count++)
    {
        sum=i+j;
        i=j;
        j=sum;
        printf(" %d",sum);
    }


   
   return 0;

}