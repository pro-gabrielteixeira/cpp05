#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade > 150)
		throw "Grade too low exception";
	if (grade < 1)
		throw "Grade too high exception";
	_grade = grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &copy) {
	if (this != &copy)
	{
		// _name = copy.getName();
		_grade = copy.getGrade();
	}
	return (*this);
}


Bureaucrat(const Bureaucrat &copy);
~Bureaucrat();