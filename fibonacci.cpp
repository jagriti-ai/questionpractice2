#include <iostream>
using namespace std;

// fibonacci series is a series of sum of previous two numbers--> 0 1 1 2 3

void fibonacci(int n){

    int a=0;         // first term is always zero

    int b=1;         // second term is always one

    int c;           // third term will be the sum of previous two terms

    for(int i=1; i<n; i++){

        int c= a+ b; // sum of last two terms

           a = b;    // move to second number

           b = c;    // store the new fibonacci number
    }
    cout << a;       // we here cout<<a beacuse a is the nth term which is changing from a=0 to a=nth 
}
int main(){

int n = 10;          // output = 34
//call function
fibonacci(n);

return 0;
// end of program
}