#include <iostream>
#include <fstream>

// int	check_str(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
// 			i++;
// 		else
// 			return (0);
// 	}
// 	return (1);
// }

// int	check_args(char **av)
// {
// 	int	i;

// 	i = 0;
// 	while (av[i])
// 	{
// 		if (check_str(av[i]))
// 			i++;
// 		else
// 			return (0);
// 	}
// 	return (1);
// }

// const char	*add_in_str()

std::string	change_str(std::string line, std::string s2, int pos, int arr[1000], int count)
{
	int	i = 0;
	int	j = 0;
	int	k = 0;

	// while (i < count)
	// {
	// 	std::cout << "arr[" << i << "] => " << arr[i] << '\n';
	// 	i++;
	// }

	i = 0;
	std::cout << "The count => " << count << '\n';
	while (i < count)
	{
		pos = arr[i];
		std::cout << "the position: " << pos << '\n';
		std::cout << "The line[" << k << "] => " << line[k] << '\n';
		while (line[k]) //s1 = hello || s2 = pss
		{
			// while ()
			std::cout << "The char --> " << line[k] << " of index --> " << k << std::endl; 
			// std::cout << "re a la folie\n";
			if (k == pos)
			{
				std::cout << "enter the loop\n"; 
				while (s2[j])
				{
					if (line[k] == '\0')
						break ;
					line[k] = s2[j];
					std::cout << "The trans --> " << line[k] << '\n';
					k++;
					j++;
				}
				// if (s2[j] == '\0')
				// {
				// 	line[k] = 
				// }
				// k--;
				// line[k] = '\0';
			}
			// s1[pos] = s2[i];
			// pos++;
			k++;
		}
		k = 0;
		j = 0;
		i++;
	}
	// std::cout << "The new line ==> " << line << std::endl;
	return (line);
}

std::string	check_line(std::string line, std::string s1, std::string s2)
{
	(void)s2;

	std::string	l = line;
	std::string	ret;
	size_t		pos = 0;
	int			arr[10000];
	int			i = 0;
	int			count = 0;

	while ((pos = l.find(s1, pos + 1)) != std::string::npos)
	{
		std::cout << pos << " ";
		arr[i++] = pos;
		// i++;
		count++;
		// std::cout << "The ret ==> " << ret << std::endl;
	}


	// std::cout << '\n';

	// i = 0;
	// while (i < count)
	// {
	// 	std::cout << "arr[" << i << "] => " << arr[i] << '\n';
	// 	i++;
	// }

	// ret = change_str(l, s2, pos, arr, count);
	// std::cout << "The ret ==> " << ret << std::endl;
	// std::cout << "The l ==> " << l << std::endl;

	return (l);
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

	// Read the file
	std::string	new_line;
	// input.
	// int i = 1;
	size_t j = 0;
	size_t		pos = 0;

	while ((pos = input.find(s1, pos + 1)) != std::string::npos)
	{
		std::cout << pos << " ";
		// arr[i++] = pos;
		// i++;
		// count++;
		// std::cout << "The ret ==> " << ret << std::endl;
	}

	while (getline(in_file, input))
	{
		// std::cout << "line" << i << ":\n";
		// if (((pos = input.find(s1, pos + 1)) != std::string::npos))
		pos = input.find(s1, pos + 1);
		while (input[j])
		{
			if (pos != std::string::npos && j != pos)
			{
				creat_file << input[j];
			}
			else if (j == pos)
			{
				creat_file << s2;
				while (s1[j])
				{
					j++;
				}
				creat_file << ' ';
			}

				// break;
			j++;
		}
		// new_line = check_line(input, av[2], av[3]);
		// i++;
	}
	std::cout << '\n';

	// now we should replace s1 by s2 and put the output in the .replace file

	// std::cout << "Good enough $)\n";
}