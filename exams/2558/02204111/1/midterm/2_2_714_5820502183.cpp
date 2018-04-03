#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float H,W,D,a;
  int sumF,sumA,p;
  char F,A;
  cout<<"Welcom to The Fantastic Tiles!!"<<endl;
  cout<<"Please Enter room size in meter(H x W x D):";
  cin>>H>>W>>D;
  cout<<"Please select floor tile...(A/B/C):";
  cin>>F;
  cout<<"Please select wall tile...(A/B/C):";
  cin>>A;
  cout<<"------------------------------"<<endl;
    sumF = 2*(ceil(H)*ceil(W))+2*(ceil(H)*ceil(D));
    sumA = ceil(W)*ceil(D);
    
    
    if(F=='a'||F=='A')
    {
        p=55;
        a=0.3*0.3;
    }
    else if(F=='b'||F=='B')
    {
        p=80;
        a=0.45*0.45;
    }
    else if(F=='c'||F=='C')
    {
        p=90;
        a=0.6*0.6
    }
    
    if(A=='a'||A=='A')
    {
        p=17;
        a=0.2*0.2;
    }
    else if(A=='b'||A=='B')
    {
        p=32;
        a=0.2*0.3;
    }
    else if(A=='c'||A=='C')
    {
        p=50;
        a=0.3*0.3;
    }
    
  
  cout<<"Number of floor tiles:"<<sumF/a<<"-->Price = "<< p*(sumF/a) <<"Bath"<<endl;
  cout<<"Number of wall tiles:"<< sumA <<"-->Price = "<< p*sumA<< "Bath"<<endl;
  cout<<"Total price:"<< <<"="<<   <<"Bath"<<endl;
  
 
 system("pause");
 return 0;   
}
