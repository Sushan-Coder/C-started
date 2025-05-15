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
//Type conversion
#include <iostream>
using namespace std;

int main(){
    cout << (int)'a' << endl;
    cout << int('a') << endl;
    return 0;
}