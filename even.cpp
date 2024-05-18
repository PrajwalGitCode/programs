//========== User's Code Starts Here ==========
#include<iostream>
using namespace std;

void print_even();
/*Function to print even numbers */

void print_even(int n)
{
        /* Print all even numbers from 1 to n */

int i=1;
while(i<=n){
    if(i%2==0)
    cout<<i<<endl;
    i++;
}
 
 
 /* Dont change anything below. If changed click on reset. */

}

int main()
{
    int n;
    cin>>n;
    print_even(n);
    return 0;
}
//========== User's Code Ends Here ==========

