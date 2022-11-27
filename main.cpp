#include <iostream>
using namespace std;
int main() {
    
   int fib1=1, fib2=1, n=0, numerofibonacci=0;
   cin>> n;
   cout << fib1 << endl;
   cout << fib2 << endl;
   
   while (numerofibonacci<=n)
   {
      numerofibonacci=fib1+fib2;
      fib1=fib2;
      fib2=numerofibonacci;
      if  (numerofibonacci <=n)
      {
          cout << numerofibonacci << endl;
      }
   }

    return 0;
}
