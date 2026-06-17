#include <iostream>
using namespace std;

int fact (int n){

    int fact=1;
    for(int i=1; i<=n; i++){ //i =1 because of multiplication
        fact *= i; 
}
return fact;

}
int main(){
 
    cout <<fact(5) <<endl; //output is 120
return 0;
}
