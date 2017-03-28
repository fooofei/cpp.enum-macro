
#ifndef _ENUM_MACRO_H_
#define _ENUM_MACRO_H_

#define ENUM_BEGIN(typ) enum typ{  typ##_None = 0,
#define ENUM(nam)	nam
#define ENUM_END(typ)	,typ##_Count }; extern const char * typ##_Name_Table[];

#define ENUM_BAT_ACTION(nam)	 BAT_ACTION_##nam
#endif