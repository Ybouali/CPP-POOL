#include "./Type.hpp"

int	main( int argc, char **argv )
{
	Type type;
	try
	{
		if (argc == 1)
			throw (Type::EmptyInput());
		for (int i = 1; i < argc; i++)
		{
			type.analyzeNewIn(argv[i]);
			type.printtypes();
			if (i + 1 < argc)
				std::cout << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		// print_help();
	}
}