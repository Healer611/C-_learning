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

	template<class T,class Ref,class Ptr>
	struct _list_iterator
	{
		typedef list_node<T> node;
		typedef _list_iterator<T, Ref,Ptr> self;
		node* _node;

		_list_iterator(node* n)
			:_node(n)
		{}

		Ref operator*()
		{
			return _node->_data;
		}

		Ptr operator->()
		{
			return &_node->_data;
		}

		self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		self operator++(int)
		{
			self tmp(*this);
			_node = _node_._prev;
			return tmp;
		}

		self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		self operaror--(int)
		{
			self tmp(*this);
			_node = _node->_prev;
			return tmp;
		}

		bool operator==(const _self& s)
		{
			return  _node != s._node;
		}

		bool operator==(const self& s)
		{
			return _node == s._node;
		}
	};

	template<class T>
	class list
	{
		typedef list_node<T> node;
	public:
		typedef _list_iterator<T, T&, T*> iterator;
		typedef _list_iterator<T, const T&, constT*>const_iterator;
		
		iterator begin()
		{
			return iterator(_head->_next);
		}
		
		const_iterator begin() const
		{
			return const_iterator(_head->next);
		}

		iterator end()
		{
			return iterator(_head);
		}

		const_iterator() const
		{
			return const_iterator(_head);
		}

		void empty_init()
		{
			_head = new node;
			_head->_prev = _head;
			_head->_next = _head;
		}

		list()
		{
			//_head = new ListNode<T>;
			//_head->_next = _head;
			//_head->_prev = _head;
			empty_init();
		}

		template <class Iterator>
		list(Iterator first, Iterator last)
		{
			empty_init();

			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		void swap(list<T>& tmp)
		{
			std::swap(_head, tmp._head);
		}

		list(const list<T>& lt)
		{
			empty_init();

			list<T> tmp(lt.begin(), lt.end());
			swap(tmp);
		}

		// lt1 = lt3
		list<T>& operator=(list<T> lt)
		{
			swap(lt);
			return *this;
		}

		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}

		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				//it = erase(it);
				erase(it++);
			}
		}

		void push_back(const T& x)
		{
			/*node* tail = _head->_prev;
			node* new_node = new node(x);

			tail->_next = new_node;
			new_node->_prev = tail;
			new_node->_next = _head;
			_head->_prev = new_node;*/

			insert(end(), x);
		}

		void push_front(const T& x)
		{
			insert(begin(), x);
		}

		void pop_back()
		{
			erase(--end());
		}

		void pop_front()
		{
			erase(begin());
		}

		void insert(iterator pos, const T& x)
		{
			node* cur = pos._node;
			node* prev = cur->_prev;

			node* new_node = new node(x);

			prev->_next = new_node;
			new_node->_prev = prev;
			new_node->_next = cur;
			cur->_prev = new_node;
		}

		iterator erase(iterator pos)
		{
			assert(pos != end());

			node* prev = pos._node->_prev;
			node* next = pos._node->_next;

			prev->_next = next;
			next->_prev = prev;
			delete pos._node;

			return iterator(next);
		}

	private:
		node* _head;
	};

	
}