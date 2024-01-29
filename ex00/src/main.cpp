#include "../includes/Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat obj;

		std::cout << obj;
	}
	std::cout << "===========OTHER TEST===========" << std::endl;
	{
		Bureaucrat obj("Nuno", 150);

		try
		{
			obj.decrementGrade();
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		catch (...)
		{
			std::cerr << "An unknown error occurred.\n";
		}
		std::cout << obj;
	}
	return (0);
}