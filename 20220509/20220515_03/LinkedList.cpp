#include "LinkedList.h"

/*��� ����*/
Node* SLL_CreateNode(ElementType NewData){
	Node *NewNode = (Node*)malloc(sizeof(Node));
	/*
	(void) -> (Node*)
		void�� Node ������ malloc���� �Ҵ�.Node�����ͷ� Ÿ��ĳ����(����ȯ) �ϴ� ���� �ǹ�

		Node��ŭ�� ����� �Ҵ���� malloc�� void*�� ��ȯ
		��ȯ���� void*�� node*�� ����ȯ

		ex) int a = (int)9.1
	*/

	NewNode->Data = NewData;//�����͸� �����Ѵ�
	NewNode->NextNode = NULL;//������忡 ���� �����ʹ� NULL�� �ʱ�ȭ�Ѵ�

	return NewNode;//����� �ּ� ��ȯ

}

/*��� �Ҹ�*/
void SLL_DestroyNode(Node* Node) {
	free(Node);
}

/*��� �߰�*/
void SLL_AppendNode(Node** Head, Node* NewNode) {

	/*��� ��尡 NULL�̶�� ���ο� ��尡 Head
	*Head==NULL�� ����Ű�°���, *Head==NULL�̴ٸ� �����ִ°��� �𸣴°Ŵϱ� �� ��ȣ�� �ٿ��ش�. 
	*/
	if ((*Head) == NULL) {
		*Head = NewNode;
	}
	else{
		/*������ ã�� NewNode�� �����Ѵ�*/
		Node *Tail = (*Head);
		while (Tail->NextNode != NULL) {  
			Tail = Tail->NextNode; //������ ����Ű�°� ��尡 �ϳ� �� �־�.
		}
		Tail->NextNode = NewNode;//�׷� �� ���� �ٲ������.
	}

	/*
	typedef struct Node{
    int data;
    struct Node* next;
	} Node;

	int main(void)
	{
    Node tmp1;
    tmp1.data = 1;  ������ ���� �����ϸ� .����
    
    Node *tmp2;
    tmp2->data = 2; �����ͷ� �����ϸ� ->����


    return 0;
	}
	*/
}

/*��� ����*/
void SLL_InsertAfter(Node* Current, Node* NewNode) {
	NewNode->NextNode = Current->NextNode;
	Current->NextNode = NewNode;
}

void SLL_InsertNewHead(Node** Head, Node* NewHead) {
	if (*Head == NULL) {
		(*Head) = NewHead;
	}

	else {
		NewHead->NextNode = (*Head);
		(*Head) = NewHead;
	}
}

/*��� ����*/
void SLL_RemoveNode(Node** Head, Node* Remove) {
	if (*Head == Remove) {
		*Head = Remove->NextNode;
	}

	else {
		Node* Current = *Head;
		while (Current != NULL && Current->NextNode != Remove) {
			Current = Current->NextNode;
		}

		if (Current != NULL)
			Current->NextNode = Remove->NextNode;
	}
}

	

	/*��� Ž��*/
	Node* SLL_GetNodeAt(Node* Head, int Location) {
		Node* Current = Head;

		while(Current != NULL && (--Location) >= 0) {
			Current = Current->NextNode;
		}
		return Current;
	}
	/*��� �� ����*/
	int SLL_GetNodeCount(Node* Head) {
		int Count = 0;
		Node* Current = Head;
		
		while (Current != NULL) {
			Current = Current->NextNode;
			Count++;
		}
		return Count;
	}



