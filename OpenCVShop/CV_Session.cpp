#include "stdafx.h"
#include "CV_Session.h"
#include "QT_CV.h"

namespace core{
	CV_Session::CV_Session(const CV_Image& src) 
	{
		_img_undo_manager.push(src);
	}

	CV_Session::~CV_Session()
	{
	}

	void CV_Session::push(const CV_Image& img, const QString& action)
	{
		_img_undo_manager.push(img);
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

	void CV_Session::save(const QString& filepath) const
	{
		QImage img(QtOcv::mat2Image_shared(_img_undo_manager.top().mat()));
		img.save(filepath);
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
