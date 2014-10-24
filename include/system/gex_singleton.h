#ifndef GEX_SINGLETON_H
#define GEX_SINGLETON_H

#include <gex_platform.h>
#include <gex_interfaces.h>

namespace Gex {
	template <typename T>
	class Singleton : INonCopyable
	{
	public:
		static T& instance(){
			static T _instance;

			return _instance;
		}

	protected:
		explicit Singleton<T>() {}
	};
}

#endif