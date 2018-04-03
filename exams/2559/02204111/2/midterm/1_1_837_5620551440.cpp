//5620551440_Pongsatorn Purataka
 #include<iostream>
 using namespace std;
 int main()
 {
     char a;
     double b,c,e,r,t,p,l,m ;
     cout<<"Enter car model:";
     cin>>a;
     
     if(a=='A')
         {
          cout<<"Enter number of years(1-6):";
          cin>>b;
  e=1385000-(1385000*(c/100));
          r=e*(2.09/100)*b;
          t=(r+e)/(12*b);
          p=1385000-(1385000*(c/100));
          l=e*(1.99/100)*b;
          m=(r+e)/(12*b);
           if(b=1&&b<4)
             {
               cout<<"Enter percentage of down payment:";
               cin>> c ;
                cout<<"Financing amout:"<<p<<endl;
                cout<<"Amout of interest:"<<l<<endl;
                cout<<"Monthly payment:"<<m<<endl;
             }   
             else if(b=4&&b<=6)              
                 {
                cout<<"Enter percentage of down payment:";
               cin>> c ;
                cout<<"Financing amout:"<<e<<endl;
                cout<<"Amout of interest:"<<r<<endl;
                cout<<"Monthly payment:"<<t<<endl;                           
                 }
             else if(b>6) 
                 cout<<"Eror!,number of years is not in range";  
               
         }     
         if(a=='B')
         {
          cout<<"Enter number of years(1-6):";
          cin>>b;
          cout<<"Enter percentage of down payment:";
          cin>> c ;
          e=511500-(511500*(c/100));
          r=e*(1.79/100)*b;
          t=(r+e)/(12*b);
          p=511500-(511500*(c/100));
          l=e*(1.69/100)*b;
          m=(r+e)/(12*b);
           if(b=1&&b<4)
             {
               
                cout<<"Financing amout:"<<p<<endl;
                cout<<"Amout of interest:"<<l<<endl;
                cout<<"Monthly payment:"<<m<<endl;
             }   
             else if(b=4&&b<=6)              
                 {
                
                cout<<"Financing amout:"<<e<<endl;
                cout<<"Amout of interest:"<<r<<endl;
                cout<<"Monthly payment:"<<t<<endl;                           
                 }
             else
                 cout<<"Eror!,number of years is not in range";  
               
         }     
          if(a=='C')
         {
          cout<<"Enter number of years(1-6):";
          cin>>b;
          cout<<"Enter percentage of down payment:";
          cin>> c ;
          e=738000-(738000*(c/100));
          r=e*(1.99/100)*b;
          t=(r+e)/(12*b);
          p=738000-(738000*(c/100));
          l=e*(1.89/100)*b;
          m=(r+e)/(12*b);
           if(b=1&&b<4)
             {
               
                cout<<"Financing amout:"<<p<<endl;
                cout<<"Amout of interest:"<<l<<endl;
                cout<<"Monthly payment:"<<m<<endl;
             }   
             else if(b=4&&b<=6)              
                 {
                
                cout<<"Financing amout:"<<e<<endl;
                cout<<"Amout of interest:"<<r<<endl;
                cout<<"Monthly payment:"<<t<<endl;                           
                 }
             else
                 cout<<"Eror!,number of years is not in range";  
               
         }     
              if(a=='J')
         {
          cout<<"Enter number of years(1-6):";
          cin>>b;
          cout<<"Enter percentage of down payment:";
          cin>> c ;
          e=694000-(694000*(c/100));
          r=e*(1.99/100)*b;
          t=(r+e)/(12*b);
          p=694000-(694000*(c/100));
          l=e*(1.89/100)*b;
          m=(r+e)/(12*b);
           if(b=1&&b<4)
             {
               
                cout<<"Financing amout:"<<p<<endl;
                cout<<"Amout of interest:"<<l<<endl;
                cout<<"Monthly payment:"<<m<<endl;
             }   
             else if(b=4&&b<=6)              
                 {
                
                cout<<"Financing amout:"<<e<<endl;
                cout<<"Amout of interest:"<<r<<endl;
                cout<<"Monthly payment:"<<t<<endl;                           
                 }
             else
                 cout<<"Eror!,number of years is not in range";  
               
         }     
          
        
       
       
      system("pause") ;     
      return 0;  
       
         }      
 
