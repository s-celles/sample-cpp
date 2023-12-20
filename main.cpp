/*-------------------------------------------------------------------------------------------------------------
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT License. See https://go.microsoft.com/fwlink/?linkid=2090316 for license information.
 *-------------------------------------------------------------------------------------------------------------*/

#include <iostream>
#include "hello.h"

using namespace std;

int main() 
{   
    cout << "Version " << HelloWorld_VERSION_MAJOR 
                        << "." << HelloWorld_VERSION_MINOR
                        << "." << HelloWorld_VERSION_PATCH 
                        << std::endl;
    cout << "Hello, Remote World!" << std::endl;
    
    return 0;
}