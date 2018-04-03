#include<iostream>
using namespace std;
int main()
{
    char Y,N,A ;
    int x,z,Sum,;
    cout<<"Are you member(Y or N):" ;
     cin>>N||Y;
    cout<<"How old are you ?:";
    cin>>x;
    cout<<"Normal price:";
    cin>>z;
    {
      
      {
      if (x<2)
      cout<<"You have to pay 0"<<endl;
      if (2<=x<=12)
      Sum=z-(z*70/100);
      cout<<"You have to pay"<< Sum <<endl;
      if(x>12)
      Sum=z-(z*50/100);
      cout<<"You have to pay"<< Sum <<endl; 
      }
    
      {
       if(x<2)
        cout<<"You have to pay 0"<<endl;
        }
     }
    system("pause");
    return 0;
}
