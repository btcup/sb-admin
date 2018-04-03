#include<iostream> //5620550591 Piyapon Toplean
using namespace std;
int main()
{
    cout<<"------- Car lease calculator ---------"<<endl;
    double y,z,a,b,i,j;
    char x;
    cout<<"Enter car model: ";
    cin>>x;
    cout<<"Enter number of year (1-6):";
    cin>>y;
    if (y>=1&&y<=6)
    { cout<<"Enter percentage of down payment:"; 
      cin>>z;  
      cout<<"---------------------------------------"<<endl;
       if(x=='A')
          {a=1385000;
          b=2.09;}
       else if(x=='B')
            {a=511500;
             b=1.79;}
            else if(x=='C')
                 {a=738000;
                  b=1.99;}
                  else 
                       {a=694000;
                        b=1.99;}
       if(y<4)
        b=b-0.1;
    i=a-(a*float (z)/100); 
    j=i*(float (b)/100)*y;        
    cout<<"finnancing amout :"<<i<<endl;
    cout<<"Amount of interest :"<<j<<endl;
    cout<<"Monthly payment :"<<((i+j)/(y*12))<<endl;
    }
    else
    cout<<"Error!, number of years is not in range"<<endl;
    system ("pause");
    return 0;
}
