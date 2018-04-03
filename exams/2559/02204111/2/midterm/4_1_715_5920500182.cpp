#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char M,x,C;
    float a,b,n,z;
    cout<<"Type of vehicle ((c)Car or (M)Motorcycle):";
    cin>>x;
    
    if (x=M)
    {
             cout<<"Arrival time:";
             cin>>a;
             cout<<"Leave time:" ;
             cin>>b;
             n=b-a;
             cout<<n<<endl;
             if(n<=2)
             {
             cout<<"you have to pay 0 bath" ;}
             if(n>2&&n<=5)
            { b=n*30;
             cout<<"You have to pay"<<""<<b<<""<<"bath";}
              if(n>5&&n<=8)
             {z=(n-5)*50+b;
             cout<<"You have to pay"<<""<<z<<""<<"bath";}
             if(n>8){
             cout<<"you have to pay 500 bath";}
             }
             else if (x=C)
            { 
            cout<<"Arrival time:";
             cin>>a;
             cout<<"Leave time:" ;
             cin>>b;
             n=b-a;
             cout<<n<<endl;
             if(n<=3){
             cout<<"you have to pay 0 bath" ;}
             if(n>=4&&n<=7)
             {b=(n-3)*10;
             cout<<"You have to pay"<<""<<b<<""<<"bath";}
             if(n>7)
            {z=(n-7)*150+b;
             cout<<"You have to pay"<<""<<z<<""<<"bath";}}
             
    system("pause");
    return 0;
    }






























