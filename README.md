# protectfunction_memory
Check whether the function has been modulated through the CRC, and terminate the program if it is modulated.

## Usage
* fCRC.AddFunction((DWORD64)function);
* fCRC.DeleteFunction((DWORD64)function);
* fCRC.GetFunctionList();
* fCRC.CheckFunction(); //Run this function in a new thread
