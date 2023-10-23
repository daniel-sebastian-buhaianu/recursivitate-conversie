#include <iostream>
using namespace std;
void conversie(int, int);
int main()
{
	int n, b;
	cout << "n = "; cin >> n;
	cout << "b = "; cin >> b;
	conversie(n, b);
	return 0;
}
void conversie(int n, int b)
{
	if (n)
	{
		conversie(n/b, b);
		cout << n%b;
	}
}
