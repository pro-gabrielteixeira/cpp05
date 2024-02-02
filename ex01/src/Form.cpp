#include "../includes/Form.hpp"

Form::Form() : _name("FormDefault"), _signed(false), _signGrade(150), _executeGrade(150) 
{
	std::cout << "Default constructor called" << std::endl;
}
Form::Form(const std::string name, int signGrade, int executeGrade) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (signGrade > 150 || executeGrade > 150)
		throw std::logic_error("Form::GradeTooLowException");
	if (signGrade < 1 || executeGrade < 1)
		throw std::logic_error("Form::GradeTooHighException");
	std::cout << "Constructor called" << std::endl;
}

Form& Form::operator=(Form & copy)
{
	if (this != &copy)
		this->_signed = copy._signed;
	return (*this);
}


Form::Form(const Form &copy) : _name(copy._name), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
	this->_signed = copy._signed;
	std::cout << "Copy operator called" << std::endl;
}

Form::~Form()
{
	std::cout << "Default destructor called" << std::endl;
}

std::string Form::getName() const
{
	return (_name);
}

bool Form::getSignature() const
{
	return (_signed);
}
int Form::getSignGrade() const
{
	return (_signGrade);
}

int Form::getExecutionGrade() const
{
	return (_executeGrade);
}

void Form::beSigned(Bureaucrat &bureaucratSign)
{
	if (bureaucratSign.getGrade() > _signGrade)
		throw std::logic_error("Form::GradeTooLowException");
	if (_signed == true)
		throw std::logic_error("Form::AlreadySignedException");
	_signed = true;
}

std::ostream& operator<<(std::ostream& stream, const Form& obj)
{
	stream << "Form " << obj.getName() << " is " << (obj.getSignature() ? "signed" : "not signed") << ".";
	return (stream);
}