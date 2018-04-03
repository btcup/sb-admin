#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Size of matrix: ";
    cin>>n;
    if(n<=1)
    {
       cout<<"Error!! no sub matrix\n";
       system("pause");
       return 0; 
    }
    
    int m[n][n];
    int i=0 ,j=0;
    cout<<"Value:\n";
    while(i<n)
    {
       j=0;
       while(j<n)
       {
          cin>>m[i][j];
          j++;
       }
       i++;
    }
    
    cout<<"Sub-matrix :";
    i=n-1;
    while(i>-1)
    {
       j=n-1;
       while(j>-1)
       {
          cout<<"\n|"<<m[i][j]<<"|"<<endl<<"----";
          j--;
       }
       i--;
    }
    
    system("pause");
    return 0;   
}
