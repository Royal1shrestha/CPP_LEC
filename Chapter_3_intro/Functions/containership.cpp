#include <iostream>
using namespace std;
class first {
   public:
   first(){
      cout << "Hello from first class\n";
   }
};
//container class
class second {
   first f;
   public:
   //constructor
   second(){
      cout << "Hello from second class\n";
   }
};
int main(){
   second s;
   return 0;
}