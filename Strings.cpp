/*
Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    char temp;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<(a+b)<<endl;
    temp = a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b;

  
    return 0;
}

