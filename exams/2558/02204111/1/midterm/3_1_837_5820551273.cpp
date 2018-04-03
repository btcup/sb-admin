#include <iostream>
using namespace std;
int main()
{
     bool y=1,n=0;
     int x,p;
     cout<<"Are you member y or n:";
     cin>>y>>n;
     if(y)
            {
            cout<<"how old are you:"<<endl;
            cin>>x;
            if(x<2)
                   {
                   cout<<"Normal price:"<<" "<<p;
                   p*0;
                   }
            if(2<=x<=12)
                   {
                   cout<<"Normal price:"<<" "<<p;
                   p/2;
                   }
            if(x>12)
                    {
                      cout<<"Normal price:"<<" ";
                      cin>>p;
                    }
            cout<<"You have to pay"<<p;
            }
    
     else if(n)
            {
            cout<<"how old are you:"<<x<<endl;
            cin>>x;
            if(x<2)
                   {
                   cout<<"Normal price:"<<" "<<p;
                   p*0;
                   }
            if(2<=x<=10)
                   {
                   cout<<"Normal price:"<<" "<<p;
                   p/2;
                   }
            if(x>10)
                    {
                      cout<<"Normal price:"<<" ";
                      cin>>p;
                    }
            cout<<"You have to pay"<<p;
             }
system ("pause");
return 0;
}
