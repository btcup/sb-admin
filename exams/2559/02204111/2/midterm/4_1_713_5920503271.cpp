#include <iostream>
#include <cmath>
using namespace std;
int main()
    {
          char t;
          float a,l,z,x;
          cout<<"Type of vehice ((C)Car or (M)Motorcycle) : ";
          cin>>t;
          if (t=='c'||t=='C')
          {
           cout<<"Arrival time : ";
           cin>>a;
           cout<<"Leave time : ";
           cin>>l;
           z=l-a;
           x=((l-int(l))*100)-((a-int(a))*100);
                 if (z<=2&&z>0){
                     cout<<int(z)<<" hours and "<<float(x)<<" minutes"<<endl;
                     cout<<"you have to pay 0 bath"<<endl;
                     }
                     else if (z>=3&&z<=5){
                     cout<<int(z)<<" hours and "<<float(x)<<" minutes"<<endl;
                     cout<<"you have to pay"<<(ceil(z)-2)*30<<"bath"<<endl;
                     }
                     else if (z>=6&&z<=8){
                     cout<<int(z)<<" hours and "<<float(x)<<" minutes"<<endl;
                     cout<<"you have to pay"<<(((ceil(z)-5)*50)+90)<<"bath"<<endl;
                     }
                     else if (z>8){
                     cout<<int(z)<<" hours and "<<float(x)<<" minutes"<<endl;
                     cout<<"you have to pay 500 bath"<<endl;
                     }
                     else if (z<=0){
                     cout<<"You can't leave before arrival time"<<endl;
                     }
           }
          else if (t=='m'||t=='M'){
               cout<<"Arrival time : ";
               cin>>a;
               cout<<"Leave time : ";
               cin>>l;
               z=l-a;
               x=((l-int(l))*100)-((a-int(a))*100);
                     if (z<=3&&z>0){
                     cout<<int(z)<<" hours and "<<float(x)<<" minutes"<<endl;
                     cout<<"you have to pay 0 bath"<<endl;
                     }
                     else if (z>=4&&z<7){
                     cout<<int(z)<<" hours and "<<float(x)<<" minutes"<<endl;
                     cout<<"you have to pay"<<(ceil(z)-3)*10<<"bath"<<endl;
                     }
                     else if (z>=7){
                     cout<<int(z)<<" hours and "<<float(x)<<" minutes"<<endl;
                     cout<<"you have to pay 150 bath"<<endl;
                     }
                     else if (z<=0){
                     cout<<"You can't leave before arrival time"<<endl;
                     }
          }
          system ("pause");
          return 0;
}
