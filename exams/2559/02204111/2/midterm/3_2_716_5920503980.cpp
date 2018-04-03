//5920503980 Napassorn Thanaphatpsutthimet
#include <iostream>
using namespace std;
int main()
{float b,ch;
int sum=0,l,c,u;
do{
       cout<<"Enter electricity cost per unit (baths):";
       cin>>b;
}while (b<=0);
cout<<"\n";
while(b>0)
{      if(l==-1||c==-1)
          {cout<<"--End of Calculation --"<<endl;
          cout<<"\n";
          break;}
        else if(l!=-1&&c!=-1){
           if(l>=0&&l<100000)
          {
           cout<<"Enter last unit: ";
           cin>>l; 
           }
          else {
               cout<<"Invalid last unit!"<<endl;
           cout<<"\n";}
             if(c>=0&&c>l)
             {
                  cout<<"Enter current unit: ";
                  cin>>c;
              }else {cout<<"Invalid current units!"<<endl;  
              continue; 
              cout<<"\n";
              } 
                  u=c-l;
                  cout<<"Units used = "<<u<<endl;
                  ch=u*b;
                  cout<<"Electricity charge (baths) = "<<ch<<endl;
                  sum=sum+ch;
                  cout<<"\n";
                  }
}
cout<<"Total of Electricity charge (baths) = "<<sum<<endl;
    system("pause");
    return 0;
}
