#include<iostream>
using namespace std;
int main()
{
    char n,m,y;
    int x,Total=0;
    cout<<"Welcome to a Cuup-with-love Coffee!!"<<endl;
    cout<<"Enter your manu (E/A/L/C/M): ";
    cin>>n;
    cout<<"Enter size (S/T/G/V): ";
    cin>>m;
    cout<<"How many cups :";
    cin>>x;
    cout<<"Do you want orter manu(Y/N) ";
    cin>>y;
    do
      {
       if(y=='y'||y=='Y')
       {
       cout<<"Enter your manu (E/A/L/C/M): ";
       cin>>n;
       cout<<"Enter size (S/T/G/V): ";
       cin>>m;
       cout<<"How many cups :";
       cin>>x;
       cout<<"Do you want orter manu(Y/N) ";
       cin>>y;
       }            
       else if(y!='y'||y!='Y')
       {
            if(y=='n')
             {
                 if(m=='s'||m=='S')
                    Total=x*40;
                 else if(m=='t'||m=='T')
                    Total=x*50;
                 else if(m=='g'||m=='G')
                    Total=x*60;
                 else if(m=='v'||m=='V')
                    Total=x*70;
                    
             }
      }
      
    }
    
    while(true);
    system("pause");
    return 0;
}
