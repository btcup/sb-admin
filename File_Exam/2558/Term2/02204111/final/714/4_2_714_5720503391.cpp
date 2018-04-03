#include<iostream>
using namespace std;

int main()
{
    int a[5],b[5],c[5],d[5];
    cout <<"Give the number of passengers of day 1: ";
         cin >> a[0] >> b[0] >> c[0] >> d[0];
    cout <<"Give the number of passengers of day 2: ";
         cin >> a[1] >> b[1] >> c[1] >> d[1];
    cout <<"Give the number of passengers of day 3: ";
         cin >> a[2] >> b[2] >> c[2] >> d[2];
    cout <<"Give the number of passengers of day 4: ";
         cin >> a[3] >> b[3] >> c[3] >> d[3];
    cout <<"Give the number of passengers of day 5: ";
         cin >> a[4] >> b[4] >> c[4] >> d[4];
    cout<<endl;
         
    int i,x=0;
    for(i=0;i<5;i++)
    {  
       x=x+a[i];
    }
    
    cout <<"Total passenger for route 101 is " << x << "\n";
    cout << endl;
    
    int p,y=0;
    for(p=0;p<5;p++)
    {  
       y=y+b[p];
    }
    
    int o,z=0;
    for(o=0;o<5;o++)
    {  
       z=z+c[o];
    }
    
    int u,w=0;
    for(u=0;u<5;u++)
    {  
       w=w+d[u];
    }
    
    
    float peat;
    peat = (x+y+z+w)/20.0;
    
    cout <<"The average number of passengers for all day and all routes is : " << peat << "\n";
    cout << endl;
    
    cout <<"The largest number of passengers of Thu is : ";
    
    
    
    if(d[3]>a[3]&&d[3]>b[3]&&d[3]>c[3])
    {
     cout << d[3] <<"\n";
    }
    else if(b[3]>a[3]&&b[3]>c[3]&&b[3]>d[3])
    {
     cout << b[3] <<"\n";
    }
    else if(c[3]>a[3]&&c[3]>b[3]&&c[3]>d[3])
    {
     cout << c[3] <<"\n";
    }
     else if(a[3]>b[3]&&a[3]>c[3]&&a[3]>d[3])
    {
     cout << a[3] <<"\n"; 
    }
    
    
    
    



system("pause");
return 0;    
}
















