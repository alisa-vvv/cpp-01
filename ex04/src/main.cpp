/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/02/03 17:31:30 by avaliull            #+#    #+#           */
/*   Updated: 2026/03/13 19:57:13 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "funny_sed.hpp"

using std::string;
using std::cout;

//tests to write:
//1. file that doesn't exist;
//2. file that exists but not readabe;
//3. file.replace already exists and is modifiable;
//4. file.replace already exists and not modifiable;
//5. really big file;
//6. empty file;
//7. newline shenanigans? maybe
//8. partial string tests (should all be fine since it's c++)
//9. filename bigger than PATH_MAX
//10. file is deleted/access blocked mid execution (shoud i even?)
//int	main(
//	int		argc,
//	char*	argv[]
//) {
//	if (argc > 4) {
//		cout << "Too nany arguments! Need: filename, string1 and string2\n";
//		return 1;
//	}
//	if (argc < 4) {
//		cout << "Not enough arguments! Need: filename, string1 and string2\n";
//		return 1;
//	}
//	return (funny_sed(argv[1], argv[2], argv[3]));
//}

// tests
#include <iomanip>
using std::setw;

static const string	clr_non = "\033[0m";
static const string	clr_yel = "\033[93m";
static const string	clr_cya = "\033[96m";
static const string	clr_red = "\033[31m";
static const string	clr_grn = "\033[92m";
static const string	clr_mag = "\033[95m";

void	printReturnValue(
	int ret_val
) {
	string	color;
	if (ret_val == 0)
		color = clr_grn;
	else if (ret_val == 1)
		color = clr_red;
	cout << clr_yel << "RETURN VALUE:" << clr_cya << ret_val << "\033[0m\n";
}

int	main(
	void
) {
	int				ret_val;
	string			filename;
	string			str1;
	string			str2;

	cout << '\n';
	// TEST 1: file that doesn't exist
	filename = "testfiles/fakefile";
	str1 = "meow";
	str2 = "bark";
	cout << clr_yel << "\tTEST1: file that doesn't exist" << clr_non << '\n';
	cout << clr_yel << "INPUT: " << clr_non;
	cout << "fakefile meow bark\n";
	cout << clr_yel << "OUTPUT: " << clr_non;
	ret_val = funny_sed(filename, str1, str2);
	if (ret_val == 0)
		cout << '\n';
	cout << clr_yel << "RETURN VALUE: " << clr_cya << ret_val << "\033[0m\n\n";

	// TEST 2: unmodifable file
	filename = "testfiles/noaccess.txt";
	str1 = "can't";
	str2 = "can";
	cout << clr_yel << "\tTEST2: file with no read perm" << clr_non << '\n';
	cout << clr_yel << "OUTPUT: " << clr_non;
	ret_val = funny_sed(filename, str1, str2);
	if (ret_val == 0)
		cout << '\n';
	cout << clr_yel << "RETURN VALUE: " << clr_cya << ret_val << "\033[0m\n\n";

	// TEST 3: .replace file already exists
	filename = "testfiles/imreal";
	str1 = "can't";
	str2 = "can";
	cout << clr_yel << "\tTEST3: .replace file exists and can be modded" << clr_non << '\n';
	cout << clr_yel << "OUTPUT: " << clr_non;
	ret_val = funny_sed(filename, str1, str2);
	if (ret_val == 0)
		cout << '\n';
	cout << clr_yel << "RETURN VALUE: " << clr_cya << ret_val << "\033[0m\n";
}
//tests to write:
//3. file.replace already exists and is modifiable;
//4. file.replace already exists and not modifiable;
//5. really big file;
//6. empty file;
//7. newline shenanigans? maybe
//8. partial string tests (should all be fine since it's c++)
//9. filename bigger than PATH_MAX
//10. file is deleted/access blocked mid execution (shoud i even?)
