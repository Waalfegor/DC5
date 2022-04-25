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
	printL(L);

	cout << "Удаление узла с позицией 2\n";
	deleteByPos(L, 2);
	printL(L);

	cout << "Перенос последнего элемента в начало списка:\n";
	LastToFirst(L);
	printL(L);

	cout << "Замена k-ого слова на новое\n";
	ChangeK(L);
	printL(L);
	system("pause");
	return 0;
}
