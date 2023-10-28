//#include "Vector.h"
using namespace std;
#include <iostream>

template<typename T>
class Vector
{
public:
	Vector();
	Vector(int size, T data);
	~Vector();

	int GetSize() { return Size; }

	//добавление элемента в конец списка
	void push_back(T data);

	// перегруженный оператор [] 
	T& operator[](const int index);

	//добавление элемента в список по указанному индексу
	void insert(T data, int index);

	//удаление последнего элемента в списке
	void pop();

private:


	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;

		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;
	Node<T>* head;
};

template<typename T>
Vector<T>::Vector()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
Vector<T>::Vector(int size, T data)
{

	head = new Node<T>(data);
	Node<T>* current = this->head;

	for (int i = 0; i < size - 1; i++)
	{
		current->pNext = new Node<T>(data);
	}
}

template<typename T>
Vector<T>::~Vector()
{
	while (Size)
	{
		pop();
	}
}



template<typename T>
void Vector<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);

	}

	Size++;
}


template<typename T>
T& Vector<T>::operator[](const int index)
{
	int counter = 0;

	Node<T>* current = this->head;

	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}


template<typename T>
void Vector<T>::insert(T data, int index)
{

	if (index == 0)
	{
		push_back(data);
	}
	else
	{
		Node<T>* previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}

		Node<T>* newNode = new Node<T>(data, previous->pNext);

		previous->pNext = newNode;

		Size++;
	}





}

template<typename T>
void Vector<T>::pop()
{

		Node<T>* previous = this->head;
		for (int i = 0; i < Size - 2; i++)
		{
			previous = previous->pNext;
		}
		Node<T>* toDelete = previous->pNext;

		previous->pNext = toDelete->pNext;

		delete toDelete;

		Size--;
	
}



int main()
{

	Vector<int> vec;
	vec.push_back(5);
	vec.push_back(7);
	vec.push_back(101);
	vec.insert(17, 2);

	for (int i = 0; i < vec.GetSize(); i++)
	{
		cout << vec[i] << endl;
	}

	cout << endl << "pop" << endl << endl;

	vec.pop();

	for (int i = 0; i < vec.GetSize(); i++)
	{
		cout << vec[i] << endl;
	}

	return 0;
}
