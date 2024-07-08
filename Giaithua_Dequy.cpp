#include <iostream>
using namespace std;
int Giaithua(int n)
{
	if (n == 1)
		return 1;
	else
		return n * Giaithua(n - 1);
}

int main() 
{
	int n = 5;
	cout << n << "! = " << Giaithua(n);
}