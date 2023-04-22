#include<stdio.h>
int main()
{
    int i,j,pro,blocks;
    printf("Enter the number of Memory Blocks: ");
    scanf("%d",&blocks);
    int memory[blocks],on_off[blocks];
    for(i=0;i<blocks;i++)
    {
        printf("Enter the size of the memory block %d: ",i+1);
        scanf("%d",&memory[i]);
        on_off[i]=1;
    }
    printf("Enter the nunber of process: ");
    scanf("%d",&pro);
    int process_mem[pro];
    for(i=0;i<pro;i++)
    {
        printf("Enter the size of the process %d: ",i+1);
        scanf("%d",&process_mem[i]);
        for(j=0;j<blocks;j++)
        {
            if(on_off[j] && process_mem[i]<memory[j])
            {
                printf("process %d is loaded in memory block of %d size %d \n",i+1,j+1,memory[j]);
                on_off[j]=0;
                memory[j] = memory[j] - process_mem[i];
                break;
            }
        }
        if(j == blocks)
        {
            printf("no free block is there to load the process %d whose size is %d\n",i+1,process_mem[i]);
        }
    }
    return 0;
}