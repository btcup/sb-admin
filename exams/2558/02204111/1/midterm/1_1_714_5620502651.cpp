#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    
    cout<<"Please input usage : ";
    cin>>a;
    cout<<"Please input voltage : ";
    cin>>b;
    if(a>0)
    {
     if(b>22 && b< 33)
    {
            cout<<"Electricity cost :" <<a*2.4649 <<endl;
            cout<<"service : 228.17 "<<endl;
            cout<<"ft :"<<(0.4638*a)<<endl;
            cout<<" vat 7% :"<<0.07*(a*2.4649+228.17+0.4638*a)<<endl;
            cout<<" total cost : "<<ceil((a*2.4649)+228.17+(0.4638*a)+(0.07*(a*2.4649+228.17+0.4638*a)))<<"Bath";
           
    }
     if(b<22)
    {
            if(a>0 && a<=150)
            {
                 cout<<"Electricity cost 0-150:" <<(a*1.8047 )<<endl;  
                 cout<<"service : 40.90 "<<endl;
                 cout<<"ft : "<<a*0.4638<< endl;
                 cout<<" vat 7% :"<<0.07*(a*1.8047 +40.90+a*0.4638 )<<endl;
                 cout<<" total cost : "<<ceil((a*1.8047 )+(40.90)+(a*0.4638)+(0.07*(a*1.8047 +40.90+a*0.4638 )) )<<"Bath"<<endl;
            }
            if(a>150 && a<=400)
            {
                 cout<<"Electricity cost 0-150:" <<150*1.8047 <<endl;   
                 cout<<"Electricity cost 151-400:" <<50*2.7781 <<endl;
                 cout<<"service : 40.90 "<<endl;
                 cout<<"ft : "<<a*0.4638<< endl;
                 cout<<" vat 7% ="<<(0.07*((150*1.8047)+(50*2.7781)+(a*0.4638)+(40.90)))<<endl;
                 cout<<" total cost : "<<ceil((150*1.8047)+(50*2.7781)+(40.90)+(a*0.4638)+((0.07*((150*1.8047)+(50*2.7781)+(a*0.4638)+(40.90))))  )<<endl;
            }
            if(a>400) 
            {
                 cout<<"Electricity cost 0-150:" <<150*1.8047 <<endl;   
                 cout<<"Electricity cost 151-400:" <<250*2.7781 <<endl;
                 cout<<"Electricity cost 401->:" <<50*2.9780<<endl;
                 cout<<"service : 40.90 "<<endl;
                 cout<<"ft : "<<a*0.4638<< endl;
                 cout<<" vat 7% ="<<(0.07*((150*1.8047)+(250*2.7781)+(50*2.9780)+(40.90)+(a*0.4638)))<<endl;
                 cout<<" total cost : "<<ceil(150*1.8047)+(250*2.7781)+(50*2.9780)+(40.90)+(a*0.4638)+((0.07*((150*1.8047)+(250*2.7781)+(50*2.9780)+(40.90)+(a*0.4638))));
            } 
    
  
    }   
    }
    else
    {
    cout<<"Invalid input !!!"<<endl;
    }  
    system("pause");
    return 0;
}
