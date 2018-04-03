#include<iostream>
using namespace std;

int main()
{ 
     float a,b,c;
     int d,e,f,g;
     char x,y;
     cout<<"welcome to The eantastic Tiles!!"<<endl;
     cout<<"Please enter room size in meter (H x W x D): ";
     cin>>a>>b>>c;
     cout<<"Please select floor tile (A/B/C): ";
     cin>>x;
     cout<<"Please select wall tile (A/B/C): ";
     cin>>y;
     if(x=='a'||x=='A')
       {    d=(b*c)/0.09+4;
            f=d*55;
            cout<<"Number of floor tiles : "<<d<<"-->"<<"Price = "<<f<<endl  ;
           if(y=='a'||y=='A') 
              {
                 e=(a*c)/0.04;
                 g=e*17;
                 cout<<"Number of floor tiles : "<<e<<"-->"<<"Price = "<<g<<endl  ;
              }
           else if(y=='b'||y=='B') 
              {
                 e=(a*c)/0.06;
                 g=e*32;
                 cout<<"Number of floor tiles : "<<e<<"-->"<<"Price = "<<g<<endl  ;
              }
            else if(y=='c'||y=='C')
             {
                 e=(a*c)/0.09;
                 g=e*32;
                 cout<<"Number of floor tiles : "<<e<<"-->"<<"Price = "<<g<<endl  ;
              }
        }
    else if (x=='b'||x=='B')
       {    d=(b*c)/0.2025;
            f=d*80;
            cout<<"Number of floor tiles : "<<d<<"-->"<<"Price = "<<f<<endl  ;
           if(y=='a'||y=='A') 
              {
                 e=(a*c)/0.04;
                 g=e*17;
                 cout<<"Number of floor tiles : "<<e<<"-->"<<"Price = "<<g<<endl  ;
              }
           else if(y=='b'||y=='B') 
              {
                 e=(a*c)/0.06;
                 g=e*32;
                 cout<<"Number of floor tiles : "<<e<<"-->"<<"Price = "<<g<<endl  ;
              }
            else if(y=='c'||y=='C')
             {
                 e=(a*c)/0.09;
                 g=e*32;
                 cout<<"Number of floor tiles : "<<e<<"-->"<<"Price = "<<g<<endl  ;
              }
        }
        else if (x=='c'||x=='C')
         {   d=(b*c)/0.06;
             f=d*90;
             cout<<"Number of floor tiles : "<<d<<"-->"<<"Price = "<<f<<endl  ;
           if(y=='a'||y=='A') 
              {
                 e=(a*c)/0.04;
                 g=e*17;
                 cout<<"Number of floor tiles : "<<e<<"-->"<<"Price = "<<g<<endl  ;
              }
           else if(y=='b'||y=='B') 
              {
                 e=(a*c)/0.06;
                 g=e*32;
                 cout<<"Number of floor tiles : "<<e<<"-->"<<"Price = "<<g<<endl  ;
              }
            else if(y=='c'||y=='C')
             {
                 e=(a*c)/0.09;
                 g=e*32;
                 cout<<"Number of floor tiles : "<<e<<"-->"<<"Price = "<<g<<endl  ;
              }
        }
         cout<<"Total price: ";
       
     
     
    
    
   
    
    
    
    
    
    
    
    
  system("pause");
  return 0 ;  
      
}
