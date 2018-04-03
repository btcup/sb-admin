#include<iostream>
using namespace std;
int main()
{
    char x;
    float model,down,year,finan,percen,amount;
    finan= model-down;
    amount=finan*percen*year;
    cout<<"Enter car model(A,B,C,J) "<<endl;
    cin>>x;
    if(x='model')
    {
      cout<<"Enter number of years(1-6): "<<endl;
      cin>>year;
      if(year<4)
      {
        year=(year*finan)/0.1;
        cout>>year>>endl;
        }
      else if(year<=6)
      {
           cout>>year>>endl;}
      else
     cout <<"Eror!,number of year is not in range"<<endl;
     
     if(x='A')
     {
        cout<<"Enter percentage of down payment: "<<endl;
        cin>>down
        if(down=1385000-finan)
        {finan=model-down;
        cout>>down>>;endl;
        }else
        cout<<endl;
     if(x='B')
     {
        cout<<"Enter percentage of down payment: "<<endl;
        cin>>down
        if(down=511500-finan)
        {finan=model-down;
        cout>>down>>;endl;
        }else
        cout<<endl;
    if(x='C')
     {
        cout<<"Enter percentage of down payment: "<<endl;
        cin>>down
        if(down=738000-finan)
        {finan=model-down;
        cout>>down>>;endl;
        }else
        cout<<endl;
     if(x='J')
     {
        cout<<"Enter percentage of down payment: "<<endl;
        cin>>down
        if(down=511500-finan)
        {finan=model-down;
        cout>>down>>;endl;
        }else
        cout<<endl;
        
system ("pause");
return 0;
}
