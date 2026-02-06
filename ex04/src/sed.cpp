/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   sed.cpp                                                 :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/02/06 19:10:09 by avaliull            #+#    #+#           */
/*   Updated: 2026/02/06 19:12:25 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

static int	find_and_replace_line(
	std::string&		next_line,
	const std::string&	old_str,
	const std::string&	new_str,
	std::ofstream&		out_file
) {
	size_t	found_instance;

	found_instance = next_line.find(old_str);
	while (found_instance != std::string::npos) {
		next_line.erase(found_instance, old_str.length());
		next_line.insert(found_instance, new_str);
		found_instance = next_line.find(old_str, found_instance + old_str.length());
	}
	if (out_file.is_open() == false) { // i don't know if i'm making shit up here
		std::cout << "Lost access to output file. Stopping operation.\n";
		return 1;
	}
	out_file << next_line;
	return 0;
}

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
int	funny_sed(
	std::string	filename,
	std::string	old_str,
	std::string	new_str
) {
	std::ifstream	in_file(filename);
	if (in_file.is_open() == false) {
		std::cout << "File " << filename << " is inaccessible\n";
		return 1;
	}

	const std::string	outfile_name = ((std::string) filename).append(".replace");
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

	std::string	next_line;
	int			err_check = 0;
	while (err_check == 0 && std::getline(in_file, next_line)) {
		next_line.append("\n");
		err_check = find_and_replace_line(next_line, old_str, new_str, out_file);
	}
	return err_check;
}
