#include "Array.h"

using namespace std;

/*Test*/
int main() {
	int n = 50;
	Array<int> arrs(n);

	cout << "Size of Array: " << arrs.getSize() << endl;
	cout << "Is the array empty? " << arrs.isEmpty() << endl;

	for (int i = 0; i < n; i++)
	{
		arrs.Insert(i, i);
	}

	arrs.Insert(43, 50);

	cout << arrs.getValue(43) << endl;
	return 0;
}