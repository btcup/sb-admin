#include<iostream>
using namespace std;
int main()
{
   int cups,price,A,sum=0;price;
   float x;
   cups=1;
   char manu,other,size,NN,member;
  
   cout<<"Welcome to A Cup-with-love Coffee!! \n";
   do
   {
                  cout<<"Enter your manu (E/A/L/C/M): ";cin>>manu;
                  cout<<"Enter size (S/T/G/V): ";cin>>size;
                  cout<<"How many cups?: ";cin>>cups;
                  cout<<"Do you want other manu (Y/N) :";cin>>NN;
                   if(manu=='E'||manu=='e')
                      {
                       if(size=='s'||size=='S')price=cups*40;
                       if(size=='t'||size=='T')price=cups*50;
                       if(size=='g'||size=='G')price=cups*60;
                       if(size=='v'||size=='V')price=cups*70;
                       
                       
                      }
                      
                   if(manu=='M'||manu=='m')
                     {
                       if(size=='s'||size=='S')price=cups*60;
                       if(size=='t'||size=='T')price=cups*70;
                       if(size=='g'||size=='G')price=cups*80;
                       if(size=='v'||size=='V')price=cups*90;
                      }
                    if(manu=='A'||manu=='a')  
                     {
                       if(size=='s'||size=='S')price=cups*40;
                       if(size=='t'||size=='T')price=cups*50;
                       if(size=='g'||size=='G')price=cups*60;
                       if(size=='v'||size=='V')price=cups*70;
                     }
                     if(manu=='c'||manu=='C') 
                     {
                       if(size=='s'||size=='S')price=cups*50;
                       if(size=='t'||size=='T')price=cups*60;
                       if(size=='g'||size=='G')price=cups*70;
                       if(size=='v'||size=='V')price=cups*80;
                     }
                     if(manu=='l'||manu=='L') 
                      {
                       if(size=='s'||size=='S')price=cups*50;
                       if(size=='t'||size=='T')price=cups*60;
                       if(size=='g'||size=='G')price=cups*70;
                       if(size=='v'||size=='V')price=cups*80;
                     }
                    
                      
                      sum=sum+price;
                   
   }
   while(NN!='n'&&NN!='N');
   
   cout<<"Are you a member? (Y/N) : ";cin>>member;
   if(member=='Y'||member=='y')
   {
   cout<<"Total "<<sum<<" Baht"<<endl;
   cout<<"Discount "<<sum*10/100<<" Baht"<<endl;
   cout<<"You pay"<<sum-sum*10/100<<" baht"<<endl;
   cout<<"Thank you \n";
}
   /*if(member=='N'||member=='n')*/
   else
   {
   cout<<"Total "<<sum<<" Baht"<<endl;
   cout<<"Discount 0 Baht "<<endl;
   cout<<"You pay "<<sum<<endl;
   cout<<"Thank you "<<endl;
}
                              
    
    
    
    system("pause");
    return 0;
    }
