#include<iostream>
 using namespace std;
 class Box
 {  int a,b,c;
  double volume;
   public:
   Box()
   {
    a=0;
    b=0;
    c=0;
   }
    Box( int x, int y, int z)
     {
         a=x;
         b=y;
         c=z;
     }
    Box( int x, int y) // constructor over loading 
     {
         a=x;
         b=y;
         c=1;
     }
     void SetData( int x, int y, int z)
     {
         a=x;
         b=y;
         c=z;
     }
     void getVolume()
     {
         volume=a*b*c;
      }
      void display()
      {
       cout<<"\n volume is "<<volume;
      }

 };
 int main()
 { Box b1(5,6,2), b2(5,3), b3,b4;
  int l,b,h;
  b1.getVolume(); /// give the result on the basis of
  b2.getVolume();/// the data given to the constructor at the time of creating object b1,b2
   b1.display();
   b2.display();
   cout<<endl<<" enter the  length, breath , height of the box";
    cin>>l>>b>>h;
    b3.SetData(l,b,h);
    b3.getVolume();
    b3.display();
   cout<<endl<<" enter the  length, breath , height of the box";
    cin>>l>>b>>h;
    b4.SetData(l,b,h);
    b4.getVolume();
    b4.display();

    
    return 0;
 }