//5920502819  Pongsakorn yodrak
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,e,c,d,n;
    d=0;
    n=0;
    do
    {    
        cout<<"input value:";
        cin>>a;
        if(a>=0 && a<10)
        {
              n=n+1;
              d=d+a;
              d=(d*10);
                continue;
        }
        else if(a>=10)
        {
             cout<<"Invalid Input!! Try Again"<<endl;
             continue;
        }
        else
        break;
    }
    while(a>=0);
    cout<<"Total is"<<d/10<<endl;;

system("pause");
return 0;
}

