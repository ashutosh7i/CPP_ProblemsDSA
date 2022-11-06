// Class can be represented in the form of,
// class ClassName {
// access _ speci fi erl :
// typel vat 1;
// type2 vat 2;
// ret_typel methodl(type_argl argl, type_arg2
// arg2,...
// access _ speci fi er2 :
// type3 vat 3;
// type4 va14;
// ret_type2 method2(type_arg3 arg3, type_arg4
// arg4,
// It's a common practice to make all variables private, and set/get them using
// public methods. For example:
// class SampleCIass {
// private:
// int vat;
// public:
// void set (int a) {
// vat = a;
// int get() {
// return vat;
// We can store details related to a student in a class consisting of his age (int),
// first_name (string), last_name (string) and standard (int).
// You have to create a class, named Student, representing the student's details,
// as mentioned above, and store the data of a student. Create setter and getter
// functions for each element; that is, the class should at least have following
// functions:
// • get_age, set_age
// • get_first_name, set_first_name
// • get_last_name, set_last_name
// • get_standard, set_standard
// Also, you have to create another method to_string() which returns the string
// consisting of the above elements, separated by a comma(,). You can refer to
// stringstream for this.
// Input Format
// Input will consist of four lines.
// The first line will contain an integer, representing the age. The second line will
// contain a string, consisting of lower-case Latin characters ('a'-'z'), representing
// the first name of a student.
// The third line will contain another string, consisting of lower-case Latin
// characters ('a'-'z'), representing the last_name of a student.
// The fourth line will contain an integer, representing the standard of student.
// Output Format
// The code provided by HackerRank will use your class members to set and then
// get the elements of the Student class.
// Sample Input
// 15
// john
// ca rmack
// 10
// Sample Output
// 15
// carmack, john
// 10
// 15 , john, carmack,
#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    private:
    int age;
    string first_name;
    string last_name;
    int standard;
    
    public:
    
    void set_age(int a){age = a;}
    int get_age(){return age;}
    void set_first_name(string f){first_name=f;}
    string get_first_name(){return first_name;}
    void set_last_name(string l){last_name=l;}
    string get_last_name(){return last_name;}
    void set_standard(int s){standard=s;}
    int get_standard(){return standard;}
    
//converts the attributes in a comma separated string, using stringstream//
string to_string()
{
    stringstream ss;
    string s;
    ss << get_age() <<  "," << get_first_name() << "," << get_last_name() << "," << get_standard() <<endl;          
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
