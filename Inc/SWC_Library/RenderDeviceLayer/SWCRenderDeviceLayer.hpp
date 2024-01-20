#ifndef __SIMWORLDCORE_RENDERDEVICELAYER_HPP__
#define __SIMWORLDCORE_RENDERDEVICELAYER_HPP__

#include "../Core/SWCCore.hpp"
#include "../RenderCore/SWCRenderCore.hpp"

///////////////////////////
///////////////////////////

#define RKK_RDL_METHOD_BASE_DECLARE(MPRet, MPName, MPParam)     virtual MPRet MPName MPParam = 0

#define RKK_RDL_METHOD_DECLARE(MPRet, MPName, MPParam)          virtual MPRet MPName MPParam

///////////////////////////
///////////////////////////

namespace swc
{
    namespace RenderDeviceLayer
    {
        ///////////////////////////
        ///////////////////////////

        class type : public ::wms::Obj::RDL::type
        {
        public:
            type();
            virtual ~type();

        public:
#           undef RKK_RDL_METHOD
#           define RKK_RDL_METHOD       RKK_RDL_METHOD_BASE_DECLARE
#               include "SWCRenderDeviceLayerMethod.hpp"
#           undef RKK_RDL_METHOD
        };
        WMS_DECLARE_PTR(type);

        ///////////////////////////
        ///////////////////////////

    } /// namespace RenderDeviceLayer
} /// namespace swc

#endif /// #ifndef __SIMWORLDCORE_RENDERDEVICELAYER_HPP__
