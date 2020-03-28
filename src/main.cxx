#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	using namespace std;
	ifstream codeTable = ifstream("code.txt");
	if(!codeTable) return -1;
	cout << "Hello, C++!\n";
	cout << "#args is " << argc << endl;
	/*FIXME
		cout << codeTable.c_str();
	*/
	return 0;
}
