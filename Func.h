#ifndef FUNC_H_
#define FUNC_H_


#include <ctime>
#include <iostream>


using namespace std;

struct Node {
	char number;
	Node* next;
};

int SizeL(Node*& L);
void create_list(Node*& L, int n);
void printL(Node* L);
Node* findByPos(Node* L, int pos);
int deleteByPos(Node*&, int);
void LastToFirst(Node*& L);
void ChangeK(Node*& L);


#endif
