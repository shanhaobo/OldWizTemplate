#ifndef __SIMWORLDCORE_RENDERSTATE_HPP__
#define __SIMWORLDCORE_RENDERSTATE_HPP__

#include "../Core/SWCCore.hpp"

namespace swc
{
    namespace RenderState
    {
        WMS_CLASS
        {
        public:
            type() : m_KeepLastSetting(::wms::Bool::True)
            {

            }
            type(in inOther);
            ~type();

            ::wms::Bool::type  m_KeepLastSetting;
        };
    } /// namespace RenderState
} /// namespace swc

#endif /// #ifndef __SIMWORLDCORE_RENDERSTATE_HPP__
