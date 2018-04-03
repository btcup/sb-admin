//5620551318    Chisanupong Pongpheksatat  
#include<iostream>
using namespace std ;
int main()
{
    float unit,lunit,cunit,use,pay,sum=0 ;
   do{
        cout<<"Enter electricity cost per unit (bahts) : " ;
        cin>>unit ;           
        }
   while(unit<=0) ;
   do
   { 
        cout<<"Enter last unit : " ;
        cin>>lunit ;
        if(lunit==-1)
        {
        cout<<"-- End of Calculation -- "<<endl<<endl;
        cout<<"Total of Electricity charge (baths) = "<<sum<<endl;}
                   
       cout<<"Enter current unit : " ;
        cin>>cunit ;
        if(lunit/100000>1||cunit/100000>1||lunit>cunit) 
        {
        cout<<"Invalid current unit!"<<endl<<endl ; 
        }
        else
        {
        use = cunit-lunit ;
        cout<<"Units use = "<<use<<endl ;
        pay = use*unit;
        cout<<"Electricity charge (bahts) = "<<pay<<endl<<endl;
        sum = sum+pay ;
        } }
        while(lunit!=-1);
        
        
        
        
            
            
    system("pause") ;
    return 0 ;
}
    

