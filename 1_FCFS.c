#include<stdio.h>
int main()
{
    int pro,j;
    printf("Enter the no. of proccess: ");
    scanf("%d",&pro);
    int arr[pro];

    for(int i = 0;i<pro;i++)
    {
        printf("enter time of the proccess %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int time=0,ft=0,wait=0,aw=0;
    for( j=0;j<pro;j++)
    {
        time = time+arr[j];
        wait = time - arr[j];
        printf("Procees %d is excecuted in %d\n",j+1,arr[j]);
        printf("TAT for proccess %d is: %d\n",j+1,time);
        printf("Waiting time for %d is :%d \n",j+1,wait);
        ft=ft+time;
        aw=aw+wait;
    }
        printf("average TAT is : %d\n",ft/pro);
        printf("average TAT is : %d\n",aw/pro);
}
