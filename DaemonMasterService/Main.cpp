//  DaemonMasterService: Main
//  
//  This file is part of DeamonMasterService.
// 
//  DeamonMaster is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//   DeamonMaster is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public License
//   along with DeamonMasterService.  If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ServiceMain.h"

#define PLACEHOLDER_SERVICE_NAME L"DMS"

using namespace std;


int wmain(int argc, wchar_t *argv[], wchar_t *envp[])
{
	//Init Logger with the log name
	Logger logger("DMS");

	//Check the given arguments
	for (size_t i = 1; i < argc; i++)
	{
		if (_wcsicmp(argv[i], L"-console") == 0)
		{
			//TODO: Add console functions
		}
		else if (_wcsicmp(argv[i], L"-service") == 0)
		{
			//create a wstring instance with the given name and than create with that name the service instance
			wstring serviceName(PLACEHOLDER_SERVICE_NAME);
			ServiceMain service(serviceName);
		}
		else if (_wcsicmp(argv[i], L"-killAllServices") == 0)
		{
			//TODO: Add kill all services function 
		}
		else if (_wcsicmp(argv[i], L"-deleteAllServices") == 0)
		{
			//TODO: Add delete all services for uninstall function
		}
	}

	return 0;
}