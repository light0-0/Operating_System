#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
    int i,j,head,n,min,total=0;
    printf("Enter the value of the Head : ");
    scanf("%d",&head);

    printf("Enter the number of Sequences: ");
    scanf("%d",&n);

    int seq[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the distance of sequence %d: ",i+1);
        scanf("%d",&seq[i]);
    }

    for(i=0;i<n;i++)
    {
        min = INT_MAX;
        int index=-1;
        for(j=0;j<n;j++)
        {
            if(abs(head-seq[j])<min)
            {
                min= abs(head-seq[j]);
                index = j;
            }
        }
        total = total + min;
        head=seq[index];
        printf("SEQUENCE in which the operations will Execute %d \n",seq[index]);
        seq[index]=INT_MAX;
    }
    printf("Total SEEK time for all the operations are : %d",total);
    return 0;
}