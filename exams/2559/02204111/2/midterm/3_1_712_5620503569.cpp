#include<iostream> //5620503569 Patchaya Karunyathiti
#include<cmath>

using namespace std;
int main()
{
    float a;
    int l,c,u;
    cout<<"Enter electricity cost per unit(bahts) : ";
    cin>>a;
    cout<<endl;
    do
    {
    cout<<"Enter last unit : ";
    cin>>l;
    cout<<"Enter curent unit : ";
    cin>>c;
    u=c-l;
    if(l>c)
    cout<<"Invalid current unit!"<<endl;
    else if(c<0)
    cout<<"Invalid current unit!";
    cout<<"Unit used = "<<u<<endl;
    cout<<"Electricity charge (baths) = "<<u*a<<endl;
    cout<<endl;
    
    
    }
    
    while(l='-1');
    cout << "-- End of Calculation --"<<endl;
    system("pause");
    return 0;
}
