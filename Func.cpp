#include "Func.h"

Node* findByPos(Node* L, int pos)
{
	if (pos < 1) return 0;
	Node* q = L;
	for (int i = 1; q != 0 && i < pos; i++)
	{
		q = q->next;
	}
	return q;
}

void create_list(Node*& L, int n)
{
	Node* q, * q1 = nullptr;
	cout << "Значения чисел для " << n << " узлов:\n";
	for (int i = 1; i <= n; i++)
	{
		q = new Node;
		q->number = 100 / i * pow(-1, i + i / 3);
		q->next = nullptr;
		if (L == NULL) L = q;
		else 
		{
			q1->next = q;
		}
		q1 = q;
	}
}

void print(Node* L) 
{
	if (!L) {
		cout << "Список пуст!\n";
		return;
	}
	Node* q = L;
	for (int i = 1; q; i++, q = q->next) {//пока не найдём NULL в последнем узле
		if (i > 1) cout << " ";
		cout << q->number;
	}
	cout << endl;
}


int deleteByPos(Node*& L, int p)
{
	Node* q = 0;
	if (p == 1)
	{
		q = L;
		L = L->next;
		delete q;
		return 0;
	}
	Node* q1 = findByPos(L, p - 1);
	if (q1 != 0)
	{
		q = q1->next;
		if (q != 0) {//есть удаляемый объект
			q1->next = q->next;
			delete q;
			return 0;
		}
	}
	return -1;
}

//#include "Func.h"
//
//void FillList(const char *L)
//{
//	string inp;
//	cin >> inp;
//	L = strdup(inp);
//}
//
//void OutArr(const char* L)
//{
//
//	for (int i = 0; i < strlen(L); i++)
//	{
//		cout << L[i];
//	}
//	cout << "\n";
//}
//
//void LastInBegin(char*& Arr, int& n)
//{
//	char* temp = new char[n];
//	temp[0] = Arr[n - 1];
//	for (int i = 0; i < n; i++)
//	{
//		i++;
//		temp[i - 1] = Arr[i];
//	}
//	Arr = temp;
//}
