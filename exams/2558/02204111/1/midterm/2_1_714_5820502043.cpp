#include<iostream>
using namespace std;
int main()
{
    int x,total,dis,pay;
    char y,z,a;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl; 
    do{
    cout<<"Enter your menu (E/A/L/C/M): ";
    cin>>y;
    if(y=='E'||y=='e')
    {
                      cout<<"Enter size (S/T/G/V): ";
                      cin>>z;
                     if(z=='s'||z=='S')
                      {
                                       cout<<"How many cups? :";
                                       cin>>x;
                                       total=40*x;
                                       cout<<"Do you want other menu?(Y/N) :";
                                       cin>>a; }                                                                
                     else if(z=='T'||z=='t')
                      {
                                       cout<<"How many cups? :";
                                       cin>>x;
                                       total=50*x;
                                       cout<<"Do you want other menu?(Y/N) :";
                                       cin>>a;}                       
                    else if(z=='g'||z=='G')
                      {
                                           cout<<"How many cups? :";
                                           cin>>x;
                                            total=60*x;
                                             cout<<"Do you want other menu?(Y/N) :";
                                             cin>>a;    }                   
                     else if(z=='V'||z=='v')
                      {
                          cout<<"How many cups? :";
                          cin>>x;
                          total=70*x;
                          cout<<"Do you want other menu?(Y/N) :";
                          cin>>a;  }                     
    }
    else if(y=='A'||y=='a')
    {
                      
                      cout<<"Enter size (S/T/G/V): ";
                      cin>>z;
                     if(z=='s'||z=='S')
                      {
                                       cout<<"How many cups? :";
                                       cin>>x;
                                       total=40*x;
                                       cout<<"Do you want other menu?(Y/N) :";
                                       cin>>a; }                                                                
                     else if(z=='T'||z=='t')
                      {
                                       cout<<"How many cups? :";
                                       cin>>x;
                                       total=50*x;
                                       cout<<"Do you want other menu?(Y/N) :";
                                       cin>>a;}                       
                    else if(z=='g'||z=='G')
                      {
                                           cout<<"How many cups? :";
                                           cin>>x;
                                            total=60*x;
                                             cout<<"Do you want other menu?(Y/N) :";
                                             cin>>a;    }                   
                     else if(z=='V'||z=='v')
                      {
                          cout<<"How many cups? :";
                          cin>>x;
                          total=70*x;
                          cout<<"Do you want other menu?(Y/N) :";
                          cin>>a;  }                  
                      
    }
    else if(y=='L'||y=='l')
    {
                      cout<<"Enter size (S/T/G/V): ";
                      cin>>z;
                     if(z=='s'||z=='S')
                      {
                                       cout<<"How many cups? :";
                                       cin>>x;
                                       total=50*x;
                                       cout<<"Do you want other menu?(Y/N) :";
                                       cin>>a; }                                                                
                     else if(z=='T'||z=='t')
                      {
                                       cout<<"How many cups? :";
                                       cin>>x;
                                       total=60*x;
                                       cout<<"Do you want other menu?(Y/N) :";
                                       cin>>a;}                       
                    else if(z=='g'||z=='G')
                      {
                                           cout<<"How many cups? :";
                                           cin>>x;
                                            total=70*x;
                                             cout<<"Do you want other menu?(Y/N) :";
                                             cin>>a;    }                   
                     else if(z=='V'||z=='v')
                      {
                          cout<<"How many cups? :";
                          cin>>x;
                          total=80*x;
                          cout<<"Do you want other menu?(Y/N) :";
                          cin>>a;  }                  
    }
    else if(y=='C'||y=='c')
    {
                     cout<<"Enter size (S/T/G/V): ";
                      cin>>z;
                     if(z=='s'||z=='S')
                      {
                                       cout<<"How many cups? :";
                                       cin>>x;
                                       total=50*x;
                                       cout<<"Do you want other menu?(Y/N) :";
                                       cin>>a; }                                                                
                     else if(z=='T'||z=='t')
                      {
                                       cout<<"How many cups? :";
                                       cin>>x;
                                       total=60*x;
                                       cout<<"Do you want other menu?(Y/N) :";
                                       cin>>a;}                       
                    else if(z=='g'||z=='G')
                      {
                                           cout<<"How many cups? :";
                                           cin>>x;
                                            total=70*x;
                                             cout<<"Do you want other menu?(Y/N) :";
                                             cin>>a;    }                   
                     else if(z=='V'||z=='v')
                      {
                          cout<<"How many cups? :";
                          cin>>x;
                          total=80*x;
                          cout<<"Do you want other menu?(Y/N) :";
                          cin>>a;  }                  
    }
    else if(y=='M'||y=='m')
    {
                     cout<<"Enter size (S/T/G/V): ";
                      cin>>z;
                     if(z=='s'||z=='S')
                      {
                                       cout<<"How many cups? :";
                                       cin>>x;
                                       total=60*x;
                                       cout<<"Do you want other menu?(Y/N) :";
                                       cin>>a; }                                                                
                     else if(z=='T'||z=='t')
                      {
                                       cout<<"How many cups? :";
                                       cin>>x;
                                       total=70*x;
                                       cout<<"Do you want other menu?(Y/N) :";
                                       cin>>a;}                       
                    else if(z=='g'||z=='G')
                      {
                                           cout<<"How many cups? :";
                                           cin>>x;
                                            total=80*x;
                                             cout<<"Do you want other menu?(Y/N) :";
                                             cin>>a;    }                   
                     else if(z=='V'||z=='v')
                      {
                          cout<<"How many cups? :";
                          cin>>x;
                          total=90*x;
                          cout<<"Do you want other menu?(Y/N) :";
                          cin>>a;  }                  
    }}
    while(a=='Y'||a=='y');
    cout<<"Are you a member? (Y/N) :";
    cin>>a;
    cout<<"Total"<<total<<"Bath"<<endl;
    if(a=='y'||a=='Y')
                      {
                                       cout<<"Discount"<<dis<<"Bath"<<endl;
                                       dis=total%10;
                                      
                      }
    else
     {
                                      cout<<"Discount 0 Bath";
                      }
                      
    cout<<"You pay"<<pay<<"Bath"<<endl;
     pay=total-dis;
    cout<<"Thank you.";
    system("pause");
    return 0;
}                                    
