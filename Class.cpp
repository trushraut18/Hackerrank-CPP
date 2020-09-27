/*Sample Input

15
john
carmack
10
Sample Output

15
carmack, john
10

15,john,carmack,10
*/

#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private :
    int new_age, new_standard;
    string new_first_name, new_last_name;

    public :
    void set_age(int age)
    {
     new_age = age;
    } 
    int get_age()
    {
        return new_age;
    }
    void set_first_name(string first_name)
    {
        new_first_name = first_name;
    } 
    string get_first_name()
    {
        return new_first_name;
    }
    void set_last_name(string last_name)
    {
        new_last_name = last_name;
    } 
    string get_last_name()
    {
        return new_last_name;
    }
    void set_standard(int standard)
    {
        new_standard = standard;
    } 
    int get_standard()
    {
        return new_standard;
    }
    
    string to_string()
    {
     stringstream ss;
        char c = ',';
        ss << new_age << c << new_first_name << c << new_last_name << c << new_standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

