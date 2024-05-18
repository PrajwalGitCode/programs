//========== User's Code Starts Here ==========
#include<iostream>
using namespace std;

void weekday_name(int );
/*Function to print the weekday name */

void weekday_name(int n)
{
/*write the code to print the weekday name in lower case when
     the weekday number is given using switch statements*/

switch(n) {

   case 1:
    cout<<"monday"<<endl;
    break;
      case 2:
    cout<<"tuesday"<<endl;
    break;
      case 3:
    cout<<"wednesday"<<endl;
    break;
      case 4:
    cout<<"thursday"<<endl;
    break;
      case 5:
    cout<<"friday"<<endl;
    break;
      case 6:
    cout<<"saturday"<<endl;
    break;
      case 7:
    cout<<"sunday"<<endl;
    break;

  default:
  cout<<"invalid"<<endl;
    
}
 
 
 
 
 
 /* Dont change anything below. If changed click on reset. */

}

int main()
{
    int a;
    cin>>a;
    weekday_name(a);
    return 0;
}
//========== User's Code Ends Here ==========

