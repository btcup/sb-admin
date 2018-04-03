#include <iostream>
using namespace std;
int main ()
{
    char model;
    float year,salary,x,y,z;
    
    cout << "------- Car lease calculator -------"<<endl;
    cout << "Enter car model : ";
    cin >> model;
    cout << "Enter number of years (1-6) : ";
    cin >> year;
    cout << "Enter your salary : ";
    cin >> salary;
    cout << "------------------------------------"<<endl;
    
         if (model =='A')
            {
            cout << "Financing amount : "<<1385000-((1385000*25)/100<<endl;
            cout << "Amount of interest : "<<34625*2.09*year/100;<<endl;
            }
            
                 else if (year>0&&year<=6);
                 {
                     
            cout << "Monthly payment : "<<(1385000-((1385000*25)/100+34625*2.09*year/100)/(12*year)<<endl;
                 }
         cout << "Good decision, Enjoy your new car"<<endl;   
        
        
         if (model =='B')
            {
       cout << "Financing amount : "<<511500-((511500*25)/100)<<endl;
            cout << "Amount of interest : "<<383625*1.79*year/100<<endl;
                 cout << "mounthly payment : " << (511500-((511500*25)/100)+383625*1.79*year/100)/(12*year)<<endl;
            }
         
        
         if (model =='C')
            {
       cout << "Financing amount : "<<738000-((738000*25)/100)<<endl;
            cout << "Amount of interest : "<<383625*1.79*year/100<<endl;
                 cout << "mounthly payment : " << 
            }
         
       
         if (model =='J')
            {
       cout << "Financing amount : "<<694000-((694000*25)/100)<<endl;
            cout << "Amount of interest : "<<383625*1.79*year/100<<endl;
                 cout << "mounthly payment : " << 
            }
         
system ("pause");
return 0;
}
