//5620551075papassorn
#include <iostream>
using namespace std;
int main()
{
    float c,m;
    cin>>c;
    cout<<"Type of vehicle ((c)Car:"<<endl;
     if(c<=2)
    {
    cout<<"you have to pay 0 bath"<<endl;
    }
    if(c>=3&&c<=5)
    {         
    cout<<"you have to pay:"<<endl;
    }    
    if(c>=6&&c<=8)
    {
    cout<<"You have to pay:"<<endl;
    } 
    if(c>8)
    {
    cout<<"You have to pay 500 bath"<<endl;
    }                    
    cin>>m;
    cout<<"Type of vehicle ((m)Motorcycle):"<<endl;
    if(m==3)
    {
    cout<<"You have to pay o bath"<<endl;
    }
    
    
    
    system("pause");
    return 0;
}
