#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	weirdAnimal("Lennon");

	weirdAnimal.attack("Ringo");
	weirdAnimal.takeDamage(100);

	FragTrap	someGuy("McCartney");

	someGuy.highFiveGuys();
	std::cout << "Turning McCartney into Lennon." << std::endl;
	someGuy = weirdAnimal;
	someGuy.highFiveGuys();
	return (0);
}
