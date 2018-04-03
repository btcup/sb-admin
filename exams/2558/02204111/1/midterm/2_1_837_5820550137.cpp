#include<iostream>
using namespace std;
int main()
{
    char menu,s,o,b;
    int x,z,i=1,n,sum=0,f,p;
    cout << "Welcome ot A Cup-with-love Coffee!!"<<endl;
    do
    {
        
        cout << "Enter your menu (E/A/L/C/M) : ";
        cin >> menu ;
        cout << "Enter size (S/T/G/V): ";
        cin >> s ;
        cout << "How many cups? :";
        cin >> x ;
        cout << "Do you want other menu? (Y/N) : ";
        cin >> o ;
        if(o=='Y'||o=='y')
        {
        i++;
        continue;
        }
        
                       
             
    }while(o=='Y'||o=='y');
    
    
    for(n=0 ; n<i ;n++ )
    {
        
         
         if(s=='S'||s=='s')
              {
                   if(menu=='E'||menu=='e')
                   z = 40;
                   else if (menu=='A'||menu=='a')
                   z = 40;
                   else if (menu=='C'||menu=='c')
                   z = 50;
                   else if (menu=='L'||menu=='l')
                   z = 50;
                   else if (menu=='M'||menu=='m')
                   z = 60;
              }
         else if(s=='T'||s=='t')
              {
                   if(menu=='E'||menu=='e')
                   z = 50;
                   else if (menu=='A'||menu=='a')
                   z = 50;
                   else if (menu=='C'||menu=='c')
                   z = 60;
                   else if (menu=='L'||menu=='l')
                   z = 60;
                   else if (menu=='M'||menu=='m')
                   z = 70;
              }
         else if(s=='G'||s=='g')
              {
                   if(menu=='E'||menu=='e')
                   z = 60;
                   else if (menu=='A'||menu=='a')
                   z = 60;
                   else if (menu=='C'||menu=='c')
                   z = 70;
                   else if (menu=='L'||menu=='l')
                   z = 70;
                   else if (menu=='M'||menu=='m')
                   z = 80;
              }
         else if(s=='V'||s=='v')
              {
                   if(menu=='E'||menu=='e')
                   z = 70;
                   else if (menu=='A'||menu=='a')
                   z = 70;
                   else if (menu=='C'||menu=='c')
                   z = 80;
                   else if (menu=='L'||menu=='l')
                   z = 80;
                   else if (menu=='M'||menu=='m')
                   z = 90;
              }
              
         
         sum = sum+z;
         
    }
    
    do
    {
         cout << "Are you a members? (Y/N) : ";
         cin >> b;
         cout << "Total " << sum << " Baht"<<endl;
         if(b=='y'||b=='Y')
         {
               f = sum*10/100 ;
               sum = sum-f;
               cout << "Discount "<< f << " Baht"<<endl;
               
         }
         else
         {
             cout << "Discount 0 Baht"<<endl;
         }
         cout << "You pay " << sum << " Baht"<<endl;
         cout << "Thank you."<<endl;
    }while(0);                  
    
    system("pause");
    return 0;
} 
    
