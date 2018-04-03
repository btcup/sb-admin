#include <iostream>
using namespace std;
int main()
{
    int i,j,m,n,A[m][n],k,l;
    cout<<"Enter M and N : ";
    cin>> m>>n;
    if(m or n >=2 && m or n <=  15)
      cout<<"Enter initial number:";
     else
      cout<<"Error.Please input M and N between 2-15."<<endl;
     cin>>k;
     for(i=0;i<= m-1;i++)
     {for(j=k;j<= n ;j++)
      cout<<j;
      cout<<endl;}
     
     
     
     
     
     
system ("pause");
return 0;
}
