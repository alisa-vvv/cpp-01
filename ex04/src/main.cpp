/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/02/03 17:31:30 by avaliull            #+#    #+#           */
/*   Updated: 2026/02/03 17:32:01 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	find_and_replace_line(
	std::string&		next_line,
	const std::string&	old_str,
	const std::string&	new_str,
	std::ofstream&		out_file
) {
		size_t	found_instance = next_line.find(old_str);
		while (found_instance != std::string::npos) {
			next_line.erase(found_instance, old_str.length());
			next_line.insert(found_instance, new_str);
			found_instance = next_line.find(old_str, found_instance + old_str.length());
		}
		out_file << next_line;
}

int	main(
	int		argc,
	char*	argv[]
) {
	if (argc != 4) {
		std::cout << "Program needs 3 arguments: filename, string1 and string2\n";
		return 1;
	}

	std::ifstream	in_file(argv[1]);
	if (in_file.is_open() == false) {
		std::cout << "File " << argv[1] << " is inaccessible\n";
		return 1;
	}

	const std::string	outfile_name = ((std::string) argv[1]).append(".replace");
	std::ofstream		trunc_file(outfile_name);
	if (trunc_file.is_open() == false) {
		std::cout << "Could not create output file " << outfile_name << '\n';
		return 1;
	}

	std::ofstream	out_file(outfile_name, std::ios::app);
	if (out_file.is_open() == false) {
		std::cout << "Could not create output file " << outfile_name << '\n';
		return 1;
	}

	std::string		next_line;
	while (std::getline(in_file, next_line)) {
		next_line.append("\n");
		find_and_replace_line(next_line, argv[2], argv[3], out_file);
	}
	return 0;
}
