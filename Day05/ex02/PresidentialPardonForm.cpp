
# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	: Form("PresidentialPardonForm", 25, 5)
{
	this->target = "default_target";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: Form(other)
{
	this->target = other.target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// do nothing
}

void PresidentialPardonForm::ActiveForm(void) const
{
	std::cout << "Sir " << this->target << " we inform you that you get pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& other)
{
	this->target = other.target;
	return (*this);
}