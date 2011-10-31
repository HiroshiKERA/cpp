/*
 *  cpp.cp
 *  cpp
 *
 *  Created by 計良 宥良 on 11/10/31.
 *  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>
#include "cpp.h"
#include "cppPriv.h"

void cpp::HelloWorld(const char * s)
{
	 cppPriv *theObj = new cppPriv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void cppPriv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

