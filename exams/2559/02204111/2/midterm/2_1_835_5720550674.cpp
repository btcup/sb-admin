//5720550674 Orawan Kongklab
#include<iostream>
using namespace std;
int main()
{
    char a;
    double w,x,y,z,zum;
    cout<< "Enter car model:";
    cin>> a;
    if(a!='A'&&a!='B'&&a!='C'&&a!='J')
    cout<< "Error";
    else
    {
        cout<< "Enter number of years (1-6):";
        cin>> w;
        if(w==1&&w==2&&w==3&&w==4&&w==5&&w==6)
        cout<< "Error";
        else
        {
            cout<< "Enter your salary:";
            cin>> x;
            if(a=='A')
            y=1385000-((138500/100)*25);
            else if(a=='B')
            y=511500-((511500/100)*25);
            else if(a=='C')
            y=738000-((738000/100)*25);
            else if(a=='J')
            y=694000-((694000/100)*25);
            cout<< "Financing amount:"<<y<<endl;
            }}
            if(a=='A')
            z=y*(2.09/100)*w;
            else if (a=='B')
            z=y*(1.79/100)*w;
            else if (a=='C')
            z=y*(1.99/100)*w;
            else if (a=='J')
            z=y*(1.99/100)*w;
            cout<< "Amount of interest:"<<z<<endl;
            zum=(y+z)/(w*12);
            cout<< "Monthly payment:"<<zum<<endl;
            if(zum>0.5*x)
            cout<< "The monthly payment is over than 50% of your salary!!";
            else
            {
                cout<< "Good decision,Enjoy your new car";
                }
                
                
                
                system ("pause");
                return 0;
                }
                
            
            
            
