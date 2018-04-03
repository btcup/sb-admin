#include<iostream>
using namespace std;
int main()
{
    long long int a;
    int sum=0,i;
    cout<<"Please input number: ";
    cin>>a;
    if(a>=0)
    {
        if(a%2==0)
        {
                  
                  cout<<"Summation of Even number: "<<endl;
                  for(i=0;i<a;i++)
                  {   
                      sum=sum+i;
                      cout<<" "<<sum;
                      cout<<" + ";
                  }
        }
        else
        {
                  cout<<"Summation of Odd number: ";
                  for(i=0;i<a;i++)
                  {
                      sum=sum+i;
                      cout<<" "<<sum;
                      cout<<" + ";                   
                  } 
        }
        cout<<endl;
    }
    else
    cout<<"!!Wrong Input!! "<<endl;
    system("pause");
    return 0;
}
