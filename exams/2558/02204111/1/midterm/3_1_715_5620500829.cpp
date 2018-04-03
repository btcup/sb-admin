#include<iostream>
using namespace std;
int main()
{
    int c,d;
    char a='Y',b='N';
    cout<<"Are you member (Y or N): ";
    cin>>a;
    cout<<"How old are you?: ";
    cin>>c;
    cout<<"Normal price : ";
    cin>>d;
    cout<<endl;
    
    if(a=='Y')
    {
             if(c<2)
                    cout<<"You have to pay "<<d-(d*100/100)<<endl;
             else if(c>=2&&c<=12)
                    cout<<"You have to pay "<<d-(d*70/100)<<endl;
             else if(c>12)
                    cout<<"You have to pay "<<d-(d*50/100)<<endl;
    }
    
    else if(b=='N')
    {
             if(c<2)
                    cout<<"You have to pay "<<d-(d*100/100)<<endl;  
             else if(c>=2&&c<=10)
                    cout<<"You have to pay "<<d-(d*50/100)<<endl;
             else if(c>10)
                    cout<<"You have to pay "<<d-(d*0/100)<<endl;
    }
    
    
    cout<<endl;
    system("pause");
    return 0;
}
