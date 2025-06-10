#include<stdio.h>
int main()
{
    int N,i;
    printf("enter number for the loop :");
    scanf("%d",&N);

    i=N;
   while(i>=1)
    {
        
        if(i%2==0)
        {
            printf("\n%d",i);
        }

        i--;
    }

}