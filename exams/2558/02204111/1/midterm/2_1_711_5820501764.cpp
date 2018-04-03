#include <iostream>
using namespace std;
int main ()
{
    char menu,size,other,member;
    int n,price,rate,total=0;
    float discount=0,pay=0; 
    cout<<"Welcome to A Cup-with-love Coffee!!\n";
    do
    {
        cout<<"Enter your menu (E/A/L/C/M) :";
        cin>>menu;
        cout<<"Enter size (S/T/G/V) :";
        cin>>size;
        cout<<"How many cups? : ";
        cin>>n;
        if (menu=='E'||menu=='e')
        {
              if (size=='s'||size=='S')
                    rate=n*40;  
              if (size=='t'||size=='T')
                    rate=n*50;
              if (size=='g'||size=='G')
                    rate=n*60;
              if (size=='v'||size=='V')
                    rate=n*70;            
        }
        else if (menu=='a'||menu=='A')
        {
              if (size=='s'||size=='S')
                    rate=n*40;  
              if (size=='t'||size=='T')
                    rate=n*50;
              if (size=='g'||size=='G')
                    rate=n*60;
              if (size=='v'||size=='V')
                    rate=n*70;            
        }                           
        else if (menu=='c'||menu=='C')
        {
              if (size=='s'||size=='S')
                    rate=n*50;  
              if (size=='t'||size=='T')
                    rate=n*60;
              if (size=='g'||size=='G')
                    rate=n*70;
              if (size=='v'||size=='V')
                    rate=n*80;            
        }      
        else if (menu=='l'||menu=='L')
        {
              if (size=='s'||size=='S')
                    rate=n*50;  
              if (size=='t'||size=='T')
                    rate=n*60;
              if (size=='g'||size=='G')
                    rate=n*70;
              if (size=='v'||size=='V')
                    rate=n*80;            
        }      
        else if (menu=='m'||menu=='M')
        {
              if (size=='s'||size=='S')
                    rate=n*60;  
              if (size=='t'||size=='T')
                    rate=n*70;
              if (size=='g'||size=='G')
                    rate=n*80;
              if (size=='v'||size=='V')
                    rate=n*90;            
        } 
        total=total+rate;  
        cout<<"Do you want other menu? (Y/N) : ";
        cin>>other;
        if (other=='n'||other=='N')  break;
        
        } while (other=='Y'||other=='y');
        
        cout<<"Are you a member? (Y/N) : ";
        cin>>member;
        if (member=='y'||member=='Y') discount=total/10;
        pay=total-discount;
        cout<<"Total "<<total<<" Baht\n";
        cout<<"Discount "<<discount<<" Baht\n";
        cout<<"You pay "<<pay<<" Baht\n";
        cout<<"Thank you.\n";
        
    system ("pause");
    return 0;
}
        
