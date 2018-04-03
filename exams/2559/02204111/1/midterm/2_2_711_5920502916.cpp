#include <iostream>
using namespace std;
int main()
{
    float landcost,tax,building;
    int age;
    char x,t;
    cout<<"Enter objective (Utilization,Waste): ";
    cin>>x;
    
    if(x=='U')
    {
    cout<<"Enter utilization type (Business,Agriculture): ";
    cin>>t;
           if(t=='B')
           {
             cout<<"Enter land cost(milion): ";
             cin>>landcost;
             cout<<"Enter building cost(milion): ";
             cin>>building;
             cout<<"Building age: ";
             cin>>age;
             if(landcost<20)
             {
                            if(age>=1&&age<=10)
                            cout<<"Your estate cost is "<<landcost*0.3/100+building-building*1.5/100<<" million bath."<<endl;
                            cout<<"The land tax is "<<tax<<endl;
                                                     
             }
             else if(landcost>=20&&landcost<50)
             {
                            if(age>=11&&age<=40)
                            cout<<"Your estate cost is "<<landcost*0.5/100+building-building*1.8/100<<" million bath."<<endl;
                            cout<<"The land tax is "<<tax<<endl;
             }
             else if(landcost>=50)
             {
                            if(age>=41)
                            cout<<"Your estate cost is "<<landcost*0.7/100+building-70.8*1.5/100<<" million bath."<<endl;
                            cout<<"The land tax is "<<tax<<endl;
             }
           }
           else if(t=='A')
           {
             cout<<"Enter land cost(milion): ";
             cin>>landcost;
             cout<<"Enter building cost(milion): ";
             cin>>building;
             cout<<"Building age: ";
             cin>>age;
             if(landcost<=20)
             {
                            if(age>=1&&age<=10)
                            cout<<"Your estate cost is "<<landcost*0.3/100+building-building*1.5/100<<" million bath."<<endl;
                            cout<<"The land tax is "<<tax<<endl;
             }
             else if(landcost>=20&&landcost<50)
             {
                            if(age>=11&&age<=40)
                            cout<<"Your estate cost is "<<landcost*0.06/100+building-building*1.8/100<<" million bath."<<endl;
                            cout<<"The land tax is "<<tax<<endl;
             }
             else if(landcost>=50)
             {
                            if(age>=41)
                            cout<<"Your estate cost is "<<landcost*0.12/100+building-70.8/100<<" million bath."<<endl;
                            cout<<"The land tax is "<<tax<<endl;
             }
           }
           
    }
    
    
    else if(x=='W')
    {
      cout<<"land cost (million): ";
      cin>>landcost;
      cout<<"lang age: ";
      cin>>age;
      if(age<=3&&age>=1)
      {
      cout<<"Your estate cost is "<<landcost<<" million bath."<<endl;
      cout<<"The land tax is exemption"<<endl;
      }
      else if(age>=4&&age<=6)
      {
      cout<<"Your estate cost is "<<landcost<<" million bath."<<endl;
      tax=(landcost*1.2)/100;
      cout<<"The land tax is "<<tax<<endl;   
      }
      else if(age>=7)
      {
      cout<<"Your estate cost is "<<landcost<<" million bath."<<endl;
      tax=(landcost*2.4)/100;
      cout<<"The land tax is "<<tax<<" milion bath"<<endl;       
      }
    }
    system("pause");
    return  0;
}
