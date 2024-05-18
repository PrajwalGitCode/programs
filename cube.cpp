//========== User's Code Starts Here ==========
#include<iostream>
#include<math.h>
using namespace std;

void print_series();
/*Function to print series */

void print_series(int n)
{
        /* Print the following series 
            1 8 27 64 125 to n (including) . Note print all the numbers in a seperate line*/
            for(int i=1;i<=cbrt(n);i++){
                int c=i*i*i;
                cout<<c<<endl;
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

