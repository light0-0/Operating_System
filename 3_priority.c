#include<stdio.h>
int main()
{
    int n,i,j,wait,temp,time=0,aw;
    printf("Enter the number of proccess : ");
    scanf("%d",&n);
    int pro[n],priority[n],done[n],p[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the time taken by proccess %d : ",i+1);
        scanf("%d",&pro[i]);
        printf("Enter the priority for the proccess %d : ",i+1);
        scanf("%d",&priority[i]);
        done[i]=0;
        p[i]=i+1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(priority[i]>priority[j])
            {
                temp=priority[i];
                priority[i]=priority[j];
                priority[j]=temp;

                temp=pro[i];
                pro[i]=pro[j];
                pro[j]=temp;

                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    for ( i = 0; i < n; i++)
    {
       for(j=0;j<n;j++)
       {
        if(done[j]==0 && priority[j]==i+1)
        {
            done[j]=1;
            time = time+ pro[j];
            wait = time - pro[i];
            printf("the proccess of priority %d takes time : %d\n",priority[j],pro[j]);
            printf("the turn around time for process %d is: %d\n",p[j],time);
            
       }
      }
    }
    printf("The averge of TAT is : %f \n",(float)time/n);
    printf("the averge waiting time is : %f \n",(float)wait/n);
      return 0;
}
