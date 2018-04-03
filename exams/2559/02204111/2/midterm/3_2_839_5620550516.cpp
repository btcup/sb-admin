//5620550516 Thanawat Sittirot
#include<iostream>
using namespace std;
int main(){
    double a,b,c,d,e,f,sum=0,g=99999;
    for(;;){

            cout<<"Enter electricity cost per unit (bahts) : ";cin>>a;
            if(a<=0)
            continue;
            else{
                 for(;;){
                 cout<<"Enter last unit: ";cin>>b;
                 if(b==-1){
                                cout<<"-- End of Calculation --"<<endl;
                                break;
                      }
                      if((g-b)<0){
                                  cout<<"Invalid last unit!"<<endl;
                                  continue;
                                  } 
                 if(b<0){
                 cout<<"Invalid last unit!"<<endl;
                 continue;
                 }
                 else{
                      cout<<"Enter current unit : ";cin>>c;
                      if(c==-1){
                                cout<<"-- End of Calculation --"<<endl;
                                break;
                      }
                      if((g-c)<0){
                                  cout<<"Invalid current unit!"<<endl;
                                  continue;
                                  }  
                      if(c<b){
                      cout<<"Invalid current unit!"<<endl;  
                      continue;
                           
                 }
                      else{
                          cout<<"Units used = "<<c-b<<endl;
                          f=(c-b)*a;
                          cout<<"Electricity charge (bahts) = "<<f<<endl;
                          sum=sum+f; 
                      }
                 }     
            }     
}
break;
}     
cout<<"Total of Electricity charge (bahts) = "<<sum<<endl;       
    system("pause");
    return 0;
}    
