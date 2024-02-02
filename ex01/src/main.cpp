#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main(void)
{
	std::cout << "===========FIRST TEST===========" << std::endl;
	{
		Bureaucrat obj;
		Form formRules;

		std::cout << obj << std::endl;
		std::cout << "Name: " << formRules.getName() << std::endl;
		std::cout << "Grade to Sign: " << formRules.getSignGrade() << std::endl;
		std::cout << "Grade to execute: " << formRules.getExecutionGrade() << std::endl;
		std::cout << formRules << std::endl;
		try
		{
			obj.signForm(formRules);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << formRules << std::endl;
	}
	std::cout << "===========SECOND TEST===========" << std::endl;
	{
		Bureaucrat obj("Nuno", 150);
		Form formRules("FormRules", 150, 150);

		std::cout << obj;
		std::cout << "Name: " << formRules.getName() << std::endl;
		std::cout << "Grade to Sign: " << formRules.getSignGrade() << std::endl;
		std::cout << "Grade to execute: " << formRules.getExecutionGrade() << std::endl;
		std::cout << formRules << std::endl;
		try
		{
			obj.signForm(formRules);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << formRules << std::endl;

		try
		{
			obj.incrementGrade();
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (...)
		{
			std::cerr << "An unknown error occurred" << std::endl;
		}
	}
	std::cout << "===========END TEST===========" << std::endl;
	return (0);
}