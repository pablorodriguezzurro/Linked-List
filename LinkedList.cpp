#include "LinkedList.h"

/*
------------------------------------------------------------------------------------------------------------------------------------------------------------
-������---------����������-������----------������-������--��������-��������������-������������------������---------����������-��������������-��������������-
-������---------����������-��������������--������-������--��������-��������������-��������������----������---------����������-��������������-��������������-
-������---------����������-��������������--������-������--��������-��������������-��������������----������---------����������-��������������-��������������-
-������-----------������---��������������--������-������--������---������---------������--������----������-----------������---������-------------������-----
-������-----------������---������--������--������-��������������---��������������-������--������----������-----------������---��������������-----������-----
-������-----------������---������--������--������-��������������---��������������-������--������----������-----------������---��������������-----������-----
-������-----------������---������--������--������-��������������---��������������-������--������----������-----------������---��������������-----������-----
-������-----------������---������--��������������-������--������---������---------������--������----������-----------������-----------������-----������-----
-��������������-����������-������--��������������-������--��������-��������������-��������������----��������������-����������-��������������-----������-----
-��������������-����������-������--��������������-������--��������-��������������-��������������----��������������-����������-��������������-----������-----
-��������������-����������-������----------������-������--��������-��������������-������������------��������������-����������-��������������-----������-----
------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

template <typename E>
LinkedList<E>::LinkedList():
	size{0},
	head{nullptr},
	tail{nullptr}
{}

template <typename E>
LinkedList<E>::LinkedList(const LinkedList & otherList){
	 copyList(otherList);
}


template <typename E>
LinkedList<E>::LinkedList(LinkedList && otherList){
	// Get all the main properties of the another class instance
	size = otherList.size;
	head = otherList.head;
	tail = otherList.tail;
	
	// Kill the other List pointers 
	otherList.size = 0;
	otherList.head = nullptr;
	otherList.tail = nullptr;
}

template <typename E>
LinkedList<E>::LinkedList(const E arrayElems[], size_t otherSize){
	
}

template <typename E>
LinkedList<E>::LinkedList(const std::vector<E> & vectorElems){
	
}






template <typename E>
void LinkedList<E>::copyList(const LinkedList<E> & otherList){
	Node * temp = otherList.head; 
	
	while(temp.next != nullptr){
		
		
		
		temp = temp.next;
	}

}


template <typename E> 
typename LinkedList<E>::Node& LinkedList<E>::addLast(const E& elem){
	
	Node * temp;
	// Caso: lista vacia
	if(isEmpty()){
		temp = new Node{nullptr,elem,nullptr};
		head = tail = temp;
		
	}else{
		// Caso: lista no vacia
		temp = new Node{tail, elem, nullptr};
		temp.prev.next = tail = temp;
	}
	

	return temp;
}

template<typename E>
bool LinkedList<E>::isEmpty(){
	return size == 0;
}


/*
-----------------------------------------------------------------------------------------------------------------------------
-����������-��������������-��������������-����������������---��������������-��������������-��������������-����������������---
-����������-��������������-��������������-����������������---��������������-��������������-��������������-����������������---
-����������-��������������-��������������-����������������---��������������-��������������-��������������-����������������---
---������-------������-----������---------������----������---������--������-----������-----������--������-������----������---
---������-------������-----��������������-����������������---��������������-----������-----������--������-����������������---
---������-------������-----��������������-����������������---��������������-----������-----������--������-����������������---
---������-------������-----��������������-����������������---��������������-----������-----������--������-����������������---
---������-------������-----������---------������--������-----������--������-----������-----������--������-������--������-----
-����������-----������-----��������������-������--����������-������--������-----������-----��������������-������--����������-
-����������-----������-----��������������-������--����������-������--������-----������-----��������������-������--����������-
-����������-----������-----��������������-������--����������-������--������-----������-----��������������-������--����������-
-----------------------------------------------------------------------------------------------------------------------------
*/

















/*
---------------------------------------------------------------------
-������----------������-��������������-������������---��������������-
-��������������--������-��������������-��������������-��������������-
-��������������--������-��������������-��������������-��������������-
-��������������--������-������--������-������--������-������---------
-������--������--������-������--������-������--������-��������������-
-������--������--������-������--������-������--������-��������������-
-������--������--������-������--������-������--������-��������������-
-������--��������������-������--������-������--������-������---------
-������--��������������-��������������-��������������-��������������-
-������--��������������-��������������-��������������-��������������-
-������----------������-��������������-������������---��������������-
---------------------------------------------------------------------
*/
template<typename E>
LinkedList<E>::Node::Node(Node * prev , const E& elem , Node * next): 
	prev{prev},
	elem {elem}, 
	next{next} 
{}
	
template<typename E>
LinkedList<E>::Node::Node(Node * prev , E&& elem , Node * next): 
	prev{prev},
	elem {elem}, 
	next{next} 
{}