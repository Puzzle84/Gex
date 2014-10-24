#ifndef GEX_LOGMANAGER_H
#define GEX_LOGMANAGER_H

#include <gex_platform.h>
#include <gex_singleton.h>

namespace Gex {
	class GEX_API LogManager : public Singleton < LogManager >, IManager {
		friend class Singleton < LogManager > ;
	public:

		void VStartup() override;
		void VShutdown() override;
	};

	extern GEX_API LogManager& g_LogManager;
}
#endif