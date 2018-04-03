#include<iostream>
using namespace std;
int main()
{
    //5720551735 Pornphattha Tuparnit
    char A,B,C,D;
    int  E,G,I;
    float H,J,K,L,M,O,N;
 
cout<<"Enter car model:";
cin>>A;

cout<<"Enter number of years(1-6):";
cin>>E;

cout<<"Enter your salary:";
cin>>G;

       if(A=='A')
       {            
       H=1385000.0*(0.25);
       N=1385000-H;              
       cout<<"Financing amount:"<<N;
       cout<<endl;
        
       K=N*(2.09/100)*E;
       cout<<"Amount of interest:"<<K;
       
       M=(N+K)/(E*12);
       cout<<"monthly payment:"<<M;
       cout<<endl;
       
       O=G/2;
                   if(M>O)
                   {
                   cout<<"The monthly payment is over than 50 percent of your salary!!";
                   }
       O=G/2;             
                   if(M<=O)
                   {
                   cout<<"Good decision,Enjoy your new car";
                   }
       
       }   
       
        if(A=='B')
       {
                 
        H=511500.0*0.25;
        N=511500-H;              
        cout<<"Financing amount:"<<N;
        cout<<endl;
        
        K=N*(1.79/100)*E;
        cout<<"Amount of interest:"<<K;
        cout<<endl;
        
        M=(N+K)/(E*12);
        cout<<"monthly payment:"<<M;
        cout<<endl;
        
        O=G/2;
                   if(M>O)
                   {
                   cout<<"The monthly payment is over than 50 percent of your salary!!";
                   }
        O=G/2;             
                   if(M<=O)
                   {
                   cout<<"Good decision,Enjoy your new car";
                   }
       
       }   
       
       
        if(A=='C')
       {
                 
       H=738000.0*(0.25);
       N=738000-H;              
       cout<<"Financing amount:"<<N;
       cout<<endl;
        
       K=N*(1.99/100)*E;
       cout<<"Amount of interest:"<<K;
       cout<<endl;
       
       M=(N+K)/(E*12);
       cout<<"monthly payment:"<<M;
       cout<<endl;
       
       O=G/2;
                   if(M>O)
                   {
                   cout<<"The monthly payment is over than 50 percent of your salary!!";
                   }
      O=G/2;             
                   if(M<=O)
                   {
                   cout<<"Good decision,Enjoy your new car";
                   }
       
       }  
       
        
        if(A=='J')
       {
                 
       H=694000*(0.25);
       N=694000-H;              
       cout<<"Financing amount:"<<N;
       cout<<endl;
        
       K=N*(1.99/100)*E;
       cout<<"Amount of interest:"<<K;
       cout<<endl;
       
       M=(N+K)/(E*12);
       cout<<"monthly payment:"<<M;
       cout<<endl;
       
       O=G/2;
                   if(M>O)
                   {
                   cout<<"The monthly payment is over than 50 percent of your salary!!";
                   }
       O=G/2;             
                   if(M<=O)
                   {
                   cout<<"Good decision,Enjoy your new car";
                   }
       
       
       }   





system("pause");
return 0;    
    
    
}    
