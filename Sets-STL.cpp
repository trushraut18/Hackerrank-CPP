/*
Sample Input

8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6
Sample Output

Yes
No
No
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    set<int> s;
    int queries;
    cin >>queries ;
    for (int i=0; i<queries; ++i)
    {
    int type, integer;
    cin >> type >> integer;
    switch (type)
    {
        case 1:
            s.insert(integer);
            break;
        case 2:
            s.erase(integer);
            break;
        case 3:
            cout << (s.find(integer) == s.end() ? "No" : "Yes") << endl;
            break;
    }
}  
return 0;
}




