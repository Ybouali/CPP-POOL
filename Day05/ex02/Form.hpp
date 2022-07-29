#ifndef FROM_HPP
#define FROM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
		const std::string   name;
		bool		        is_sign;
		const int           req_sign;
		const int           req_exec;
	public:
		Form(void);
		Form(const std::string& name, const int& req_sign, const int& req_exec);
		Form(const Form& other);
		virtual ~Form(void);
        Form& operator=(const Form& other);

		const int& getReqExec(void) const;
		const int& getReqSign(void) const;
		const bool& getIsSign(void) const;
		const std::string& getName(void) const;
		
		void beSigned(const Bureaucrat& bur);

		void execute(const Bureaucrat& execute) const;
		virtual void ActiveForm(void) const = 0;

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

		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Form not signed to execute it");
				}
		};
};

std::ostream& operator << (std::ostream& os, const Form& othre);

#endif