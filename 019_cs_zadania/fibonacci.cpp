#include <iostream>

using namespace std;

int n; int sequence;

int fibonacci_iterative(int sequence);
int fibonacci_recursive(int sequence);



long int fib(int n)
{
    if (n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}

int main(){

    cout << "Ktora liczbe ciagu Fibonacciego mam wyznaczyc:" << endl;
    cin >>n ;

	cout << "Fibnonnaci fib(n): " << fib(n) << endl;

};