#include "../includes/Bureaucrat.hpp"

int main(void)
{
	std::cout << "===========FIRST TEST===========" << std::endl;
	{
		Bureaucrat obj;

		std::cout << obj << std::endl;
	}
	std::cout << "===========SECOND TEST===========" << std::endl;
	{
		Bureaucrat obj("Nuno", 150);

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
		
		std::cout << obj;

		try
		{
			obj.decrementGrade();
			obj.decrementGrade();
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (...)
		{
			std::cerr << "An unknown error occurred." << std::endl;
		}
		std::cout << obj;
	}
	std::cout << "===========END TEST===========" << std::endl;
	return (0);
}