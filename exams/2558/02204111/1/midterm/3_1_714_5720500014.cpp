#include <iostream>
using namespace std;
int main()
{
    char a;
    int y,n,m,x;
    a=n;a=y;
    cout<<"Are you member (Y or N):";
    cin>>a;
    cout<<"How old are you?:";
    cin>>m;
    cout<<"Normal price :";
    cin>>x;
{if(a==y);
else if(m<2)
cout<<"You have to pay"<<x-x<<endl;

else if(m>2&&m<12)
cout<<"You have to pay"<<x-((x*70)/100)<<endl;

else 
cout<<"You have to pay"<<x-((x*50)/100)<<endl;}
           
           {if(a==n);
else if(m<2)
cout<<"You have to pay"<<x-x<<endl;
else if(m>2&&m<12)
cout<<"You have to pay"<<x-((x*50)/100)<<endl;
else 
cout<<"You have to pay"<<x-((x*0)/100)<<endl;
}


system("pause");
return (0);
}
