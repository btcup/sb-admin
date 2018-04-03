// 5920502738 Natthanai  Chaikhodchaban
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N,x=1,y;
    float z;
    cout<<"Enter a positive integer :";
    cin>>N;
    if (N>0)
    {
    z=N/10;
    cout<<"Number of digit is"<<ceil(z)<<endl;
   }
   while (N%x==0)
   {cout<<"Factor of"<<N<<"are"<<endl;
    cout<<N;
    N=N-1;
    x=x+1;
}

    
    system("pause");
    return 0;
}
    
    
