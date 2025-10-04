#include <iostream>
#include <fstream>

void	write_in_new_file(std::string s1, std::string s2, std::string input, std::ofstream& creat_file)
{
	std::string	new_line;
	size_t j = 0;
	size_t		pos = 0;
	int		c = 0;
	size_t		pos_arr[1000];
	int		pos_index = 0;

	while ((pos = input.find(s1, pos + 1)) != std::string::npos)
	{
		pos_arr[pos_index] = pos;
		pos_index++;
	}
	
	pos_index = 0;
	while (input[j])
	{
		if (pos_arr[pos_index] != std::string::npos && j != pos_arr[pos_index])
		{
			creat_file << input[j];
		}
		else if (j == pos_arr[pos_index])
		{
			creat_file << s2;
			while (s1[c])
			{
				c++;
				j++;
			}
			if (input[j] != '\0')
				creat_file << ' ';
			if (input[j] == '\0')
				creat_file << '\n';
			pos_index++;
		}
		j++;
		c = 0;
	}
}

int main(int ac, const char **av)
{
	std::string	input;
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	if (ac != 4)
	{
		std::cerr << "Please Enter 3 arguments !\n";
		return (1);
	}
	
	std::string	new_av = av[1];
	// Check if we have the file
	std::ifstream in_file(av[1]);
	if (in_file.fail())
	{
		std::cout << av[1] << ": does not exist :/\n";
		return (0);
	}

	// Open the file.replace
	std::string	new_file = new_av + ".replace";
	std::ofstream	creat_file(new_file.c_str());
	if (!creat_file)
	{
		std::cerr << "Error creating file :/\n";
		return (1);
	}

	while (getline(in_file, input))
	{
		write_in_new_file(s1, s2, input, creat_file);
	}

}