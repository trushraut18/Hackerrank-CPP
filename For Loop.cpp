/*
Sample Input

8
11
Sample Output

eight
nine
even
odd

*/
#include <iostream>
#include <cstdio>
using namespace std;

int main()
 {
    string c[]={" ","one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++)
    {
        cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
    }
    return 0;
}

