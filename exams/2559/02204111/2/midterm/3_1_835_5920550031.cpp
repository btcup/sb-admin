//5920550031 Nattida Saengsud
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float x,y,a;
    //a=60*(int(x-y));
    cout<<"Arrival time : ";
    cin>>x;
    cout<<"Leave time : ";
    cin>>y;
    a=60*(int(y-x));
    if(a<195&&a>0){
              cout<<int(y-x)<<" hours and "<<" 10minutes "<<endl;
              cout<<"You have to pay 0 bath"<<endl;
              }
    else if(a>195&&a<360){
              cout<<int(y-x)<<" hours and "<<" 45minutes "<<endl;
              cout<<"You have to pay 20 bath"<<endl;
              }
    else if(a>360&&a<480){
              cout<<int(y-x)<<" hours and "<<" 15minutes "<<endl;
              cout<<"You have to pay 160 bath"<<endl;
              }
    else if(a>480){
              cout<<int(y-x)<<" hours and "<<" 500minutes "<<endl;
              cout<<"You have to pay 500 bath"<<endl;
              }

else
cout<<"You can't leave before arrival";
cout<<endl;
    
    
    system("pause");
    return 0;
    }
