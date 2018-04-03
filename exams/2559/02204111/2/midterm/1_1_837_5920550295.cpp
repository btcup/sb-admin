//5920550295 Keartisilp Tearthaisong
#include <iostream>
using namespace std;
int main ()
{
    char s;
    int p,dp,f;
    float a ,mp,y;
    cout<<"-------Car lease calculator ----------\n";
    cout<<"Enter car model : ";
    cin>>s;
    switch (s)
    {
           case('A'):cout<<"Enter number of years (1-6) : ";
                     cin>>y;
                     if(y<4)
                     {
                      cout<<"Enter percentage of down payment :";
                      cin>>dp;
                      cout<<"---------------------------------------\n";
                      f=1385000-((1385000)*dp/100);
                      cout<<"Financing amount : "<<f<<endl;
                      a=f*(1.99/100)*y;
                      cout<<"Amount of interest : "<<a<<endl;
                      mp=(f+a)/(y*12);
                      cout<<"Monthly payment : "<<mp<<endl;      
                     }
                     if(y>=4||y<=6)
                     {
                       cout<<"Enter percentage of down payment :";
                      cin>>dp;
                      cout<<"---------------------------------------\n";
                      f=1385000-((1385000)*dp/100);
                      cout<<"Financing amount : "<<f<<endl;
                      a=f*(2.09/100)*y;
                      cout<<"Amount of interest : "<<a<<endl;
                      mp=(f+a)/(y*12);
                      cout<<"Monthly payment : "<<mp<<endl;          
                     }
                     else {cout<<"Error!,number of years is not in range\n";}
                     break;
           case ('B'):cout<<"Enter number of years (1-6) : ";
                     cin>>y;
                     if(y<4)
                     {
                      cout<<"Enter percentage of down payment :";
                      cin>>dp;
                      cout<<"---------------------------------------\n";
                      f=511500-((511500)*dp/100);
                      cout<<"Financing amount : "<<f<<endl;
                      a=f*(1.69/100)*y;
                      cout<<"Amount of interest : "<<a<<endl;
                      mp=(f+a)/(y*12);
                      cout<<"Monthly payment : "<<mp<<endl;      
                     }
                     if(y>=4||y<=6)
                     {
                       cout<<"Enter percentage of down payment :";
                      cin>>dp;
                      cout<<"---------------------------------------\n";
                      f=511500-((511500)*dp/100);
                      cout<<"Financing amount : "<<f<<endl;
                      a=f*(1.79/100)*y;
                      cout<<"Amount of interest : "<<a<<endl;
                      mp=(f+a)/(y*12);
                      cout<<"Monthly payment : "<<mp<<endl;          
                     }
                     else {cout<<"Error!,number of years is not in range\n";}
                     break;
           case ('C'):cout<<"Enter number of years (1-6) : ";
                     cin>>y;
                     if(y<4)
                     {
                      cout<<"Enter percentage of down payment :";
                      cin>>dp;
                      cout<<"---------------------------------------\n";
                      f=738000-((738000)*dp/100);
                      cout<<"Financing amount : "<<f<<endl;
                      a=f*(1.89/100)*y;
                      cout<<"Amount of interest : "<<a<<endl;
                      mp=(f+a)/(y*12);
                      cout<<"Monthly payment : "<<mp<<endl;      
                     }
                     if(y>=4||y<=6)
                     {
                       cout<<"Enter percentage of down payment :";
                      cin>>dp;
                      cout<<"---------------------------------------\n";
                      f=738000-((738000)*dp/100);
                      cout<<"Financing amount : "<<f<<endl;
                      a=f*(1.99/100)*y;
                      cout<<"Amount of interest : "<<float(a)<<endl;
                      mp=(f+a)/(y*12);
                      cout<<"Monthly payment : "<<mp<<endl;          
                     }
                     else {cout<<"Error!,number of years is not in range\n";}
                     break;
           case ('J'):cout<<"Enter number of years (1-6) : ";
                     cin>>y;
                     if(y<4)
                     {
                      cout<<"Enter percentage of down payment :";
                      cin>>dp;
                      cout<<"---------------------------------------\n";
                      f=694000-((694000)*dp/100);
                      cout<<"Financing amount : "<<f<<endl;
                      a=f*(1.89/100)*y;
                      cout<<"Amount of interest : "<<a<<endl;
                      mp=(f+a)/(y*12);
                      cout<<"Monthly payment : "<<mp<<endl;      
                     }
                     if(y>=4||y<=6)
                     {
                       cout<<"Enter percentage of down payment :";
                      cin>>dp;
                      cout<<"---------------------------------------\n";
                      f=694000-((694000)*dp/100);
                      cout<<"Financing amount : "<<f<<endl;
                      a=f*(1.99/100)*y;
                      cout<<"Amount of interest : "<<a<<endl;
                      mp=(f+a)/(y*12);
                      cout<<"Monthly payment : "<<mp<<endl;          
                     }
                     else {cout<<"Error!,number of years is not in range\n";}
                     break;
                     
    }    
    system("pause");
    return 0;
}
