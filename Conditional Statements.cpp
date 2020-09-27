/*
Sample Input 0

5
Sample Output 0

five
Sample Input 1

8
Sample Output 1

eight

Sample Input 2

44
Sample Output 2

Greater than 9
*/
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    const char *s[10] ={" ","one","two","three","four","five","six","seven","eight","nine"};
    if(n<=9)
    {
        cout<<s[n];
    }
    else
    {
        cout<<"Greater than 9";
    }
 

    return 0;
}

