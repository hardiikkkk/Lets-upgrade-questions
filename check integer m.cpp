// Given an integer M perform the following conditional actions:



// - If M is multiple of 3 and 5 then print "Good Number" (without quotes).

// - If M is only multiple of 3 and not of 5 then print "Bad Number" (without quotes).

// - If M is only multiple of 5 and not of 3 then print "Poor Number" (without quotes).

// - If M doesn't satisfy any of the above conditions then print "-1" (without quotes).



#include <iostream>
using namespace std;

int main(){
    
    int M;
    cin>>M;
    
    if(M%3==0 && M%5==0){
        cout<<"Good Number";
        
    }
    
    else if(M%3==0 && M%5!=0){
        cout<<"Bad number";
             
         }
    
    else if(M%3!=0 && M%5==0){
        cout<<"Poor number";
             
         }
    
    else{
        cout<<"-1";
        }
    
    
}
