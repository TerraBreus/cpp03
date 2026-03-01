#include  "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap: " << this->_name;
	std::cout << " created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other)
	{
		this->_name = other._name;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints = other._hitPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(void) 
{
	std::cout << this->_name << " has Fragged its last clap" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	if (this->canAction())
	{
		std::cout << this->_name;
		std::cout << " positively requested a high ";
		std::cout << "five on the standard output." << std::endl;
	}
}
