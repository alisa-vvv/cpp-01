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

int	main(
	int		argc,
	[[maybe_unused]] char*	argv[]
) {
	if (argc != 4) {
		std::cout << "Program needs 3 arguments: filename, string1 and string2\n";
		return (1);
	}

	std::fstream	target_file(argv[1]);
	std::string		old_str = argv[2];
	std::string		new_str = argv[3];

	std::string	file_contents;
	std::string	next_line;

	while (std::getline(target_file, next_line)) {
		file_contents.append(next_line);
		file_contents.append("\n");
	}
	std::cout << "File contents before:\n" << file_contents;
	size_t	found_instance = file_contents.find(old_str);
	while (found_instance != std::string::npos) {
		file_contents.erase(found_instance, old_str.length());
		file_contents.insert(found_instance, new_str);
		found_instance = file_contents.find(old_str, found_instance + old_str.length());
	}
	std::cout << "File contents after:\n" << file_contents;
	target_file.write(file_contents, file_contents.length());

	target_file.close();
	return 0;
}
