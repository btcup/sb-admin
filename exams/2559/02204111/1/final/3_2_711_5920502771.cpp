#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,n;
    cout<<"Number of subject:";
    cin>>a;
    cout<<"Number of student:";
    cin>>b;
    float x[a][b];
    for(n=0;n<a;n++)
    {
    cout<<"score of subject "<<n+1<<":";
    for(i=n;i<=n;i++)
      for(j=0;j<b;j++)
      cin>>x[i][j];
    }  
    int p,s,t,u,v;
    cout<<"Select graph(1-score,2-max,3-exit):";
    cin>>p;
    if(p=1)
    for(n=0;n<a;n++)
    {
    cout<<"subj"<<n+1<<":"<<endl;
    for(i=n;i<=n;i++)
      for(j=0;j<b;j++)
      {
      s=x[i][j]/10;
      t=((x[i][j]*10)-s*100)/50;
       for(u=0;u<s;u++)
       cout<<"o";
       for(v=0;v<t;v++)
       cout<<"x";
       cout<<endl;
      }
      cout<<endl;
    }

    
    system("pause");
    return 0;
}
