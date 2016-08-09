#pragma once
#include "CV_Action_Base.h"
#include "UndoManager.h"

namespace core{
	class CV_Session
	{
	public:
		CV_Session(const QImage& src);
		~CV_Session();
		void push(const QImage& img, const QString& action);
		void undo();
		void redo();
		bool canUndo() const;
		bool canRedo() const;
		const QImage& topImage() const;
		const QString& topAction() const;
		QList<QString> description() const;
	private:
		CV_Session(){}
		CV_Session(const CV_Session& other){}
		CV_Session& operator=(const CV_Session& other){};
		UndoManager<QImage> _img_undo_manager;
		UndoManager<QString> _action_undo_manager;
	};
}
