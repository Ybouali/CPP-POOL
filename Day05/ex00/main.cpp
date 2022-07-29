#include "./Bureaucrat.hpp"


int main(void)
{
    try
	{
		Bureaucrat b("Hola", -1);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("Hola", 151);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("Hola", 150);
		b.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat b("Hola", 1);
		b.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("Hola", 1);
		b.decrementGrade();
		b.decrementGrade();
		b.decrementGrade();
		b.incrementGrade();
		std::cout << b << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
    return 0;
}
