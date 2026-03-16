#include "Harl.hpp"

int	main(
	int	argc,
	char* argv[]
) {
	Harl	harl;

	if (argc != 2)
		return (1);
	harl.complain(argv[1]);
	//Harl.complain("DEBUG");
	//Harl.complain("INFO");
	//Harl.complain("WARNING");
	//Harl.complain("ERROR");
}
