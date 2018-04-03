//5920550031 Nattida Saengsud
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    
    
    int b,c,d;
    d=(c-b);
    float a;
            cout<<"Enter electricity cost per unit (bahts):";
        cin>>a;
    do{
        //cout<<"Enter electricity cost per unit (bahts):";
        //cin>>a;
        cout<<"enter last unit: ";
        cin>>b;
        if(b>0&&b<100000)
        cout<<"Enter current  unit:";
        cin>>c;
                if(b>c)cout<<"Invalid current unit!";
        else if(c>0&&c<100000)
        cout<<"Units used= "<<c-b<<endl;
        //if(b>c)cout<<"Invalid current unit!";
        cout<<"electricity charge (bahts)="<<(c-b)*a<<endl;
        }
        
    
    while(b>0);
    cout<<"--End of Calculation--"<<endl;
    
        system("pause");
    return 0;
    }
