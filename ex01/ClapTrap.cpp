#include "ClapTrap.hpp"
#include <iostream>

bool	ClapTrap::checkClapTrap()
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " is dead" << std::endl;
		return (false);
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " too tired to move" << std::endl;
		return (false);
	}
	return (true);
}

ClapTrap::ClapTrap(std::string name) : 
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap Cloning: " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " uncreated." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->checkClapTrap())
	{
		std::cout << "ClapTrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name;
	std::cout << " takes " << amount;
	std::cout << " amount of damage." << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->checkClapTrap())
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " repairs itself for " << amount;
		std::cout << " amount of hitpoints." << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
}
