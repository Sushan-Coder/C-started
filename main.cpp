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
/*#include <iostream>
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
*/
/*include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "enter two numbers:" << endl;
    cin >> num1 >> num2;
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl;
return 0;
}
*/
// practical file 
// program 1: Write a C++ program to reverse a given number.
/*#include<iostream>
using namespace std;

int main(){
    int n,reverse = 0,rem;
    cout << "enter a number:" << endl;
    cin >> n;
    while(n != 0){
        rem = n % 10;
        reverse = reverse*10 + rem;
        n /= 10;
    }
    cout << "reversed number = " << reverse << endl;
    return 0;
}
*/

//Write a C++ program to add two numbers using class.
/*#include<iostream>
using namespace std;
class Add{
    private:
    int num1,num2,sum;
    public:
    void input(){
        cout<< "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    void calculate(){
        sum = num1 + num2;
    }
    void output(){
        cout << "The sum of two numbers = " << sum << endl;
    }
};

int main(){
    Add add;
    add.input();
    add.calculate();
    add.output();
    return 0;
}
    */
//WAP to check whether given number is prime or not.
/*#include<iostream>
using namespace std;
int main(){
    int i,n,j,count = 0;
    bool prime = false;
    cout << "Enter a positive integer:";
    cin >> n;
    if(n==0 || n==1){
        prime = false;
    }
    for(i=1;i<=n; i++){
if(n%i == 0){
    count++;
}
    }
     if(count == 2){
    prime = true;
}
if(prime){
cout << n << " is a prime number.";
}
else
 {cout << n << " is not a prime number.";}  
return 0;
}
*/
//Write a c++ program to check whether the given year is leap year or not.
/*#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter a year:";
    cin >> year;
    if(year % 400 == 0 || year % 4 == 0){
        cout << year << " is a leap year." << endl;
}
else if (year % 100 == 0){
    cout << year << " is not a leap year." << endl;
}
else {
    cout << year << " is not a leap year." << endl;
}
return 0;
}
*/
//program to add two numbers using function.
/*#include<iostream>
using namespace std;
int add(int x, int y);

int main(){
    int a,b;
    cout << "enter two numbers :" ;
    cin >> a >> b;
   cout << "sum of two numbers = " <<  add(a,b);
return 0;
}

int add(int x, int y){
return (x+y);
}
*/
//program6: Write a C++ program to accept and display the details of a student using class.
/*#include<iostream>
using namespace std;

class Student{
    private:
    string name,regd,branch;
    int sem;
    public:
    void input();
    void display();
};
void Student::input(){
cout <<"Enter Name:";
cin >> name;
cout << "Enter Regdno.:";
cin >> regd;
cout << "Enter Branch:";
cin >> branch;
cout <<"Enter Sem:";
cin >> sem;
};
void Student::display(){
    cout << "Name = " << name << endl;
    cout << "Regdno = "<< regd << endl;
    cout << "Branch = "<< branch << endl;
    cout << "Sem = "<< sem << endl;
};
int main(){
    Student s;
    s.input();
    s.display();
    return 0;
}
*/

//Write a C++ program to count the number of words and characters in a given text.
/*#include<iostream>
using namespace std;

int main() {
    string text;
    int word = 0, character = 0;

    cout << "Enter a text: ";
    getline(cin, text);

    for (int i = 0; i < text.length(); i++) {
        if (text[i] != ' ') {
            character++;
            // Check word start
            if (i == 0 || text[i - 1] == ' ') {
                word++;
            }
        }
    }

    cout << "Number of Words: " << word << endl;
    cout << "Number of characters (excluding spaces): " << character << endl;

    return 0;
}
*/
//Write a program to compare two strings using string functions.
/*#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str1[100], str2[100];
    cout << "Enter the first string: ";
    cin.getline(str1, 100);
    cout << "Enter the second string: ";
    cin.getline(str2, 100);
    int result = strcmp(str1, str2);
    if(result == 0){
        cout<< "The strings are equal.";
    }
    else if(result > 0){
        cout << "The first string is less than the second string.";
    }
    else{
        cout<< "The first string is greater than the second string.";
    }
    return 0;
}
    */
// Write a program in C++ to find the GCD of two numbers.
#include<iostream>
using namespace std;

int main(){
    int a, b, gcd;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    for (int i = 1; i <= a && i <= b; i++){
        if(a%i == 0 && b%i == 0){
            gcd = i;
        }
    }
    cout <<"GCD of "<< a << " and "<< b << " is : "<< gcd << endl;
    return 0;
}