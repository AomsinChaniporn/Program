#include <iostream>
using namespace std;
int main() 
{
	float money;
	float euro;
	float dollar;
	cout << "Input Thai Baths : " << endl;
	cin >> money;
	dollar = money * 0.033;
	euro = money * 0.029;
	cout << " *** Exchange Rate ***" << endl;
	cout << money << "Baths is " << dollar << "dollars" << endl;
	cout << money << "Baths is " << euro << "euros" << endl;
	return(0);
}