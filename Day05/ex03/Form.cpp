#include "./Form.hpp"

Form::Form(void): name("Form_default"), req_sign(150), req_exec(150)
{
    this->is_sign = false;
}

Form::Form(const std::string &name, const int &req_sign, const int &req_exec): name(name), req_sign(req_sign), req_exec(req_exec)
{
    if (req_sign < 1 || req_exec < 1)
		throw (Form::GradeTooHighException());
	else if (req_sign > 150 || req_exec > 150)
		throw (Form::GradeTooLowException());
	this->is_sign = false;
}

Form::Form(const Form &other): name(other.name), req_sign(other.req_sign), req_exec(other.req_exec)
{
    this->is_sign = other.is_sign;
}

Form::~Form(void)
{

}

Form &Form::operator=(const Form &other)
{
    *const_cast<std::string*> (&this->name) = other.name;
	this->is_sign = other.is_sign;
	*const_cast<int*> (&this->req_sign) = other.req_sign;
	*const_cast<int*> (&this->req_exec) = other.req_exec;
	return (*this);
}


const std::string& Form::getName(void) const
{
	return (this->name);
}

const bool& Form::getIsSign(void) const
{
	return (this->is_sign);
}

const int& Form::getReqSign(void) const
{
	return (this->req_sign);
}

const int& Form::getReqExec(void) const
{
	return (this->req_exec);
}

void Form::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() <= this->req_sign)
		this->is_sign = true;
	else
		throw (Form::GradeTooLowException());
}

std::ostream& operator << (std::ostream& os, const Form& othre)
{
	os << "Form name : " << othre.getName() << std::endl;
	os << "Is signed : ";
	if (othre.getIsSign())
		os << "True";
	else
		os << "False";
	os << std::endl << "grade required to sign : " << othre.getReqSign() << std::endl
					   << "grade required to execute : " << othre.getReqExec();
	return (os);
}

void Form::execute(const Bureaucrat& execute) const
{
	if (this->is_sign == false)
		throw (Form::FormNotSignedException());
	else if (execute.getGrade() > this->req_exec)
		throw (Form::GradeTooLowException());
	else
		this->ActiveForm();
}