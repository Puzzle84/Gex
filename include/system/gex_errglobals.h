#ifndef GEX_ERROR_GLOBALS_H
#define GEX_ERROR_GLOBALS_H

enum class ErrCode
{
	ERR_FAILURE,
	ERR_SUCCESS
};

inline bool CheckError(ErrCode err)
{
	if (err != ErrCode::ERR_SUCCESS)
		return true;
	else
		return false;
}

#endif