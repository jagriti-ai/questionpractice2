#include <iostream>
using namespace std;

int main (){

int n;

cout <<" Enter a number" <<endl;
cin >> n;

if(n <= 0){

    cout<<" Not a power of 2" <<endl;
}else{

    while(n % 2 == 0){

        n = n/2 ;
    }
    if(n == 1){
        
        cout << "Power of 2" << endl;

    }else{

        cout<< " Not a power of 2" <<endl;
    }

}
return 0;
}
