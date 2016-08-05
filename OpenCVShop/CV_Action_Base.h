#pragma once

namespace core{
	class CV_Action_Base
	{
	public:
		virtual ~CV_Action_Base(){}
		virtual std::unique_ptr<CV_Action_Base> clone() const = 0;
		virtual void operator()(cv::InputArray input, cv::OutputArray output) const = 0;
		virtual std::string description() const = 0;
	private:
		CV_Action_Base&operator=(const CV_Action_Base& other){}
	};
}

