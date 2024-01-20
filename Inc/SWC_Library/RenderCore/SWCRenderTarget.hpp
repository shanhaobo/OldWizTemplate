#ifndef __SIMWORLDCORE_RENDERTARGET_HPP__
#define __SIMWORLDCORE_RENDERTARGET_HPP__

#include "./SWCRenderCoreFwdDclr.hpp"

namespace swc
{
    namespace RenderTarget
    {
        WMS_CLASS
        {
        public:
            type(Desc::RenderTarget::in inDesc);
            ~type();

            Desc::RenderTarget::type m_Description;
        };
    } /// namespace RenderTarget
} /// namespace swc

#endif /// __SIMWORLDCORE_RENDERTARGET_HPP__
