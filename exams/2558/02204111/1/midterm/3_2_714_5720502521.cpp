#include <iostream>
using namespace std;
int main()
{
    long long_x;
    int a,b,sum;
    
    cout<<"Please in put number : ";
    cin>>long_x;
    
    if(long_x>0)
    {
                if(long_x%2==0)
                {                       
                cout<<"Summation of even number "<<endl;
                }  
                
                else if (long_x%2==1)
                {
                cout<<"Summation of odd number "<<endl;
                }
                
    }
    else
    {
        cout<<"!! Wrong Input!!"<<endl;
        }
    
    system ("pause");
    return 0;
}
