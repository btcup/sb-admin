//5620551636 Kritsana Yeamkesorn
#include <iostream>
using namespace std;
int main(){
    char model,A,B,C,J;
    float salary,year,a,b,c,d;
    cout<<"Enter car model :";
    cin>>model;
    cout<<"Enter number of years (1-6):";
    cin>>year;
    cout<<"Enter your salary:";
    cin>>salary;
    
    cout<<endl;
    if(model=='A'){
                   a=(1385000-(1385000*0.25));
    cout<<"Financing amount:"<<a<<endl;
              b=((year)*(2.09)*(a)*0.01);
    cout<<"Amount of interest:"<<b<<endl;
    c=(((a)+(b))/(year*12));
    cout<<"Monthly payment:"<<c<<endl;
    if(c>(0.5)*salary){
                       cout<<"The monthly payment is over than 50% of your salary"<<endl;
         
         }else{
               cout<<"Good decision,Enjoy your new car"<<endl;
               }

    
    
    
}else if(model=='B'){
               a=(511500-(511500*0.25));
      cout<<"Financing amount:"<<a<<endl;
                b=((year)*(1.79)*(a)*0.01);
      cout<<"Amount of interest:"<<b<<endl;
       c=(((a)+(b))/(year*12));
    cout<<"Monthly payment:"<<c<<endl;
    if(c>(0.5)*salary){
                       cout<<"The monthly payment is over than 50% of your salary"<<endl;
         
         }else{
               cout<<"Good decision,Enjoy your new car"<<endl;
               }
    
    
    
      }else if(model=='C'){
                a=(738000-(738000*0.25));
            cout<<"Financing amount:"<<a<<endl;
                   b=((year)*(1.99)*(a)*0.01);
            cout<<"Amount of interest:"<<b<<endl;
            c=(((a)+(b))/(year*12));
    cout<<"Monthly payment:"<<c<<endl;
    if(c>(0.5)*salary){
                       cout<<"The monthly payment is over than 50% of your salary"<<endl;
         
         }else{
               cout<<"Good decision,Enjoy your new car"<<endl;
               }
            
            
            
            }else if(model=='J'){
                  a=(694000-(694000*0.25));
                  cout<<"Financing amount:"<<a<<endl;
                  b=((year)*(1.99)*(a)*0.01);
                  cout<<"Amount of interest:"<<b<<endl;
                  c=(((a)+(b))/(year*12));
    cout<<"Monthly payment:"<<c<<endl;
                  if(c>(0.5)*salary){
                       cout<<"The monthly payment is over than 50% of your salary"<<endl;
         
         }else{
               cout<<"Good decision,Enjoy your new car"<<endl;
               }
                  
                  }else {
                        cout<<"Error!"<<endl;
                        }
                        
                      
                  
                  
                  
      
    
    
    
    
    
    
    
    
    system ("pause");
    return 0;
    }

