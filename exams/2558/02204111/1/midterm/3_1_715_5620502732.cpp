#include <iostream>
using namespace std;
int main ()
{
    char x;
    int w,y,z;
    cout<<"Are you member (Y or N) : ";
    cin>>x;
    cout<<"How old are you? : ";
    cin>>y;
    cout<<"Normal price : ";
    cin>>z;
    if(x=='Y')
    {
            if(y<2)
            cout<<"You have to pay 0"<<endl;
            else if(y>=2&&y<=12)
            {
                w=(z-(z*70/100));
                cout<<"You have to pay "<<w<<endl;
            }
            else if(y>12)
            {
                w=(z-(z*50/100));
                cout<<"You have to pay "<<w<<endl;
            }
    }
    else
    {       if(y<2)
            cout<<"You have to pay 0"<<endl;
            else if(y>=2&&y<=10)
            {
                w=(z-(z*50/100));
                cout<<"You have to pay "<<w<<endl;
            }
            else if(y>10)
            {
                w=(z-(z*0/100));
                cout<<"You have to pay "<<w<<endl;
            }
    }
        
    system ("pause");
    return 0;
}
    
