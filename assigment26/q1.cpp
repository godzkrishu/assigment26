/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Complex
{     private:
     int a, b;
      public:
       void setData(int x, int y)
       {
            a=x;
             b=y;
       }
       void showData()
       {
           cout<<endl<<a<<"+"<<b<<"i";
       }
        Complex add(Complex C) // complex c is pssed as a argument in funtion  add;
        {
         Complex temp; ///this is a temporary complex class object
         temp.a=a+C.a; // a is the member variabe of caller object c1 and c.a is a member variable of C in which c2 is copied
         temp.b= b+C.b;// b is the member variabe of caller object c1 and c.b is a member variable of C in which c2 is copied
          return  temp; // returning a complex type data temp
        }
    
};
int main()
{ 
Complex c1, c2,c3;
 c1.setData(5,6);
c2.setData(10,8);
c1.showData();
c2.showData();
c3=c1.add(c2); /// c1 is calling add funtion and passing c2 as an argument and the result is stored in c3
c3.showData();
 return 0;
}