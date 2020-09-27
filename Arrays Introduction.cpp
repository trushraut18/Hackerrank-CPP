/*

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    reverse(array,array+size);

   for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}

