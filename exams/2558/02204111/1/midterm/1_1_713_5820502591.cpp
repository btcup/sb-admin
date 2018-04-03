#include <iostream>
using namespace std;
int main ()
{float usa, vol,total, ele, ser,ft,vat;   
ft=46.38;
total=(usa*vol)+ser+(ft*usa)+vat;

cout<<"Please in put usage :";
cin>>usa;
cout<<"Please input voltage :";
cin>>vol;

if(usa>0||usa<=150)                                                                                                                                                                                                                      
cout<<"Electricity Cost 0-150   :"<<270.705<<endl;
if(usa>150||usa<=400)
cout<<"Electricity Cost 151-400 :"<<694.525<<endl;                                                                                                                                                                                                                                                                                                   
if(usa>400)
cout<<"Electricity Cost 401 ->  :"<<148.9<<endl;    

if(vol>0||vol<=21)    
{cout<<"Service:"<<40.90<<endl;  }   
else if(vol>21||vol<=33)    
{cout<<"Service:"<<228.17<<endl; }  



  
    system("pause");
    return 0;
    }
