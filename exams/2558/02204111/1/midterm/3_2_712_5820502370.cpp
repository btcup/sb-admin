#include<iostream>
using namespace std;
int main ()
{
    long long n;
    int sum=0;
    cout<<"Please input number :";
    cin>>n;
    if(n>0&&n%2==0)
    {
                   for(n=2;n%2==0;n++)
                   {
                   sum=sum+n;
                   cout<<"summation Even number : "<<sum ;
                   }
    }
    if(n>0&&n%2==1)
          {
          for(n=2;n%2==0;n++)
                   {
                   sum=sum+n;
                   cout<<"summation Even number : "<<sum ;
                   }
          
        }
    if (n<0)
    {
            cout<<"!!wrong Input!!"<<endl; 
            } 
    system("pause");
    return 0;
}
    
    
