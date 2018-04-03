//5920503602
#include <iostream>
using namespace std;
int main ()
{
    int y,p,f,x;
    float a,m;
    char t;
    cout<<"Enter car model :";
    cin>>t;
    cout<<"Enter number of years (1-6) :";
    cin>>y;
    if(y>=1&&y<=6) 
    {
    cout<<"Enter percentage of down payment :";
    cin>>p;
    {
           if(y>=4&&y<=6)
           {
           x=
                  if(t=='A')
                  {
                   f=138500-x;
                   a=f*2.09*y;
                   m=f/y;           
                  cout<<"Financing amount :"<<f<<endl;
                  cout<<"Amount of interest:"<<a<<endl;
                  cout<<"Montly payment:"<<m<<endl;
                  }
                  else if(t=='B')
                  {
                  f=511500-x;
                  a=f*1.79*y;
                  m=f/y;
                  cout<<"Financing amount :"<<f<<endl;
                  cout<<"Amount of interest:"<<a<<endl;
                  cout<<"Montly payment:"<<m<<endl;
                  }
                  else if(t=='C')
                  {
                  f=738000-x;
                  a=f*1.99*y;
                  m=f/y;
                  cout<<"Financing amount :"<<f<<endl;
                  cout<<"Amount of interest:"<<a<<endl;
                  cout<<"Montly payment:"<<m<<endl;
                  }
                  else if(t=='J')
                  {
                  f=694000-x;
                  a=f*1.99*y;
                  m=f/y;
                  cout<<"Financing amount :"<<f<<endl;
                  cout<<"Amount of interest:"<<a<<endl;
                  cout<<"Montly payment:"<<m<<endl;
                  }
           }
           }
           
    }
    cout<<"Error!,number of years is not in range";
    
    
    system ("pause");
    return 0;
}
