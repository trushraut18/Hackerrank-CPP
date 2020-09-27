/*
Sample Input

3 12345678912345 a 334.23 14049.30493
Sample Output

3
12345678912345
a
334.230
14049.304930000
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf",a,b,c,d,e);
    return 0;
}

