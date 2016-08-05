#pragma once
#include "CV_Action_Base.h"

namespace core{

	typedef std::pair<cv::Mat, std::unique_ptr<CV_Action_Base>> action_result;

	template<class FileManager>
	class stack
	{
	public:
		stack(){}
		void push(const action_result& result){ _stack.push(result); }
		const action_result& top() const { return _stack.top(); }
		action_result& top() { return _stack.top(); }
		void pop() { _stack.pop(); }
		std::size_t size() const { return _stack.size(); }
		bool empty() const { return _stack.empty(); }
	private:
		stack(const stack& other){}
		stack& operator=(const stack& other){}
		std::stack<action_result> _stack;
	};
}

