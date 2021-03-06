#ifndef __P2LINJEDLIST_H__
#define __P2LINKEDLIST_H__

typedef unsigned int uint;

template<class T>

class List {
// Node implementation ---
	struct node {
	public:
		mutable T data;
		node* next = nullptr;

	public:
		node(){}
		node(const T& data) : data(data) {}

	};
// -----

public:
	List(){
		iterator = root;
	}
	virtual ~List(){}

	node* root;
	node* iterator;

public:
	// Erase ---

	// Insert ---
	void insert(const T& data, int n){}

	// Clear ---
	void Clear() {
		while (root != nullptr) {
			node* aux = root->next;
			delete root;
			root = aux;
		}
	}

	// First ---
	node first() {
		return *root;
	}

	// Push_Back ---
	void Push_Back(const T& value) {
		node* newnode = new node(value);
		if (root == nullptr) {
			root = newnode;
		}
		else {
			node* last = end();
			last->next = newnode;
		}
	}

	// Push_Front ---
	void Push_Front(const T& value) {
		node* newnode = new node(value);
		newnode->next = root;
		root = newnode;
	}

	// End ---
	node* end() {
		if (root == nullptr)
			return root;
		else 

		iterator = root;
 		while (iterator->next != nullptr) {
			iterator = iterator->next;
		}
		return iterator;
	}
	const node* end() const {
		if (root == nullptr)
			return root;
		else

		iterator = root;
		while (iterator->next != nullptr) {
			iterator = iterator->next;
		}
		return iterator;
	}

	// Size ---
	const uint size() {
		int size = 0;
		if (root != nullptr) {
			size = 1;
			iterator = root;
			while (iterator->next != nullptr) {
				iterator = iterator->next;
				size++;
			}
		}

		return size;
	}

	// Empty ---
	bool Empty() {
		return root == nullptr;
	}

};

#endif