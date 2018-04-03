#include<iostream>//Pachara Worasilapa 5620501124
#include<cmath>
using namespace std;
int main()
{
    float A,L,sum;
    int pay,p1,p2,p3;
    char T;
    cout<<"Type of Vehical ((C)Car or (M)Motorcycle) : ";
    cin>>T;
    if(T=='C')
    {
                 cout<<"Arrival time : ";
                 cin>>A;
                 cout<<"Leave time : ";
                 cin>>L;
                 sum = (int(L)*60+((L-int(L))*100))-(int(A)*60+((A-int(A))*100));
                 cout<<int(sum)<<" hours and "<<
                 if(sum<3)
                    p1=0;
                 if(sum>=3&&sum<6)
                    p2=3*30;
                 if(sum>=6&&sum<8)
                    p3=3*50;
                 pay=p1+p2+p3;
                 cout<<pay;
    }
    else 
    {
                 cout<<"Arrival time : ";
                 cin>>A;
                 cout<<"Leave time : ";
                 cin>>L;
                 sum = (int(L)*60+((L-int(L))*100))-(int(A)*60+((A-int(A))*100));
                 cout<<
    }
         
    system("pause");
    return 0;
}
                    
                 
