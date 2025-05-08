/*#include<iostream>
int main(){
   std:: cout << "Every age has a language of it's own\n";
    return 0;
}
    */
  /* #include <iostream>
   using namespace std;
   int main(){
int var1;
int var2;
var1 = 20;
var2 = var1 + 10;
cout << var2 <<endl;
return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    char charvar1 = 'A';
    char charvar2 = '\t';
    cout << charvar1 <<endl;
    cout << charvar2 <<endl;
    charvar1 = 'B';
    cout << charvar1 <<endl;
    cout << '\n' <<endl;
    return 0;
}
#include <iostream>
using namespace std; 

int main(){
    int ftemp;
    cout << "Enter temperature in fahrenheit: ";
    cin >> ftemp;
    int ctemp = (ftemp-32)*5 / 9;
cout << "Equivalent in Celcius is: " << ctemp << '\n';
return 0;
}
program to calculate the area of a circle.
#include <iostream>
using namespace std;

int main(){
    float radius;
    const float PI = 3.14159F;
     cout << "Enter radius of circle: ";
     cin >> radius;
     float Area = PI*radius*radius;
     cout << "Area is: " << Area << endl;
     return 0;
}
    #include <iostream>
    using namespace std;

    int main(){
        long pop1 = 2425785, pop2 = 47,  pop3 = 9761;
        cout << " Location " << "pop."<< endl
             << "Portcity " << pop1 << endl
             << "Hightown " << pop2 << endl
             << "Lowville " << pop3 << endl;
             return 0;
    }
             */
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
long int pop1 = 2425785, pop2 = 47, pop3 = 9761, pop4 = 84457;
cout << setw(8) << "Location" << setw(12) << "Population" << endl
     << setw(8) << "Portcity" << setw(12) << pop1 << endl
     << setw(8) << "Hightown" << setw(12) << pop2 << endl
     << setw(8) << "Lowville" << setw(12) << pop3 << endl
     << setw(8) << "Kathmandu" << setw(12) << pop4 << endl;
     return 0;
    }
