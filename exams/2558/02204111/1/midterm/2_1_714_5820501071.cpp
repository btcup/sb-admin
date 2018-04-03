#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int sum=0,t=0;
    char c,d,f;
    char e='y';
    cout<<"welcome to A cup-with-love Coffe!!\n";
    while (e=='y'||e=='Y')
    {
          cout<<"Enter your menu (E/A/L/C/M): ";
    cin>>c;
           if (c=='e'||c=='E')        // E 
           {
              cout<<"Enter size (S/T/G/V) : ";
              cin>>d;
              if (d=='s'||d=='S')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=40*a;
              }
              else if (d=='t'||d=='T')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=50*a;
              }
              else if (d=='g'||d=='G')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=60*a;
              }
              else if (d=='v'||d=='V')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=70*a;
              }
           }
           else if (c=='a'||c=='A')      //A
           {
              cout<<"Enter size (S/T/G/V) : ";
              cin>>d;
              if (d=='s'||d=='S')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=40*a;
              }
              else if (d=='t'||d=='T')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=50*a;
              }
              else if (d=='g'||d=='G')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=60*a;
              }
              else if (d=='v'||d=='V')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=70*a;
              }
           }
           else if (c=='c'||c=='C')      //c
           {
              cout<<"Enter size (S/T/G/V) : ";
              cin>>d;
              if (d=='s'||d=='S')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=50*a;
              }
              else if (d=='t'||d=='T')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=60*a;
              }
              else if (d=='g'||d=='G')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=70*a;
              }
              else if (d=='v'||d=='V')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=80*a;
              }
           }
           else if (c=='l'||c=='L')      //L
           {
              cout<<"Enter size (S/T/G/V) : ";
              cin>>d;
              if (d=='s'||d=='S')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=50*a;
              }
              else if (d=='t'||d=='T')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=60*a;
              }
              else if (d=='g'||d=='G')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=70*a;
              }
              else if (d=='v'||d=='V')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=80*a;
              }
           }
           else if (c=='m'||c=='M')      //M
           {
              cout<<"Enter size (S/T/G/V) : ";
              cin>>d;
              if (d=='s'||d=='S')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=60*a;
              }
              else if (d=='t'||d=='T')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=70*a;
              }
              else if (d=='g'||d=='G')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=80*a;
              }
              else if (d=='v'||d=='V')
              {
               cout<<"How many cups? : ";
               cin>>a;
               sum +=90*a;
              }
           }
           cout<<"Do you want other menu? (Y/N) : ";
           cin>>e;
    }
    cout<<"Are you a member? (Y/N) : ";
    cin>>f;
    if (f=='y'||f=='Y')
    {
       t=sum-(sum*10/100);
       cout<<"Total "<<sum<<" Baht\n"<<"Discount "<<sum/10<<" Baht\n"<<"You pay "<<t<<" Baht\n"<<"Thank you.\n";
    }
    else if (f=='n'||f=='N')
    {
       cout<<"Total "<<sum<<" Baht\n"<<"Discount 0 Baht\n"<<"You pay "<<sum<<" Baht\n"<<"Thank you.\n";
    }
    
    
    
    
    system ("pause");
    return 0 ;
}
