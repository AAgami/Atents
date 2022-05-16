#define _CRT_SECURE_NO_WARNINGS
#ifndef LINKEDLIST_STACK_H
#define LINKEDLIST_STACK_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct tagNode{
	char* Data;
	struct tagNode* NextNode;
}Node;

typedef struct tagLinkedListStack {
	int Count; //노드의 갯수
	Node* List; //헤드노드 주소값
	Node* Top; //꼬리 노드 주소값
}LinkedListStack;

void LLS_CreateStack(LinkedListStack** Stack);
void LLS_DestroyStack(LinkedListStack* Stack);

Node* LLS_CreateNode(char* Data);
void LLS_DestroyNode(Node* _Node);

void LLS_Push(LinkedListStack* Stack, Node* NewNode);
Node* LLS_Pop(LinkedListStack* Stack);

Node* LLS_Top(LinkedListStack* Stack);
int LLS_GetSize(LinkedListStack* Stack);
int LLS_IsEmpty(LinkedListStack* Stack);

#endif