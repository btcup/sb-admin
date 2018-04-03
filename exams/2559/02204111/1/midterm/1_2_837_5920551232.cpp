//5920551232 Mr. suwapat maisang
#include <iostream>
using namespace std;
int main()
{
    char x,y;
    int z,t;
  cout<<"Enter odjective (Living, Agriculture):";  
  cin>>x;
   if(x=='L')
   {
          cout<<"Enter living type (Main, Second):";
          cin>>y; 
          if(y=='M')
          {
           cout<<"Enter land cost (million) :" ;        
      cin>>z;
      cout<<"Building age :";
      cin>>t;
              if(z<50){
              cout<<"Your estate cost is"<< z<<"million bath"<<endl;
              cout<<"The land tax is exemption.";
              }
              
              if(z>=50&&z<=100){
              cout<<"Your estate cost is"<< z*0.06<<"million bath"<<endl;
              cout<<"The land tax is exemption.";
               }
               if(z>100){
               cout<<"Your estate cost is"<< z*0.12<<"million bath"<<endl;
               cout<<"The land tax is exemption."; 
             }
          } 
          else 
          {
            cout<<"Enter land cost (million) :" ;        
      cin>>z;
      cout<<"Building age :";
      cin>>t; 
        if(z<5){
              cout<<"Your estate cost is"<< z*0.3<<"million bath"<<endl;
              cout<<"The land tax is exemption.";
              }
              
              if(z>=5&&z<=10){
              cout<<"Your estate cost is"<< z*0.6<<"million bath"<<endl;
              cout<<"The land tax is exemption.";
               }
               if(z>10){
               cout<<"Your estate cost is"<< z*0.9<<"million bath"<<endl;
               cout<<"The land tax is exemption.";   
          }
              
   } 
   else
   {
      cout<<"Enter land cost (million) :" ;        
      cin>>z;
      if(z<40){
      cout<<"Your estate cost is"<< z<<"million bath"<<endl;
      cout<<"The land tax is exemption.";
              }
              
      if(z>=40&&z<=80){
      cout<<"Your estate cost is"<< z*0.04<<"million bath"<<endl;
      cout<<"The land tax is exemption.";
      }
      if(z>80){
         cout<<"Your estate cost is"<< z*0.08<<"million bath"<<endl;
      cout<<"The land tax is exemption."; 
      }
}        
   
    system ("pause");
       
reten 0;
}
