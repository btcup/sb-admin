//5920552077thanapat wattanabunsiri
#include<iostream>
using namespace std;
int main()
{
    float a,b,d,c,money,g,h;
    
    char name;
    cout<<"Type of vehicle :";cin>>name; 
    
    cout<<"Arrival time :";cin>>a;
    cout<<"Leave time :";cin>>b;
    c=b-a;
    cout<<int(c/1)<<"hours and"<<int(c*100)%100<<"minutes"<<endl;
    if(c*100==0)
    { h=int(c+0);}
             else
             {h=int(c+1);}
    if(name=='C')
    {           
                 
                 if(c<=2)
                 g=0;
                 else if(c>2||c<=5)
                 {
                 g=(h-2)*30;}
                 else if(c>5||c<=8)
                 {
                 g=30*3+(h-5)*50;}
                 else if(c>8)
                  {g=500;}
   if(name=='M')
    {
        
                 if(c<=3)
                 g=0;
                 else if(c>4||c<=7)
                 {
                 g=(h-4)*10;}
                 
                  else if(c>7)
                 {g=150;}
                  }
                  }
                  
                 cout<<"You have to pay"<<g<<"bath";
    
             
    
    

    
    
    
    
    
    system("pause");
    return 0;
}
