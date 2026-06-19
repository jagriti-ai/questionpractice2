#include <iostream>
using namespace std;

int changeX(int x){
     x = 2*x;
     cout << "x = " << x<< endl; //output 10

}
int main(){
    int x=5;
    int changeX(x);

    cout<< "x = "<< x<< endl; //final output 5
    return 0;
}
