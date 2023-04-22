#include<stdio.h>
#include<math.h>

//#define space 10

void fcfs(int seq[],int start,int n)
{
    int T_time=0,current_seq,distance,i;
    for(i=0;i<n;i++)
    {
        current_seq=seq[i];
        distance = fabs(start-current_seq);
        T_time = T_time + distance;
        start = current_seq;
    }
    printf("Total Distance Travelled is : %d\n",T_time);
    printf("Squence of Disk Scheduling is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",seq[i]);
    }
}

int main()
{
    int n,j,start;
    printf("Enter the size of the operations: ");
    scanf("%d",&n);

    int seq[n];

    for(j=0;j<n;j++)
    {
        printf("Enter the Distance of Operation %dL: ",j+1);
        scanf("%d",&seq[j]);
    }

    printf("Enter the Starting point of the Disk: ");
    scanf("%d",&start);

    fcfs(seq,start,n);
    
    return 0;
}