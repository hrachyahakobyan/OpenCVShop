#pragma once
#include "CV_Action_Base.h"
#include "UndoManager.h"

namespace core{
	class CV_Session
	{
	public:
		CV_Session(const cv::Mat& src);
		~CV_Session();
		void execute(const CV_Action_Base& action);
		void undo();
		void redo();
		bool canUndo() const;
		bool canRedo() const;
		const cv::Mat& top() const;
		std::vector<std::string> description() const;
	private:
		CV_Session(){}
		CV_Session(const CV_Session& other){}
		CV_Session& operator=(const CV_Session& other){};
		cv::Mat _src;
		UndoManager<cv::Mat> _mat_undo_manager;
		UndoManager<std::string> _action_undo_manager;
	};
}
