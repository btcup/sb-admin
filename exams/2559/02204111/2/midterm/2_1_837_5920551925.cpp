#include <iostream>

using namespace std;

int main()
{
    char c;
    double y,f,m,i,o,p,s,a,u;
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car model: ";
    cin>>c;
    if(c=='a'||c=='A'||c=='b'||c=='B'||c=='c'||c=='C'||c=='j'||c=='J')
    {
    cout<<"Enter number of years (1-6): ";
    cin>>y;
    cout<<"Enter your salary: ";
    cin>>s;
    cout<<"----------------------------------------"<<endl;
    if(c=='a'||c=='A')
    {
                      i=((1385000.00*25.00)/100.00);
                      f=(1385000.00-i);
                      u=2.09;
                      o=(f*u);
                      a=(o*y);
                      m=(f+a)/(y*12.00);
    cout<<"Financing amount: "<<f<<endl;
    cout<<"Amount of interest: "<<a<<endl;
    cout<<"Monthly payment: "<<m<<endl;
    if(m>s*50/100)
    {
        cout<<"The mothly payment is over than 50% of your  salary!!";     
    }
    else
    {
        cout<<"Good decision, Enjoy your new car";
    }
    }
    else if(c=='b'||c=='B')
    {
                      i=((511500.00*25.00)/100.00);
                      f=(511500.00-i);
                      u=1.79;
                      o=(f*u);
                      a=(o*y);
                      m=(f+a)/(y*12.00);
    cout<<"Financing amount: "<<f<<endl;
    cout<<"Amount of interest: "<<a<<endl;
    cout<<"Monthly payment: "<<m<<endl;
    if(m>s*50/100)
    {
        cout<<"The mothly payment is over than 50% of your  salary!!";     
    }
    else
    {
        cout<<"Good decision, Enjoy your new car";
    }
    }
    else if(c=='c'||c=='C')
    {
                      i=((738000.00*25.00)/100.00);
                      f=(738000.00-i);
                      u=1.99;
                      o=(f*u);
                      float a=(o*y);
                      m=(f+a)/(y*12.00);
    cout<<"Financing amount: "<<f<<endl;
    cout<<"Amount of interest: "<<a<<endl;
    cout<<"Monthly payment: "<<m<<endl;
    if(m>s*50/100)
    {
        cout<<"The mothly payment is over than 50% of your  salary!!";     
    }
    else
    {
        cout<<"Good decision, Enjoy your new car";
    }
    }
    else if(c=='j'||c=='J')
    {
                      i=((694000.00*25.00)/100.00);
                      f=(694000.00-i);
                      u=1.99;
                      o=(f*u);
                      a=(o*y);
                      m=(f+a)/(y*12.00);
    cout<<"Financing amount: "<<f<<endl;
    cout<<"Amount of interest: "<<a<<endl;
    cout<<"Monthly payment: "<<m<<endl;
    if(m>s*50/100)
    {
        cout<<"The mothly payment is over than 50% of your  salary!!";     
    }
    else
    {
        cout<<"Good decision, Enjoy your new car";
    }
    }
    }
    else
    {
        cout<<"ERROR!!"<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
