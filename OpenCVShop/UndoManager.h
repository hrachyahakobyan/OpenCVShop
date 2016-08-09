#pragma once

namespace core{
	template<typename T>
	class UndoManager
	{
	public:
		typedef typename std::deque<T>::const_iterator CIterator;
		typedef typename std::deque<T>::const_reverse_iterator CRIterator;
		UndoManager(){}
		~UndoManager(){}
		void push(const T& state);
		const T& top() const { return _undo_stack.top(); }
		T& top() { return _undo_stack.top(); }
		void undo();
		void redo();
		std::size_t undo_size() const{ return _undo_stack.size(); }
		std::size_t redo_size() const{ return _redo_stack.size(); }
	public:
		CIterator undo_cbegin() const { return _undo_stack._Get_container().cbegin();}
		CIterator undo_cend() const { return _undo_stack._Get_container().cend(); }
		CIterator redo_cbegin() const { return _redo_stack._Get_container().cbegin(); }
		CIterator redo_cend() const { return _redo_stack._Get_container().cend(); }
		CRIterator undo_crbegin() const { return _undo_stack._Get_container().crbegin(); }
		CRIterator undo_crend() const { return _undo_stack._Get_container().crend(); }
		CRIterator redo_crbegin() const { return _redo_stack._Get_container().crbegin(); }
		CRIterator redo_crend()  const { return _redo_stack._Get_container().crend(); }
	private:
		UndoManager& operator=(const UndoManager& other);
		UndoManager(const UndoManager& other);
		std::stack<T> _redo_stack;
		std::stack<T> _undo_stack;
	};

	template<typename T>
	void UndoManager<T>::push(const T& state)
	{
		_undo_stack.push(state);
		std::stack<T> empty;
		std::swap(_redo_stack, empty);
	}

	template<typename T>
	void UndoManager<T>::undo()
	{
		if (_undo_stack.empty() == false)
		{
			_redo_stack.push(_undo_stack.top());
			_undo_stack.pop();
		}
	}

	template<typename T>
	void UndoManager<T>::redo()
	{
		if (_redo_stack.empty() == false)
		{
			_undo_stack.push(_redo_stack.top());
			_redo_stack.pop();
		}
	}
}