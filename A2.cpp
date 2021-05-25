#include <iostream>

using namespace std;

int main( )
{
// 	char a[4] = "abc";
// 	int a[4] = {1, 2, 3};
 	double a[4] = {1, 2, 3};
	
	for (double *cp = a; (*cp) != '\0'; cp+=2) {
 	cout << (void*) cp << " : " << (*cp) << endl;
 	}
 
 	return 0;
}
//Kich thuoc kieu int la 4
//Kich thuoc kieu double la 8
//cp+=2 se lam bo qua 1 bien, con ket qua thi tuong tu
