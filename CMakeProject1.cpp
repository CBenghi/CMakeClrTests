// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"
#include "clrClass.h"
#include "nativeClass.h"

using namespace std;

int main()
{
	auto f = nativeClass();
	clrClass^ cc = gcnew clrClass();
	int clrClassValue = cc->Some();
	int nativeValue = f.Some();
	cout << "Hello CMake." << endl;
	cout << "clrClass: " << clrClassValue << endl;
	cout << "nativeClass: " << nativeValue << endl;
	return 0;
}


