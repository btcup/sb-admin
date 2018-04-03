#include <iostream>
using namespace std;
int main()

{
    char V;
    float At,Lt,t,i,;
    int n,e,a,u;
    cout<<"Type of vehicle ((C)car or (M)Motorcycle): ";
    cin>>V;
    cout<<"Arrival time: ";
    cin>>At;
    cout<<"Leave time: ";
    cin>>Lt;
    if (At>Lt)
    {
              cout<<"You can't leave before arrival time"<<endl;
    } 
    else if (V == 'C' && e>=1)
    {
               t = Lt - At;
               n = Lt - At;
               i = t - n;
               e = i*10;
               cout<<n<<" hour and "<<e<<" minutes"<<endl;
               n=n+1;
            if (n>=0 && n<=2)
            {
                     a = n*0; 
                     cout<<"You have to pay "<<a<<endl;
            }
            else if (n>2 && n<=5)
            {
                 a = (n-2)*30;
                 cout<<"You have to pay "<<a<<endl;
            }
            else if (n>5 && n<=8)
            {
                 u=n-5;
                 a=(n-2)-u;
                 cout<<"You have to pay "<<a<<endl;
            }
            else if (n>8)
            {
                 a=500;
                 cout<<"You have to pay "<<a<<endl;
            }
            
    }
    else if (V=='M' && e>=1)
    {
          t = Lt - At;
               n = Lt - At;
               i = t - n;
               e = i*10;
               cout<<n<<" hour and "<<e<<" minutes"<<endl;
               n=n+1;
                 if (n>=0 && n<=3)
                 {
                          a=n*0;
                          cout<<"You have to pay "<<a<<endl;
                 }
                 else if (n>3 && n<=7)
                 {
                      a=(n-3)*10;
                      cout<<"You have to pay "<<a<<endl;
                 }
                 else if (n>7)
                 {
                      a=150;
                      cout<<"You have to pay "<<a<<endl;
                 }
    }       
    system ("pause");
    return 0;
}
