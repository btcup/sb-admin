#include <iostream> // 5620551750 Pongsatorn Sangsawang
using namespace std;
int main ()
{
    char Y;
    double a,b,c,d,e,f,g,h,i,j,x,y,z,;
    a=1385000; e=2.09;
    b=511500; f=1.79;
    c=738000; g=1.99;
    d=694000; h=1.99;
    cout<<"------- Car lease calculator --------"<<endl;
    cout<<"Enter car model :";
    cin>>Y;
    cout<<"Enter number of years (1-6):";
    cin>>i;
    cout<<"Enter your salary:";
    cin>>j;
    cout<<"-------------------------------------"<<endl;
    if (Y=='A')
    {    
            x = a-(a*25/100);
            cout<<"Financing amount:"<<x<<endl;
            y = x*(e/100)*i;
            cout<<"Amount of interest:"<<y<<endl;
            z = (x+y)/(i*12);
            cout<<"Monthly payment :"<<z<<endl;
            if (j>z)
            cout<<"good decision, Enjoy your new car"<<endl;
            else
            cout<<"Financing amount:"<<endl;
    }
    else if (Y=='B')
    {    
            x = b-(b*25/100);
            cout<<"Financing amount:"<<x<<endl;
            y = x*(f/100)*i;
            cout<<"Amount of interest:"<<y<<endl;
            z = (x+y)/(i*12);
            cout<<"Monthly payment :"<<z<<endl;
            if (j>z)
            cout<<"good decision, Enjoy your new car"<<endl;
            else
            cout<<"Financing amount:"<<endl;
    }
    else if (Y=='C')
    {    
            x = c-(c*25/100);
            cout<<"Financing amount:"<<x<<endl;
            y = x*(g/100)*i;
            cout<<"Amount of interest:"<<y<<endl;
            z = (x+y)/(i*12);
            cout<<"Monthly payment :"<<z<<endl;
            if (j>z)
            cout<<"good decision, Enjoy your new car"<<endl;
            else
            cout<<"Financing amount:"<<endl;
    }
     else if (Y=='J')
    {    
            x = d-(d*25/100);
            cout<<"Financing amount:"<<x<<endl;
            y = x*(h/100)*i;
            cout<<"Amount of interest:"<<y<<endl;
            z = (x+y)/(i*12);
            cout<<"Monthly payment :"<<z<<endl;
            if (j>z)
            cout<<"good decision, Enjoy your new car"<<endl;
            else
            cout<<"Financing amount:"<<endl;
    }
    system("pause");
    return 0;
}
    
    
    
