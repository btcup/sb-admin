//5720550267 Panit Songsang
#include <iostream>
using namespace std;
int main()
{
    char A=1385000,B=511500,C=738000,J=694000;
    int x;
    float y;
    cout<<"------- Car lease calculator ----------"<<endl;
    cout<<"Enter car model:";
    cin>>A,B,C,J; 
    cout<<"Enter number of years (1-6):";
    cin>>x;
    cout<<"Enter your salary:";
    cin>>y;
    cout<<"---------------------------------------"<<endl;
    cout<<"Financing amout:"<< A-(A*(25/100)) <<endl;
    cout<<"Amout of interest:"<<endl;
    cout<<"Monthly payment:"<<endl;    
    cout<<"Good decision, Enjoy your new car"<<endl;
    cout<<"The monthly payment is over than 50% of your salary"<<endl;
    system ("pause");
    return 0;
}
