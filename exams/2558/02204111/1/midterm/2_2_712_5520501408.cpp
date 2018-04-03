#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double h,w,d;
    float a,A;
    cout<<"Welcome to The Fantasic Tiles!!";
    
    cout<<"Please enter room size in meter (HxWxD):";
    cin>>h>>w>>d;
    
             
    cout<<"Please select floor tile ...(A/B/C):\n";
    cin>>a;
   
    cout<<"Please select wall tile...(A/B/C):\n";
    cin>>A; 
    
    cout<<"Number of floor tile : "<<(w*d)  <<"-->Price= "<<55*(w*d)  <<"Bath\n";
  
    cout<<"Number of wall tile : "<<(w*h)+(h*d)  <<"-->Price= "<<17*(w*h)+(h*d)  <<"Bath\n";
    cout<<"Total price :    =     Bath";   
        
    
    
    
    
    
    
    
    
system("pause");
return 0;
}
