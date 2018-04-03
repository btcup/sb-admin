//5920501791 Amarin Sonti
#include <iostream>
using namespace std;
int main ()
{
    char model,A,B,C,J;
    float salary,car,finance,down,yodjud,yodruam,money;
    int year,month;
    
    cout<<"------- Car lease calculator -------"<<endl;
    
    cout<<"Enter car model : ";
    cin>>model;
    
    
    
    if(model=='A'||model=='B'||model=='C'||model=='J')
    {
        {if(model=='A'){
          cout<<"Enter number of year(1-6) : ";
          cin>>year;
          cout<<"Enter your salary : ";
          cin>>salary;
          
          yodjud=1,385,000-(1,385,000/0.25);
          yodruam=yodjud*2.09*year;}
          
    
        else if(model=='B'){
          cout<<"Enter number of year(1-6) : ";
          cin>>year;
          cout<<"Enter your salary : ";
          cin>>salary;
          
          yodjud=511,500-(511,500/0.25);
          yodruam=yodjud*1.79*year;}
          
          
        else if(model=='C'){
          cout<<"Enter number of year(1-6) : ";
          cin>>year;
          cout<<"Enter your salary : ";
          cin>>salary;
    
          yodjud=738,000-(738,000/0.25);
          yodruam=yodjud*1.99*year;}      
          
     month=12*year;
     money=(yodjud+yodruam)/month;}
     
     }
     
     cout<<"------------------------------------"<<endl;    
     cout<<"Financing amount : "<<yodjud<<endl;    
     cout<<"Amount of interest : "<<yodruam<<endl;
     cout<<"Monthly payment : "<<money<<endl;
          
     if(money>=(salary/2))
     cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
     else if(money<=(salary/2))
     cout<<"Good decision, Enjoy your new car"<<endl;
        
       
                        
   
                  
                
                   
                   
    
    

    system ("pause");
    return 0;
}
