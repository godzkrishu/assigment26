#include<iostream>
using namespace std;
class StaticCount
{     public:
    static  int count;
    static  void Countfuntion()
     {
        count++;
     }

};
 int StaticCount::count=0;
 int main()
 {  StaticCount::Countfuntion(); // calling this funtion 3 times
   StaticCount::Countfuntion();
   StaticCount::Countfuntion();
   cout<<StaticCount::count<<"  times funtion is called ";
   return 0;
 }