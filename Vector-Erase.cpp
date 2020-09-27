/*
Sample Input

6
1 4 6 2 8 9
2
2 4
Sample Output

3
1 8 9
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
    vector<int> v(len);
    
    for(int i=0;i<len;i++)
    {
        cin>>v[i];
    }

    int element_to_remove ;
    cin >> element_to_remove;


    v.erase(v.begin()+(element_to_remove-1));

    int lb,ub;
    cin>>lb>>ub;

    v.erase(v.begin()+lb-1,v.begin()+ub-1);

    cout<<v.size()<<endl;
    
    for(auto j = v.begin();j!=v.end();++j)
    {
        cout<<*j<<" ";
    }

    return 0;
}

