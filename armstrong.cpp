//========== User's Code Starts Here ==========
#include<iostream>
#include<math.h>
using namespace std;

void check_armstrong();
/*Function to check wheteher a number is an armstrong number or not */

void check_armstrong(int n)
{
        /*Function to check whether a number is an armstrong number or not
        Print true if yes else false */
        int sum,r;
        int temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}
 
 
 /* Dont change anything below. If changed click on reset. */

}

int main()
{
    int n;
    cin>>n;
    check_armstrong(n);
    return 0;
}
//========== User's Code Ends Here ==========

