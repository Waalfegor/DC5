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
void sort_list(Node*& L);
int findMinLowestDigitPos(Node* L, int startFrom = 1);
void print(Node* L);
bool isSorted(Node* L);
int deleteByPos(Node*&, int);

#endif
