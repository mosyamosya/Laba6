#include <iostream>
#include "windows.h"


using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	cout << "¬вед≥ть номер м≥с€ц€: ";
	cin >> n;
	switch (n) {
	case 1: cout << "31 день"; break;
	case 2: cout << "29 дн≥в"; break;
	case 3: cout << "31 день"; break;
	case 4: cout << "30 дн≥в"; break;
	case 5: cout << "31 день"; break;
	case 6: cout << "30 дн≥в"; break;
	case 7: cout << "31 день"; break;
	case 8: cout << "31 день"; break;
	case 9: cout << "30 дн≥в"; break;
	case 10: cout << "31 день"; break;
	case 11: cout << "30 дн≥в"; break;
	case 12: cout << "31 день"; break;
	case 13: cout << "31 день"; break;
	default: cout << "ѕомилка";
	}


}
