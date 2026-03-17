#include "Harl.hpp"
//#include <iostream>

int	main(
	int	argc,
	char* argv[]
) {
	Harl	harl;

	if (argc != 2)
		return (1);
	
	harl.filter_complaint(argv[1]);
	// tests
	//(void) argv;
	//static const std::string	clr_non = "\033[0m";
	//static const std::string	clr_yel = "\033[93m";

	//std::cout << clr_yel << "\nPrinting from DEBUG and up:" << clr_non << '\n';
	//harl.filter_complaint("DEBUG");
	//std::cout << clr_yel << "\nPrinting from INFO and up:" << clr_non << '\n';
	//harl.filter_complaint("INFO");
	//std::cout << clr_yel << "\nPrinting from WARNING and up:" << clr_non << '\n';
	//harl.filter_complaint("WARNING");
	//std::cout << clr_yel << "\nPrinting from ERROR and up:" << clr_non << '\n';
	//harl.filter_complaint("ERROR");
	//std::cout << clr_yel << "\nFAKE_LEVEl should print nothing:" << clr_non << '\n';
	//harl.filter_complaint("FAKE_LEVEL");
	//std::cout << clr_yel << "\nEmpty string should print nothing:" << clr_non << '\n';
	//harl.filter_complaint("");
}
