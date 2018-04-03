//5620551466 peerapat plaikeaw
#include<iostream>
using namespace std;
int main()
{
    char x='c',y='m';
    float z,k;
    
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle):";
    cin>>x>>y;
    
    cout<<"Arrival time :";
    cin>>z;
    cout<<"Leave time :";
    cin>>k;
    if(k<z)
    {
           cout<<"You can't leave before arrival time";
           }
           else if(k-z<=2)
           {
                cout<<"0 bath";}
    
    
    
    
   
    
    
    
    
    
    system("pause");
    return 0;
}
