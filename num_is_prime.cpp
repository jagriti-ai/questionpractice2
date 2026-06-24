#include <iostream>
using namespace std;

//function to check whether a number is prime
void checkPrime(int n){ 
 //number less than or equal to one are non prime
    if(n<=1){  
        cout<< "Non Prime";

        return; //Exit function
    }
    // check divisibilty from 2 to root n
    for(int i=2; i*i<=n; i++ ){

        //if divisible it is non prime

        if( n % i==0){

            cout<< " Non Prime";
            return ;
        }
    } 
    // if there is no divisor
          cout<< "Prime";
    
 }
int main(){
    int num = 5; // number which we want to check

    checkPrime(num); //call function
    return 0; //End of program
}