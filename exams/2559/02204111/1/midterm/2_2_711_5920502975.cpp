//5920502975 ausa nonthason
#include<iostream>
using namespace std;
int main()
{
   char obj,uti ;
   double landcost,buildcost,y ;
   int age ;
   cout<<"Enter objective(utilazation,waste : ";
   cin>>obj;
   if(obj=='u')
   {
      cout<<"enter utilization type : ";
      cin>>uti;
      if(uti=='b')
      {
           cout<<"Enter land cost(million) : ";
           cin>>landcost;
           if(landcost<20)
             {
               cout<<"Enter building cost(million) : ";
               cin>>buildcost;
               cout<<"Building age : ";
               cin>>age;
               if(age>=1&&age<=10)
               {
                  y=landcost+(landcost*1);
                  cout<<"Your estate cost is"<<y<<"million bath";
                  cout<<"The land tax is"<<"million bath";
               }
               else if(age>=11&&age<=40)
              {
                  y=landcost+(landcost*1);
                  cout<<"Your estate cost is"<<y<<"million bath";
                  cout<<"The land tax is"<<"million bath";
              }
               else
              {
                 y=landcost+(landcost*1);
                 cout<<"Your estate cost is"<<y<<"million bath";
                 cout<<"The land tax is"<<"million bath";
             }
           else if(landcost>=20&&labdcost<50)
             {
                cout<<"Enter building cost(million) : ";
                cin>>buildcost;
                cout<<"Building age : ";
                cin>>age;
               if(age>=1&&age<=10)
               {
                y=landcost+(landcost*1);
                cout<<"Your estate cost is"<<y<<"million bath";
                cout<<"The land tax is"<<"million bath";
               }
               else if(age>=11&&age<=40)
               {
                y=landcost+(landcost*1);
                cout<<"Your estate cost is"<<y<<"million bath";
                cout<<"The land tax is"<<"million bath";
             }
             else
             {
               y=landcost+(landcost*1);
               cout<<"Your estate cost is"<<y<<"million bath";
               cout<<"The land tax is"<<"million bath";
             }
          }
      else if(landcost>=50)
          {
              cout<<"Enter building cost(million) : ";
              cin>>buildcost;
              cout<<"Building age : ";
              cin>>age;
              if(age>=1&&age<=10)
              {
                 y=landcost+(landcost*1)
                 cout<<"Your estate cost is"<<y<<"million bath";
                 cout<<"The land tax is"<<"million bath";
              }
              else if(age>=11&&age<=40)
              {
                 y=landcost+(landcost*1)
                 cout<<"Your estate cost is"<<y<<"million bath";
                 cout<<"The land tax is"<<"million bath";
             }
             else
             {
               y=landcost+(landcost*1)
               cout<<"Your estate cost is"<<y<<"million bath";
               cout<<"The land tax is"<<"million bath";
             }
         }
      if(uti=='a')
       {
           cout<<"Enter land cost(million) : ";
           cin>>landcost;
           if(landcost<20)
             {
               cout<<"Enter building cost(million) : ";
               cin>>buildcost;
               cout<<"Building age : ";
               cin>>age;
               if(age>=1&&age<=10)
               {
                  y=landcost+(landcost*1)
                  cout<<"Your estate cost is"<<y<<"million bath";
                  cout<<"The land tax is"<<"million bath";
               }
               else if(age>=11&&age<=40)
              {
                  y=landcost+(landcost*?)
                  cout<<"Your estate cost is"<<y<<"million bath";
                  cout<<"The land tax is"<<"million bath";
              }
               else
              {
                 y=landcost+(landcost*1)
                 cout<<"Your estate cost is"<<y<<"million bath";
                 cout<<"The land tax is"<<"million bath";
             }
              else if(landcost>=20&&labdcost<50)
             {
                cout<<"Enter building cost(million) : ";
                cin>>buildcost;
                cout<<"Building age : ";
                cin>>age;
             if(age>=1&&age<=10)
             {
                y=landcost+(landcost*1)
                cout<<"Your estate cost is"<<y<<"million bath";
                cout<<"The land tax is"<<"million bath";
             }
             else if(age>=11&&age<=40)
             {
                y=landcost+(landcost*1)
                cout<<"Your estate cost is"<<y<<"million bath";
                cout<<"The land tax is"<<"million bath";
             }
             else
             {
               y=landcost+(landcost*1)
               cout<<"Your estate cost is"<<y<<"million bath";
               cout<<"The land tax is"<<"million bath";
             }
          }
          else if(landcost>=50)
          {
              cout<<"Enter building cost(million) : ";
              cin>>buildcost;
              cout<<"Building age : ";
              cin>>age;
              if(age>=1&&age<=10)
              {
                 y=landcost+(landcost*1)
                 cout<<"Your estate cost is"<<y<<"million bath";
                 cout<<"The land tax is"<<"million bath";
              }
              else if(age>=11&&age<=40)
              {
                 y=landcost+(landcost*1)
                 cout<<"Your estate cost is"<<y<<"million bath";
                 cout<<"The land tax is"<<"million bath";
             }
             else
             {
               y=landcost+(landcost*1)
               cout<<"Your estate cost is"<<y<<"million bath";
               cout<<"The land tax is"<<"million bath";
             }
         }
    else if(obj=='w')
    {
         cout<<"enter landcost : ";
         cin>>landcost;
         cout<<"land age : ";
         cin>>age;
         if(age<=3)
         cout<<landcost;
         else if(age>3&&age<=6)
         {
              y=landcost+landcost*1.2;
              cout<<"your estate cost is"<<y;
         }
         else
         {
             y=landcost+landcost*2.4;
             cout<<"your estste cost is"<<y;
         }
                       
    }
   
  

 system ("pause");
 return 0;
}
