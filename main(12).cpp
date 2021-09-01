#include <iostream>

using namespace std;

int a, b, c, d, e, f, g, h, i, j;
double res;

int main() 
{
	cout << "give me a mark" << endl;
	cin >> a;
	cout << "give me a mark" << endl;
	cin >> b;
	cout << "give me a mark" << endl;
	cin >> c;
	cout << "give me a mark" << endl;
	cin >> d;
	cout << "give me a mark" << endl;
	cin >> e;
	cout << "give me a mark" << endl;
	cin >> f;
	cout << "give me a mark" << endl;
	cin >> g;
	cout << "give me a mark" << endl;
	cin >> h;
	cout << "give me a mark" << endl;
	cin >> i;
	cout << "give me a mark" << endl;
	cin >> j;
	
	res = (a + b + c + d + e + f + g + h + i + j)/double(10);
	
	cout << "your average is: " << res << endl;
	
	if (res < 0)
	{
		cout << "error";
	}
	else if (res < 25)
	{
		cout << "you got a F";
	}
	else if (res >= 25 && res < 45)
	{
		cout << "you got an E";
	}
	else if (res >= 45 && res < 50)
	{
		cout << "you got a D";
	}
	else if (res >= 50 && res < 60)
	{
		cout << "you got a C";
	}
	else if (res >= 60 && res < 80)
	{
		cout << "you got a B";
	}
	else if (res >= 80)
	{
		cout << "you got an A";
	}
	
  return 0;
}