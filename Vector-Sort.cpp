/*Sample Input

5
1 6 10 8 4
Sample Output

1 4 6 8 10
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int len;
    cin>>len;
    vector<int>v(len);

    for(int i=0;i<len;i++)
    {
        cin>>v[i];
    }
    
    sort(v.begin(),v.end());

    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }


    return 0;
}

