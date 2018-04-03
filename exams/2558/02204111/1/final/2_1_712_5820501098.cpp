#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Size of matrix : ";
    cin>>n;
    if (n<=1)
    cout<<"Error!! no sub matrix"<<endl;
    else if (n>1)
    {
    int x[n];
    cout<<"Value"<<endl;
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
       {
          cin>>x[i];
       }
    cout<<"Sub-matrix : "<<endl;
    }
       
system("pause");
return 0;
}
