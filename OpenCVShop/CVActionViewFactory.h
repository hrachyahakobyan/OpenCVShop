#pragma once
#include "CVActionView.h"
#include "CV_Action_Types.h"

class CVActionViewFactory
{
public:
	static CVActionViewFactory& sharedFactory()
	{
		static CVActionViewFactory factory;
		return factory;
	}

	std::unique_ptr<CVActionView> cv_action_view(core::CV_Action_Type type, QWidget* parent, const QImage& src);
	
	template<class T>
	void Register(core::CV_Action_Type type)
	{
		_func_map[type] = &CreateFunc<T>;
	}

private:
	CVActionViewFactory();
	CVActionViewFactory(const CVActionViewFactory&){}
	CVActionViewFactory& operator=(const CVActionViewFactory&){}

	template<class T>
	static CVActionView* CreateFunc(QWidget* parent, std::unique_ptr<core::CV_Action_Base> action, const QImage& src)
	{
		return new T(parent, std::move(action), src);
	}
private:
	typedef CVActionView* (*PCreateFunc)(QWidget*, std::unique_ptr<core::CV_Action_Base>, const QImage&);
	std::unordered_map<core::CV_Action_Type, PCreateFunc> _func_map;
};

