#include <iostream>
using namespace std;
int main()
{
    int n;
    float pay,dis;
    char menu,size,m,o;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;

    do{     cout<<"Enter your menu (E/A/L/C/M): ";
            cin>>menu;
    if(menu=='E'||menu=='e')
    {            
                 cout<<"Enter size (S/T/G/V): ";
                 cin>>size;
                 if(size=='S'||size=='s')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*40;  
                 }
                 if(size=='T'||size=='t')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*50;  
                 }
                 if(size=='G'||size=='g')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*60;
                 }  
                 if(size=='V'||size=='v')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*70;
                 } 
    } 
    if(menu=='A'||menu=='a') 
    {
                 cout<<"Enter size (S/T/G/V): ";
                 cin>>size;
                 if(size=='S'||size=='s')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*40;  
                 }
                 if(size=='T'||size=='t')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*50;  
                 }
                 if(size=='G'||size=='g')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*60;
                 }  
                 if(size=='V'||size=='v')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*70;
                 }             
    }    
    if(menu=='C'||menu=='c')
    {
                 cout<<"Enter size (S/T/G/V): ";
                 cin>>size;
                 if(size=='S'||size=='s')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*40;  
                 }
                 if(size=='T'||size=='t')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*50;  
                 }
                 if(size=='G'||size=='g')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*60;
                 }  
                 if(size=='V'||size=='v')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*70;
                 } 
    }
    if(menu=='L'||menu=='l')
    {            cout<<"Enter size (S/T/G/V): ";
                 cin>>size;
                 if(size=='S'||size=='s')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*40;  
                 }
                 if(size=='T'||size=='t')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*50;  
                 }
                 if(size=='G'||size=='g')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*60;
                 }  
                 if(size=='V'||size=='v')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*70;
                 }                        
    }
    if(menu=='M'||menu=='m') 
    {
                 cout<<"Enter size (S/T/G/V): ";
                 cin>>size;
                 if(size=='S'||size=='s')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*40;  
                 }
                 if(size=='T'||size=='t')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*50;  
                 }
                 if(size=='G'||size=='g')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*60;
                 }  
                 if(size=='V'||size=='v')
                 { cout<<"How many cups?: ";
                   cin>>n; 
                   pay=n*70;
                 } 
    }  
    cout<<"Do you want other menu? (Y/N): ";
    cin>>m;           
    }while(m=='Y'||m=='y');
    cout<<"Are you a member? (Y/N): ";
    cin>>o;
    dis=(pay*10)/100;
    if(o=='Y'||o=='y')
    {   cout<<"Total "<<pay<<" Baht"<<endl;
        cout<<"Discount "<<dis<<" Baht"<<endl;
        cout<<"You pay "<<(pay-dis)<<" Baht"<<endl;
    }
    if(o=='N'||o=='n')
    {   cout<<"Total "<<pay<<" Baht"<<endl;
        cout<<"Discount 0 Bath"<<endl;
        cout<<"You pay "<<pay<<" Baht"<<endl;
    }
    cout<<"Thank you."<<endl;
    system("pause");
    return 0;
}    
