#include <iostream>
using namespace std;
int main()
{
    int x1,x2,x3,x4,x5,y1,y2,y3,y4,y5,q1,q2,q3,q4,q5,z1,z2,z3,z4,z5,sum=0,sum1=0,sum2=0;
    cout<<"Give the number of passengers of day 1 :";
    cin>>x1>>y1>>z1>>q1;
    sum=sum+x1;
    cout<<"Give the number of passengers of day 2 :";
    cin>>x2>>y2>>z2>>q2;
    sum=sum+x2;
    cout<<"Give the number of passengers of day 3 :";
    cin>>x3>>y3>>z3>>q3;
    sum=sum+x3;
    cout<<"Give the number of passengers of day 4 :";
    cin>>x4>>y4>>z4>>q4;
    sum=sum+x4;
    cout<<"Give the number of passengers of day 5 :";
    cin>>x5>>y5>>z5>>q5;
    sum=sum+x5;
    sum2=(x1+x2+x3+x4+x5+y1+y2+y3+y4+y5+z1+z2+z3+z4+z5+q1+q2+q3+q4+q5)/20;
    if(x1>x2&&x1>x3&&x1>x4&&x1>x5&&x1>y1&&x1>y2&&x1>y3&&x1>y4&&x1>y5&&x1>z1&&x1>z2&&x1>z3&&x1>z4&&x1>z5&&x1>q1&&x1>q2&&x1>q3&&x1>q4&&x1>q5)
    {
    sum1=x1;
    }
    else if(x2>x1&&x2>x3&&x2>x4&&x2>x5&&x2>y1&&x2>y2&&x2>y3&&x2>y4&&x2>y5&&x2>z1&&x2>z2&&x2>z3&&x2>z4&&x2>z5&&x2>q1&&x2>q2&&x2>q3&&x2>q4&&x2>q5)
    {
    sum1=x2;
    }
    else if(x3>x1&&x3>x2&&x3>x4&&x3>x5&&x3>y1&&x3>y2&&x3>y3&&x3>y4&&x3>y5&&x3>z1&&x3>z2&&x3>z3&&x3>z4&&x3>z5&&x3>q1&&x3>q2&&x3>q3&&x3>q4&&x3>q5)
    {
    sum1=x3;
    }
    else if(x4>x1&&x4>x2&&x4>x3&&x4>x5&&x4>y1&&x4>y2&&x4>y3&&x4>y4&&x4>y5&&x4>z1&&x4>z2&&x4>z3&&x4>z4&&x4>z5&&x4>q1&&x4>q2&&x4>q3&&x4>q4&&x4>q5)
    {
    sum1=x4;
    }
    else if(x5>x1&&x5>x2&&x5>x4&&x5>x3&&x5>y1&&x5>y2&&x5>y3&&x5>y4&&x5>y5&&x5>z1&&x5>z2&&x5>z3&&x5>z4&&x5>z5&&x5>q1&&x5>q2&&x5>q3&&x5>q4&&x5>q5)
    {
    sum1=x5;
    }
    else if(y1>x1&&y1>x2&&y1>x4&&y1>x5&&y1>x3&&y1>y2&&y1>y3&&y1>y4&&y1>y5&&y1>z1&&y1>z2&&y1>z3&&y1>z4&&y1>z5&&y1>q1&&y1>q2&&y1>q3&&y1>q4&&y1>q5)
    {
    sum1=y1;
    }
    else if(y2>x1&&y2>x2&&y2>x4&&y2>x5&&y2>x3&&y2>y1&&y2>y3&&y2>y4&&y2>y5&&y2>z1&&y2>z2&&y2>z3&&y2>z4&&y2>z5&&y2>q1&&y2>q2&&y2>q3&&y2>q4&&y2>q5)
    {
    sum1=y2;
    }
    else if(y3>x1&&y3>x2&&y3>x4&&y3>x5&&y3>x3&&y3>y1&&y3>y2&&y3>y4&&y3>y5&&y3>z1&&y3>z2&&y3>z3&&y3>z4&&y3>z5&&y3>q1&&y3>q2&&y3>q3&&y3>q4&&y3>q5)
    {
    sum1=y3;
    }
     else if(y4>x1&&y4>x2&&y4>x4&&y4>x5&&y4>x3&&y4>y1&&y4>y2&&y4>y3&&y4>y5&&y4>z1&&y4>z2&&y4>z3&&y4>z4&&y4>z5&&y4>q1&&y4>q2&&y4>q3&&y4>q4&&y4>q5)
    {
    sum1=y4;
    }
    else if(y5>x1&&y5>x2&&y5>x4&&y5>x5&&y5>x3&&y5>y1&&y5>y2&&y5>y3&&y5>y4&&y5>z1&&y5>z2&&y5>z3&&y5>z4&&y5>z5&&y5>q1&&y5>q2&&y5>q3&&y5>q4&&y5>q5)
    {
    sum1=y5;
    }
    else if(z1>x1&&z1>x2&&z1>x3&&z1>x4&&z1>x5&&z1>y1&&z1>y2&&z1>y3&&z1>y4&&z1>y5&&z1>z2&&z1>z3&&z1>z4&&z1>z5&&z1>q1&&z1>q2&&z1>q3&&z1>q4&&z1>q5)
    {
    sum1=z1;
    }
    else if(z2>x1&&z2>x2&&z2>x3&&z2>x4&&z2>x5&&z2>y1&&z2>y2&&z2>y3&&z2>y4&&z2>y5&&z2>z1&&z2>z3&&z2>z4&&z2>z5&&z2>q1&&z2>q2&&z2>q3&&z2>q4&&z2>q5)
    {
    sum1=z2;
    }
    else if(z3>x1&&z3>x2&&z3>x3&&z3>x4&&z3>x5&&z3>y1&&z3>y2&&z3>y3&&z3>y4&&z3>y5&&z3>z1&&z3>z2&&z3>z4&&z3>z5&&z3>q1&&z3>q2&&z3>q3&&z3>q4&&z3>q5)
    {
    sum1=z3;
    }
     else if(z4>x1&&z4>x2&&z4>x3&&z4>x4&&z4>x5&&z4>y1&&z4>y2&&z4>y3&&z4>y4&&z4>y5&&z4>z1&&z4>z2&&z4>z3&&z4>z5&&z4>q1&&z4>q2&&z4>q3&&z4>q4&&z4>q5)
    {
    sum1=z4;
    }
     else if(z5>x1&&z5>x2&&z5>x3&&z5>x4&&z5>x5&&z5>y1&&z5>y2&&z5>y3&&z5>y4&&z5>y5&&z5>z1&&z5>z2&&z5>z3&&z5>z4&&z5>q1&&z5>q2&&z5>q3&&z5>q4&&z5>q5)
    {
    sum1=z5;
    }
    else if(q1>x1&&q1>x2&&q1>x3&&q1>x4&&q1>x5&&q1>y1&&q1>y2&&q1>y3&&q1>y4&&q1>y5&&q1>z1&&q1>z2&&q1>z3&&q1>z4&&q1>z5&&q1>q2&&q1>q3&&q1>q4&&q1>q5)
    {
    sum1=q1;
    }
     else if(q2>x1&&q2>x2&&q2>x3&&q2>x4&&q2>x5&&q2>y1&&q2>y2&&q2>y3&&q2>y4&&q2>y5&&q2>z1&&q2>z2&&q2>z3&&q2>z4&&q2>z5&&q2>q1&&q2>q3&&q2>q4&&q2>q5)
    {
    sum1=q2;
    }
     else if(q3>x1&&q3>x2&&q3>x3&&q3>x4&&q3>x5&&q3>y1&&q3>y2&&q3>y3&&q3>y4&&q3>y5&&q3>z1&&q3>z2&&q3>z3&&q3>z4&&q3>z5&&q3>q2&&q3>q1&&q3>q4&&q3>q5)
    {
    sum1=q3;
    }
    else if(q4>x1&&q4>x2&&q4>x3&&q4>x4&&q4>x5&&q4>y1&&q4>y2&&q4>y3&&q4>y4&&q4>y5&&q4>z1&&q4>z2&&q4>z3&&q4>z4&&q4>z5&&q4>q1&&q4>q2&&q4>q3&&q4>q5)
    {
    sum1=q4;
    }
    else
    {
    sum1=q5;
    }
    
    cout<<"Total passenger for air asia is : "<<sum<<endl;
    cout<<"The average number of passenger for all days and all flights is : "<<sum2<<endl;
    cout<<"The largest number of passengers is : "<<sum1<<endl;
    
    
system("pause");
return 0 ;
}
