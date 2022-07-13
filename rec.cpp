#include<iostream>
#include<iomanip> 
using namespace std; 

class rectangle {
     
     private: 
           int l ,b,area; 
    public:  
               void getdata(int ,int);
                 void display(); 
                 void area(int, int,int ); 
                
};
   

   void rectangle::  getdata(int length,int breadth)
   {
        l = length; 
        b= breadth; 
   }

   void rectangle:: display()
   {
       cout<<"the lenght of the rectangle is :"<<l<<endl; 
       cout<<"the breadth of the rectangle is :"<<b<<endl ; 
       cout<<"the area of the rectangle is :"<<area<<endl ; 

   }

    void rectangle:: area( int l  , int b ,int area)
   {
    area =l*b; 
   }

   int main() 
   {
     rectangle r;
      int length ; 
    int  breadth ; 
    int area; 
     cout<<"enter the length and breadth\n "; 
     cin>>length;  
     cin>>breadth; 
     r.getdata(length,breadth); 
     r.area(length,breadth,area); 
     r.display(); 

   }