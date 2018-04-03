//5920503351 Katekaonk Meeruang
#include<iostream>
using namespace std;
int main ()
{
    int n,A=0;
    cout<<"Enter N : ";
    cin>>n;
    while(n<=0){
             cout<<"Enter N : ";
             cin>>n;     
               }
        if(n>0){
                cout<<"The greatest factor of "<<n<<" is "<<n%(n*100)==0;
                
                }
        
    system("pause");
    return 0;
    }
