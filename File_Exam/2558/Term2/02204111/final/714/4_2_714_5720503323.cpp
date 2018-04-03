#include <iostream>
using namespace std;

int main (){
     
    float m101,m202,m303,m404;
    float tue101,tue202,tue303,tue404;
    float wed101,wed202,wed303,wed404;
    float thu101,thu202,thu303,thu404;
    float fri101,fri202,fri303,fri404;
    int   total101;
    float average;
    
    cout<<"Give the number of passengers of day 1:";
    cin>>m101>>m202>>m303>>m404;
    cout<<"Give the number of passengers of day 2:";
    cin>>tue101>>tue202>>tue303>>tue404;
    cout<<"Give the number of passengers of day 3:";
    cin>>wed101>>wed202>>wed303>>wed404;
    cout<<"Give the number of passengers of day 4:";
    cin>>thu101>>thu202>>thu303>>thu404;
    cout<<"Give the number of passengers of day 5:";
    cin>>fri101>>fri202>>fri303>>fri404;
        
    total101 = m101+tue101+wed101+thu101+fri101 ;
    average = (m101+m202+m303+m404+tue101+tue202+tue303+tue404+wed101+wed202+wed303+wed404+thu101+thu202+thu303+thu404+fri101+fri202+fri303+fri404)/20;
    
    
    
    cout<<"Total passenger for route 101 is : "<<total101<<endl;
    cout<<"The average number of passengers for all days and all routes is : "<<average<<endl;
    
    
    
    
    
    
    

    if(thu101>thu202 && thu101>thu303 && thu101>thu404)
     {cout<<"The largest number of passengers of Thu is : "<<thu101<<endl;;}
     if(thu202>thu101 && thu202>thu303 && thu202>thu404)
    {cout<<"The largest number of passengers of Thu is : "<<thu202<<endl;;}
     if(thu303>thu101 && thu303>thu202 && thu303>thu404)
     {cout<<"The largest number of passengers of Thu is : "<<thu303<<endl;;}
     if(thu404>thu101 && thu404>thu202 && thu404>thu303)
    {cout<<"The largest number of passengers of Thu is : "<<thu404<<endl;;}
     
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    system("pause");
    return 0;
    
    }
