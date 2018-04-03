#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    char d;
    cout << "Are you member (Y or N): ";
    cin >> d;
    cout << "How old are you?: ";
    cin >> a;
    cout << "Normal price : ";
    cin >> b;
    if(d =='Y')
    {
         if(a < 2)
         {
                cout <<"You have to pay 0"<< endl;
         }       
         else if(a>=2&&a<=12)
         {
                c = 0.7*b;
                cout <<"You have to pay " << b-c << endl;     
         }
         else{
                c = 0.5*b;
                cout <<"You have to pay " << b-c <<endl;
         }
    }
    else if(d == 'N')
    {
         if(a < 2)
         {
                cout <<"You have to pay 0"<< endl;
         }       
         else if(a>=2&&a<=10)
         {
                c = 0.5*b;
                cout <<"You have to pay " << b-c << endl;     
         }
         else
         {
                cout <<"You have to pay " << b <<endl;
         }
         
    }   
 system("pause");
 return 0;   
    
    
}
