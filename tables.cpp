#include <iostream>

using namespace std; 
  int main()
  {
    int t; 
   cout<<"enter the  number for which u need to generate the tables from 1-10\n\n "; 
   cin>>t; 

   for(int i =1 ; i<=10 ;i++)
   {
    cout<<t<<"x"<<i<<"="<<(t*i)<<"\n ";
   }
     return 0;
  }
