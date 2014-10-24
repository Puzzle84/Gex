#ifndef GEX_ENUM_UTIL_H
#define GEX_ENUM_UTIL_H

#include <gex_platform.h>
#include <string>

template <typename T>
struct GEX_API EnumStrings
{
public:
	static char const* m_array[];
};

template <typename T>
const std::string EnumString(T _enum)
{
	int val = static_cast<int>(_enum);
	const char* str = EnumStrings<T>::m_array[val];
	if (str)
		return std::string(str);
	else
		return "Invalid Enum";
}

#endif