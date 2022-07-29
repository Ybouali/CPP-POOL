#include "./Bureaucrat.hpp"


Bureaucrat::Bureaucrat(): name("Bureaucrat_default"), grade(150)
{
    return ;
}

Bureaucrat::Bureaucrat(const std::string &name, const int grade): name(name)
{
    if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
    this->grade = grade;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    *this = other;
}

Bureaucrat::~Bureaucrat()
{
    return ;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other)
{
    *const_cast<std::string*> (&this->name) = other.name;
    this->grade = other.grade;
    return *this;
}


const std::string& Bureaucrat::getName(void) const
{
    return this->name;
}

const int& Bureaucrat::getGrade(void) const
{
    return this->grade;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade++;
}

void Bureaucrat::incrementGrade(void)
{
	if (this->grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade--;
}

std::ostream&	operator << (std::ostream& os, const Bureaucrat& other)
{
	os << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
	return (os);
}

void Bureaucrat::signForm(Form& form)
{
	if (this->grade <= form.getReqSign())
	{
		form.beSigned(*this);
		std::cout << this->name
				  << " signed "
				  << form.getName()
				  << std::endl;
	}
	else
	{
		std::cout << this->name 
				  << " couldn’t sign "
				  << form.getName()
				  << " because he’s grade is low"
				  << std::endl;
	}
}
