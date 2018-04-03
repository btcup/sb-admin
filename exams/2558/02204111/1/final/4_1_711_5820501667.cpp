#include<iostream>
using namespace std;
int Dec2X(string strCovert){
    int intReturn;
    intReturn=atoi(strCovert.c_str());
    return(intReturn);
}
int main (){
int x,y;
cout<<"Enter decimal number :";
cin>>x;
cout<<"Enter base (2-9) :";
cin>>y;
system("pause");
return 0;
}


