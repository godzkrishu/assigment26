#include<iostream>
 using namespace std;
   class Cube
   {
     private:
      int a;
      public:
       Cube() //constructor  with no  parameter
       {
        a=0; 
       }
       Cube( int q)  // constructor with parameter
       {
        a=q; // q is initialising the value of a 
       }

       // above both constructor are showing constructor overloading
        
       void Display()
       {
        cout<<endl<<a<<" is a";
       }
   };
    int main()
    {
        Cube c1(5), c2;
         c1.Display();
         c2.Display();
         
    }