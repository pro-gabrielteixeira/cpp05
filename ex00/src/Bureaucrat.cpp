#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150){
    std::cout << "Default Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade > 150)
		throw "Bureaucrat::GradeTooLowException";
	if (grade < 1)
		throw "Bureaucrat::GradeTooHighException";
	std::cout << "Bureaucrat " << _name << " created" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &copy) {
	if (this != &copy)
		_grade = copy.getGrade();
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	this->_grade = copy._grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << _name << " destroyed" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw "Bureaucrat::GradeTooHighException";
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw "Bureaucrat::GradeTooLowException";
	this->_grade++;
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj)
{
	stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return (stream);
}