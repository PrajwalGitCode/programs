//========== User's Code Starts Here ==========
#include<iostream>
using namespace std;

void print_pattern();
/*Function to print the pattern */

void print_pattern()
{
        /* Function to print the pattern */
        
                int i = 5;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }

int row = 1;
    while (row <= 5) {
        int col = 1;
        while (col <= row) {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
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
