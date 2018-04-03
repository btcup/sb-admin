#include <iostream>
using namespace std;
int main()
{
    int m,n,a,i;
    cout<<"Enter M and N : ";
    cin>>m>>n;
    if ((m>=2&&m<=15)&&(n>=2&&n<=15))
    cout<<"Enter initial number :";
    
    else
    {
    cout<<"Error Please input M and N Between 2-15"<<endl;
    cout<<"Enter M and N : ";
    cin>>m>>n;
    cout<<"Enter initial number :";
}
    cin>>a;
    i=0;
    while(a=i+1)
    {  
                cout<<a<<endl;
         i++ ;
         
         }
    system("pause");
    return 0;
    }
