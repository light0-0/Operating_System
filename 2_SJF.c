#include<stdio.h>
int main()
{
    int burst_time[10],pro,i,j,temp;
    printf("enter the number of process : ");
    scanf("%d",&pro);
    int p[pro];
    for(i=0;i<pro;i++)
    {
        printf("Enter the burst time of the process %d : ",i+1);
        scanf("%d",&burst_time[i]);
        p[i]=i+1;
        // sum_of_burst = sum_of_burst + burst_time[i];
    }
    
    for(i=0;i<pro-1;i++)
    {
        for(j=i+1;j<pro;j++)
        {
            if(burst_time[i]>burst_time[j])
            {
                temp = burst_time[i];
                burst_time[i]=burst_time[j];
                burst_time[j]=temp;

                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    int time=0,ft=0,wait=0,aw=0;
    for(i=0;i<pro;i++)
    {
         time = time+burst_time[i];
         wait = time - burst_time[i];
        printf("process %d is excecuted in %d\n",p[i],burst_time[i]);
        printf("TAT for proccess %d is: %d\n",p[i],time);
        printf("Waiting time for %d is :%d \n",p[i],wait);
        ft=ft+time;
        aw=aw+wait;
    }
    printf("average TAT is : %d\n",ft/pro);
    printf("average wait is : %d\n",aw/pro);
}   
