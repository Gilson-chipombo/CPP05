/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:31:13 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/06/07 18:31:14 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>
#include <string>
#include <iomanip>

Form::Form(const std::string& _name, int _gradeToSign, int _gradeToexecute)
    :name(_name), grade_to_sign(_gradeToSign), grade_to_execute(_gradeToexecute)
{
    isSigned = false;
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw GradeTooHighException();
    if (grade_to_sign > 150 || grade_to_execute > 150)
        throw GradeTooLowException();
}

Form::~Form(){ std::cout << "Destructor called" << std::endl;}

const std::string& Form::getName() const{ return (name); }

bool Form::getIsSigned() const{ return (isSigned); }

int Form::getGradeTosign() const{ return (grade_to_sign); }

int Form::getGradeToExecute() const{ return (grade_to_execute); }

const char* Form::GradeTooHighException::what() const throw(){ return "GradeTooHighException: Grade out of range(1-150)"; };

const char * Form::GradeTooLowException::what() const throw(){ return "GradeTooLowException: Grade out of range(1-150)"; };

/*
Form::Form(const Form& other) {
    *this = other;
}
*/

Form& Form::operator=(const Form& other)
{
    if (this != &other)
        isSigned = other.isSigned; // Only isSigned is mutable
    return *this;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > grade_to_sign)
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form){
    os << "Form " << form.getName() << "\nBureaucrat Signed: " << std::boolalpha << form.getIsSigned()
    << " Grade to Sign: " << form.getGradeTosign()
    << ", Grade to Execute: " << form.getGradeToExecute() << std::endl;
    return (os);
}