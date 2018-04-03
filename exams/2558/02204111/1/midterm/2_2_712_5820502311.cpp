#include <iostream>
using namespace std;
int main()
{
    char f;
    char l;
    int h,w,d;
    int a,x;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter (H * W * D):";
    cin>>h>>w>>d;
    cout<<"Please select fioor tile...(A/B/C) :";
    cin>>f;
    cout<<"Please select wall tile...(A/B/C) :";
    cin>>l;
    if(f=='a' || f=='A')
    {
          x=(w*d*100)/(30*30);
          cout<<"Number of floor tiles:"<<x<<"-->price = "<<x*55<<"Bath"<<endl;            
    }
    else if(f=='b' || f=='B')
    {
         x=(w*d*100)/(45*45);
         cout<<"Number of floor tiles:"<<x<<"-->price = "<<x*80<<"Bath"<<endl;
    } 
    else if(f=='c' || f=='C')
    {
         x=(w*d*100)/(60*60);
         cout<<"Number of floor tiles:"<<x<<"-->price = "<<x*90<<"Bath"<<endl;
    } 
    
    
    
    if(l=='a' || l=='A')
    {
               a=(((w*h*100)*2)+((h*d*100)*2))/(20*20);
              cout<<"Number of floor tiles:"<<a<<"-->price = "<<a*17<<"Bath"<<endl;            
    }
    else if(l=='b' || l=='B')
    {
           a=(((w*h*100)*2)+((h*d*100)*2))/(20*30);
         cout<<"Number of floor tiles:"<<a<<"-->price = "<<a*32<<"Bath"<<endl;
    } 
    else if(l=='c' || l=='C')
    {
          a=(((w*h*100)*2)+((h*d*100)*2))/(30*30);
         cout<<"Number of floor tiles:"<<a<<"-->price = "<<a*50<<"Bath"<<endl;
    } 
    
    cout<<"Total price :"<<a<<x<< "="<<a+x<<"Bath";
    
 
    system ("pause");
    return 0;
} 
