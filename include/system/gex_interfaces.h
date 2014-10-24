#ifndef GEX_INTERFACES_H
#define GEX_INTERFACES_H

#include <gex_platform.h>
namespace Gex {
	class GEX_API INonCopyable
	{
	protected:
		INonCopyable()
		{

		}
		~INonCopyable()
		{

		}
	private:
		INonCopyable(const INonCopyable& other);
		const INonCopyable& operator= (const INonCopyable& other);
	};

	class GEX_API IManager
	{
	public:
		virtual void VStartup() = 0;
		virtual void VShutdown() = 0;
	};
}
#endif