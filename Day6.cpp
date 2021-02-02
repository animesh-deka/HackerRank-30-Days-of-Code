#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        string s;
        cin>>s;
        for(int j=0; j<s.length(); j+=2)
            cout<<s[j];
        cout<<" ";
        for(int k=1; k<s.length(); k+=2)
            cout<<s[k];
        cout<<endl;
    } 
    return 0;
}
