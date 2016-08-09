#pragma once
#include "CV_Action_Base.h"
#include "CV_Action_Types.h"

namespace core{

	class CV_Action_Factory
	{
	public:
		static CV_Action_Factory& sharedFactory()
		{
			static CV_Action_Factory factory;
			return factory;
		}
		std::unique_ptr<CV_Action_Base> cv_action(CV_Action_Type type);

		template<class T>
		void Register(CV_Action_Type type)
		{
			_func_map[type] = &CreateFunc<T>;
		}

	private:
		CV_Action_Factory();
		CV_Action_Factory& operator=(const CV_Action_Factory& other){}
		CV_Action_Factory(const CV_Action_Factory& other){}

		template<class T>
		static CV_Action_Base* CreateFunc()
		{
			return new T();
		}

		typedef CV_Action_Base* (*PCreateFunc)();
		std::unordered_map<CV_Action_Type, PCreateFunc> _func_map;
	};
}

