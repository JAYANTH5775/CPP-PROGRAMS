#include<iostream>
 using namespace std; 

 class  binary
 {
     private:
     int a[100];

     public:
            void insert();
            void convert();
            void display();

 };


 void binary:: insert()
  {
      int i;
      cout<<"enter the a digit binary number\n";
      for(i =0; i<100;i++)
      {
          cin>>a[i];
      }
  }

 void binary::  convert()
 {
     int i;
     for(i=0;i<100;i++)
     {
          int sum=0;

         sum+=(a[i]*2);

     }
     
 }



 void binary:: display()
 {   int sum; 
     cout <<"the decimal equivalent of the entered binary number is\n "<<sum;
 }


 int main()
 {
  binary B ; 
  B.insert();
  B.convert();
  B.display();
  return 0 ; 
 }
