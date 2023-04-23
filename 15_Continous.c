#include<stdio.h>
#include<stdlib.h>

#define MEM_Size 1000
    int main(){
    int memory[MEM_Size],file_size,start_index,end_index,j,i;

    for(i=0;i<MEM_Size;i++)
    {
        memory[i]=0;
    }

        printf("Enter the file size: ");
        scanf("%d",&file_size);

        if(file_size>MEM_Size)
        {
            printf("Not enough Memory\n");
            return 1;
        }


        start_index=-1;
        for(i=0;i<MEM_Size;i++)
        {
            if(memory[i]==0)
            {
                for(j=i+1; j<i+file_size && j< MEM_Size;j++)
                {
                    if(memory[j]!=0)
                    {
                         break;
                    }
                }
                if(j==i+file_size)
            {
                start_index = i;
                break;
            }
        }
        }
        if(start_index == -1)
        {
            printf("not enough contiguous memory availabale\n");
            return 1;
        }

        end_index = start_index + file_size - 1;
        for (i=start_index;i<end_index;i++)
        {
            memory[i] =1;
        }

        printf("\t File allocated successfully,\n");
        printf("Starting index : %d\n",start_index);
        printf("Ending index: %d\n",end_index);
return 0;
}   