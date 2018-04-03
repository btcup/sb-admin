#include <iostream>
using namespace std;
int main ()
{
char a,b,c ;
float h ,w ,d,numa=0,numb=0;
int x;


cout << "welcome to The Fantastic Tiles!!"<<endl;
cout<< "Please enter room size in meter(H*W*D):";
cin>>h>>w>>d ;
cout<< "Please select floor tile...(A/B/C):" ;
cin>>a;
cout<<"Please select wall tile...(A/B/C):" ;
cin>> b;
cout<<"------------------------------------"<<endl;

if (a=='a'||a=='A')
{
                   numa=55*120;
                   cout<<"Number of floor tile:"<<numa<<endl;
                   }
else if(b=='b'||b=='B')
{
                    numb=32*572;
                    cout<<"Number wall tile:"<<numb<<endl;
                       
 }
x=numa+numb ;         
cout<<"Total price:"<<x<<endl;

system ("pause");
return 0;
}
