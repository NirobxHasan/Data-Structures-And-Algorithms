#include <iostream>
#include <math.h>

using namespace std;

int fib(int n)
{
    if (n <= 1)return n;
    return fib(n-1) + fib(n-2);
}
int factorial(int x)
{
    if(x > 1) return x * factorial(x - 1);
    else return 1;
}
int sumOfDigit(int x)
{
    if (x == 0) return 0;
    return (x % 10 + sumOfDigit(x / 10));
}
int findMin(int a[],int size)
{
    if (size == 1)
        return a[0];
    return std::min(a[size-1], findMin(a, size-1));
}
int DecToBin(int dec)
{
    if (dec == 0) return 0;
    else return (dec % 2 + 10 * DecToBin(dec / 2));
}
double recursiveSeries(int n)
{
    if(n == 0 )return 1;
    else return ((1/pow(2,n) + recursiveSeries(n-1)));
}


int main()
{

    cout<<"Fibonacci Series: "<<fib(10)<<endl;
    cout<<"Factorial Number: "<<factorial(6)<<endl;
    cout<<"Sum of Digit: "<<sumOfDigit(12345)<<endl;

    int arr[] = {1, 3, -5, 6, -9, 20, 2};
    int size = 7;
    cout<<"Find Minimum: "<<findMin(arr,size)<<endl;
    cout<<"Decimal to Binary: "<<DecToBin(10)<<endl;

    cout<<"Recursive function : "<<recursiveSeries(5)<<endl;


    return 0;
}
