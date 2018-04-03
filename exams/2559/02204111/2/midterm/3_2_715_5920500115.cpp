//5920500115 Thanapol Chantaravaranon
#include <iostream>
using namespace std;
int main()
{   
    double costp,usecost,sum=0;
    int lastu,currentu,use;
    do{
    cout<<"Enter electricity cost per unit (baths) : ";
    cin>>costp;
    }
    while(costp<=0);
    cout<<endl;
    do{
    cout<<"Enter last unit : ";
    cin>>lastu;
    if(lastu==-1){
    cout<<"-- End of Calculation -- "<<endl<<endl;
    break;}
    if(lastu<0){
    cout<<"Invalid current unit!"<<endl<<endl;
    continue; }      
    if(lastu>100000){
    cout<<"Invalid current unit!"<<endl<<endl;
    continue;  
    }
    cout<<"Enter current unit : ";
    cin>>currentu;
    if(currentu==-1){
    cout<<"-- End of Calculation -- "<<endl<<endl;
    break;
    }
    if(currentu<0){
    cout<<"Invalid current unit!"<<endl<<endl;
    continue;         
    }
    if(currentu>100000){
    cout<<"Invalid current unit!"<<endl<<endl;
    continue; }
    if((lastu>currentu)){
    cout<<"Invalid current unit!"<<endl<<endl;
    continue;                      
    }
    use=currentu-lastu;
    usecost=use*costp;
    sum=sum+usecost;
    cout<<"Units used = "<<use<<endl;
    cout<<"Electricity charge (baths) = "<<usecost<<endl;
    cout<<endl;
    }
    while(true);
    if(sum!=0)
    cout<<"Total of electricity charge (baths) = "<<sum<<endl;
system("pause");
return 0;
}
