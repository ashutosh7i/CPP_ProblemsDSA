  //summation of number from 0 to n
  #include <iostream>
  using namespace std;

int table(int n)
{
    if(n==0)//stops if n is 0
    return 0;
    
    else
    {
        for ( int i=1; i<=10; i++)//starting from 1 not 0
        {
            cout<<n*i<<endl;
        }
    }
}

int main ()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Table of "<<n<<" is- "<<endl;
    table(n);//calling
    return 0;
}


