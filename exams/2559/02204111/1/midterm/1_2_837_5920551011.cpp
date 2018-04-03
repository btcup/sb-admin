// 5920551011 Napongthon Punchong

#include<iostream>
using namespace std;
int main()
{
    
    char living,main;
    double land,buliding,age;
    cout<<"Enter objective (Living Agriculture) : " ;
    cin>>living;
    
    
    if(living=='L')
    {
   cout<<"Enter living type (Main, Second) : " ;
    cin>>main;
    cout<<"Enter land cost (million) : " ;
    cin>>land;
    cout<<"Enter buliding cost (millon) : ";
    cin>>buliding;
    cout<<"Building age : " ;
    cin>>age;
    
                   if(main=='M')
                   {            
                                if(land<50)
                                cout<<"Your estate cost is "<<land+8.085<<"("<<land<<"+"<<8.085<<") million bath "  <<endl;
                                cout<<"The land tax is"<<land<<"million bath ";
                                if (land>=50&&land<100)
                                cout<<"Your estate cost is "<<land+land<<"("<<land<<"+"<<land<<") million bath "  <<endl;
                                cout<<"The land tax is"<<  land<<"million bath ";
                             if(land>=100)
                                cout<<"Your estate cost is "<<land+land<<"("<<land<<"+"<<land<<") million bath "  <<endl;
                                cout<<"The land tax is"<<  land<<"million bath ";
                                
                                
                                 }
                   else
                   {
                                if(land<5)
                                cout<<"Your estate cost is "<<land+land<<"("<<land<<"+"<<land<<") million bath "  <<endl;
                                cout<<"The land tax is"<<  land<<"million bath ";
                                if(land>=5&&land<10)
                                cout<<"Your estate cost is "<<land+land<<"("<<land<<"+"<<land<<") million bath "  <<endl;
                                cout<<"The land tax is"<<  land<<"million bath ";
                                if(land>=10)
                                cout<<"Your estate cost is "<<land+land<<"("<<land<<"+"<<land<<") million bath "  <<endl;
                                cout<<"The land tax is"<<  land<<"million bath ";
                              
                                }
    }
    else
    cout<<"Enter land cost (million) : ";
    cin>>main;
    
                 
                                if(land<40)
                                cout<<"Your estate cost is "<<main<< "million bath "  <<endl;
                                cout<<"The land tax is million bath ";
                                if(land>=40&&land<80)
                                cout<<"Your estate cost is "<<main<< "million bath "  <<endl;
                                cout<<"The land tax is million bath ";
                                if(land>=80)
                                cout<<"Your estate cost is "<<main<< "million bath "  <<endl;
                                cout<<"The land tax is million bath ";
                                
    
    
                                
                                
                                           
    
    
    
    
    system("pause");
    return 0;
}

