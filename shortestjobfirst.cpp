#include<iostream>
using namespace std;
main()
{
    int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avg_wt,avg_tat;
    cout<<"Enter the number of processes:"<<endl;
    cin>>n;
    cout<<"\nEnter burst time:\n"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"p"<<(i+1)<<":";
        cin>>bt[i];
        p[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        total+=wt[i];
    }
    avg_wt=(float)total/n;
    total=0;
    cout<<"\nProcess\t  Burst Time  \tWaiting Time\tTurnaroundTime"<<endl;
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
        cout<<"\np"<<p[i]<<"\t\t "<<bt[i]<<"\t\t "<<wt[i]<<"\t\t"<<tat[i]<<endl;
    }
    avg_tat=(float)total/n;
    cout<<"\n\nAverage Waiting Time="<<avg_wt;
    cout<<"\nAverage Turnaround Time="<<avg_tat;

}


