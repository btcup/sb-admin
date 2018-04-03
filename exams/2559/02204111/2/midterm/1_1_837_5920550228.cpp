#include<iostream>
using namespace std;
int main()
{
    int a,b,d,e;
    float c,f,g;
    char Cars;
    cout<<"------- Car lease calculator -------"<<endl;
    cout<<"Enter car model:";
    cin>>Cars;
    cout<<"Enter number of years(1-6):";
    cin>>a;
    cout<<"Enter percentage of down payment:";
    cin>>b;
    if(a>=1&&a<=6)
    {
           cout<<"----------------------------"<<endl;       
           if(a>=4)
            {
            if(Cars=='A')
            {
                 e=(138500*b)/100;         
                 d=138500-e;
                 cout<<"Finacing amount:"<<d<<endl;
                 f=(d*2.09)/100*a;
                 cout<<"Amount of interest:"<<f<<endl;
                 g=(d+f)/(a*12);
                 cout<<"Monthly payment:"<<g<<endl;
                 }
             if(Cars=='B')
            {
                 e=(511500*b)/100;         
                 d=511500-e;
                 cout<<"Finacing amount:"<<d<<endl;
                 f=(d*1.79)/100*a;
                 cout<<"Amount of interest:"<<f<<endl;
                 g=(d+f)/(a*12);
                 cout<<"Monthly payment:"<<g<<endl;
                 }
             if(Cars=='C')
             {
                 e=(738000*b)/100;         
                 d=738000-e;
                 cout<<"Finacing amount:"<<d<<endl;
                 f=(d*1.99)/100*a;
                 cout<<"Amount of interest:"<<f<<endl;
                 g=(d+f)/(a*12);
                 cout<<"Monthly payment:"<<g<<endl;
                }
             if(Cars=='J')
            {
                 e=(694000*b)/100;         
                 d=694000-e;
                 cout<<"Finacing amount:"<<d<<endl;
                 f=(d*1.99 )/100*a;
                 cout<<"Amount of interest:"<<f<<endl;
                 g=(d+f)/(a*12);
                 cout<<"Monthly payment:"<<g<<endl;
                 }
            }
    if(a<4)
    {
              if(Cars=='A')
            {
                 e=(138500*b)/100;         
                 d=138500-e;
                 cout<<"Finacing amount:"<<d<<endl;
                 f=(d*1.99)/100*a;
                 cout<<"Amount of interest:"<<f<<endl;
                 g=(d+f)/(a*12);
                 cout<<"Monthly payment:"<<g<<endl;
                 }
             if(Cars=='B')
            {
                 e=(511500*b)/100;         
                 d=511500-e;
                 cout<<"Finacing amount:"<<d<<endl;
                 f=(d*1.69)/100*a;
                 cout<<"Amount of interest:"<<f<<endl;
                 g=(d+f)/(a*12);
                 cout<<"Monthly payment:"<<g<<endl;
                 }
             if(Cars=='C')
             {
                 e=(738000*b)/100;         
                 d=738000-e;
                 cout<<"Finacing amount:"<<d<<endl;
                 f=(d*1.89)/100*a;
                 cout<<"Amount of interest:"<<f<<endl;
                 g=(d+f)/(a*12);
                 cout<<"Monthly payment:"<<g<<endl;
                }
             if(Cars=='J')
            {
                 e=(694000*b)/100;         
                 d=694000-e;
                 cout<<"Finacing amount:"<<d<<endl;
                 f=(d*1.89)/100*a;
                 cout<<"Amount of interest:"<<f<<endl;
                 g=(d+f)/(a*12);
                 cout<<"Monthly payment:"<<g<<endl;
                 }
            }
    }
    else
        {
            cout<<"Error!.number of years is not in range"<<endl;  
        }
system ("pause");
return 0;
}
