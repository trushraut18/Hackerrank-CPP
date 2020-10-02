/*Sample Input

3+i4
5+i6
Sample Output

8+i10
*/
//Operator Overloading

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

Complex operator+(const Complex & num1, const Complex & num2) {
    Complex num3 {num1.a + num2.a, num1.b + num2.b};
    return num3;
}

ostream & operator<< (ostream & out, const Complex & num1) {
    if (num1.b < 0) {
        out << num1.a << "-i" << -num1.b;
    } else if(num1.b > 0) {
        out << num1.a << "+i" << num1.b;
    } else {
        out << num1.a;
    }
    return out;
}
int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}

