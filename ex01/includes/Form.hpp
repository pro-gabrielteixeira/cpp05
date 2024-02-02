#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _signGrade;
	const int _executeGrade;
public:
	Form();
	Form(const std::string name, int signGrade, int executeGrade);
	Form &operator=(Form & copy);
	Form(const Form &copy);
	~Form();

	std::string getName() const;
	bool getSignature() const;
	int getSignGrade() const;
	int getExecutionGrade() const;
	void beSigned(Bureaucrat &bureaucratSign);
};

std::ostream& operator<<(std::ostream& stream, const Form& obj);

#endif