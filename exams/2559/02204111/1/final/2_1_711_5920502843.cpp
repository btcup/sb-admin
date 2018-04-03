//5920502843 mangkarapong sainak
#include<iostream>
using namespace std;
int main()
{
    int M;
    cout<<"Please input M : ";
    cin>>M;
    if(M>100||M<0)
    {
         cout<<"Wrong input !!"<<endl;
         cout<<"End program."<<endl;
         
    }
    int A[2][2],B[2][2];
    cout<<"Please input array A : ";
    cin>>A[2][2];
    cout<<"Please input array B : ";
    cin>>B[2][2];
    cout<<"Similarity of A and B is : ";
    system("pause");
    return 0;
}
