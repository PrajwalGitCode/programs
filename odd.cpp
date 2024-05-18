//========== User's Code Starts Here ==========
#include<iostream>
using namespace std;

void print_series();
/*Function to print odd numbers */

void print_series(int n)
{
        /* Print all odd numbers from 1 to n (including)
            . Note print all the numbers in a seperate line */
            
for(int i=0;i<=n;i++){
    if(i%2!=0)
    cout<<i<<endl;
}

 
 
 
 
 
 /* Dont change anything below. If changed click on reset. */

}

int main()
{
    int n;
    cin>>n;
    print_series(n);
    return 0;
}
//========== User's Code Ends Here ==========

