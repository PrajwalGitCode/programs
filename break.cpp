//========== User's Code Starts Here ==========
#include<iostream>
using namespace std;

void print_series(int, int);
/*Function to print series */

void print_series(int n,int m)
{
        /* Print the following series from 1 to n if m is present stop printing the series 
            Note print all the numbers in a seperate line*/
        for(int i=1;i<=n;i++){
            if(i==m){
                break;
            }
            cout<<i<<endl;
        }
            


 
 
 
 
 
 /* Dont change anything below. If changed click on reset. */

}

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    print_series(n,m);
    return 0;
}
//========== User's Code Ends Here ==========

