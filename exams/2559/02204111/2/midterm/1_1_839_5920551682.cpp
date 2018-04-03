//5920551682 metas chinhiran
#include<iostream>
using namespace std;
int main(){
    char a;
    float i,d,c,e,g,h,b,j;
    cout<<"----- Car lease calculator -----\nEnter car model : ";
    cin>>a;
    if(a=='A'||a=='B'||a=='C'||a=='J'){
                                       cout<<"Enter number of yrears (1-6): ";
                                       cin>>b; 
                                       if(b>6)
                                       cout<<"Error!, number of years is not in range\n";
                                       else {
                                       cout<<"Enter percentage of down payment : ";
                                       cin>>c;
                                       cout<<"-------------------------------\n";
    if(a=='A'){
                                       d=1385000;
                                       i=2.09;}
    else if(a=='B'){
                                       d=511500;
                                       i=1.79;}
                                    
    else if(a=='C'){
                                       d=738000;
                                       i=1.99;}
                                       
     else {                            d=694000;
                                       i=1.99;
                                            }
    e=d-(d*(c/100));
    if(b<4)
    i=i-0.1;
    g=(e*i*b)/100;
    h=e+g;
    j=h/(b*12);
  cout<<"Financing amount : "<<e<<"\n";
  cout<<"Amount of interest : "<<g<<"\n" ;  
  cout<<"Monthly payment : "<<j<<"\n";        
    } 
    }
   else
    cout<<"Error\n";
    
    
    
    system("pause");
    return 0;
    }
