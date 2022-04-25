#include "Func.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));

	Node* L = NULL;

	int n;
	cout << "Размер списка:\n";
	cin >> n;

	create_list(L, n);
	cout << "Список:\n";
	print(L);

	cout << "Удаление узла с позицией 2\n";
	deleteByPos(L, 2);
	print(L);

	system("pause");
	return 0;
}
