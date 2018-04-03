// 5920550449 Apichaya Wongmongkol
#include <iostream>
using namespace std;
int main()
{
    int x;
    do
    {
     cout<<"input value :";
     cin>>x;
     if(x>=10)
              cout<<"Invalid Input!! Try Again"<<endl;
     else
     {
         cout<<"input value :";
         cin>>x;
     }
    }
    while (x>=0);
          cout<<"Total is "<<endl;
    system("pause");
    return 0;
}
