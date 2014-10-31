#include "FileOutput.hpp"

#include <iostream>
#include <stdexcept>

int main()
{
	
	try
	{
		FileOutput fout;
		
		fout.SetJobDirectory("files");
		fout.AddFileStream("stream1","stream1.txt");
		fout.RegisterOutput("stream1", "line1");
		fout.AddFileStream("stream2","stream2.txt");
		fout.RegisterOutput("stream2", "line1");
		
	}
	catch (const std::runtime_error & e)
	{
		std::cout << "A runtime error was caught by main\n" << e.what() << '\n';
	}
	catch (...)
	{
		std::cout << "An unknown error has occured!\n";
	}
	
}	
	
