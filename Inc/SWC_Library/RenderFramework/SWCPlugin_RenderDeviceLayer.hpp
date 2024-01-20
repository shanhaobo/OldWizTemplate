#ifndef __SIMWORLDCORE_PLUGIN_RENDERDEVICELAYER_HPP__
#define __SIMWORLDCORE_PLUGIN_RENDERDEVICELAYER_HPP__

#include "../RenderDeviceLayer/SWCRenderDeviceLayer.hpp"

#include "../RenderFramework/SWCFrameworkFwdDclr.hpp"

namespace swc
{
    namespace Plugin
    {
        namespace RenderDeviceLayer
        {
            WMS_CLASS : public ::wms::Plugin::type
            {
            public:
                typedef ::wms::Plugin::type tSuper;

            public:
                type() : tSuper()
                {

                }

            public:
                virtual ::wms::Bool::type Register(::wms::PluginMgr::ptr, ::wms::Name::in inName);
                virtual ::wms::Void::type Unregister();

            public:
                virtual ::wms::Bool::type Active();
                virtual ::wms::Void::type Deactive();

            protected:
                virtual ::swc::RenderDeviceLayer::ptr CreateRDL() = 0;
                virtual ::wms::Void::type DestroyRDL(::swc::RenderDeviceLayer::ptr) = 0;

            protected:
                friend class Renderer::type;

                Renderer::ptr                   m_RendererPtr;
                ::swc::RenderDeviceLayer::ptr   m_RDLPtr;
            };
        } /// namespace RenderDeviceLayer
    } /// end of namespace Plugin
} /// namespace swc

#endif /// __SIMWORLDCORE_PLUGIN_RENDERDEVICELAYER_HPP__
