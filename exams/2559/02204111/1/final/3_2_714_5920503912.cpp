//5920503912 Ittipat Juronpruk
#include<iostream>
using namespace std;
int main()
{
    char total,s,m;
    int size,a,b,v;
    cout<<"Number of subject:";
    cin>>v;
    cout<<"Number of student:";
    cin>>size;
    float z[size],x[size],y[size],i,j;
    
    
     for(i=0;i<v;i++)
     {
       cout<<"score of Subject"<<i+1<<":";
       
       for(j=0;j<size;j++)
       { 
        cin>>z[size];
        }     
        }            
    cout<<"Select graph(1-score,2-max,3-exit):";
    cin>>total;
    if(total=='1')
    for(i=0;i<v;i++)
    {  
       cout<<"Subj"<<i+1;
      {
       for(j=0;j<size;j++)
         cout<<" ";
         
       }    
       cout<<endl;
       }   
    if(total=='2')
    for(i=0;i<v;i++)
    {
     cout<<"Subj"<<i+1;
      {
       for(j=0;j<size;j++)
         cout<<" ";
         
       }    
       cout<<endl;
       }   
    
    system ("pause");
    return 0;
    
}
