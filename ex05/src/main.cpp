#include "Harl.hpp"

int	main(
	int	argc,
	char* argv[]
) {
	Harl	Harl;

	if (argc != 2)
		return (1);

	Harl.complain(argv[1]);
	//Harl.complain("DEBUG");
	//Harl.complain("INFO");
	//Harl.complain("WARNING");
	//Harl.complain("ERROR");
}
