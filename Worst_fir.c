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
        int worst_fit=-1;
        for(j=0;j<block;j++)
        {
             if(pro_size[i]<block_size[j] && on_off[j]==0)
             {
                if(worst_fit==-1 || block_size[j]>block_size[worst_fit])
                {
                    worst_fit=j;
                }
             }
        }
        if(worst_fit != j)
        {
            printf("The process size %d is allotaed to memory %d\n",pro_size[i],block_size[worst_fit]);
            on_off[worst_fit]=1;
        }
        else
        {
            printf("Unable to allocate process size %d\n",pro_size[n]);
        }
   }
   return 0;
}