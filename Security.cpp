#include "Includes.hpp"

void TargetFunction()
{
	while (1)
	{
		cout << "Please Enter your password : " << endl;
		std::string str;
		std::getline(std::cin, str);

		if (str == "2022")
			break;
		else
			cout << "Failed !" << endl;
	}

	cout << "Success !" << endl;
}

void CallF()
{
	fCRC.CheckFunction();
}

int main()
{
	fCRC.AddFunction((DWORD64)TargetFunction);
	fCRC.AddFunction((DWORD64)exit);

	/*auto t = fCRC.GetFunctionList();
	for (int i = 0; i < t.size(); i++)
	{
		cout << "i : " << i << endl;
		cout << "Address : " << hex << t[i].Address << " / size : " << t[i].Size << endl;
	}*/
	
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)CallF, 0, 0, 0);
	TargetFunction();
}