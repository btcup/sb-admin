//5920550309 Sojirat Chanrukngarm
#include<iostream>
using namespace std;
int main()
{int a,b,c,d,f;
 char t;
    cout<<"----------Car lease calculator-------------"<<endl;
    cout<<"Enter car model :";
    cin>>t;
    cout<<"Enter number of years(1-6) : ";
    cin>>a;
    cout<<"Enter percentage of down payment :";
    cin>>b;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Financing amoung:";
    {if(t=='A'||t=='a')
    c=1385000-(1385000*b/100); 
    else if(t=='B'||t=='b')
    c=511500-(511500*b/100); 
    else if(t=='C'||t=='c')
    c=738000-(738000*b/100); 
    else if(t=='J'||t=='j')
    c=694000-(694000*b/100); 
	}cout<<c<<endl;
    cout<<"Amount of interest:";
   if(a>1&&a<=6)
   {{{if(a>4&&a<=6)
   if(t=='A'||t=='a')
    d=c*2.09*a;
    else if(t=='B'||t=='b')
    d=c*1.79*a; 
    else if(t=='C'||t=='c')
    d=c*1.99*a;
    else if(t=='J'||t=='j')
    d=c*1.99*a; }
	cout<<d<<endl;}
	if(a<=4)
	f=d-(d*0.1/100);
	cout<<f;}
  else
   cout<<"Error!,number of years is not in range"<<endl;
    system("pause");
    return 0;}
