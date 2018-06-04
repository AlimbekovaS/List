#include "List.h"
#include "List.cpp"

int main()
{
	List<int> L;
	L.push_back(5);
	L.push_back(12);
	L.push_back(112);



	L.print();
	cout << endl;

	L.removeFirst();
	L.print();

	system("pause");
	return 0;
}