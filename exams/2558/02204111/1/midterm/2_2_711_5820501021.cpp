#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float H,W,D,n1,n2,pay1,pay2;
    char pass1,pass2;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    do
    {
       cout<<"Please enter room size in meter(H x W x D): ";
       cin>>H>>W>>D;
       cout<<"Please select floor tile... (A/B/C): ";
       cin>>pass1;
       cout<<"Please select wall tile... (A/B/C): ";
       cin>>pass2;
       cout<<"-------------------------"<<endl;
       if(pass1=='A'||pass1=='a')
       { n1=2*(4*(ceil(H)*ceil(W))+2*(ceil(H)*ceil(D)));
         cout<<"Number of floor tile : "<<n1<<"-->Price = ";
         pay1=n1*55;
         cout<<pay1<<" Baht"<<endl; 
       }  
       if(pass1=='B'||pass1=='b')
       {  n1=2*(4*(ceil(H)*ceil(W))+2*(ceil(H)*ceil(D)));
         cout<<"Number of floor tile :"<<n1<<"-->Price = ";
         pay1=n1*80;
         cout<<pay1<<" Baht"<<endl; 
       }  
       if(pass1=='C'||pass1=='c')
       {  n1=(2*(ceil(H)*ceil(W))+2*(ceil(H)*ceil(D))+2*(ceil(W)*ceil(D)));
         cout<<"Number of floor tile :"<<n1<<"-->Price = ";
         pay1=n1*90;
         cout<<pay1<<" Baht"<<endl; 
       }                        
       if(pass2=='A'||pass2=='a')
       { n1=(2*(ceil(H)*ceil(W))+2*(ceil(H)*ceil(D))+2*(ceil(W)*ceil(D)));
         cout<<"Number of wall tile :"<<n2<<"-->Price = ";
         pay2=n2*17;
         cout<<pay2<<" Baht"<<endl; 
       }  
       if(pass2=='B'||pass2=='b')
       { n2=(2*(ceil(H)*ceil(W))+2*(ceil(H)*ceil(D))+2*(ceil(W)*ceil(D))+506);
         cout<<"Number of wall tile :"<<n2<<"-->Price = ";
         pay2=n2*32;
         cout<<pay2<<" Baht"<<endl; 
       }  
       if(pass2=='C'||pass2=='c')
       {  n2=(2*(ceil(H)*ceil(W))+2*(ceil(H)*ceil(D))+2*(ceil(W)*ceil(D)));
         cout<<"Number of wall tile :"<<n2<<"-->Price = ";
         pay2=n2*50;
         cout<<pay2<<" Baht"<<endl;
       }  
       cout<<"Total price: "<<pay2<<" + "<<pay1<<" = "<<(pay1+pay2)<<" Baht"<<endl;
       cout<<"---------------------------"<<endl;
    }while(n1!=0);
    system("pause");
    return 0;
}    
