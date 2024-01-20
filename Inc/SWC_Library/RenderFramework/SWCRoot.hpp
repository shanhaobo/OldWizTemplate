#ifndef __SIMWORLDCORE_ROOT_HPP__
#define __SIMWORLDCORE_ROOT_HPP__

#include "./SWCRenderer.hpp"

namespace swc
{
    namespace Root
    {
        class type
        {
        public:
            type(){}

        protected:
            friend class Plugin::RenderDeviceLayer::type;
            ::swc::Renderer::ptr m_RendererPtr;
        };

        WIZ_SINGLETON_DECLARE(::swc::Root::type);
    } /// namespace Root
} /// namespace swc

#endif /// #ifndef __SIMWORLDCORE_ROOT_HPP__
