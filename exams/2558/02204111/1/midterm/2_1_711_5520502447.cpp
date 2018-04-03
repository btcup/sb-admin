#include<iostream>
using namespace std;
int main()
{
    char type,size,mem,other;
    int a,w,i=0;
    float q,e,r;
    

    
   cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
   
   
  
    
    cout<<"Enter your menu (E/A/L/C/M) :";
    cin>>type;
              if(type=='E'||type=='e')
              {
                
              cout<<"Enter size (S/T/G/V) :";
              cin>>size;
              
                         if(size=='S'||size=='s')
                         {
                            q=40;
                         }
                         else if(size=='T'||size=='t')
                         {
                            q=50;
                         }
                         else if(size=='G'||size=='v')  
                         {
                            q=60;
                         }
                         else
                         {
                            q=70; 
                         }}
                          
              
              else if(type=='A'||type=='a')

              {
              cout<<"Enter size (S/T/G/V) :";
              cin>>size;
              
                         if(size=='S'||size=='s')
                         {
                            q=40;
                         }
                         else if(size=='T'||size=='t')
                         {
                            q=50;
                         }
                         else if(size=='G'||size=='v')  
                         {
                            q=60;
                         }
                         else 
                         {
                          q=70; 
                         
                         }}
                                
              else if(type=='C'||type=='c')

              {
              cout<<"Enter size (S/T/G/V) :";
              cin>>size;
              
                         if(size=='S'||size=='s')
                         {
                            q=50;
                         }
                         else if(size=='T'||size=='t')
                         {
                            q=60;
                         }
                         else if(size=='G'||size=='v')  
                         {
                            q=70;
                         }
                          else 
                         {
                          q=80; 
                         
                         }}
                                
              else if(type=='L'||type=='l')

              {
              cout<<"Enter size (S/T/G/V) :";
              cin>>size;
              
                         if(size=='S'||size=='s')
                         {
                            q=50;
                         }
                         else if(size=='T'||size=='t')
                         {
                            q=60;
                         }
                         else if(size=='G'||size=='v')  
                         {
                            q=70;
                         }
                          else 
                         {
                          q=80; 
                         
                         }}
                                
               else 

              {
              cout<<"Enter size (S/T/G/V) :";
              cin>>size;
              
                         if(size=='S'||size=='s')
                         {
                            q=60;
                         }
                         else if(size=='T'||size=='t')
                         {
                            q=70;
                         }
                         else if(size=='G'||size=='v')  
                         {
                            q=80;
                         }
                          else 
                         {
                          q=90; 
                         
                         }}
                         

   cout<<"How many cups?:";
   cin>>w;
   
   
   cout<<"Do you want other menu? (Y/N)";
   cin>>other;
   
  
   
                         
                                
   cout<<"Are you a mamber? (Y/N):";
   
   cin>>mem;
   if(mem=='Y'||mem=='y')
   {
       r=0.1;
   }
   else
   {
       r=0;
   }
  
   
   
   
     cout<<"Total "<<w*q<<" Baht"<<endl;
     cout<<"Discount "<<(w*q*r)<<" Baht"<<endl;
     cout<<"You pay "<<(w*q)-(w*q*r)<<" Baht"<<endl;
     
            
    
    cout<<"Thank you."<<endl;
    
    

    
    
    
    
    
    
system("pause");
return 0;
}
