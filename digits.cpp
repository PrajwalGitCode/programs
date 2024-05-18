//========== User's Code Starts Here ==========
#include<iostream>
using namespace std;

void print_digits();
/*Function to print the digits of the number n */

void print_digits(int n)
{
        /*Function to print the digits of the number n 
        Note - Print all the digits in a new line*/
int x;


   while (n > 0)
    {
        x = n % 10;
        n = n / 10;
        cout <<x<<endl;
    }


 
 /* Dont change anything below. If changed click on reset. */

}

int main()
{
    int n;
    cin>>n;
    print_digits(n);
    return 0;
}
//========== User's Code Ends Here ==========

