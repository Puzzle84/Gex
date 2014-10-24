#include <gex_enumutil.h>
#include <gex_errglobals.h>

template<>
char const* EnumStrings<ErrCode>::m_array[] =
{
	"ERR_FAILURE",
	"ERR_SUCCESS"
};
