#include<stdio.h>
int main()
{
    int block,n,i,j;
    printf("Enter the number of blocks: ");
    scanf("%d",&block);
    printf("Enter the number of process: ");
    scanf("%d",&n);
    int block_size[block],pro_size[n],on_off[block];
    for(i=0;i<block;i++)
    {
        printf("Enter the size of block %d: ",i+1);
        scanf("%d",&block_size[i]);
        on_off[i]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("Enter the size of process %d: ",i+1);
        scanf("%d",&pro_size[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<block;j++)
        {
             if(pro_size[i]<block_size[j] && on_off[j]==0)
             {
                printf("The process size %d is allotaed to memory %d\n",pro_size[i],block_size[j]);
                on_off[j]=1;
                break;
             }
        }
       if(j == block)
       {
        printf("process %d size of %d is not allotaed\n",i+1,pro_size[i]);
       }
    }
}