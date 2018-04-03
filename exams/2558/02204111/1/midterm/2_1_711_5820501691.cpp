#include <iostream>
using namespace std;
int main()
{
    char coffee,size,Y,y,N,n,X,x;
    int cup,sum=0;
        cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
        do
        {
        cout<<"Enter your menu (E/A/L/C/M): ";
        cin>>coffee;
        if(coffee=='E'||coffee=='e')
        {
          cout<<"Enter size (S/T/G/V): ";
          cin>>size;
          if(size=='S'||size=='s')
          {
            cout<<"How many cup";
            cin>>cup;
            if(cup==1)
             sum=sum+40;
            else if(cup==2)
             sum=sum+80;
            else if(cup==3)
             sum=sum+120;
            cout<<"Do you want other menu? :";
            cin>>X;
            if(X=='N'||X=='n')
            break;
          }
          
          else if(size=='T'||size=='t')
          {
            cout<<"How many cup :";
            cin>>cup;
            if(cup==1)
             sum=sum+50;
            else if(cup==2)
             sum=sum+100;
            else if(cup==3)
             sum=sum+150;
              cout<<"Do you want other menu? :";
            cin>>X;
            if(X=='N'||X=='n')
            break;
          }     
          else if(size=='G'||size=='g')
          {
           cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+60;
            else if(cup==2)
             sum=sum+120;
            else if(cup==3)
             sum=sum+180;
              cout<<"Do you want other menu? :";
            cin>>X;
            if(X=='N'||X=='n')
            break;
        }
          else if(size=='V'||size=='v')
          {
           cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+70;
            else if(cup==2)
             sum=sum+140;
            else if(cup==3)
             sum=sum+210; cout<<"Do you want other menu? :";
            cin>>X;
            if(X=='N'||X=='n')
            break;
        }
        }
        else if(coffee=='A'||coffee=='a')
        {
          cout<<"Enter size (S/T/G/V): ";
          cin>>size;
          if(size=='S'||size=='s')
          {
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+40;
            else if(cup==2)
             sum=sum+80;
            else if(cup==3)
             sum=sum+120;
           }
          else if(size=='T'||size=='t')
          { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+50;
            else if(cup==2)
             sum=sum+100;
            else if(cup==3)
             sum=sum+150;
           }    
          else if(size=='G'||size=='g')
          {
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+60;
            else if(cup==2)
             sum=sum+120;
            else if(cup==3)
             sum=sum+180;
          }
          else if(size=='V'||size=='v')
          { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+70;
            else if(cup==2)
             sum=sum+140;
            else if(cup==3)
             sum=sum+210;
        }
        }
        else if(coffee=='C'||coffee=='c')
        {
          cout<<"Enter size (S/T/G/V): ";
          cin>>size;
          if(size=='S'||size=='s')
             { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+50;
            else if(cup==2)
             sum=sum+100;
            else if(cup==3)
             sum=sum+150;
        }
          else if(size=='T'||size=='t') 
             { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+60;
            else if(cup==2)
             sum=sum+120;
            else if(cup==3)
             sum=sum+180;
        }      
          else if(size=='G'||size=='g')
             { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+70;
            else if(cup==2)
             sum=sum+140;
            else if(cup==3)
             sum=sum+210;
        }
          else if(size=='V'||size=='v') 
            { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+80;
            else if(cup==2)
             sum=sum+160;
            else if(cup==3)
             sum=sum+240;
        }
        }
        else if(coffee=='L'||coffee=='l')
        {
          cout<<"Enter size (S/T/G/V): ";
          cin>>size;
          if(size=='S'||size=='s')
           { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+50;
            else if(cup==2)
             sum=sum+100;
            else if(cup==3)
             sum=sum+150;
        }
          else if(size=='T'||size=='t') 
            { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+60;
            else if(cup==2)
             sum=sum+120;
            else if(cup==3)
             sum=sum+180;
        }     
          else if(size=='G'||size=='g')
             { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+70;
            else if(cup==2)
             sum=sum+140;
            else if(cup==3)
             sum=sum+210;
        }
          else if(size=='V'||size=='v') 
             { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+80;
            else if(cup==2)
             sum=sum+160;
            else if(cup==3)
             sum=sum+240;
        }
        }
        else if(coffee=='M'||coffee=='m')
        {
          cout<<"Enter size (S/T/G/V): ";
          cin>>size;
          if(size=='S'||size=='s')
           { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+60;
            else if(cup==2)
             sum=sum+120;
            else if(cup==3)
             sum=sum+180;
        }
          else if(size=='T'||size=='t') 
             { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+70;
            else if(cup==2)
             sum=sum+140;
            else if(cup==3)
             sum=sum+210;
        }     
          else if(size=='G'||size=='g')
             { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+80;
            else if(cup==2)
             sum=sum+160;
            else if(cup==3)
             sum=sum+240;
        } 
          else if(size=='V'||size=='v') 
             { 
             cout<<"How many cup";
           cin>>cup;
            if(cup==1)
             sum=sum+90;
            else if(cup==2)
             sum=sum+180;
            else if(cup==3)
             sum=sum+270;
        }
        }
        else
        break;
        }
        while(1);
        cout<<"Total"<<sum<<"Baht"<<endl;
        cout<<"You pay"<<sum*10/100<<endl;
        cout<<"Thank you."<<endl;
        system ("pause");
        return 0;
}

        
        
        
    
