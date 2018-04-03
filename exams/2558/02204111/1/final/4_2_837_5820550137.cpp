#include<iostream>
using namespace std;
int main()
{
    int x[4],d[5];
    int a,i,z=0,max,maxinum=0,sum=0,avg;
    for(i=0;i<5;i++)
    {
                    cout << "Give the number of passengers of day "<<(i+1)<<": ";
                    cin >> x[0] >> x[1] >> x[2] >> x[3];
                    z = z + x[0];
                    sum = sum + x[0] + x[1] + x[2] + x[3];
                    
                        if( x[0]>x[1] && x[0]>x[2] && x[0]>x[3] )
                             max = x[0];
                        else if( x[1]>x[0] && x[1]>x[2] && x[1]>x[3] )
                             max = x[1];
                        else if( x[2]>x[0] && x[2]>x[1] && x[2]>x[3] )
                             max = x[2];
                        else if( x[3]>x[0] && x[3]>x[1] && x[3]>x[2] )
                             max = x[3];
    if(max > maxinum)
    maxinum = max;
                     
    }
         avg = sum/20;
         cout << endl;    
         cout << "Total passenger for air asia is : "<<z<<endl;
         cout << endl;
         cout << "The average number of passengers for all days and all flights is : "<<avg<<endl;
         cout << endl;
         cout << "The lar gest number of passengers is : "<<maxinum<<endl;
         
    
    system("pause");
    return 0;
}
