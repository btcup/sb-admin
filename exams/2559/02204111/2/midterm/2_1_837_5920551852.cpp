//5920551852 Yuttchai
#include <iostream>
using namespace std;
int main ()
{
    char car ;
    int Year , salary ;
    double Financing ,  payment , interest;
    cout << " Enter car model :";
    cin >> car;
    cout << "Enter number of year (1-6) :" ;
    cin >> Year;
    cout << "Enter your salary : ";
    cin >> salary;
    {
     if (car == 'A')
        Financing = (1385000 - salary);
        cout << "Finanacing amount :" << Financing << endl;
        interest =((Financing*2)*Year);
        cout << "Amount of interest :" << interest << endl;
        
        cout << "Monthly payment :" << payment << endl;
        cout << "Good decison , Enjoy your new car "
        
     else if
      {
          cout << "The monthy payment is over than 50 % of your salary"
      }
        
     {
     if (car == 'B')
        Financing = (511500 - salary);
        cout << "Finanacing amount :" << Financing << endl;
        interest =((Financing*1.79)*Year);
        cout << "Amount of interest :" << interest << endl;
        
        cout << "Monthly payment :" << payment << endl;
        cout << "Good decison , Enjoy your new car "
        }
     else if 
          { 
          cout << "The monthy payment is over than 50 % of your salary"
          }
        {
     if (car == 'C')
        Financing = (738000 - salary);
        cout << "Finanacing amount :" << Financing << endl;
        interest =((Financing*1.99)*Year);
        cout << "Amount of interest :" << interest << endl;
        
        cout << "Monthly payment :" << payment << endl;
        cout << "Good decison , Enjoy your new car "
        }
       else if 
            { 
          cout << "The monthy payment is over than 50 % of your salary"
           }
        {
     if (car == 'J')
        Financing = (1385000 - salary);
        cout << "Finanacing amount :" << Financing << endl;
        interest =((Financing*2)*Year);
        cout << "Amount of interest :" << interest << endl;
        
        cout << "Monthly payment :" << payment << endl;
        cout << "Good decison , Enjoy your new car "
}        
    else if
     { 
          cout << "The monthy payment is over than 50 % of your salary"
      }
    
    system ("pause");
    return 0
}
