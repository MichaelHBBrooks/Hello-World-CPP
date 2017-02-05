/**
 * I spent way too long making this. At first I made just the Node class and it worked fine. But
 * then I realized that I wanted the deconstructor to erase all entries rather than leave them
 * around. Trying to delete the node while in the deconstructor led to an infinite loop.
 * I then created the LinkedList class to resolve this problem. Deletions now occur appropriately!
 * I hope.
 */

#include<iostream>

class Node {
public:
	Node* next;
	int data;

	Node(int new_data);
};

Node::Node(int new_data){
	data = new_data;
	next = NULL;
}

class LinkedList{
public:
	Node* head;

	LinkedList();
	~LinkedList();

	void appendToTail(int new_data);
};

LinkedList::LinkedList(){
	head = NULL;
}

LinkedList::~LinkedList(){
	std::cout << "Destroyed!\n";
	Node* this_node = head;
	while(this_node != NULL){
		Node* next_node = this_node->next;
		delete this_node;
		this_node = next_node;
	}
}

void LinkedList::appendToTail(int new_data){
	Node* new_tail = new Node(new_data);
	Node* n = head;
	while(n->next != NULL){
		n = n->next;
	}
	n->next = new_tail;
}


void printLinkedList(const Node& some_node);

int main(int argc, char* argv[]){
	LinkedList list;
	list.head = new Node(1);
	printLinkedList(*list.head);
	list.appendToTail(2);
	list.appendToTail(3);
	list.appendToTail(15);
	list.appendToTail(7);
	printLinkedList(*list.head);

	std::cout << "Exiting program.\n";
	return 0;
}

void printLinkedList(const Node& some_node){
	Node* n = some_node.next;
	std::cout << some_node.data << ' ';
	while(n != NULL){
		std::cout << n->data << ' ';
		n = n->next;
	}
	std::cout << std::endl;
}
