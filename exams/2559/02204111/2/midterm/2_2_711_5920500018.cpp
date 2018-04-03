//5920500018 Yada Meenang 
#include<iostream>;
#include<cmath>;
using namespace std;
int main()
{
    float N,m,a,b,c,sum;
    cout<<"Enter an integer :";
    cin>>N;
    if (m=N)
    {
        sum=pow(m,N)+pow(m,N)+pow(m,N);
    //sum=a*pow(m,N)+b*pow(m,N)+c*pow(m,N);
        cout<<"Number of digit is "<<sum<<endl;
        cout<<N<<"is a target number";
    }
    else if (m!=N)
    {
       
        cout<<N<<"is not a target number";
    }
   
 
                    



system ("pause");
return 0;
}
