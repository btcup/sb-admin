#include<iostream>
using namespace std;
int main()
{
    char Y,N;
    int n;
    float m,w;
    cout<<" Are you menber (Y or N) :";
    cin>> Y,N ;
    cout<<" How old are you?:";
    cin>> n;
   cout<<"Normal price :";
    cin>>m;
    
    {
    if(n>2)
    w=m-m;
    else if (n>=2&&n<12)
    w==m*0.3;
    else if(n>12)
    (w==m*0.5);
}
   { 
    if(n>2)
    w==m-m;
    else if (n>=2&&n<12)
    (w==m*0.5);
    else if(n>12)
    (w==m);
}

    cout<<"You have to pay"<<""<<w<<endl;
    system("pause");
    return 0;
}
