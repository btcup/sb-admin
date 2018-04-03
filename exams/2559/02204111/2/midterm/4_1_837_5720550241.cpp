//5720550241 Teerachat jaimun
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char type;
    int b,sum;
    float a,l,h;
    h=l-a;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle): ";
    cin>>type;
    cout<<"Arrival time : ";cin>>a;
    cout<<"Leave time : ";cin>>l;
    if(l>a)
    {
       if(type=='M')
       {
           if(h<=3){
              b=0;      
                  }    
          else if(h>3&&h<=7){
              b=(ceil(h)-3)*10;         
                       }
                else if (h>7){
                     b=150;
                     }
                }
                else if(type=='C'){
                     if(h<=2){
              b=0;      
                  }    
          else if(h>2&&h<=5){
              b=(ceil(h)-2)*30;         
                       }
               else if(h>5&&h<=8){
                    b=(ceil(h)-5)*50;
                    } 
                else if (h>7){
                     b=500;
                     }
                }
                cout<<" hours and minutes"<<endl;
                  cout<<"You have to pay "<<b<<"bath"<<endl;  
                       }
                       else{
                            cout<<"You can't leave before arrival time"<<endl;
                            } 
    system("pause");
    return 0;

}
