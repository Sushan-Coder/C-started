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
#include <iostream>
using namespace std;

int main(){
  char c1,c2,c3,c4;
 cout << "Enter 4 characters:" <<endl;
  cin >> c1 >> c2 >> c3 >> c4;
 cout << "char 1 =" << (int)c1 << endl <<"char 2 = " <<  (int)c2 << endl << "char 3 = " << (int)c3 << endl << "char 4 = " << (int)c4 << endl;
    return 0;
}