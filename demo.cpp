// demo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <windows.h>
#include <tchar.h>
#include <vector>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <time.h>

// 来源 http://stackoverflow.com/questions/147267/easy-way-to-use-variables-of-enum-types-as-string-in-c

#include "EnumMacro.h"
#include "defs.h"

// 下面这三个一定要写在.cpp里
#undef _DEFS_H_
#include "EnumReMacro.h"
#include "defs.h"

const char* enumTostr(e_Bat_Action e)
{
	if( e>e_Bat_Action_None && e< e_Bat_Action_Count )
		return e_Bat_Action_Name_Table[e];
	else 
		return e_Bat_Action_Name_Table[e_Bat_Action_None];
}


int _tmain()
{


	printf("%s\n" ,  enumTostr(BAT_ACTION_DEL));
	return 0;
}