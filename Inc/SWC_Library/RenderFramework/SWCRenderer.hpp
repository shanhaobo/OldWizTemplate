#ifndef __SIMWORLDCORE_RENDERER_HPP__
#define __SIMWORLDCORE_RENDERER_HPP__

#include "../RenderDeviceLayer/SWCRenderDeviceLayer.hpp"

#include "./SWCPlugin_RenderDeviceLayer.hpp"

#include "./SWCRenderFlow.hpp"

namespace swc
{
    namespace Renderer
    {
		WMS_CLASS : public Obj::Framework::Render::type
        {
        public:
            type();
            virtual ~type();

        public:
            ::wms::Bool::type RegisterRDL(::wms::Name::in, Plugin::RenderDeviceLayer::ptr);
            ::wms::Void::type UnregisterRDL(::wms::Name::in);

            ::wms::Bool::type ActiveRDL(::wms::Name::in);
            ::wms::Bool::type ActiveRDL(Plugin::RenderDeviceLayer::ptr);

            ::wms::Void::type DeactiveRDL(::wms::Name::in);
            ::wms::Void::type DeactiveRDL(Plugin::RenderDeviceLayer::ptr);

        protected:
            Plugin::RenderDeviceLayer::ptr GetRDL(::wms::Name::in);

            /// RDL
        protected:
            typedef ::wms::Map<::wms::Name::type, Plugin::RenderDeviceLayer::ptr>::type tMapRDLPlugin;
            tMapRDLPlugin                   m_mapRDLPlugin;

            ::wms::Name::type               m_ActivedRDLName;
            RenderDeviceLayer::ptr          m_ActivedRDLPtr;
        };
    } /// namespace Renderer
} /// namespace swc

#endif /// #ifndef __SIMWORLDCORE_RENDERER_HPP__
