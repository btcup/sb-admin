// 5920502959 Suriya Muangthonglang
#include <iostream>
using namespace std;
int main ()
{
    char objective,type;
        float land,building,age,sum,years;
    cout<<"Enter objective (Living,Agricuture) : ";
    cin>>objective;
    if (objective=='L')
    {
       cout<<"Enter living type (Main, Second) : ";
       cin>>type; 
                  if(type=='M')
                  {
                     cout<<"Enter land cost (million) :";
                     cin>>land; 
                                if(land<50)
                                {
                                   cout<<"Enter building cost (million) :";
                                   cin>>building;
                                   cout<<"Building age :";
                                   cin>>age;
                                            if (age>=1&&age<=15)
                                            {
                                               sum=building-((building/100)*(1.2*age));
                                               cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";
                                            }
                                            else if (age>=16&&age<=40)
                                            {
                                                years =age-15;
                                                years =years*2.5;
                                                sum=building-((building/100)*(years+18));
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";    
                                            }
                                            else 
                                            {
                                                sum=building-((building/100)*65);
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";  
                                            }          
                                }
                                if (land>=50&&land<50)
                                {
                                   cout<<"Enter building cost (million) :";
                                   cin>>building;
                                   cout<<"Building age :";
                                   cin>>age;
                                   land=(land/100)*0.06;
                                            if (age>=1&&age<=15)
                                            {
                                               sum=building-((building/100)*(1.2*age));
                                               cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";
                                            }
                                            else if (age>=16&&age<=40)
                                            {
                                                years =age-15;
                                                years =years*2.5;
                                                sum=building-((building/100)*(years+18));
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";    
                                            }
                                            else 
                                            {
                                                sum=building-((building/100)*65);
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";  
                                            }          
                                            
                                          
                                } 
                                if (land>=100)
                                {
                                   cout<<"Enter building cost (million) :";
                                   cin>>building;
                                   cout<<"Building age :";
                                   cin>>age;
                                   land=(land/100)*0.12;
                                                        if (age>=1&&age<=15)
                                            {
                                               sum=building-((building/100)*(1.2*age));
                                               cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";
                                            }
                                            else if (age>=16&&age<=40)
                                            {
                                                years =age-15;
                                                  years =years*2.5;
                                                sum=building-((building/100)*(years+18));
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";    
                                            }
                                            else 
                                            {
                                                sum=building-((building/100)*65);
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";  
                                            }                      
                                }                                                      
                  }
                  if(type=='S')
                  {
                      cout<<"Enter land cost (million) :";
                      cin>>land;
                                if(land<5)
                                {
                                cout<<"Enter building cost (million) :";
                                    cin>>building;
                                    cout<<"Building age :";
                                    cin>>age;
                                    land=(land/100)*0.3;
                                    if (age>=1&&age<=15)
                                            {
                                               sum=building-((building/100)*(1.2*age));
                                               cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";
                                            }
                                            else if (age>=16&&age<=40)
                                            {
                                                years =age-15;
                                                years =years*2.5;
                                                sum=building-((building/100)*(years+18));
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";    
                                            }
                                            else 
                                            {
                                                sum=building-((building/100)*65);
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";  
                                            } 
                                                 
                                }
                                if (land>=5&&land<10)
                                
                                {             
                                   cout<<"Enter building cost (million) :";
                                   cin>>building;
                                   cout<<"Building age :";
                                    cin>>age;
                                    land=(land/100)*0.6;
                                           if (age>=1&&age<=15)
                                            {
                                               sum=building-((building/100)*(1.2*age));
                                               cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";
                                            }
                                            else if (age>=16&&age<=40)
                                            {
                                                years =age-15;
                                                years =years*2.5;
                                                sum=building-((building/100)*(years+18));
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";    
                                            }
                                            else 
                                            {
                                                sum=building-((building/100)*65);
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";  
                                            } 
                                } 
                                if (land>=10)
                                {
                                   cout<<"Enter building cost (million) :";
                                   cin>>building; 
                                   cout<<"Building age :";
                                    cin>>age;
                                    land=(land/100)*0.9;
                                           if (age>=1&&age<=15)
                                            {
                                               sum=building-((building/100)*(1.2*age));
                                               cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";
                                            }
                                            else if (age>=16&&age<=40)
                                            {
                                                years =age-15;
                                                years =years*2.5;
                                                sum=building-((building/100)*(years+18));
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";    
                                            }
                                            else 
                                            {
                                                sum=building-((building/100)*65);
                                                cout<<"Your estate cost is "<<land+sum<<"("<<land<<"+"<<sum<<")" <<"million bath";  
                                            }            
                                }              
                  }                                                          
    }
    if (objective=='A')
    {
           cout<<"Enter land cost (million) :";
           cin>>land;
                     if(type=='M')
                  {
                     cout<<"Enter land cost (million) :";
                     cin>>land; 
                                if(land<40)
                                {
                                    cout<<"Your estate cost is "<<land<<"million bath";
                                    cout<<"The land tax is exemption";
                                           
                                }
                                else if (land>=40&&land<80)
                                {
                                   cout<<"Your estate cost is "<<land<<"million bath";
                                    cout<<"The land tax is exemption";
                                           
                                } 
                                else
                                {
                                     cout<<"Your estate cost is "<<land<<"million bath";
                                    cout<<"The land tax is exemption";
                                                    
                                }                                                      
                  }
                        
    }
    system("pause");
    return 0;
}
