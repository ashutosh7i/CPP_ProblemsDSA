#include<iostream>
using namespace std;
#include<conio.h>

int main() {
int a=13, b=5, c=7;
float x; int y; char z;

x = 4*4/3*a/b;
printf ("X=%3.2f" ,x) ;
y= 3.0*b/c/a;
printf("Y = %d",y);

a += a*a%2; a %= 2;
(a)? printf ("Good") : printf ("Nice") ;
return(0) ;
}