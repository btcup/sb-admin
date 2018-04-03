#include<iostream>
using namespace std;
int main()
{
    float z=0; //5620551652 jatupat kosin
    int i,j,n;
    int a[n][n];
    int b[n][n];
    cout<<"Plase intput M :" ;
    cin>>n;
    cout<<"Plase input array A: "<<endl;
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        cin>>a[i][j];
        
    cout<<"Plase input array B: "<<endl;
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        cin>>b[i][j];
       
    
  
   cout<<"Similarity of A and B is :";
   cout<<z/100<<" %"<<endl;
    
    system("pause");
    return 0;
    }
