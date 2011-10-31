/*
 *  cppPriv.h
 *  cpp
 *
 *  Created by 計良 宥良 on 11/10/31.
 *  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
 *
 */

/* The classes below are not exported */
#pragma GCC visibility push(hidden)

class cppPriv
{
	public:
		void HelloWorldPriv(const char *);
};

#pragma GCC visibility pop
