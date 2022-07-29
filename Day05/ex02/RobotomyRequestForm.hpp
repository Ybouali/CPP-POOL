
#ifndef RPBOTOMYREQUESTFORM_HPP

#define RPBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		~RobotomyRequestForm(void);

		void ActiveForm(void) const;

		RobotomyRequestForm& operator = (const RobotomyRequestForm& other);
};

#endif