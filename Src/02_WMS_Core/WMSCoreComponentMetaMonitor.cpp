#include "../../Inc/02_WMS_Core/WMSCoreComponentMetaMonitor.hpp"

namespace wms
{
	namespace Cmpnt
	{
		namespace MetaMntr
		{
			type::type(::wms::Cmpnt::ptr inObjPtr) : m_MonitoredObjPtr(inObjPtr)
			{
			}

			type::~type()
			{
			}
		} /// end of namespace MetaMntr
	} /// end of namespace Cmpnt
} /// end of namespace wms
