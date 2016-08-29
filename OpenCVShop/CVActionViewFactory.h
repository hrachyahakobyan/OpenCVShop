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

	std::unique_ptr<CVActionView> cv_action_view(core::CV_Action_Type type, QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);
	
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
	static CVActionView* CreateFunc(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper)
	{
		return new T(parent, std::move(wrapper));
	}
private:
	typedef CVActionView* (*PCreateFunc)(QWidget* parent, std::unique_ptr<CV_Action_Wrapper> wrapper);;
	std::unordered_map<core::CV_Action_Type, PCreateFunc> _func_map;
};

