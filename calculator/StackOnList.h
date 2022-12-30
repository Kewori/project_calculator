#ifndef STACKONLIST_H
#define STACKONLIST_H
#include <string>
template<typename T>
class StackOnList
{
private:
	template<typename T>
	struct NodeStack {
		T value;
		NodeStack<T>* ptrNext;
		NodeStack(T value, NodeStack<T>* ptrNext = nullptr) {
			this->value = value;
			this->ptrNext = ptrNext;
		}
	};
	NodeStack<T>* head;
	int size;

public:
	StackOnList();
	StackOnList(const StackOnList<T>&);
	~StackOnList();
	int Size();
	bool isEmpty();
	void Push(const T&);
	T Pop();
	NodeStack<T>* Top() {
		if (size == 0) {
			throw "Empty!\n";
		}
		return head;
	}
	StackOnList<T>& operator=(const StackOnList<T>&);


};
template<typename T>
StackOnList<T>::StackOnList() {
	size = 0;
	head = nullptr;
}
template<typename T>
StackOnList<T>::StackOnList(const StackOnList<T>& other) {
	StackOnList temp;
	NodeStack<T>* current = other.head;
	while (current) {
		temp.Push(current->value);
		current = current->ptrNext;
	}
	current = temp.head;
	while (current) {
		this->Push(current->value);
	}

}
template<typename T>
StackOnList<T>::~StackOnList() {
	//clear();
}
template<typename T>
int StackOnList<T>::Size() {
	return size;
}
template<typename T>
bool StackOnList<T>::isEmpty() {
	return size == 0;
}
template<typename T>
void StackOnList<T>::Push(const T& value) {
	head = new NodeStack<T>(value, head);
	size++;
}
template<typename T>
T StackOnList<T>::Pop() {
	if (head == nullptr) {
		throw "A head is already empty!\n";
	}
	T res = head->value;
	NodeStack<T>* temp = head;
	head = head->ptrNext;
	delete temp;
	size--;
	return res;
}
template<typename T>
StackOnList<T>& StackOnList<T>:: operator=(const StackOnList<T>& other) {
	if (this != &other) {
		StackOnList temp;
		NodeStack<T>* current = other.head;
		while (current) {
			temp.Push(current->value);
			current = current->ptrNext;
		}
		current = temp.head;
		while (current) {
			this->Push(current->value);
		}
	}
	return *this;
}

#endif STACKONLIST_H

