#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// int main(void)
// {
// 	Weapon gun;
// 	gun.setType("Kalash");

// 	HumanA jean("Jean", gun);

// 	std::cout << gun.getType() << std::endl;
// 	jean.attack();

// 	gun.setType("revo");
// 	HumanA Daniel("Daniel", gun);
// 	std::cout << gun.getType() << std::endl;
// 	Daniel.attack();
// }

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon KALASH = Weapon("KALASH");

	Weapon* kalash = &KALASH;
	HumanB jim("Jim");
	jim.setWeapon(NULL);
	jim.attack();
	KALASH.setType("some other type of kalash");
	jim.attack();
	return 0;
}
