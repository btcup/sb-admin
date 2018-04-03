#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int old,price;
    char Y,N;
    do
    {
    cout<<"Are you member (Y or N) : ";
    cin>> ch ='Y';

         if(old<2)
         {
                  cout<<"How old are you? : ";
                  cin>>old;
                  cout<<"Normal price : ";
                  cin>>price;
         }
         else if(old>=2||old<=12)
         {
                            cout<<"How old are you? : ";
                            cin>>old;
                            cout<<"Normal price : ";
                            cin>>price;
                            }
         else if(old>=12)
         {
                  cout<<"How old are you? : ";
                  cin>>old;
                  cout<<"Normal price : ";
                  cin>>price;
         }
    }
         
         while(N);
         cout<<"Are you member (Y or N) : ";
         cin>> N;
         if(old<2)
         {
                  cout<<"How old are you? : ";
                  cin>>old;
                  cout<<"Normal price : ";
                  cin>>price;
         }
         else if(old>=2||old<=12)
         {
                            cout<<"How old are you? : ";
                            cin>>old;
                            cout<<"Normal price : ";
                            cin>>price;
                            }
         else if(old>=12)
         {
                  cout<<"How old are you? : ";
                  cin>>old;
                  cout<<"Normal price : ";
                  cin>>price;
         
                  }
}
    system("pause");
    return 0;
}

