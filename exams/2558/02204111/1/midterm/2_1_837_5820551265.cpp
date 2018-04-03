#include<iostream>
using namespace std;
int main()
{
float a=0,b=0,c=0,d=0,f=0,Discount,Total;
int i,cup;
char menu,size,member;


while(menu!=n)
{
                  
cout<<"Welcome to A Cup-with_love Coffee!!"<<endl;
cout<<"Enter your menu (E/A/L/C/M):";
cin>>menu;
cout<<"Enter size (S/T/G/V):";
cin>>size;
cout<<"How many cup? :";
cin>>cup;
cout<<"Do you want other menu? (Y/N) :";
cin>>menu;
cout<<"Are you a member? (Y/N) :";
cin>>member;

}
  
  if (member == 'y') && (member == 'Y')
  {
  
  
     if (menu == 'e') && (menu == 'E')
     {
        if(size == 's') && (size == 'S')
                {
                a=40;
                }
        if(size == 't') && (size == 'T')
                {
                a=50;
                }
        if(size == 'g') && (size == 'G')
                {
                a=60;
                }
        if(size == 'v') && (size == 'V')
                {
                a=70;
                }
     }   
     
     else if (menu == 'a') && (menu == 'A')
     {
        if(size == 's') && (size == 'S')
                {
                b=40;
                }
        if(size == 't') && (size == 'T')
                {
                b=50;
                }
        if(size == 'g') && (size == 'G')
                {
                b=60;
                }
        if(size == 'v') && (size == 'V')
                {
                b=70;
                }
     }  
     
     else if (menu == 'c') && (menu == 'C')
     {
        if(size == 's') && (size == 'S')
                {
                c=50;
                }
        if(size == 't') && (size == 'T')
                {
                c=60;
                }
        if(size == 'g') && (size == 'G')
                {
                c=70;
                }
        if(size == 'v') && (size == 'V')
                {
                c=80;
                }
     }    
     
     else if (menu == 'l') && (menu == 'L')
     {
        if(size == 's') && (size == 'S')
                {
                d=50;
                }
        if(size == 't') && (size == 'T')
                {
                d=60;
                }
        if(size == 'g') && (size == 'G')
                {
                d=70;
                }
        if(size == 'v') && (size == 'V')
                {
                d=80;
                }
     }   
     
     else if (menu == 'm') && (menu == 'M')
     {
        if(size == 's') && (size == 'S')
                {
                f=60;
                }
        if(size == 't') && (size == 'T')
                {
                f=70;
                }
        if(size == 'g') && (size == 'G')
                {
                f=80;
                }
        if(size == 'v') && (size == 'V')
                {
                f=90;
                }
     }   

      //Discount =
      Total = (a+b+c+d+f)-Discount;
  
}
 
--------------------------------------------
       
       else
       {
     if (menu == 'e') && (menu == 'E')
     {
        if(size == 's') && (size == 'S')
                {
                a=40;
                }
        if(size == 't') && (size == 'T')
                {
                a=50;
                }
        if(size == 'g') && (size == 'G')
                {
                a=60;
                }
        if(size == 'v') && (size == 'V')
                {
                a=70;
                }
     }   
     
     else if (menu == 'a') && (menu == 'A')
     {
        if(size == 's') && (size == 'S')
                {
                b=40;
                }
        if(size == 't') && (size == 'T')
                {
                b=50;
                }
        if(size == 'g') && (size == 'G')
                {
                b=60;
                }
        if(size == 'v') && (size == 'V')
                {
                b=70;
                }
     }  
     
     else if (menu == 'c') && (menu == 'C')
     {
        if(size == 's') && (size == 'S')
                {
                c=50;
                }
        if(size == 't') && (size == 'T')
                {
                c=60;
                }
        if(size == 'g') && (size == 'G')
                {
                c=70;
                }
        if(size == 'v') && (size == 'V')
                {
                c=80;
                }
     }    
     
     else if (menu == 'l') && (menu == 'L')
     {
        if(size == 's') && (size == 'S')
                {
                d=50;
                }
        if(size == 't') && (size == 'T')
                {
                d=60;
                }
        if(size == 'g') && (size == 'G')
                {
                d=70;
                }
        if(size == 'v') && (size == 'V')
                {
                d=80;
                }
     }   
     
     else if (menu == 'm') && (menu == 'M')
     {
        if(size == 's') && (size == 'S')
                {
                f=60;
                }
        if(size == 't') && (size == 'T')
                {
                f=70;
                }
        if(size == 'g') && (size == 'G')
                {
                f=80;
                }
        if(size == 'v') && (size == 'V')
                {
                f=90;
                }
     }   
     
      //Discount = 
      Total = (a+b+c+d+f)-Discount;
  }


cout<<"Total"<< a+b+c+d+f <<"Baht"<<endl;
cout<<"Discount"<< Discount <<"Baht"<<endl;
cout<<"You pay"<< Total <<"Baht"<<endl;
cout<<"Thank you"<<endl;

system ("pause");
return 0;
}
