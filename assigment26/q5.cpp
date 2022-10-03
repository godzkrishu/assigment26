#include<iostream>
 using namespace std;
  class Date
  {
     int d,m,y; 
      public:
      Date( int p, int q, int r)
      {
        d=p;
         m=q;
         y=r;
      }
       void display()
       {
         cout<<d<<"/"<<m<<"/"<<y;
       }
  };
 
 int main()
 { 
    Date d1(5,7,6); /// initialing the object
    d1.display();

 return 0;
 }