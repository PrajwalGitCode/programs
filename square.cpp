//========== User's Code Starts Here ==========
#include<iostream>
#include<math.h>
using namespace std;

void print_series();
/*Function to print even numbers */

void print_series(int n)
{
        /* Print the following series 
            1 4 9 16 25 36 to n. Note print all the numbers in a seperate line*/
            int i=1,j;
            while(i<=sqrt(n)){
                j=i*i;
                cout<<j<<endl;
                i++;
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
