#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Size of matrix : ";
    cin>>n;
    float A[n][n];
    if(n<=1)
          cout<<"Error!! no aub matrix"<<endl;
    else
    {
         cout<<"Value :"<<endl;  
         cin>>A[n][n];
              
    }      
    
    

    system("pause");
    return 0;    
    
    }
