/*Data type overflow
#include <iostream>
using namespace std;

int main(){
    int intMax = INT_MAX;
    cout << intMax << endl;
    cout << intMax + 1;
    return 0;
}
*/
// single line inputs demonstration
/*#include <iostream>
using namespace std;

int main(){
  char c1,c2,c3,c4;
 cout << "Enter 4 characters:" <<endl;
  cin >> c1 >> c2 >> c3 >> c4;
 cout << "char 1 =" << (int)c1 << endl <<"char 2 = " <<  (int)c2 << endl << "char 3 = " << (int)c3 << endl << "char 4 = " << (int)c4 << endl;
    return 0;
}
    */
   // entered number is odd or even.
/*
   #include <iostream>
   using namespace std;

   int main(){
    int num;
    cout <<"enter a number:";
    cin >> num;
    if(num % 2 == 0){
        cout << num << "\t is even";
    }
    else{
        cout << num << "\t is odd";
    }
    return 0;

   }
   */
  /*
  #include <iostream>
  using namespace std;

  int main(){
    int a,b,c;
    cout << "enter three sides of a triangle:-" << endl;
    cin >> a >> b >> c;
    if( a == b && b == c){
        cout << "Triangle is equilateral." << endl;
    }
    else if(a == b || b == c || a == c){
 cout << "Triangle is isosceles." << endl;
    }
    else{
        cout << "Triangle is scalane." << endl;
    }
    return 0;
  }
  */
 // Increment/Decrement operators.
 /*#include <iostream>
 using namespace std;

 int main(){
    int counter = 7;
    counter ++;
    cout << "counter = "<< counter << endl;
    counter --;
    cout << "counter = "<< counter << endl;
    cout << "counter = " << counter++ << endl;
    cout << "counter = " << counter << endl;
    cout << "counter = " << ++counter << endl;
    cout << "counter = " << counter << endl;
    return 0;
 }
 */
//program to swap two number.
#include <iostream>
using namespace std;

int main(){
int num1,num2,temp;
cout << "enter two numbers:" << endl;
cin >> num1 >> num2;
temp = num1;
num1 = num2;
num2 = temp;
cout << "Swapped numbers are :" << num1 << endl << num2;
return 0;
}