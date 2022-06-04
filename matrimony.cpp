#include<iostream> 
#include<iomanip>
#include<string.h>
using namespace std; 
#define MAX 30


class bride
{
    private :  char name[MAX]; 
                int age; 
                char salary[MAX]; 
    public:
            void getdata(char n[], int a , char s[])
            {
                strcpy(name,n); 
                age=a; 
                strcpy(salary,s); 
             }

             void print()
             {
                 cout<<name<<endl;
                 cout<<age<<endl;
                 cout<<salary<<endl;
             }
    
             
};



   class groom
{
    private :  char name[MAX]; 
                int age; 
                char salary[MAX]; 
    public:
            void getdata1(char n1[], int a1, char s1[])
            {
                strcpy(name,n1); 
                age=a1; 
                strcpy(salary,s1); 
             }

             void print1()
             {
                 cout<<name<<endl;
                 cout<<age<<endl;
                 cout<<salary<<endl;
             }

             

             
};


 
int main()
{    
     bride br[MAX];
      groom gr[MAX]; 
      char n[MAX];int a ;  char s[MAX];
       char n1[MAX];int a1 ;  char s1[MAX];

     cout<<"hey welcome to the jay's matrimony ";
     cout<<"--------------a site where u can fine your lifeline"; 
      
  for (int i =0; i<2;i++)
          {
     cout<<"server site register ..enter the applictants user .....\nnn  ......enter the bride details.....\n\n\n "; 
        
              cout<<"enter the groom name , age, salary of " <<i<<endl;
              cin>>n;
              cin>>a; 
              cin>>s;

              
              br[i].getdata(n,a,s);
          }


          cout<<"now enter the groom details\n\n";
           for (int i =0; i<2;i++)
          {
              cout<<"enter the groom name , age, salary of "<<i<<endl;
              cin>>n1;
              cin>>a1; 
              cin>>s1;

              
              gr[i].getdata1(n,a,s);
          } 

          for(int i=0;i<2;i++)
          {
               cout<<"***&&&**&&&&&&***^^^^\n\n\n";
              cout<<"The bride details of  "<<i<<endl;
                 cout<<"***&&&**&&&&&&***^^^^\n\n\n";
              br[i].print();
          } 
          
          for(int i=0;i<2;i++)
          {
                cout<<"***&&&**&&&&&&***^^^^\n\n\n\n";
               cout<<"The groom details of  "<<i<<endl;
                cout<<"***&&&**&&&&&&***^^^^\n\n\n";
              gr[i].print1(); 
          }



          return 0; 
          
}  

