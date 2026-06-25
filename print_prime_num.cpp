#include <iostream>
using namespace std;

// to print prime numbers from 2 to n
void printPrime(int n){

    for(int i=2; i<=n; i++){

        int count = 0;

        //check factors
        for(int j=2; j*j<=i; j++ ){

       if(i%j ==0){
        count++;
        break; //stop loop if the number has factor
       }
        }
    // if no factor found print the prime number
    if(count == 0){

        cout<< i <<" ";

    }

}
}
int main(){
    int n=20; //upto n numbers

    //call function
    printPrime(n);

    return 0;
}//end of program

