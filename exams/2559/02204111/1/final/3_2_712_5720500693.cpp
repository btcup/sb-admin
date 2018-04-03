#include <iostream>
using namespace std;
int main()
{
    int n,m,j,i,k,y,d;
    cout<<"Number of subject :";
    cin>>n;
    cout<<"Number of student :";
    cin>>m;
    float x[n][m];
    for(i=0;i<n;i=i+1)
    {cout<<"score of Subject "<<i+1<<":";
    for(j=0;j<m;j++)
    cin>>x[i][j];
    cout<<endl;
}
cout<<"Select graph (1-score,2-max,3-exit):";
cin>>k;
if(k=1)
for(i=0;i<n;i=i+1)
    {cout<<"Subj"<<i+1<<endl;
   for(j=0;j<m;j++)
   {y=x[i][j]/10;
   for(d=0;d<y;d++)
   cout<<y<<endl;}
    cout<<endl;
}
else if(k=2)
for(i=0;i<n;i=i+1)
    {cout<<"Subj"<<i+1<<endl;
   for(j=0;j<m;j++)
   y=(x[i][j])/10;
   cout<<y<<endl;
   cout<<endl;
}


    
system("pause");
return 0;
}
    
