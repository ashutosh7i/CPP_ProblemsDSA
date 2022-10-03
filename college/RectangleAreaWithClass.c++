// In this challenge, you are required to compute the area of a rectangle using classes.
// Create two classes:
// Rectangle
// The Rectangle class should have two data fields-width and height of int types. The class should have
// display() method, to print the width and height of the rectangle separated by space.
// RectangleArea
// The RectangleArea class is derived from Rectangle class, i.e., it is the sub-class of Rectangle class. The
// class should have read_input() method, to read the values of width and height of the rectangle. The
// RectangleArea class should also overload the display() method to print the area (width x height) of
// the rectangle.
// Input Format
// The first and only line of input contains two space separated integers denoting the width and height of
// the rectangle.
// Constraints
// • I width, height 100
// Output Format
// The output should consist of exactly two lines:
// In the first line, print the width and height of the rectangle separated by space.
// In the second line, print the area of the rectangle.
// Sample Input
// 10 5
// Sample Output
// 10 5
// 50
// Explanation
// As, width 10 and height 5, so area width x height
// 50
#include <iostream>
using namespace std;
class Rectangle{
    public:
    int height;
    int width;
    
    void display(){
        cout<<height<<" "<<width<<endl;
    }
};

class RectangleArea : public Rectangle{
    public:
    void read_input(){
        cin>>width>>height;
    }
    void display(){
        cout<<width * height;
    }
}


int main(){
    Rectangle rect;
    rect.display();
    RectangleArea recta;
    recta.read_input()
}