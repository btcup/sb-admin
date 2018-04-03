#include <iostream>
using namespace std;
int main ()
{
    int old;
    double num;
    char member;
    cout<<"Are you member (Y or N) : ";
    cin>>member;
    cout<<"How old are you? : ";
    cin>>old;
    cout<<"Normal price : ";
    cin>>num;
             if(member=='Y')
             {
                            if(old<2)
                            cout<<"you have to pay "<<(num*0)<<endl;
                            else if (old==2||old==3||old==4||old==5||old==6||old==7||old==8||old==9||old==10||old==11||old==12)
                            cout<<"you have to pay "<<(num*0.3)<<endl;
                            else if (old>12)
                            cout<<"you have to pay "<<(num*0.5)<<endl;
             }
             else
             {
                            if(old<2)
                            cout<<"you have to pay "<<(num*0)<<endl;
                            else if (old==2||old==3||old==4||old==5||old==6||old==7||old==8||old==9||old==10)
                            cout<<"you have to pay "<<(num*0.5)<<endl;
                            else if (old>10)
                            cout<<"you have to pay "<<(num*1)<<endl;
             }
    cout<<endl;          
    system ("pause");
    return 0;
}
