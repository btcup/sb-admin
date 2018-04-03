#include <iostream>
using namespace std;
int main()
{
    int n;
    char manu,size,other,member;
    do
    {
         cout<<"Welcome to A Cup-with-love Coffee!!\n";
         cout<<"Enter your menu (E/A/L/C/M) : ";
         cin>>manu;
         if(manu=='E'||manu=='e')
         {
             
             cout<<"Enter size (S/T/G/V) : ";
             cin>>size;
             if(size=='S'||size=='s')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                         cout<<"Total "<<n*40<<" Bath"<<endl;
                         cout<<"Discount "<<(n*40)*0.1<<" Bath"<<endl;
                         cout<<"You pay "<<(n*40)-((n*40)*0.1)<<" Bath"<<endl;
                         cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*40<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*40<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
         
             if(size=='T'||size=='t')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*50<<" Bath"<<endl;
                          cout<<"Discount "<<(n*50)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*50)-((n*50)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*50<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*50<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
              if(size=='G'||size=='g')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*60<<" Bath"<<endl;
                          cout<<"Discount "<<(n*60)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*60)-((n*60)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*60<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*60<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
             if(size=='V'||size=='v')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*70<<" Bath"<<endl;
                          cout<<"Discount "<<(n*70)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*70)-((n*70)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*70<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*70<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }           
          }
          if(manu=='A'||manu=='a')
         {
             
             cout<<"Enter size (S/T/G/V) : ";
             cin>>size;
             if(size=='S'||size=='s')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                         cout<<"Total "<<n*40<<" Bath"<<endl;
                         cout<<"Discount "<<(n*40)*0.1<<" Bath"<<endl;
                         cout<<"You pay "<<(n*40)-((n*40)*0.1)<<" Bath"<<endl;
                         cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*40<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*40<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
         
             if(size=='T'||size=='t')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*50<<" Bath"<<endl;
                          cout<<"Discount "<<(n*50)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*50)-((n*50)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*50<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*50<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
              if(size=='G'||size=='g')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*60<<" Bath"<<endl;
                          cout<<"Discount "<<(n*60)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*60)-((n*60)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*60<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*60<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
             if(size=='V'||size=='v')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*70<<" Bath"<<endl;
                          cout<<"Discount "<<(n*70)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*70)-((n*70)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*70<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*70<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }           
          }
          if(manu=='C'||manu=='c')
         {
             
             cout<<"Enter size (S/T/G/V) : ";
             cin>>size;
             if(size=='S'||size=='s')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                         cout<<"Total "<<n*50<<" Bath"<<endl;
                         cout<<"Discount "<<(n*50)*0.1<<" Bath"<<endl;
                         cout<<"You pay "<<(n*50)-((n*50)*0.1)<<" Bath"<<endl;
                         cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*50<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*50<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
         
             if(size=='T'||size=='t')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*60<<" Bath"<<endl;
                          cout<<"Discount "<<(n*60)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*60)-((n*60)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*60<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*60<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
              if(size=='G'||size=='g')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*70<<" Bath"<<endl;
                          cout<<"Discount "<<(n*70)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*70)-((n*70)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*70<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*70<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
             if(size=='V'||size=='v')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*80<<" Bath"<<endl;
                          cout<<"Discount "<<(n*80)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*80)-((n*80)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*80<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*80<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }           
          }
          if(manu=='L'||manu=='l')
         {
             
             cout<<"Enter size (S/T/G/V) : ";
             cin>>size;
             if(size=='S'||size=='s')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                         cout<<"Total "<<n*50<<" Bath"<<endl;
                         cout<<"Discount "<<(n*50)*0.1<<" Bath"<<endl;
                         cout<<"You pay "<<(n*50)-((n*50)*0.1)<<" Bath"<<endl;
                         cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*50<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*50<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
         
             if(size=='T'||size=='t')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*60<<" Bath"<<endl;
                          cout<<"Discount "<<(n*60)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*60)-((n*60)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*60<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*60<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
              if(size=='G'||size=='g')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*70<<" Bath"<<endl;
                          cout<<"Discount "<<(n*70)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*70)-((n*70)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*70<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*70<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
             if(size=='V'||size=='v')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*80<<" Bath"<<endl;
                          cout<<"Discount "<<(n*80)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*80)-((n*80)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*80<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*80<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }           
          }
          if(manu=='M'||manu=='m')
         {
             
             cout<<"Enter size (S/T/G/V) : ";
             cin>>size;
             if(size=='S'||size=='s')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                         cout<<"Total "<<n*60<<" Bath"<<endl;
                         cout<<"Discount "<<(n*60)*0.1<<" Bath"<<endl;
                         cout<<"You pay "<<(n*60)-((n*60)*0.1)<<" Bath"<<endl;
                         cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*60<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*60<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
         
             if(size=='T'||size=='t')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*70<<" Bath"<<endl;
                          cout<<"Discount "<<(n*70)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*70)-((n*70)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*70<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*70<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
              if(size=='G'||size=='g')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*80<<" Bath"<<endl;
                          cout<<"Discount "<<(n*80)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*80)-((n*80)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*80<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*80<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }
             if(size=='V'||size=='v')
             {
                 
                 cout<<"How many cups? : ";
                 cin>>n;
                 cout<<"Do you want other manu? (Y/N) : ";
                 cin>>other;
                 if(other=='N'||other=='n')
                 {
                     cout<<"Are you a member? (Y/N) : ";
                     cin>>member;
                     if(member=='Y'||member=='y')
                     {
                          cout<<"Total "<<n*90<<" Bath"<<endl;
                          cout<<"Discount "<<(n*90)*0.1<<" Bath"<<endl;
                          cout<<"You pay "<<(n*90)-((n*90)*0.1)<<" Bath"<<endl;
                          cout<<"Thank you."<<endl;
                     }
                     if(member=='N'||member=='n')
                     {
                         cout<<"Total "<<n*90<<" Bath"<<endl;
                         cout<<"Discount 0 Bath"<<endl;
                         cout<<"You pay "<<n*90<<" Bath"<<endl;
                         cout<<"Thank you"<<endl;
                     }
                 }
             }           
          }
         
         
    }
    while(1);
    cout<<endl;
    system("pause");
    return 0;
}
         
         
    
