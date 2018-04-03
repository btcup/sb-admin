#include<iostream>//5920551241 Name Jetanon Lastname Yaemsin
#include<cmath>
using namespace std;
int main ()
{
    char f,g,h;
    int m,n,o,p,a;
    cout<<"Enter objective (Utilization,Waste) :";
    cin>>f;
    cout<<"Enter Utilization type (Business,Agriculture) :";
    cin>>g;
    cout<<"Enter land cost (million) :";
    cin>>m;
    cout<<"Enter buliding cost (million) :";
    cin>>n;
    cout<<"Buliding age :";
    cin>>o;
    if (f =='U')
    {
          if (g=='B')
          {
          cout <<"Your estate cost is ";
          a= m + (n-(n*(p/100)))
    
                    if (a <20)
                    cout<<"The land tax is "<<(a*0.3)/100<<"millon bath"<<endl;
                    else ((a<=50)&&(a>=20))
                    cout <<"The land tax is "<< (a*0.5)/100<<"million bath"<<endl;  
                    else
                    cout <<"The land tax is "<< (a*0.5)/100<<"million bath"<<endl;
          } 
          else if (g=='A')
          {
                    if (a <30)
                    cout<<"The land tax is exemption"<<endl
                    else ((a<=60)&&(a>=30))
                    cout <<"The land tax is "<< (a*0.06)/100<<"million bath"<<endl;  
                    else
                    cout <<"The land tax is "<< (a*0.12)/100<<"million bath"<<endl;
                    }          
    else if (f=='W')
    {
               if ((o>=1)&&(o<=3))
                 { 
                  cout<<"Your estate cost"<<m<<"million bath"<<endl;
                  cout<<"The land tax is exemption"<<endl;
                  }
               else if ((o>=4)&&(o<=6))
                    {
                    cout<<"Your estate cost"<<m*1.2<< million bath"<<endl;                  
                    cout <<"The land tax is "<< (m*1.2)/100<<"million bath"<<endl; 
                    }
               else 
                    {
                         cout<<"Your estate cost"<<m*2.4<< million bath"<<endl;
                         cout <<"The land tax is "<< (m*2.4)/100<<"million bath"<<endl; 
                    }
    } 
    system ("pause");
    return 0;
}    
    
          
               
          
          
          
                  

           
                      
                     
                
                
                
                
          
          
    
