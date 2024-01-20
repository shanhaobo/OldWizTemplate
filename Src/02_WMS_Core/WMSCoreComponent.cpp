#include "../../Inc/02_WMS_Core/WMSCoreComponent.hpp"

namespace wms
{
    namespace Cmpnt
    {
        type::type()
        {
        }

        type::~type()
        {
        }

        Void::type type::InitMetaInfo()
        {

        }

    } /// end of namespace Cmpnt

    namespace Cmpnt
    {
        ::wms::Cmpnt::ptr Construct()
        {
            return WIZ_NULLPTR;
        }
    } /// end of namespace Cmpnt
} /// end of namespace wms
