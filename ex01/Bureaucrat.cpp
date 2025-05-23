#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name_, int grade_) : name(name_), grade(grade_){
    tooHighException();
    tooLowException();
}

void Bureaucrat::tooHighException(){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if ((grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException();
    
}
void Bureaucrat::tooLowException(){
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if ((grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "GradeTooHighException: Grade out of range(1-150)";
};

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "GradeTooLowException: Grade grade out of range(1-150)";
};

void Bureaucrat::setGrade(int grade_){
    grade =  grade_;
    tooHighException();
    tooLowException();
}

int  Bureaucrat::getGrade() const{
    return (grade);
}

const std::string& Bureaucrat::getName() const {
    return name;
}

void Bureaucrat::increment(){
    	tooHighException();
    	grade--;
}
void Bureaucrat::decrement(){
	if (grade + 1 < 1)
	    tooLowException();
    	else
    	    grade++;
}

// Overload operator<< for Bureaucrat
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;  // return the output stream
}
