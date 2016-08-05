#include "stdafx.h"
#include "CV_Session.h"

namespace core{
	CV_Session::CV_Session(const cv::Mat& src) : _src(src.clone())
	{
		assert(src.empty() == false);
	}

	CV_Session::~CV_Session()
	{
	}

	void CV_Session::undo()
	{
		_mat_undo_manager.undo();
		_action_undo_manager.undo();
	}

	void CV_Session::redo()
	{
		_mat_undo_manager.redo();
		_action_undo_manager.redo();
	}

	bool CV_Session::canUndo() const
	{
		return ((_mat_undo_manager).undo_size() != 0);
	}

	bool CV_Session::canRedo() const
	{
		return ((_mat_undo_manager).redo_size() != 0);
	}

	const cv::Mat& CV_Session::top() const
	{
		return (_mat_undo_manager.undo_size() == 0 ? _src : _mat_undo_manager.top());
	}

	void CV_Session::execute(const CV_Action_Base& action)
	{
		cv::Mat top = this->top().clone();
		try {
			action(this->top(), top);
			_mat_undo_manager.push(top);
			_action_undo_manager.push(action.description());
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
