#include<iostream>
using namespace std;
int main()
{
    char c,x,y,m;
    int a,Total,discount=0,pay;
    cout<<"Welcom to A Cup-with-love Coffee!!"<<endl;
    
    cout<<"Enter your menu (E/A/L/C/M):";
    cin>>c;
    cout<<"Enter size(S/T/G/V):";
    cin>>x;
    cout<<"How many cups?:";
    cin>>a;
    
    
       if(c=='e'||c=='E')
       {
                          if(x=='s'||x=='S')
                          {
                              Total=40*a;           
                          }   
                          else if(x=='t'||x=='T')  
                          {
                              Total=50*a;
                          }  
                          else if(x=='g'||x=='G')   
                          {
                              Total=60*a;
                          } 
                          else
                          {
                              Total=70*a;
                          }
       }
       else if(c=='A'||c=='a')
       {
                          if(x=='s'||x=='S')
                          {
                              Total=40*a;           
                          }   
                          else if(x=='t'||x=='T')  
                          {
                              Total=50*a;
                          }  
                          else if(x=='g'||x=='G')   
                          {
                              Total=60*a;
                          } 
                          else
                          {
                              Total=70*a;
                          }
       }
       else if(c=='C'||c=='c')
       {
                          if(x=='s'||x=='S')
                          {
                              Total=50*a;           
                          }   
                          else if(x=='t'||x=='T')  
                          {
                              Total=60*a;
                          }  
                          else if(x=='g'||x=='G')   
                          {
                              Total=70*a;
                          } 
                          else
                          {
                              Total=80*a;
                          }
       }
       else if(c=='L'||c=='l')
       {
                          if(x=='s'||x=='S')
                          {
                              Total=50*a;           
                          }   
                          else if(x=='t'||x=='T')  
                          {
                              Total=60*a;
                          }  
                          else if(x=='g'||x=='G')   
                          {
                              Total=70*a;
                          } 
                          else
                          {
                              Total=80*a;
                          }
       }
        else if(c=='M'||c=='m')
       {
                          if(x=='s'||x=='S')
                          {
                              Total=60*a;           
                          }   
                          else if(x=='t'||x=='T')  
                          {
                              Total=70*a;
                          }  
                          else if(x=='g'||x=='G')   
                          {
                              Total=80*a;
                          } 
                          else
                          {
                              Total=90*a;
                          }
       }
    cout<<"Do you want other menu?(Y/N):";
    cin>>y;

   
    {
      if(y=='Y'||y=='y')
      {
          cout<<"Enter your menu (E/A/L/C/M):";
          cin>>c;
          cout<<"Enter size(S/T/G/V):";
          cin>>x;
          cout<<"How many cups?:";
          cin>>a;
          cout<<"Do you want other menu?(Y/N):";
          cin>>y;
      } 
         if(y=='N'||y=='n')
         {
         cout<<"Are you a member?(Y/N):";
         cin>>m;
         }
            if(m=='Y'||m=='y')
            {
            cout<<"Total"<<Total<<"Bath"<<endl;
            cout<<"Discount"<<Total*(10/100) <<"Bath"<<endl;
            cout<<"you pay"<<Total-(Total*(10/100))<< "Bath"<<endl;
            cout<<"Thank you.";
           
            }
            else if(m=='N'||m=='n')
            {
            cout<<"Total"<<Total<<"Bath" <<endl;
            cout<<"Discount"<<" "<<"0"<<" "<<"Bath"<<endl;
            cout<<"you pay"<<Total<< "Bath"<<endl;
            cout<<"Thank you.";
            
            }
         }
         
      system("pause");   
      return 0;
      
}    







