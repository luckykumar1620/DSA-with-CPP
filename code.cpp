/*#include<iostream>
using namespace std;
#define max 10
int main(){
  int i,j,n,bt[max],wt[max],tat[max];
  float awt=0,atat=0;
 cout<<"enter the number of the  process"<<endl;
 cin>>n;
 cout<<"enter the burst time of the process"<<endl;
 for ( i = 0; i < n; i++)
 {
  cin>>bt[i];
 }
 cout<<"process\t burst time\t waiting time\t turn around time"<<endl;
 for ( i = 0; i < n; i++)
 {
  wt[i]=0;
  tat[i]=0;
  for ( j = 0; j < i; j++)
  {
    wt[i]=wt[i]+bt[j];
  }
  tat[i]=wt[i]+bt[i];
  awt=awt+wt[i];
  atat=atat+tat[i];
   cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
 // cout<<i+1<<'\t'<<bt[i]<<'\t'<<wt[i]<<'\t'<<tat[i]<<endl;
 }
 awt =awt/n;
 atat=atat/n;
 cout<<"average waiting time ="<<awt<<endl;
 cout<<"average turn around time="<<atat<<endl;
 
 
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{   int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    cout<<"Enter total number of processes(maximum 20):";
    cin>>n;
 
    cout<<"\nEnter Process Burst Time aka DURATION \n";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
    }
    wt[0]=0;    //waiting time for first process is 0
    //calculating waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
    //calculating turnaround time
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    avwt/=i;
    avtat/=i;
    cout<<"\n\nAverage Waiting Time:"<<avwt;
    cout<<"\nAverage Turnaround Time:"<<avtat;
 
    return 0;
}*/

#include<iostream>
using namespace std;
#define max 20
int main(){
  int i,j,n,bt[max],wt[max],tat[max],at[max],temp[max];
  float awt=0,atat=0;
  cout<<"enter the number of the  process"<<endl;
 cin>>n;
 cout<<"enter the burst time of the process"<<endl;
 for ( i = 0; i < n; i++)
 {
  cin>>bt[i];
 }
 cout<<"enter the arrival time of the process"<<endl;
 for ( i = 0; i < n; i++)
 {
  cin>>at[i];
 }
temp[0]=0;
cout<<"process\t arrival time\t burst time\t waiting time\t turn around time"<<endl;
 for ( i = 0; i < n; i++)
 {
  wt[i]=0;
  tat[i]=0;
  temp[i+1]=temp[i]+bt[i];
  wt[i]=temp[i]-at[i];
  tat[i]=wt[i]+bt[i];
  awt=awt+wt[i];
  atat=atat+tat[i];
  cout<<"\nP["<<i+1<<"]"<<"\t\t"<<at[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
}
awt=awt/n;
atat=atat/n;
cout<<"average waiting time: "<<awt<<endl;
cout<<"average turn around time: "<<atat;
return 0;
}