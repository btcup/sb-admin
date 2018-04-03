#include <iostream>
using namespace std;
int main ()
{
    char M,A,B,C,J;
    int d,x,y,f;   
    float i;
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car model :";
    cin>>M;
    cout<<"Enter number of years (1-6) :";
    cin>>y;
    cout<<"Enter percentage of down payment :";
    cin>>d;
    cout<<"----------------------------------------"<<endl;
    if (y>=4&&y<6)
    {
            if (M==A) {          
            A=1385000;
            cout<<"Financing amount :"<<1385000-(1385000*d/100)<<endl;
            cout<<"Amount of interest :"<<(1385000-(1385000*d/100))*((2.09/100)*y)<<endl;      
            cout<<"Monthly payment :"<<((1385000-(1385000*d/100))+((1385000-(1385000*d/100))*((2.09/100)*y)))/(y*12);
            }
            else if (M==B){
            B=511500;
            cout<<"Financing amount :"<<511500-(511500*d/100)<<endl;
            cout<<"Amount of interest :"<<(511500-(511500*d/100))*((1.79/100)*y)<<endl; 
            cout<<"Monthly payment :"<<((511500-(511500*d/100))+((511500-(511500*d/100))*((1.79/100)*y)))/(y*12);
            }
            else if (M==C){
            C=738000;
            cout<<"Financing amount :"<<738000-(738000*d/100)<<endl;
            cout<<"Amount of interest :"<<(738000-(738000*d/100))*((1.99/100)*y)<<endl; 
            cout<<"Monthly payment :"<<((738000-(738000*d/100))+((738000-(738000*d/100))*((1.99/100)*y)))/(y*12);
            }
            else{
            J=694000;
            cout<<"Financing amount :"<<694000-(694000*d/100)<<endl;
            cout<<"Amount of interest :"<<(694000-(694000*d/100))*((1.99/100)*y)<<endl;
            cout<<"Monthly payment :"<<((694000-(694000*d/100))+((694000-(694000*d/100))*((1.99/100)*y)))/(y*12);
            }
    }
    else if (y<4)
    {
         if (M==A){           
            A=1385000;
            cout<<"Financing amount :"<<1385000-(1385000*d/100)<<endl;
            cout<<"Amount of interest :"<<(1385000-(1385000*d/100))*((2.09-0.1)/100)*y<<endl;     
            cout<<"Monthly payment :"<<((1385000-(1385000*d/100))+((1385000-(1385000*d/100))*((2.09-0.1)/100)*y))/(y*12);
            }
            else if (M==B){
            B=511500;
            cout<<"Financing amount :"<<511500-(511500*d/100)<<endl;
            cout<<"Amount of interest :"<<(511500-(511500*d/100))*((1.79-0.1)/100)*y<<endl;
            cout<<"Monthly payment :"<<((511500-(511500*d/100))+((511500-(511500*d/100))*((1.79-0.1)/100)*y))/(y*12);
            }
            else if (M==C){
            C=738000;
            cout<<"Financing amount :"<<738000-(738000*d/100)<<endl;
            cout<<"Amount of interest :"<<(738000-(738000*d/100))*((1.99-0.1)/100)*y<<endl; 
            cout<<"Monthly payment :"<<((738000-(738000*d/100))+((738000-(738000*d/100))*((1.99-0.1)/100)*y))/(y*12);
            }
            else{
            J=694000;
            cout<<"Financing amount :"<<694000-(694000*d/100)<<endl;
            cout<<"Amount of interest :"<<(694000-(694000*d/100))*((1.99-0.1)/100)*y<<endl;  
            cout<<"Monthly payment :"<<((694000-(694000*d/100))+((694000-(694000*d/100))*((1.99-0.1)/100)*y))/(y*12);
            }
}   
    else  
    {
    cout<<"Error!,number of years is not in range";
}
    system ("pause");
    return 0;
}
    
    
    
