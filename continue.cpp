//========== User's Code Starts Here ==========
#include<iostream>
using namespace std;

void print_output();
/*Function to print the series using continue*/

void print_output(int n)
{
        /*Print all even numbers from 1 to n except the ones divisible by 4
    use the help of continue statement to leverage this  */
    
for(int i=0;i<=n;i++){
if(i%4==0){
        continue;
    }
if(i%2==0)
    cout<<i<<endl;
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

