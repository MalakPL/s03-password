#include <iostream>
#include <string>

using std::string;
using std::logic_error;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

auto main(int argc, const char* argv[]) -> int
{
	try
	{
		if (argc != 2)
		{
			throw logic_error{ "Nie podano argumentu" };
		}

		string Password{};
		do
		{
			cin >> Password;
		} while(Password != argv[1]);

		cout << "ok!" << endl;

		return 0;
	}
	catch (logic_error ex)
	{
		cerr << ex.what() << endl;
		return 1;
	}
}