#include<iostream>
using namespace std;
int main()
{int n,i,j;
 int val[i][j],sub,value;
  cout<<" size of metrix: ";
  cin>>n;
       for(i=0;i<n;i++)
       { for(j=0;j<n;j++)
         value=val[i][j];
         cout<<"value: "<<value<<endl;
       }
       if(n!=1&&n<=n*n)
       {       sub= val[i][j];
               cout<<"Sub-matrix: "<<sub;
               n=n+1;
       }
       else (n==1)
       {         cout<<"Error!! no sub matrix"<<endl;
       }
       
system("pause");
return 0;
}
