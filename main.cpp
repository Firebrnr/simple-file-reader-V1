#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	std::ifstream ofile;
	std::fstream nfile;
	std::string fileName;
	if (argc<1)
	{
		fileName = argv[1];


	}
	else
	{



	}
	
	ofile.open(fileName);
	if (ofile.is_open())
	{
		//Open Code Here
		
	}
	else
	{
		nfile.open(fileName);

	}


}