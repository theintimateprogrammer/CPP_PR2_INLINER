#include <iostream>
using namespace std;

int main(){
   int num,i;
   int fact = 1;

   cout << "Enter positive number: ";
   cin >> num;

   for (int i = 1; i <= num; i++ )
   {
      fact = fact * i;
   }

   cout << "Factorial of " << num << ": " << fact << endl;
   
}
