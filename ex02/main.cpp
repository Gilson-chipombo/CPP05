/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:31:20 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/06/07 18:31:21 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
int main()
{
    try{
        Bureaucrat Gilson("Gilson", 12);
        Bureaucrat Sandra("Sandra", 15);
        Form formBolsa("Bolsa Mestrado", 14, 20);


        Gilson.signForm(formBolsa); // Should succeed
        Sandra.signForm(formBolsa);
        //std::cout << formBolsa << std::endl;
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}