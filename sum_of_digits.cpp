#include <iostream>
using namespace std;

int sumOFdigits( int num){ //define function
    
    int digSum =0; //
while( num > 0){
    int lastDig = num % 10;
    num /= 10;

    digSum += lastDig;
}
return digSum;
}
int main(){

    cout << "sum= "<< sumOFdigits(6786) << endl;
    return 0;
}