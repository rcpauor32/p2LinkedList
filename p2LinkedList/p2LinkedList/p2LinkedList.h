#ifndef __P2LINJEDLIST_H__
#define __P2LINKEDLIST_H__

typedef unsigned int uint;

struct node {
public:
	mutable int data;

	const node* next() const {
		return nxt;
	}
private:
	node* nxt = nullptr;

public:
	node(){}
	node(const int& data) : data(data) {}

};

class List {
public:
	List(){
		iterator = root;
	}
	virtual ~List(){}

private:
	node* root;
	node* iterator;

public:
	void CreateNode() {
		iterator = root;
		while (iterator->next != nullptr) {
			iterator = iterator->next;
		}
		iterator->next = new node;
	}

};

#endif