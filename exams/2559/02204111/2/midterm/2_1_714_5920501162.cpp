//5920501162 Phonnapha Mangnoi
#include<iostream>
using namespace std;
int main()
{
    int m,s,f,car,v,a,b,d=25,M,accord,city,jazz;
    float vat;
    char l;
    cout<<"-------Car lease calculator-------"<<endl;
    cout<<"Enter car model:";
    cin>>l;
    cout<<"Enter number of years (1-6):";
    cin>>m;
    cout<<"Enter your salary:";
    cin>>s;
    cout<<"---------------------------------"<<endl;
    if(l=='B'){
               b==511500;
               v==1.79;
          
          cout<<"Financing amount :"<<f<<endl;
          f=b-s;
          cout<<"Amount of interest:"<<a<<endl;
          a=f*v*m;
          cout<<"Montly payment:"<<M<<endl;
            M=(f+a)/m;
       
          }
    if(l=='A'){
              accord==1385000;
              v==2.09;
               cout<<"Financing amount :"<<f<<endl;
          f=accord-s;
          cout<<"Amount of interest:"<<a<<endl;
          a=f*v*m;
          cout<<"Montly payment:"<<M<<endl;
          M=(f+a)/m;
               }
               if(l=='C'){
              city==738000;
              v==1.99;
               cout<<"Financing amount :"<<f<<endl;
          f=city-s;
          cout<<"Amount of interest:"<<a<<endl;
          a=f*v*m;
          cout<<"Montly payment:"<<M<<endl;
            M=(f+a)/m;
          }
           if(l=='J'){
              jazz==694000;
              v==1.99;
               cout<<"Financing amount :"<<f<<endl;
          f=jazz-s;
          cout<<"Amount of interest:"<<a<<endl;
          a=f*v*m;
          cout<<"Montly payment:"<<M<<endl;
            M=(f+a)/m;
          }
          
               
    
    
    

    
    
    
    system ("pause");
    return 0;  
}
