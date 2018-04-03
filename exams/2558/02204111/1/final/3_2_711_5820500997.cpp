#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int ma;
    cout<<"Enter a matrix size :";
    cin>>ma;
    int a[ma][ma];
    cout<<"Enter matris values:"<<endl;
 for(int i=0;i<ma;i++)
 {for(int j=0;j<ma;j++)
  { cin>>a[i][j];
          }}
 cout<<"The following matrix is diagonal matrix :"<<endl;;
 for(int i=0;i<ma;i++)
{ cout<<"| ";
 for(int j=0;j<ma;j++)
 { cout<<a[i][j]<<" ";}
 cout<<"|"<<endl;}

  
    system("pause");
    return 0;
}   
