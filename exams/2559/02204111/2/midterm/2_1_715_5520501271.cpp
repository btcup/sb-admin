#include<iostream> //5520501271 Weerayut Jongpermwatthanapol
using namespace std;
int main()
{
    char x;
    int y,z;
    double Amount_of_interest,Monthly_payment,Financing_amount;
        cout<<"------- Car lease calculator -----------"<<endl;
        cout<<"Enter car model: ";
        cin>>x;
        cout<<"Enter number of years (1-6): ";
        cin>>y;
        cout<<"Enter of salary: ";
        cin>>z;
        if(x='A')
        {
                 cout<<"----------------------------------------"<<endl;
                 Financing_amount=1385000-z/25;
                 cout<<"Financing amount: "<<Financing_amount<<endl;
                 Amount_of_interest=Financing_amount*2.09*y;
                 cout<<"Amount of interest: "<<Amount_of_interest<<endl;
                 Monthly_payment=Financing_amount+Amount_of_interest/z;
                 cout<<"Monthly payment: "<<Monthly_payment<<endl;
                 if(Monthly_payment>z/2)
                 {
                      cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
                 }
                 else if(Monthly_payment<=z/2)
                 {
                      cout<<"Good decision, Enjoy your new car"<<endl;
                 }
        }
        else if(x='B')
        {
                 cout<<"----------------------------------------"<<endl;
                 Financing_amount=511500-z/25;
                 cout<<"Financing amount: "<<Financing_amount<<endl;
                 Amount_of_interest=Financing_amount*1.79*y;
                 cout<<"Amount of interest: "<<Amount_of_interest<<endl;
                 Monthly_payment=Financing_amount+Amount_of_interest/z;
                 cout<<"Monthly payment: "<<Monthly_payment<<endl;
                 if(Monthly_payment>z/2)
                 {
                      cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
                 }
                 else if(Monthly_payment<=z/2)
                 {
                      cout<<"Good decision, Enjoy your new car"<<endl;
                 }
        }
        else if(x='C')
        {
                 cout<<"----------------------------------------"<<endl;
                 Financing_amount=738000-z/25;
                 cout<<"Financing amount: "<<Financing_amount<<endl;
                 Amount_of_interest=Financing_amount*1.99*y;
                 cout<<"Amount of interest: "<<Amount_of_interest<<endl;
                 Monthly_payment=Financing_amount+Amount_of_interest/z;
                 cout<<"Monthly payment: "<<Monthly_payment<<endl;
                 if(Monthly_payment>z/2)
                 {
                      cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
                 }
                 else if(Monthly_payment<=z/2)
                 {
                      cout<<"Good decision, Enjoy your new car"<<endl;
                 }
        }
        else if(x='J')
        {
                 cout<<"---------------------------------------- "<<endl;
                 Financing_amount=694000-z/25;
                 cout<<"Financing amount: "<<Financing_amount<<endl;
                 Amount_of_interest=Financing_amount*1.99*y;
                 cout<<"Amount of interest: "<<Amount_of_interest<<endl;
                 Monthly_payment=Financing_amount+Amount_of_interest/z;
                 cout<<"Monthly payment: "<<Monthly_payment<<endl;
                 if(Monthly_payment>z/2)
                 {
                      cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
                 }
                 else if(Monthly_payment<=z/2)
                 {
                      cout<<"Good decision, Enjoy your new car"<<endl;
                 }
        }
        system("pause");
        return 0;
}
        
