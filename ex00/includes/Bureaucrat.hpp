#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <ostream>
#include <string>

class Bureaucrat 
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(Bureaucrat &copy);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

		std::string getName();
		int getGrade();
		void incrementGrade();
		void decrementGrade();
};

std::ostream& operator<<(std::ostream& stream, Bureaucrat obj);

#endif