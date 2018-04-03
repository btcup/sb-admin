//5920500824 Panuwat soponvanit
#include<iostream>
using namespace std;
int main()
{
    char L,T; //L=living or Agriculture, T=living type
    double land_cost,building_cost,building_age,t=0,land_total;//t=wax
    cout<<"Enter objective (Living, Agriculture) : ";cin>>L;
    if (L=='A')
    {cout<<"Enter land cost (million) : ";cin>>land_cost;
    cout<<"Your estate cost is "<<land_cost<<" million bath.\n";
    if (land_cost<40)
    {cout<<"The land tax is exemption.\n";}
    else if (land_cost>=40&&land_cost<80)
    {cout <<"The land tax is "<<land_cost*0.04<<" million bath.\n";}
    else if (land_cost>=80)
    {cout <<"The land tax is "<<land_cost*0.08<<" million bath.\n";}
             }
    else if (L=='L')
    {cout<<"Enter living type (Main, Second) : ";cin>>T;
    cout<<"Enter land cost (million) : ";cin>>land_cost;
    cout<<"Enter building cost (million) : ";cin>>building_cost;
    cout<<"Building age : ";cin>>building_age;
    while(building_age>=41)
    {t=65; building_age=0;}
    while (building_age<=40&&building_age>=16)
    {building_age=building_age-15;
    t=t+(building_age*2.5);
    building_age=15;}
    while(building_age>=1&&building_age<=15)
    {building_age=building_age-0;
    t=t+(building_age*1.2); building_age=0;}
    building_cost=  building_cost-((t*building_cost)/100);
    land_total=(land_cost+building_cost);
    cout<<"Your estate cost is "<<land_total<<"("<<land_cost<<"+"<<building_cost<<") million bath.\n";
    if (T=='M')
    { if (land_total<50)
    {cout<<"The land tax is exemption.\n";}
    else if (land_total<100&&land_total>=50)
    {cout<<"The land tax is " << (land_total*0.06)/100 <<" million bath\n";}
    else if (land_total>=100)
    {cout<<"The land tax is " << (land_total*0.12)/100 <<" million bath\n";}
    }
    else if (T=='S')
    { if (land_total<5)
    {cout<<"The land tax is " << (land_total*0.03)/100 <<" million bath\n";}
    else if (land_total<10&&land_total>=5)
    {cout<<"The land tax is " << (land_total*0.06)/100 <<" million bath\n";}
    else if (land_total>=10)
    {cout<<"The land tax is " << (land_total*0.09)/100 <<" million bath\n";}
    }     
    }   
    system ("pause");
    return 0;
}
