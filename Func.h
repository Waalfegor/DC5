#ifndef FUNC_H_
#define FUNC_H_


#include <ctime>
#include <iostream>


using namespace std;

struct Node {
	char number;
	Node* next;
};


Node* findByPos(Node* L, int pos);
void create_list(Node*& L, int n);
void print(Node* L);
int deleteByPos(Node*&, int);

#endif
