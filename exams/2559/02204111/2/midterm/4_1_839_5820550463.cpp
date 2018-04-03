//5820550463 Watcharakorn jarrupan
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    char x;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle) :";
    cin>>x;
    cout<<"Arrival time : ";
    cin>>a;
    cout<<"Leave time : ";
    cin>>b;
    cout<<(int(b)-int(a))<<"hour and "<<(int(b*10.0)%100)-(int(a*10.0)%100)<<"minutes"<<endl;
    if(x=='c'||x=='C')
    {
            if(b-a<=2&&b-a>0)
            {
            cout<<"you have to pay 0 bath"<<endl;
            }
            else if(b-a>2&&b-a<=5)
            {
                 c=(b-a)*30;
            cout<<"you have to pay"<<c<<" bath"<<endl;
            }
            else if(b-a>5&&b-a<=8)
            {
                 c=(b-a)*50;
            cout<<"you have to pay"<<c<<" bath"<<endl; 
            }
            else if(b-a>8)
            {
              cout<<"you have to pay 500 bath"<<endl;
            }
            else if(b-a<0)
            {
                 cout<<"you can't leave before arrival time"<<endl;
            } 
    }
    if(x=='m'||x=='M')
    {
            if(b-a<=3&&b-a>0)
            {
            cout<<"you have to pay 0 bath"<<endl;
            }
            else if(b-a>3&&b-a<=7)
            {
                    c=(b-a)*10;
             cout<<"you have to pay"<<c<<" bath"<<endl;
            }
            else if(b-a>7)
            {
            cout<<"you have to pay 150 bath"<<endl;
            }
            else if(b-a<0)
            {
                 cout<<"you can't leave before arrival time"<<endl;
            } 
    }
                 
    
    system("pause");
    return 0;
}
    
    
    
