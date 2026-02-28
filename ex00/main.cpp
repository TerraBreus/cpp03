#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap someGuy("JEFF");
	ClapTrap yes(someGuy);
	someGuy.attack("ringo");
	someGuy.beRepaired(4);
	someGuy.takeDamage(300);
	//The following message should not be displayed as the clapTrap is deaD.
	someGuy.attack("Felix");
	return (0);
}
