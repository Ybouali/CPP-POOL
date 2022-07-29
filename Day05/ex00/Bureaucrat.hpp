#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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

        const std::string& getName(void);
        int getGrade(void);

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

std::ostream&	operator << (std::ostream& os, Bureaucrat& other);

#endif