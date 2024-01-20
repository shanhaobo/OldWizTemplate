#include "../../../Inc/SWC_Library/RenderDeviceLayer/SWCRenderDeviceLayer.hpp"

namespace swc
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
} /// namespace swc
