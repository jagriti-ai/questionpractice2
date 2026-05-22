#include <iostream>
using namespace std;

int main(){ //input
    int n=4;

    for(int i=0; i<n; i++){ //outer loop to print no. of rows

    for(int j=0; j<n-i-1; j++){ //1st inner loop to print spaces
        cout<<" ";
    } 
    for(int j=1; j<=i+1; j++){ //2nd inner loop to print ist half numbers // j=1 because the pattern starts from 1
        cout<<j;
    }
    for(int j=i; j>0; j--){ //3rd inner loop to print second half numbers (backward loop i.e j--
        cout<<j;
    }
    cout<<endl; //end of line
    
}
return 0;
}//end of program

//   1         //here the pattern is divides into two halves
//  12|1       // the 2nd inner loop prints first half numbers
// 123|21      // the 3rd inner loop prints the second half numbers
//1234|321