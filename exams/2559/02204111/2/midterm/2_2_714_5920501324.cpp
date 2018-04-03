//5920501324 Name Ketsaraphon Supaphol
#include <iostream>
using namespace std;
int main()
{
        int n,a,b,c,d,e,i,x=1,y=1,z=1,w=1,h=1,sum=0;
        cout<<"Enter number : ";
        cin>>n;
               if(n>=100&&n<1000)
               {
                      cout<<"Number of digit is 3"<<endl;
                      a=n/100;
                      b=(n%100)/10;
                      c=((n%100)%10)/1;
                      for(i=1;i<=3;i++)
                           x=x*a;       
                      for(i=1;i<=3;i++)
                           y=y*b;
                      for(i=1;i<=3;i++)
                           z=z*c;
                      sum=x+y+z;
                      if(sum==n)
                                cout<<n<<" is a target number "<<endl;
                      else
                                cout<<n<<" is not a target number "<<endl;
               }
               else if(n>=1000&n<10000)
               {
                      cout<<"Number of digit is 4"<<endl;
                      a=n/1000;
                      b=(n%1000)/100;
                      c=((n%1000)%100)/10;
                      d=((n%1000)%100)%10/1;
                        for(i=1;i<=4;i++)
                           x=x*a;
                        for(i=1;i<=4;i++)
                          y=y*b; 
                        for(i=1;i<=4;i++)   
                            z=z*c;
                        for(i=1;i<=4;i++)  
                           w=w*d;
                           sum=x+y+z+w;
                      if(sum==n)
                                cout<<n<<" is a target number "<<endl;
                      else
                                cout<<n<<" is not a target number "<<endl;

               } 
               else if(n>=10000)
               {
                      cout<<"Number of digit is 5"<<endl;
                      a=n/10000;
                      b=(n%10000)/1000;
                      c=(n%10000)%1000/100;
                      d=((n%1000)%100)%100/10;
                      e=(((n%1000)%100)%100%10)/1;
                        for(i=1;i<=5;i++)
                           x=x*a;
                        for(i=1;i<=5;i++)
                          y=y*b; 
                        for(i=1;i<=5;i++)   
                            z=z*c;
                        for(i=1;i<=5;i++)  
                           w=w*d;
                        for(i=1;i<=5;i++)
                           h=h*1;
                           sum=x+y+z+w+h;
                      if(sum==n)
                                cout<<n<<" is a target number "<<endl;
                      else
                                cout<<n<<" is not a target number "<<endl;

               }
               
               system("pause");
               return 0;
}
      
        
