#include <iostream>
using namespace std;

int main() {

    int a = 8, b=4;

    cout << ( a ^ b) << endl; 

    return 0;

}
// rule => if same bits - zero
//         if different bits - one
// 0 ^ 0 => 0
// 1 ^ 0 => 1
// 0 ^ 1 => 1
// 1 ^ 1 => 0
