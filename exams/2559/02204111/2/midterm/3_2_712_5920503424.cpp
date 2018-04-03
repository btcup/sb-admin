//5920503424 Tanaluk Chueaphan
#include<iostream>
using namespace std;
int main()
{
    float x,y,z,w,sum;
    do{   
           cout<<"Enter electricity cost per unit(bath):";
           cin>>x;
    }while(x<1);
    do{        
           cout<<"Enter last unit:";
           cin>>y;
           cout<<"Enter current unit:";
           cin>>z;
           if(z>=y){
                    w=((z-y)*x);
                   cout<<"Unit used = "<<(z-y)<<endl;
                   cout<<"Electricity charge(baths)= "<<w<<endl;
                   }
           else if(z<y){
                   cout<<"Invalid current unit: "<<endl;
                   }
           else if(y<0||z<0){
                   cout<<"--End of Calculation--"<<endl;
                   }
             sum=sum+w;      

}while(y>0);
cout<<"Total of Electricity charge (baths)="<<sum<<endl;
    system("pause");
    return 0;
}
