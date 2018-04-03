#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int i,j,k;
    double x,y,z;
    int g;
    cout<<"Number of student : ";
    cin>>n;
    cout<<"Number of subject : ";
    cin>>m;
    for(i=1;i<=m;i++)
    {
                     for(j=1;j<=n;j++)
                     {
                                      cout<<"score of Student"<<j<<" : ";
                                      cin>>x>>y>>z;
                     }                
                     if(j=n)
                     break;
                     
    
    }           
    cout<<"Select graph (1-score,2-max,3-exit)";
    cin>>g;
    for(k=0;k<=n;k++){
    if(g==1){
                      cout<<x<<endl;
                      cout<<y<<endl;
                      cout<<z<<endl;}
    if(g==2){
                  if(x>y&&x>z)
                  cout<<x<<endl;
                  if(y>x&&y>z)
                  cout<<y<<endl;
                  if(z>x&&z>y)
                  cout<<z<<endl;}
    if(g==3)
    break;
}
system("pause");
return 0;
}
                      
    
