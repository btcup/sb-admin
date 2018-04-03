//5420500604 Nathawut Petharakorn
#include<iostream>
using namespace std;
int main()
{
    char model,B,C,J;
    int years,salary,FinB,FinC,FinJ;
    double AmountB,AmountC,AmountJ,sumB,sumC,sumJ;
    const int down = 25;
    
    
    
    cout << "Enter car model : ";
    cin >> model;
    
    cout << "Enter numver of years (1-6) : ";
    cin >> years;
    
    cout << "Enter your salary : ";
    cin >> salary;
    
    
    
    
    FinB=511500-383625;
    FinC=738000-553500;
    FinJ=694000-520500;
    
    
    AmountB=FinB*down*1.79*5;
    AmountC=FinC*down*1.99*3;
    AmountJ=FinJ*down*1.99*4;
    
    
    sumB=(FinB+AmountB)/60;
    sumC=(FinC+AmountC)/36;
    sumJ=(FinJ+AmountJ)/48;
          
    if(model == B)
    {        
         cout << "Financeing amount : " << FinB;
         cout << "Amount of interest : " << AmountB;
         cout << "Monthly payment : " << sumB;
              if(sumB>0.5*salary)
              {
                                 cout << "The monthly payment is over than 50% of your salary!!" << endl;
              } 
              else
              {
                                 cout << "Good decision,Enjoy your new car" << endl;
              }
    }
    
    
    else if(model == C)
    {
         cout << "Financeing amount : " ;
         cin >>FinC;
         cout << "Amount of interest : " << AmountC;
         cout << "Monthly payment : " << sumC;
             if(sumC>0.5*salary)
              {
                                 cout << "The monthly payment is over than 50% of your salary!!" << endl;
              } 
              else
              {
                                 cout << "Good decision,Enjoy your new car" << endl;
              }
    }
    
    else if(model == J)
    {
         cout << "Financeing amount : " << FinJ;
         cout << "Amount of interest : " << AmountJ;
         cout << "Monthly payment : " << sumJ;
             if(sumJ>0.5*salary)
             {
                                cout << "The monthly payment is over than 50% of your salary!!" << endl;
             } 
             else
             {
                                cout << "Good decision,Enjoy your new car" << endl;
             }
    }
    if(sumB||sumC||sumJ>0.5*salary)
              {
                                 cout << "The monthly payment is over than 50% of your salary!!" << endl;
              } 
              else
              {
                                 cout << "Good decision,Enjoy your new car" << endl;
              }

      
    system("pause");
    return 0;
}
