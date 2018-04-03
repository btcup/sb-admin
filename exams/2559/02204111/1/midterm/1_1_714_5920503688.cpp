#include <iostream>
using namespace std;
int main()
{
    char objective,type;            //5920503688 Chanyanuch Petchthoop
    float land_cost,build_cost,age,estate_cost,land_tax,y,x;
    cout<<"Enter objective (living, Agriculture) : ";
    cin>>objective;
    if (objective=='L')
     {
      cout<<"Enter living type (Main, Second): ";
      cin>>type;
     }
    cout<<"Enter land cost (million) : ";
    cin>>land_cost;
    if (objective=='L')
     {
      cout<<"Enter building cost (million) : ";
      cin>>build_cost;
      cout<<"Building age : ";
      cin>>age;
     }
     if (type=='M')
     {
         if (age>=1&&age<=15)
           estate_cost = age*1.2;
        if (age>=16&&age<=40)
           estate_cost = age*2*5;
        if (age<=41)
           estate_cost = age*65;
        x = (build_cost*estate_cost)/100;
        y = build_cost - x;
        if (land_cost<50)
           land_tax = 0+y;
        if (land_cost>=50&&land_cost<100)
           land_tax = (0.06*land_cost)/100+y;
        if (land_cost<=100)
           land_tax = (0.12*land_cost)/100+y;
       
     }
     if (objective=='S')
     {  
        if (land_cost<5)
           land_tax = (0.3*land_cost)/100;
        if (land_cost>=5&&land_cost<10)
           land_tax = (0.6*land_cost)/100;
        if (land_cost>=10)
           land_tax = (0.9*land_cost)/100;
     }
     if (objective=='A')
     {
        if (land_cost<40)
           land_tax = 0;
        if (land_cost<=40&&land_cost<80)
           land_tax = (0.04*land_cost)/100;
        if (land_cost>=80)
           land_tax = (0.08*land_cost)/100;
     }
     if (land_tax==0)
     cout<<"Your estate cost is exemption";
     cout<<"Your estate cost is "<<land_cost<<"("<<land_cost<<"+"<<y<<") million bath";
    cout<<"The land tax is "<<land_tax<<" million bath"<<endl;
    system("pause");
    return 0;
}
