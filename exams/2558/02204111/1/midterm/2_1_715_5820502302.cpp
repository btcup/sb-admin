#include<iostream>
using namespace std;
int main()
{   char x,y,k,j;
    float z,total=0,Discount,Pay;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    cout<<"Enter your menu (E/A/L/C/M):";
    cin>>x;
    cout<<"Enter size(S/T/G/V):";
    cin>>y;
    cout<<"How many cups?:";
    cin>>z;
            if(x=='E'||x=='e')
            {  
                if(y=='S'||y=='s')
                { total=total+(z*40);
                }
                else if(y=='T'||y=='t')
                { total=total+(z*50);
                }
                else if(y=='G'||y=='g')
                { total=total+(z*60);
                } 
                else if(y=='V'||y=='v')
                { total=total+(z*70);
                }
             } 
             else if(x=='A'||x=='a')
             {  
                if(y=='S'||y=='s')
                { total=total+(z*40);
                }
                else if(y=='T'||y=='t')
                { total=total+(z*50);
                }
                else if(y=='G'||y=='g')
                { total=total+(z*60);
                } 
                else if(y=='V'||y=='v')
                { total=total+(z*70);
                }
             }
             else if(x=='C'||x=='c')
             {  
                if(y=='S'||y=='s')
                { total=total+(z*50);
                }
                else if(y=='T'||y=='t')
                { total=total+(z*60);
                }
                else if(y=='G'||y=='g')
                { total=total+(z*70);
                } 
                else if(y=='V'||y=='v')
                { total=total+(z*80);
                }
             }
             else if(x=='L'||x=='l')
             {  
                if(y=='S'||y=='s')
                { total=total+(z*50);
                }
                else if(y=='T'||y=='t')
                { total=total+(z*60);
                }
                else if(y=='G'||y=='g')
                { total=total+(z*70);
                } 
                else if(y=='V'||y=='v')
                { total=total+(z*80);
                }
             }
             else if(x=='M'||x=='m')
             {  
                if(y=='S'||y=='s')
                { total=total+(z*60);
                }
                else if(y=='T'||y=='t')
                { total=total+(z*70);
                }
                else if(y=='G'||y=='g')
                { total=total+(z*80);
                } 
                else if(y=='V'||y=='v')
                { total=total+(z*90);
                }
             } 
             total=total+total;
             Discount=0;
    do
    { cout<<"Do you want other menu?(Y/N):";
      cin>>k;
      cout<<"Enter your menu (E/A/L/C/M):";
      cin>>x;
      cout<<"Enter size(S/T/G/V):";
      cin>>y;
      cout<<"How many cups?:";
      cin>>z;
      total=total+total;
             if(k=='N'||k=='n')
              {cout<<"Are you a member?(Y/N)";
               cin>>j;
                      if(j=='Y'||j=='y')
                       {Discount=total/10.0;
                        Pay=total-Discount;
                        }
                       else if(j=='N'||j=='n')
                       {Discount=0;
                        Pay=total-Discount;
                        }
      
             break;
             }
             else if(x=='E'||x=='e')
            {
                if(y=='S'||y=='s')
                { total=total+(z*40);
                }
                else if(y=='T'||y=='t')
                { total=total+(z*50);
                }
                else if(y=='G'||y=='g')
                { total=total+(z*60);
                } 
                else if(y=='V'||y=='v')
                { total=total+(z*70);
                }
             } 
             else if(x=='A'||x=='a')
             {  
                if(y=='S'||y=='s')
                { total=total+(z*40);
                }
                else if(y=='T'||y=='t')
                { total=total+(z*50);
                }
                else if(y=='G'||y=='g')
                { total=total+(z*60);
                } 
                else if(y=='V'||y=='v')
                { total=total+(z*70);
                }
             }
             else if(x=='C'||x=='c')
             {  
                if(y=='S'||y=='s')
                { total=total+(z*50);
                }
                else if(y=='T'||y=='t')
                { total=total+(z*60);
                }
                else if(y=='G'||y=='g')
                { total=total+(z*70);
                } 
                else if(y=='V'||y=='v')
                { total=total+(z*80);
                }
             }
             else if(x=='L'||x=='l')
             {  
                if(y=='S'||y=='s')
                { total=total+(z*50);
                }
                else if(y=='T'||y=='t')
                { total=total+(z*60);
                }
                else if(y=='G'||y=='g')
                { total=total+(z*70);
                } 
                else if(y=='V'||y=='v')
                { total=total+(z*80);
                }
             }
             else if(x=='M'||x=='m')
             {  
                if(y=='S'||y=='s')
                { total=total+(z*60);
                }
                else if(y=='T'||y=='t')
                { total=total+(z*70);
                }
                else if(y=='G'||y=='g')
                { total=total+(z*80);
                } 
                else if(y=='V'||y=='v')
                { total=total+(z*90);
                }
             } 
             
             else continue;                 
    }
    while(1);
    
    cout<<"Total "<<total<<endl;
    cout<<"Discount "<<Discount<<endl;
    cout<<"You Pay:"<<Pay<<endl;
    system("pause");
    return 0;
}
    
