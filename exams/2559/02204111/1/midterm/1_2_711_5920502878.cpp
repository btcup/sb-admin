#include<iostream> //5920502878 Vorapop Thungsripan
using namespace std;
int main()
{
    int e;
    char a,b;
    float c,d,x,y,sum;
    cout<<"Enter objective (Living, Agriculture) :";
    cin>>a;
    if(a=='L')
    {
              cout<<"Enter living type (Main, Second) :";
              cin>>b;
              cout<<"Enter land cost (million) :";
              cin>>c;
              cout<<"Enter building cost ((million) :";
              cin>>d;
              cout<<"building age :";
              cin>>e;
              if(e<=15&&e>=1)
              y=e*(1.2/100);
              else if(e<=40&&e>=16)
              y=(((e-15)*(2.5))+18)/100;
              else if(e<=41)
              y=0.65;
              x=c+(d-(d*y));
              cout<<"y"<<y<<endl;
              cout<<"your esteta cost is "<<x<<"("<<c<<"+"<<(d-(d*y))<<")"<<endl;
              if(b=='M')
              {
                        if(x<50)
                        cout<<"The land tax is exemption"<<endl;
                        else if(x>=50&&x<100)
                        sum=x*(0.06/100);
                        else if(x>=100)
                        sum=x*(0.12/100);
              }
              else if(b=='S')
              {
                        if(x<5)
                        sum=x*(0.3/100);
                        else if(x>=5&&x<10)
                        sum=x*(0.6/100);
                        else if(x>=10)
                        sum=x*(0.9/100);
              }
    }
    else if(a=='A')
    {
         cout<<"Enter land cost (million) :";
         cin>>c;
         if(c<40)
         cout<<"The land tax is exemption"<<endl;
         else if(c>=40&&c<80)
         sum=c*(0.04/100);
         else if(c>=80)
         sum=c*(0.08/100);
    }
    if(sum!=0)
    cout<<"The land tax is "<<sum<<"million bath"<<endl;
    system ("pause");
    return 0;
}
          
          
          
          
    



