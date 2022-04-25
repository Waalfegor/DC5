#include "Func.h"

void create_list(Node*& L, int n)
{
	Node *q, *q1 = nullptr;
	cout << "Значения чисел для " << n << " узлов:\n";
	for (int i = 1; i <= n; i++)
	{
		q = new Node;
		while(true)
		{
			int temp = rand() % 100;
			if (isdigit(temp)) 
			{
				q->number = temp;
				break;
			}
		}
		q->next = nullptr;
		if (L == NULL) L = q;
		else
		{
			q1->next = q;
		}
		q1 = q;
	}
}

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


