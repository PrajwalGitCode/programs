//========== User's Code Starts Here ==========
#include<iostream>
using namespace std;

void print_pattern();
/*Function to print the pattern */

void print_pattern()
{
        /* Function to print the pattern */
        
        for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }    
 
 /* Dont change anything below. If changed click on reset. */

}

int main()
{
    int n;
    cin>>n;
    print_pattern();
    return 0;
}
//========== User's Code Ends Here ==========

