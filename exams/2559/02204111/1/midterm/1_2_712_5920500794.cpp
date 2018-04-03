#include<iostream>
using namespace std;
int main()
{
    char a,b;//a=living,b=main,second
    float x,v,y,z;
    cout<<"Enter objective (Living,Agriculture):";
    cin>>a;
    
         if(a=='L') {
         
    cout<<"Enter living type (Main,Second):";
    cin>>b; //b=main,second
    cout<<"Enter land cost (million):";
    cin>>x; // x=land cost
    cout<<"Enter building cost (million):";
    cin>>v; // v=building cost
    cout<<"Building age:";
    cin>>y; // y=building age
    
    
         //if(y>1&&y<15) 
         //v=v-((v*12/100)*y);
         
         //if(y>16&&y<=40)
         //v=v-((v*25/100)*y);
         //if(y>41)
        // v=v-(v*65/100);
         
          if(b=='M')
          {
             if(x+v<50) {
              z=x+v;
             cout<<"Your estate cost is"<<z<<endl; 
             }
             if(x+v>=50&&x+v<100) {               
              z=x+v+((x+v)*6/100);
              cout<<"Your estate cost is"<<z<<endl;
              }
             if(x+v>100) {
              z=x+v+((x+v)*12/100);
              cout<<"Your estate cost is"<<z<<endl;
              } 
             
              
              }  
             
           if(b=='S')
           {
             if(x+v<5) {
               z=x+v+((x+v)*30/100);
              cout<<"Your estate cost is"<<z<<endl;        
              }
             if(x+v>=5&&x+v<10)  {
               z=x+v+((x+v)*50/100);
               cout<<"Your estate cost is"<<z<<endl; 
               }                 
             if(x+v>=10)  {
               z=x+v+((x+v)*90/100);
               cout<<"Your estate cost is"<<z<<endl;               
               }  
               }   
               }
           else
          if(a=='A') 
          {
          cout<<"Enter land cost (million):";
          cin>>x; 
                 
              if(x<40) {
              z=x+v;
              cout<<"Your estate cost is"<<z<<" "<<"million baht"<<endl; 
             }
              if(x>=40&&x+v<80) {               
              z=x+v+((x+v)*4/100);
              cout<<"Your estate cost is"<<z<<" "<<"million baht"<<endl;
              }
             if(x>80) {
              z=x+v+((x+v)*8/100);
              cout<<"Your estate cost is"<<z<<" "<<"million baht"<<endl;      
              }
           }
             
           
    
    
    
    
    system("pause");
    return 0;
    }
