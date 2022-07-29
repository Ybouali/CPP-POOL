#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int               grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, const int grade);
        Bureaucrat(const Bureaucrat &other);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat& other);

        const std::string& getName(void) const;
        const int& getGrade(void) const;

		void signForm(Form& form);
		void executeForm(const Form& form) const;
		
        void	incrementGrade(void);
		void	decrementGrade(void);

        class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade is Too High");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade is Too Low");
				}
		};
};

std::ostream&	operator << (std::ostream& os, const Bureaucrat& other);

#endif