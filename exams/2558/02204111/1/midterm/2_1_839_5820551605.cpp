#include <iostream>
using namespace std;
int main()
{
    char menu,size,z,member;
    int cup,sum=0,mum=0,;
    float total=0;
    
    cout<<"Welcom to A Cup-with-love Coffee!!"<<endl;
    for(;;)
    {      
           cout<<"Enter your menu (E/A/L/C/M): ";
           cin>>menu;
           cout<<"Enter size (S/T/G/V) : ";
           cin>>size;
           cout<<"How many cups : ";
           cin>>cup;
           cout<<"Do you want other menu? (y/n) ";
           cin>>z;
           if(z=='y'||z=='Y')
           {
           if(menu =='m'||menu =='M')
           {
                        if(size=='S'||size=='s')
                        {
                              sum=60*cup;
                            
                                                
                        }                    
                        else if(size=='T'||size=='t')
                        {
                               sum=70*cup;
                               
                                               
                        }  
                        else if(size=='G'||size=='g')
                        {
                                sum=80*cup;
                                               
                        } 
                        else if (size=='V'||size=='v')
                        {
                                sum=90*cup;
                                            
                        }
           }
           if(menu =='C'||menu =='c'||menu=='l'||menu=='L')
           {
                        if(size=='S'||size=='s')
                        {
                                 sum=50*cup;
                                                
                        }                    
                        else if(size=='T'||size=='t')
                        {
                                  sum=60*cup;
                                           
                        }  
                        else if(size=='G'||size=='g')
                        {
                                  sum=70*cup;
                                            
                        } 
                        else if (size=='V'||size=='v')
                        {
                                   sum=80*cup;
                                            
                        } 
           }  
          
           if(menu=='A'||menu=='a'||menu=='E'||menu=='e')
           {
                        if(size=='S'||size=='s')
                        {
                                     sum=40*cup;
                                        
                        }                    
                        else if(size=='T'||size=='t')
                        {
                                     sum=50*cup;
                                           
                        }  
                        else if(size=='G'||size=='g')
                        {
                                    sum=60*cup;
                                           
                        } 
                        else if (size=='V'||size=='v')
                        {
                                     sum=70*cup;
                                             
                        } 
           }
           }
           if(z=='n'||z=='N')
           {
             cout<<"Are you a member? (Y/N) : ";
             cin>>member;
             if(member=='Y'||member=='y')
             {
                            
                            cout<<"Total "<<sum<<" Bath "<<endl;
                            mum =sum*10/100;
                            cout<<"Didcount "<<mum<<" Bath"<<endl;
                            total=sum-mum;
                            cout<<"You pay "<<total<< "Bath"<<endl;
                            cout<<"Thank you. "<<endl;
                            break;
             }
             if(member=='n'||member=='N')
             {
                            cout<<"Total "<<sum<<" Bath "<<endl;
                            cout<<"Didcount 0 Bath"<<endl;
                            cout<<"You pay "<<sum<< "Bath"<<endl;
                            cout<<"Thank you. "<<endl;
                            break;
             }
           }
           
           
           
           }
    
    

system("pause");
return 0;
}

