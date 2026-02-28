#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	weirdAnimal("Lennon");

	weirdAnimal.attack("Ringo");
	weirdAnimal.guardGate();
	weirdAnimal.takeDamage(100);
	weirdAnimal.guardGate();

	ScavTrap	someGuy("McCartney");

	someGuy.guardGate();
	std::cout << "Turning McCartney into Lennon." << std::endl;
	someGuy = weirdAnimal;
	someGuy.guardGate();
	return (0);
}
