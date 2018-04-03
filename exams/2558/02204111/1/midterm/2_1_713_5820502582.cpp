#include<iostream>
using namespace std;
int main()
{
    char me,si,ot,ber,s,S,t,T,g,G,v,V;
    int cu,how,total;
    cout << "Welcome to A Cup-with-love Coffee!!" << endl;
    do
    {
    cout << "Enter your menu (E/A/L/C/M): ";
    cin >> me;
    cout << "Enter size (S/T/G/V): ";
    cin >> si;
    cout << "How many cups? : ";
    cin >> cu;
    cout << "Do you want other menu? (Y/N): " ;
    cin >> ot;
    if(ot=='Y' || ot=='y')
    {
               continue;
    }
    cout << "Are you a member? (Y/N): ";
    cin >> ber;
    {
        break;
        }
    if(me=='E' || me=='e' || me=='A' || me=='a')
    {
        if(si=='S'||si=='s')
        {
        how=40;
        
        }
        if(s=='T'||si=='t')
        {
        how=50;
        
        }
        if(s=='G'||si=='g')
        {
        how=60;
       
        }
        if(s=='V'||si=='v')
        {
        how=70;
        
        }
        
    }
    if (me=='C' || me=='c' || me=='L' || me=='l')
    {
       if(si=='S'||si=='s')
        {
        how=50;
        }
        if(s=='T'||si=='t')
        {
        how=60;
        }
        if(s=='G'||si=='g')
        {
        how=70;
        }
        if(s=='V'||si=='v')
        {
        how=80;
        }
        
    }
    else
    {
        if(si=='S'||si=='s')
        how=50;
        }
        if(s=='T'||si=='t')
        {
        how=60;
        }
        if(s=='G'||si=='g')
        {
        how=70;
        }
        if(s=='V'||si=='v')
        {
        how=80;
        }
        
    }

    
    while(ot!='Y'||ot!='y' || ot!='n' || ot!='N');
    cout << "Total" << total << "Bath" << endl;
    cout << "You pay " << total-(10/100*total) << "Bath";
    if(ber=='Y' || ber=='y')
    {
    cout << "Discount " << 10/100*total << "Bath" ;
    }
    else  
    {
    cout << "Discount 0 Bath";                     
    }
    
        system ("pause");
    return 0;
}
            
                      
                      
                
    
