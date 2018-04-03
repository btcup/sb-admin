#include <iostream>
using namespace std;
int main()
{
    char mem,other,menu,size,E,A,L,C,M,S,T,G,V,e,a,l,c,m,s,t,g,v,y,n,Y,N;
    int How,i=0,sum=0,pay=0,Dis=0;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    cout<<"Enter your menu (E/A/L/C/M): ";
    cin>>menu;
    cout<<"Enter size (S/T/G/V): ";
    cin>>size;
    cout<<"How many cups? : ";
    cin>>How;
    cout<<"Do you want other menu? (Y/N) : ";
    cin>>other;
   
    while(other =='y'||other =='Y')
 {   
   
    cout<<"Enter your menu (E/A/L/C/M): ";
    cin>>menu;
    cout<<"Enter size (S/T/G/V): ";
    cin>>size;
    cout<<"How many cups? : ";
    cin>>How;
    cout<<"Do you want other menu? (Y/N) : ";
    cin>>other;
    i++;
}
   
    if(menu=='e'||menu=='E'||menu=='a'||menu=='A')
      { 
       if(size=='s'||size=='S')
       sum+=40*How;
       else if(size=='t'||size=='T')
       sum+=50*How;
       else if(size=='g'||size=='G')
       sum+=60*How;
       else
       sum+=70*How;}
       
    else if(menu=='c'||menu=='C'||menu=='l'||menu=='L')
    { if(size=='s'||size=='S')
       sum+=50*How;
       else if(size=='t'||size=='T')
       sum+=60*How;
       else if(size=='g'||size=='G')
       sum+=70*How;
       else
       sum+=80*How;}
       
    else
    { if(size=='s'||size=='S')
       sum+=60*How;
       else if(size=='t'||size=='T')
       sum+=70*How;
       else if(size=='g'||size=='G')
       sum+=80*How;
       else
       sum+=90*How;}
   

    cout<<"Are you a member? (Y/N) :";  
    cin>>mem;
   
    cout<<"Total "<<sum<<" Bath"<<endl;
    
    if(mem=='y'||mem=='Y')
    {
    Dis=(int)(sum*0.1); 
    cout<<"Discount "<<Dis<<" Bath"<<endl;
    pay=sum-Dis;
    cout<<"You pay "<<pay<<" Bath"<<endl;
}
    else
    {cout<<"Discount 0 Bath "<<endl;
    cout<<"You pay "<<sum<<" Bath"<<endl;
}
    cout<<"Thank you."<<endl;   
    
    system ("pause");
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
