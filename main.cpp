#include "Func.h"

int main() {
	setlocale(LC_ALL, "RUS");
	srand(time(0));

	Node* L = NULL;

	int n;
	cout << "Размер списка:\n";
	cin >> n;

	create_list(L, n);
	cout << "Список:\n";
	print(L);

	//cout << "Отсортирован ли список по возрастанию?\n";
	//cout << (isSorted(L) ? "ДА" : "НЕТ") << endl;

	//int pos = 2;
	//cout << "Значение в позиции " << pos << ":\n";
	//cout << findByPos(L, 2)->number << endl;
	//pos = findMinLowestDigitPos(L);

	//cout << "Элемент списка с минимальным значением младшей цифры:\n";
	//cout << pos << " " << findByPos(L, pos)->number << endl;

	//sort_list(L);
	//cout << "Отсортированный список по возрастанию значения младшей цифры:\n";
	//print(L);

	//cout << "Отсортирован ли список по возрастанию?\n";
	//cout << (isSorted(L) ? "ДА" : "НЕТ") << endl;

	//cout << "Удаление узла с позицией 1\n";
	//deleteByPos(L, 1);
	//print(L);

	cout << "Удаление узла с позицией 2\n";
	deleteByPos(L, 2);
	print(L);

	system("pause");
	return 0;
}
