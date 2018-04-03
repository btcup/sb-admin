//5720551859 Suttipong Sakulleerungroj
#include <iostream>
using namespace std;

int main ()
{
    cout<<"-------Car lease calculator-------"<<endl;
    char a;
    double x,y,z,c,v;
    cout<<"Enter car model :";
    cin>>a;
    cout<<"Enter number of years (1-6):";
    cin>>x;
    cout<<"Enter your salary :";
    cin>>y;
    cout<<"---------------------------------"<<endl;
    if(a!='B'&&a!='A'&&a!='C'&&a!='J')
    cout<<"error";
    else
    {
      if(a=='B'&&a!='A'&&a!='C'&&a!='J')
      z=511500-(511500*0.25);
      c=z*0.0179*x;
      v=(z+c)/(x*12);
      cout<<"Financing amount :"<<z<<endl;
      cout<<"Amount of interest:"<<c<<endl;
      cout<<"Monthly payment :"<<v<<endl;
      
      
}
      

system("pause");
return 0;
}

