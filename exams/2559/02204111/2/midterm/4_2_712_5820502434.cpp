//5820502434  Nunchulee  Chokananvanich
#include <iostream>
using namespace std;
int main ()
{   
    int n,i;
    cout<<"Enter a positive interger : ";
    cin>>n;
   
    if(n>0)
    {
        cout<<"Number of digid is "<<endl;
        cout<<"Factor of "<<n<<" are :"<<endl;
        for(i=1;n%i==0;i++)
        {
           if(n%i==0)
           {
                     cout<<i<<"*"<<(n/i)<<" = "<<n<<endl;  
           }
                     
        }
        
    }
    else 
    {
            cout<<"Invalid number!!"<<endl;
    }
    system("pause");
}
