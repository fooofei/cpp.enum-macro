

#ifndef _ENUM_RE_MACRO_H_
#define _ENUM_RE_MACRO_H_


#undef ENUM_BEGIN
#undef ENUM
#undef ENUM_END
#undef ENUM_BAT_ACTION
#define ENUM_BEGIN(typ)	const char* typ##_Name_Table [] = {   #typ"_None",
#define ENUM(nam)	#nam
#define ENUM_END(typ)	};

#define ENUM_BAT_ACTION(nam)	"BAT_ACTION_"#nam

#endif