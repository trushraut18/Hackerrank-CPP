/*
Sample Input

4
5
Sample Output

9
1
*/
#include <stdio.h>
#include<cstdlib>
void update(int *a,int *b) 
{
    printf("%d\n",(*a + *b));
    printf("%d",abs(*a - *b));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    

    return 0;
}

