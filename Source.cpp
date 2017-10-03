#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string solve(int year) {
	// Complete this function
	if (year < 1918)
	{
		if (year % 4 == 0)
		{
			return "30.08.";

		}
		else return "31.08.";


	}
	if (year > 1917)
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			return "12.09.";

		else return"13.09.";

	}


}
int main()
{

	int year;
	cin >> year;
	string result = solve(year);
	cout << result <<year<< endl;




	system("pause");
	return 0;
}