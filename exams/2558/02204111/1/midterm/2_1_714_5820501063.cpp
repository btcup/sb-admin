#include<iostream>
using namespace std;
int main()
{
    int x,y,z,i,num,tol,sum=0;
    char a,b,c,d;
    cout<<"Welcome to A Cup-with-love coffee!!"<<endl;
    do
    {
         cout<<"Enter your menu (E/A/L/C/M) : ";
         cin>>a;
         if(a=='E'||a=='e')
         {
              cout<<"Enter size (S/T/G/V) : ";
              cin>>b;
              if(b=='S'||b=='s')
              {
              x=40;
              }
              else if(b=='T'||b=='t')
              {
              x=50;
              }
              else if(b=='G'||b=='g')
              {
              x=60;
              }
              else if(b=='V'||b=='v')
              {
              x=70;
              }
         }
          else if(a=='A'||a=='a')
         {
              cout<<"Enter size (S/T/G/V) : ";
              cin>>b;
              if(b=='S'||b=='s')
              {
              x=40;
              }
              else if(b=='T'||b=='t')
              {
              x=50;
              }
              else if(b=='G'||b=='g')
              {
              x=60;
              }
              else if(b=='V'||b=='v')
              {
              x=70;
              }
         }
          else if(a=='C'||a=='c')
         {
              cout<<"Enter size (S/T/G/V) : ";
              cin>>b;
              if(b=='S'||b=='s')
              {
              x=50;
              }
              else if(b=='T'||b=='t')
              {
              x=60;
              }
              else if(b=='G'||b=='g')
              {
              x=70;
              }
              else if(b=='V'||b=='v')
              {
              x=80;
              }
         }
          else if(a=='L'||a=='l')
         {
              cout<<"Enter size (S/T/G/V) : ";
              cin>>b;
              if(b=='S'||b=='s')
              {
              x=50;
              }
              else if(b=='T'||b=='t')
              {
              x=60;
              }
              else if(b=='G'||b=='g')
              {
              x=70;
              }
              else if(b=='V'||b=='v')
              {
              x=80;
              }
         }
         else if(a=='M'||a=='m')
         {
              cout<<"Enter size (S/T/G/V) : ";
              cin>>b;
              if(b=='S'||b=='s')
              {
              x=60;
              }
              else if(b=='T'||b=='t')
              {
              x=70;
              }
              else if(b=='G'||b=='g')
              {
              x=80;
              }
              else if(b=='V'||b=='v')
              {
              x=90;
              }
         }
    cout<<"How many cup? : ";
    cin>>y;
    sum=sum+(x*y);
    cout<<"Do you want other menu?(Y/N): ";
    cin>>c;
     }while(c=='Y'||c=='y');
     cout<<"Are you a member? (Y/N) : ";
     cin>>d;
             if(d=='Y'||d=='y')
             {
              cout<<"Totle "<<sum<<" Bath"<<endl;
              num=sum*(10/100.0);
              cout<<"Discount "<<num<<" Bath"<<endl;
              }
              else if(d=='N'||d=='n')
              {
              cout<<"Totle "<<sum<<" Bath"<<endl;
              num=0;
              cout<<"Discount "<<num<<" Bath"<<endl;
              }
              tol=sum-num;
              cout<<"You pay "<<tol<<" Bath"<<endl;
              cout<<"Thank you."<<endl;
     system("pause");
     return 0;
}
              
