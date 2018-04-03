#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int h,sumyesmem=0,sumnomem=0,total,discount,summation;
  char m,s,w,y;
  cout<<"Welcome to A Cup-with-love coffe!!"<<endl;
while(true)
{
  cout<<"Enter your meau(E/A/L/C/M):";
  cin>>m; 
  if(m=='e' || m=='E')
  {
            cout<<"Enter size :";
            cin>>s;
            if((s=='s'||s=='S')||(s=='t'||s=='T')||(s=='g'||s=='G')||(s=='v'||s=='V'))
            {
            cout<<"How many cups?";
            cin>>h;
            cout<<"Do you want other meau? (Y/N)";
            cin>>w;
            if(w=='y' || w=='Y')
            {
            continue;          
            }
            else if(w=='n'||w=='N')
            {
            cout<<"Are you a remember?(Y/N):";
            cin>>y;
            if(y=='y' || y=='Y')
            {
            if((s=='s'||s=='S'))
            {
            sumyesmem=sumyesmem+40;
            }
            else if(s=='t'||s=='T')
            {
            sumyesmem=sumyesmem+50;
            }
            else if(s=='g'||s=='G')
           {
            sumyesmem=sumyesmem+60;
            }
            else if(s=='v'||s=='V')
           {
            sumyesmem=sumyesmem+70;
            }
            cout<<"Total "<<sumyesmem*h<<" Bath"<<endl;
            discount=(sumyesmem*h*10)/100;
            cout<<"discount "<<discount<<" Bath"<<endl;
            summation=sumyesmem*h-discount;
            cout<<"You pay "<<summation<<" Bath"<<endl;
            cout<<"Thank You";
            }
            else if(y=='n'||y=='N')
            {
             if((s=='s'||s=='S'))
            {
            sumnomem=sumnomem+40;
            }
            else if(s=='t'||s=='T')
            {
            sumnomem=sumnomem+50;
            }
            else if(s=='g'||s=='G')
           {
            sumnomem=sumnomem+60;
            }
            else if(s=='v'||s=='V')
           {
            sumnomem=sumnomem+70;
            }
            cout<<"Total "<<sumnomem*h<<" Bath"<<endl;
            discount=((sumnomem*h*10)/100*0);
            cout<<"discount "<<discount<<" Bath"<<endl;
            cout<<"You pay "<<sumnomem*h<<" Bath"<<endl;  
            cout<<"Thank You";
 }
  else if(m=='a' || m=='A')
  {
            cout<<"Enter size :";
            cin>>s;
            if((s=='s'||s=='S')||(s=='t'||s=='T')||(s=='g'||s=='G')||(s=='v'||s=='V'))
            {
            cout<<"How many cups?";
            cin>>h;
            cout<<"Do you want other meau? (Y/N)";
            cin>>w;
            if(w=='y' || w=='Y')
            {
            continue;          
            }
            else if(w=='n'||w=='N')
            {
            cout<<"Are you a remember?(Y/N):";
            cin>>y;
            if(y=='y' || y=='Y')
            {
            if((s=='s'||s=='S'))
            {
            sumyesmem=sumyesmem+40;
            }
            else if(s=='t'||s=='T')
            {
            sumyesmem=sumyesmem+50;
            }
            else if(s=='g'||s=='G')
           {
            sumyesmem=sumyesmem+60;
            }
            else if(s=='v'||s=='V')
           {
            sumyesmem=sumyesmem+70;
            }
            cout<<"Total "<<sumyesmem*h<<" Bath"<<endl;
            discount=(sumyesmem*h*10)/100;
            cout<<"discount "<<discount<<" Bath"<<endl;
            summation=sumyesmem*h-discount;
            cout<<"You pay "<<summation<<" Bath"<<endl;
            cout<<"Thank You";
            }
            else if(y=='n'||y=='N')
            {
             if((s=='s'||s=='S'))
            {
            sumnomem=sumnomem+40;
            }
            else if(s=='t'||s=='T')
            {
            sumnomem=sumnomem+50;
            }
            else if(s=='g'||s=='G')
           {
            sumnomem=sumnomem+60;
            }
            else if(s=='v'||s=='V')
           {
            sumnomem=sumnomem+70;
            }
            cout<<"Total "<<sumnomem*h<<" Bath"<<endl;
            discount=((sumnomem*h*10)/100*0);
            cout<<"discount "<<discount<<" Bath"<<endl;
            cout<<"You pay "<<sumnomem*h<<" Bath"<<endl;  
            cout<<"Thank You";
   }
  else if(m=='c' || m=='C')
   {
            cout<<"Enter size :";
            cin>>s;
            if((s=='s'||s=='S')||(s=='t'||s=='T')||(s=='g'||s=='G')||(s=='v'||s=='V'))
            {
            cout<<"How many cups?";
            cin>>h;
            cout<<"Do you want other meau? (Y/N)";
            cin>>w;
            if(w=='y' || w=='Y')
            {
            continue;          
            }
            else if(w=='n'||w=='N')
            {
            cout<<"Are you a remember?(Y/N):";
            cin>>y;
            if(y=='y' || y=='Y')
            {
            if((s=='s'||s=='S'))
            {
            sumyesmem=sumyesmem+50;
            }
            else if(s=='t'||s=='T')
            {
            sumyesmem=sumyesmem+60;
            }
            else if(s=='g'||s=='G')
           {
            sumyesmem=sumyesmem+70;
            }
            else if(s=='v'||s=='V')
           {
            sumyesmem=sumyesmem+80;
            }
            cout<<"Total "<<sumyesmem*h<<" Bath"<<endl;
            discount=(sumyesmem*h*10)/100;
            cout<<"discount "<<discount<<" Bath"<<endl;
            summation=sumyesmem*h-discount;
            cout<<"You pay "<<summation<<" Bath"<<endl;
            cout<<"Thank You";
            }
            else if(y=='n'||y=='N')
            {
             if((s=='s'||s=='S'))
            {
            sumnomem=sumnomem+50;
            }
            else if(s=='t'||s=='T')
            {
            sumnomem=sumnomem+60;
            }
            else if(s=='g'||s=='G')
           {
            sumnomem=sumnomem+70;
            }
            else if(s=='v'||s=='V')
           {
            sumnomem=sumnomem+80;
            }
            cout<<"Total "<<sumnomem*h<<" Bath"<<endl;
            discount=((sumnomem*h*10)/100*0);
            cout<<"discount "<<discount<<" Bath"<<endl;
            cout<<"You pay "<<sumnomem*h<<" Bath"<<endl;  
            cout<<"Thank You";
    }
    else if(m=='l' || m=='L')
   {
            cout<<"Enter size :";
            cin>>s;
            if((s=='s'||s=='S')||(s=='t'||s=='T')||(s=='g'||s=='G')||(s=='v'||s=='V'))
            {
            cout<<"How many cups?";
            cin>>h;
            cout<<"Do you want other meau? (Y/N)";
            cin>>w;
            if(w=='y' || w=='Y')
            {
            continue;          
            }
            else if(w=='n'||w=='N')
            {
            cout<<"Are you a remember?(Y/N):";
            cin>>y;
            if(y=='y' || y=='Y')
            {
            if((s=='s'||s=='S'))
            {
            sumyesmem=sumyesmem+50;
            }
            else if(s=='t'||s=='T')
            {
            sumyesmem=sumyesmem+60;
            }
            else if(s=='g'||s=='G')
           {
            sumyesmem=sumyesmem+70;
            }
            else if(s=='v'||s=='V')
           {
            sumyesmem=sumyesmem+80;
            }
            cout<<"Total "<<sumyesmem*h<<" Bath"<<endl;
            discount=(sumyesmem*h*10)/100;
            cout<<"discount "<<discount<<" Bath"<<endl;
            summation=sumyesmem*h-discount;
            cout<<"You pay "<<summation<<" Bath"<<endl;
            cout<<"Thank You";
            }
            else if(y=='n'||y=='N')
            {
             if((s=='s'||s=='S'))
            {
            sumnomem=sumnomem+50;
            }
            else if(s=='t'||s=='T')
            {
            sumnomem=sumnomem+60;
            }
            else if(s=='g'||s=='G')
           {
            sumnomem=sumnomem+70;
            }
            else if(s=='v'||s=='V')
           {
            sumnomem=sumnomem+80;
            }
            cout<<"Total "<<sumnomem*h<<" Bath"<<endl;
            discount=((sumnomem*h*10)/100*0);
            cout<<"discount "<<discount<<" Bath"<<endl;
            cout<<"You pay "<<sumnomem*h<<" Bath"<<endl;  
            cout<<"Thank You";
    }
    else if(m=='m' || m=='M')
   {
            cout<<"Enter size :";
            cin>>s;
            if((s=='s'||s=='S')||(s=='t'||s=='T')||(s=='g'||s=='G')||(s=='v'||s=='V'))
            {
            cout<<"How many cups?";
            cin>>h;
            cout<<"Do you want other meau? (Y/N)";
            cin>>w;
            if(w=='y' || w=='Y')
            {
            continue;          
            }
            else if(w=='n'||w=='N')
            {
            cout<<"Are you a remember?(Y/N):";
            cin>>y;
            if(y=='y' || y=='Y')
            {
            if((s=='s'||s=='S'))
            {
            sumyesmem=sumyesmem+60;
            }
            else if(s=='t'||s=='T')
            {
            sumyesmem=sumyesmem+70;
            }
            else if(s=='g'||s=='G')
           {
            sumyesmem=sumyesmem+80;
            }
            else if(s=='v'||s=='V')
           {
            sumyesmem=sumyesmem+90;
            }
            cout<<"Total "<<sumyesmem*h<<" Bath"<<endl;
            discount=(sumyesmem*h*10)/100;
            cout<<"discount "<<discount<<" Bath"<<endl;
            summation=sumyesmem*h-discount;
            cout<<"You pay "<<summation<<" Bath"<<endl;
            cout<<"Thank You";
            }
            else if(y=='n'||y=='N')
            {
             if((s=='s'||s=='S'))
            {
            sumnomem=sumnomem+60;
            }
            else if(s=='t'||s=='T')
            {
            sumnomem=sumnomem+70;
            }
            else if(s=='g'||s=='G')
           {
            sumnomem=sumnomem+80;
            }
            else if(s=='v'||s=='V')
           {
            sumnomem=sumnomem+90;
            }
            cout<<"Total "<<sumnomem*h<<" Bath"<<endl;
            discount=((sumnomem*h*10)/100*0);
            cout<<"discount "<<discount<<" Bath"<<endl;
            cout<<"You pay "<<sumnomem*h<<" Bath"<<endl;  
            cout<<"Thank You";
            }
}
system("pause");
return 0;
}}}}}}}}}}}}}}}}
