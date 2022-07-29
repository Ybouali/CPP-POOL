
#ifndef PRESIDENTIALPARDONFORM_HPP

#define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		~PresidentialPardonForm(void);

		void ActiveForm(void) const;

		PresidentialPardonForm& operator = (const PresidentialPardonForm& other);
};

#endif