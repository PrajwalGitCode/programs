//========== User's Code Starts Here ==========
#include<iostream>
using namespace std;

int reverse();
/*Function to return the reverse of a number  */

int reverse(int n)
{
    /* Function to return the reverse of a number n */
int res,rem,out;

while(n!=0){
    rem=n%10;
    out=(out*10)+rem;
    n=n/10;
}
return out;
 
 /* Dont change anything below. If changed click on reset. */

}

int main()
{
    int n;
    cin>>n;
    int output = reverse(n);
    cout<<output<<endl;
    return 0;
}
//========== User's Code Ends Here ==========

