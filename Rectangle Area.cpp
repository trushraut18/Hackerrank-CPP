/*
Sample Input

10 5
Sample Output

10 5
50*/
#include <iostream>

using namespace std;
class Rectangle 
{
    protected:
    int width;
    int height;
    public :
     void display()
    {
        cout<<width<<" "<<height<<endl;

    }

};

class RectangleArea:public Rectangle
{
    public:
    void read_input()
    {
     cin>>width>>height;
    }
    
    void display()
    {
        cout<<(width*height);
    }

};


