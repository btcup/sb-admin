#include <iostream>
using namespace std;
int main()
{
   int many,total=0,totals=0,sum,m,s,mem;
   char menu,size,member,other;
   cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
   do{
   
   cout<<"Enter your menu (E/A/L/C/M) : ";
   cin>>menu;
   if(menu=='E'||menu=='e')
   {
           m=40;
   }
   else if(menu=='A' || menu=='a')
   {
           m=40;
   }
   else if(menu=='C' || menu=='c')
   {
           m=50;
   }
   else if(menu=='L' || menu=='l')
   {
           m=50;
   }
   else
   {
           m=60;
   }
   
   cout<<"Enter size (S/T/G/V) : ";
   cin>>size;
   if(size=='S' || size=='s')
   {
        s = 0;
   }
   else if(size=='T' || size=='t')
   {
        s = 10;
   }
   else if(size=='G' || size=='g')
   {
        s = 20;
   }
   else
   {
       s = 30;
   }
   cout<<"How many cups? : ";
   cin>>many;
   total = (m+s)*many;
   totals = totals + total;
   cout<<"Do you want other menu? (Y/N) :";
   cin>>other;
   }
   while (other=='y'||other=='Y');
   cout<<"Are you a member? (Y/N) :";
   cin>>member;
   if(member=='Y' || member=='y')
   {
                  mem=totals/10;
   }
   else
   mem=0;
   sum = totals-mem;
   cout<<"Total "<<totals<<" Baht"<<endl;
   cout<<"Discount "<<mem<<" Baht"<<endl;
   cout<<"You pay "<<sum<<" Baht"<<endl;
   cout<<"Thank you."<<endl;
   system("pause");
   return 0;
}
                  
