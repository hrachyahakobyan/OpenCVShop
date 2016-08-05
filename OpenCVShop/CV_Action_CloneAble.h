#pragma once
#include "CV_Action_Base.h"

namespace core{
	template<class Base, class Derived>
	class CV_Action_CloneAble : virtual public Base{
	public:
		virtual std::unique_ptr<CV_Action_Base> clone() const
		{
			return std::unique_ptr<Derived>(new Derived(static_cast<Derived const&>(*this)));
		}
	};
}
