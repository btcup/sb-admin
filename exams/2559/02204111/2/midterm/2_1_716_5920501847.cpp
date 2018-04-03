#include <iostream> //5920501847 saowapa pattanapongsit
using namespace std;
int main()
{
    char m;
    int y,s,f,bath;
    double d,p,down=0.25,i;
    cout<<"-------Car lease calculator-------"<<endl;
    cout<<"Enter car model : ";
    cin>>m;
    cout<<"Enter number of year (1-6) : ";
    cin>>y;
    cout<<"Enter your salary : ";
    cin>>s; 
    cout<<"----------------------------------"<<endl;

    if (m=='A'||m=='a')
    {
           bath=1385000;
           d=2.09;
           }
    else if (m=='B'||m=='b')
    {
           bath=511500;
           d=1.79;
           }
    else if (m=='C'||m=='c')
    {
            bath=738000;
            d=1.99;
            }
    else if (m=='J'||m=='j')
    {
            bath=694000;
            d=1.99;
            }           
    f=bath-int(bath*down);
    cout<<"Financing amount : "<<f<<endl;
    i=int(f*y*d)/100.0;
    cout<<"Amount of interest : "<<i<<endl;
    p=(f+i)/(y*12);
    cout<<"Mountly payment : "<<p<<endl;
    if(p>s/2)
       cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
    else 
       cout<<"Good decision, Enjoy your new car"<<endl;
system ("pause");
return 0 ;    
}
