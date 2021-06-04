#include <iostream>
using namespace std;
// question 4
int q4_factorial(int n)
{
    if(n > 1)
        return n * q4_factorial(n - 1);
    else
        return 1;
}
int main()
{
	cout << q4_factorial(3) << endl;;
}
