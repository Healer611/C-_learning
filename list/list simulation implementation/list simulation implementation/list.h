#pragma once
#include<assert.h>

namespace hbr
{
	template<class T>
	struct list_node
	{
		list_node<T>* _next;
		list_node<T>* _prev;
		T _data;

		list_node(const T& x = T())
			:_next(nullptr)
			, _prev(nullptr)
			, _data(x)
		{}
	};

	template<class T>
	class list
	{
		typedef list_node<T> node;
	public:
		list()
		{
			_head = new ListNode<T>;
			_head->_next = _head;
			_head->_prev = _head;
		}
		void push_back(const T& x)
		{
			node* tail = __head->_prev;
			node* new_node = new node(x);
			tail->next = new_node;
			new_node->_prev = tail;
			newnode->next = _head;
			_head->prev = new_node;
		}

	private:
		node* _head;
		node* prev = _head;
		node* next = _head;
	};
}