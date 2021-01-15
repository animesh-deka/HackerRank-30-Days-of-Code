#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int input_integer;
    double input_double; 
    string input_string;
    // Read and save an integer, double, and String to your variables.
    cin>>input_integer;
    cin>>input_double;
    cin.get();
    getline (cin, input_string);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<i+(double)input_integer<<endl;
    // Print the sum of the double variables on a new line.
    cout<<fixed<<setprecision(1)<<d+input_double<<endl;
    // Concatenate and print the String variables on a new line
    cout<<s<<input_string<<endl;
    // The 's' variable above should be printed first.

    return 0;
}
