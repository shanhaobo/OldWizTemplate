#include "../../../Inc/RKK_Library/RenderDeviceLayer/RKKRenderDeviceLayer.hpp"

namespace rkk
{
    namespace RenderDeviceLayer
    {
        type::type()
        {
        }

        type::~type()
        {
        }

        ptr Create()
        {
            return WMS_NULLPTR;
        }

        ::wms::Void::type Destroy(ptr& RDLPtr)
        {
            RDLPtr = WMS_NULLPTR;
        }
    } /// namespace RenderDeviceLayer
} /// namespace rkk
