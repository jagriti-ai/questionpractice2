//Program to print the hollow diamond
#include<iostream>                              
using namespace std;
 int main(){
int n=4;
// outer loop = no. of lines
for(int i=0; i<n; i++ ){
//inner loop
    for(int j=0; j<n-i-1; j++){
//spaces
        cout<<" ";
    }
    // outer stars
    cout<<"*";
//inner spaces
if (i != 0){
for(int j=0; j<2*i-1; j++){
     
    cout<<" ";
}
//inner stars
cout<<"*";
}
cout<<endl;
}

 
 //bottom part
 for(int i=0; i<n-1; i++){  //no. of lines
    //outer spaces
    for(int j=0; j<i+1; j++){
        cout<<" ";
    }//outer stars
    cout<<"*";
    if(i !=n-2){ // as no space on i=2
        //no. of spaces
        for( int j=0; j<2*(n-i)-5; j++){
            cout<<" ";
        }//inner stars
        cout<<"*";
    }
    //end of line
    cout<<endl;
 }
 return 0;
 
 }

 