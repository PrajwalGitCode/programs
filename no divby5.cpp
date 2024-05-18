//========== User's Code Starts Here ==========
#include<iostream>
using namespace std;

void print_output();
/*Function to print the series using continue*/

void print_output(int n)
{
        /*Print all numbers from 1 to n except the ones divisible by 5
    use the help of continue statement to leverage this  */
    
int i=1;

while(i<=n){
    if(i%5==0){
        i++;
        continue;
    }
        cout<<i<<endl;
        i++;
    
}

 
 
 
 
 
 /* Dont change anything below. If changed click on reset. */

}

int main()
{
    int n;
    cin>>n;
    print_output(n);
    return 0;
}
//========== User's Code Ends Here ==========

