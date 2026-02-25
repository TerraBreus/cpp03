#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Clap Constr. Called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	ClapTrap result;
	std::cout << "Copy Constructor called." << std::endl;

