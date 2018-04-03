//5920551445 Thanasin Wettayavigromrat
#include <iostream>
using namespace std;
int main()
{
    int y;
    char a,b;
    float c,d,o,sum;
    cout<<"Enter objective (Living, Agriculture) : ";
    cin>>a;
    if(a=='L')
    {
              cout<<"Enter living type (Main, Second) : ";
              cin>>b;
              if(b=='M')
              {
                        cout<<"Enter land cost (million) : ";
                        cin>>c;
                        cout<<"Enter building cost (million) : ";
                        cin>>d;
                        cout<<"Building age : ";
                        cin>>y;
                        if(y>=1&&y<=15)
                        {
                                       o=d-d*1.2*y/100;
                                       sum=c+o;
                                       }
                        else if(y>=16&&y<=40)
                        {
                                             o=d-d*(18+2.5*(y-15))/100;
                                             sum=c+o;
                                             }
                        else 
                        {
                             o=d-d*65/100;
                             sum=c+o;
                             }
                        cout<<"Your estate cost is "<<sum<<" ("<<c<<"+"<<o<<") million bath."<<endl;
                        if(sum<50)
                        {
                                  cout<<"The land tax is exemption."<<endl;
                                  }
                        else if(sum>=50&&sum<100)
                        {
                                  cout<<"The land tax is "<<sum*0.06/100<<" million bath"<<endl;
                                  }
                        else
                        {
                                  cout<<"The land tax is "<<sum*0.12/100<<" million bath"<<endl;
                                  }                        
                                  }                    
              else
              {
                        cout<<"Enter land cost (million) : ";
                        cin>>c;
                        cout<<"Enter building cost (million) : ";
                        cin>>d;
                        cout<<"Building age : ";
                        cin>>y;
                        if(y>=1&&y<=15)
                        {
                                       o=d-d*1.2*y;
                                       sum=c+o;
                                       }
                        else if(y>=16&&y<=40)
                        {
                                             o=d-d*(18+2.5*(y-15));
                                             sum=c+o;
                                             }
                        else 
                        {
                             o=d-d*65/100;
                             sum=c+o;
                             }
                        cout<<"Your estate cost is "<<sum<<" ("<<c<<"+"<<o<<") million bath."<<endl;
                        if(sum<5)
                        {
                                  cout<<"The land tax is "<<sum*0.3/100<<" million bath"<<endl;
                                  }
                        else if(sum>=5&&sum<10)
                        {
                                  cout<<"The land tax is "<<sum*0.6/100<<" million bath"<<endl;
                                  }
                        else
                        {
                                  cout<<"The land tax is "<<sum*0.9/100<<" million bath"<<endl;
                                  }                        
                                  }                    
                                  }
    else
    {
               cout<<"Enter land cost (million) : ";
               cin>>c;
               sum=c;
               cout<<"Your estate cost is "<<sum<<" million bath."<<endl;
               if(sum<40)
                        {
                                  cout<<"The land tax is exemption."<<endl;
                                  }
               else if(sum>=40&&sum<80)
                        {
                                  cout<<"The land tax is "<<sum*0.04/100<<" million bath"<<endl;
                                  }
               else
                        {
                                  cout<<"The land tax is "<<sum*0.08/100<<" million bath"<<endl;
                                  }  
                                  }
    system("pause");
    return 0;
}                                                                                   
                        
                                       
                        
                        
