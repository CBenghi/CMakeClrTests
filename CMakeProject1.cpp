// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"
#include "NewFile.h"
#include "Header.h"

using namespace std;

int main()
{
	auto f = MyFile();
	
	platformDependent^ df = gcnew platformDependent();
	int t2 = df->Some();
	int t = f.Some();
	cout << "Hello CMake." << t2 << endl;
	return 0;
}


