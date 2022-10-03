  //summation of number from 0 to n
  #include <iostream>
  using namespace std;

int summation(int n)
{
    if(n==0)
    return 0;
    
    else
    {
        return n+summation(n-1);
    }
}

int main ()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Summation of number from 0 to "<<n<<" is- "<<summation(n);
    return 0;
}
