# include <iostream>
using namespace std;
//minimum of two numbers
//define function
int minOfTwo (int a, int b){
    if(a<=b){
        return a;
    }else{
return b;
    }
}
    //call function
    int main(){
        cout<< minOfTwo(10,5)<<endl;
    
    return 0;
}