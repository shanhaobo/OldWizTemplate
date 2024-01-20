#ifndef __SIMWORLDCORE_RENDERFLOW_HPP__
#define __SIMWORLDCORE_RENDERFLOW_HPP__

#include "SWCRenderPass.hpp"

namespace swc
{
    namespace RenderFlow
    {
        WMS_CLASS : public Obj::Framework::Render::type
        {
        public:
            type();
            virtual ~type();
        };
    } /// namespace RenderFlow
} /// namespace swc

#endif /// #ifndef __SIMWORLDCORE_RENDERFLOW_HPP__
