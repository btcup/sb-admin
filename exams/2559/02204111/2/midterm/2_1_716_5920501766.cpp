//5920501766 Sucheera   Thongsuk
#include <iostream>
using namespace std;
int main ()
{
    char M;
    int y,s;
    float f,a,m;
    const float d=25/100;
    cout<<"-------Car lease calculator-------"<<endl;
    cout<<"Enter car model :";
    cin>>M;
    cout<<"Enter number of year (1-6) :";
    cin>>y;
    cout<<"Enter your salary :";
    cin>>s;
    cout<<"----------------------------------"<<endl;
    if (M=='A')
       {
       f=1385000-(1385000*25/100);
       a=f*2.09*y;
       m=(f+a)/(y*12);
       cout<<"Financing amount :"<<f<<endl;
       cout<<"Amount of interest :"<<a<<endl;
       cout<<"Monthly payment :"<<m<<endl;
       if (m<=s*50/100)
          cout<<"Good decision, Enjoy your new car"<<endl;
       else if (m>s*50/100)
            cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
       }
    else if (M=='B')
       {             
       f=(511500-(511500*25/100));
       a=f*1.79*y;
       m=(f+a)/(y*12);
       cout<<"Financing amount :"<<f<<endl;
       cout<<"Amount of interest :"<<a<<endl;
       cout<<"Monthly payment :"<<m<<endl;
       if (m<=s*50/100)
          cout<<"Good decision, Enjoy your new car"<<endl;
       else if (m>s*50/100)
            cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
       }
    else if (M=='C')
       {  
       f=738000-(738000*25/100);
       a=f*1.99*y;
       m=(f+a)/(y*12);
       cout<<"Financing amount :"<<f<<endl;
       cout<<"Amount of interest :"<<a<<endl;
       cout<<"Monthly payment :"<<m<<endl;
       if (m<=s*50/100)
          cout<<"Good decision, Enjoy your new car"<<endl;
       else if (m>s*50/100)
            cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
       }
    else if (M=='J')
       {  
       f=694000-(694000*25/100);
       a=f*1.99*y;
       m=(f+a)/(y*12);
       cout<<"Financing amount :"<<f<<endl;
       cout<<"Amount of interest :"<<a<<endl;
       cout<<"Monthly payment :"<<m<<endl;
       if (m<=s*50/100)
          cout<<"Good decision, Enjoy your new car"<<endl;
       else if (m>s*50/100)
            cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
       }
    system ("pause");
    return 0;
}
       
    
    
