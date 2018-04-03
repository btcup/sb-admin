//5920501511 Maswimol
#include<iostream>
using namespace std;
int main()
{
    char a,b;double x,y,z,w;
    cout<<"Enter objective (Living, Agriculture):";cin>>a;
    cout<<"Enter living type (Main, Second):";cin>>b;
    cout<<"Enter land cost (million):";cin>>x;
    cout<<"Enter builing cost (million):";cin>>y;
    cout<<"Builing age :";cin>>w;
    if(x!=0)
                        {if(x<50)
                        {        cout<<"Your estate cost is"<<x<<"million bath"<<endl;
                                 cout<<"The land tax is exemption";}
                                 else if (x>=50&&x<100)
                                 cout<<"Your estate cost is"<<x<<"million bath"<<endl;
                                 else if(x>=100)
                                 cout<<"Your estate cost is"<<x<<"million bath"<<endl;}
                        {if(x<5)
                                 {cout<<"Your estate cost is"<<x<<"million bath"<<endl;}
                                 else if (x>=5&&x<10)
                                 {cout<<"Your estate cost is"<<x<<"million bath"<<endl;}
                                 else if(x>=10)
                                 {cout<<"Your estate cost is"<<x<<"million bath"<<endl;}
                         if(x<40)
                                  {cout<<"Your estate cost is"<<x<<"million bath"<<endl;
                                   cout<<"The land tax is exemption"<<endl;}
                                   else if(x>=40&&x<80)
                                   {cout<<"Your estate cost is"<<x<<"million bath"<<endl;}
                                   else if(x>=80)
                                   {cout<<"Your estate cost is"<<x<<"million bath"<<endl;}
    
     if(a=='L')
    {         if(b=='M')
                        
              if(b=='S')                     
    }
   else(a=='A');
                
    
    
   
    
    //cout<<"The land tax is "<<"million bath";
    
    
    
    system("pause");
    return 0;
    
}

