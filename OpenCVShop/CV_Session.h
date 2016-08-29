#pragma once
#include "CV_Action_Base.h"
#include "UndoManager.h"

namespace core{
	class CV_Session
	{
	public:
		CV_Session(const CV_Image& src);
		~CV_Session();
		void push(const CV_Image& img, const QString& action);
		void undo();
		void redo();
		void save(const QString& filepath) const;
		bool canUndo() const { return ((_img_undo_manager).undo_size() != 1); }
		bool canRedo() const { return ((_img_undo_manager).redo_size() != 0); }
		const CV_Image& topImage() const { return _img_undo_manager.top(); }
		const QString& topAction() const { return _action_undo_manager.top(); }
		QList<QString> description() const;
	private:
		CV_Session(){}
		CV_Session(const CV_Session& other){}
		CV_Session& operator=(const CV_Session& other){};
		UndoManager<CV_Image> _img_undo_manager;
		UndoManager<QString> _action_undo_manager;
	};
}
