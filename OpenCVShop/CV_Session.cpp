#include "stdafx.h"
#include "CV_Session.h"

namespace core{
	CV_Session::CV_Session(const QImage& src) 
	{
		assert(src.isNull() == false);
		_img_undo_manager.push(src.copy());
	}

	CV_Session::~CV_Session()
	{
	}

	void CV_Session::push(const QImage& img, const QString& action)
	{
		assert(img.isNull() == false);
		_img_undo_manager.push(img.copy());
		_action_undo_manager.push(action);
	}

	void CV_Session::undo()
	{
		if (canUndo())
		{
			_img_undo_manager.undo();
			_action_undo_manager.undo();
		}
	}

	void CV_Session::redo()
	{
		if (canRedo())
		{
			_img_undo_manager.redo();
			_action_undo_manager.redo();
		}
	}

	bool CV_Session::canUndo() const
	{
		return ((_img_undo_manager).undo_size() != 1);
	}

	bool CV_Session::canRedo() const
	{
		return ((_img_undo_manager).redo_size() != 0);
	}

	const QImage& CV_Session::topImage() const
	{
		return _img_undo_manager.top();
	}

	const QString& CV_Session::topAction() const
	{
		return _action_undo_manager.top();
	}

    QList<QString> CV_Session::description() const
	{
		QList<QString> description;
		for (auto it = _action_undo_manager.undo_cbegin(); it != _action_undo_manager.undo_cend(); ++it)
		{
			description.push_back(*it);
		}
		return description;
	}
}
