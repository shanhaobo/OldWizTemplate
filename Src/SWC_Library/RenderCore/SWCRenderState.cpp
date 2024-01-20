#include "../../../Inc/SWC_Library/RenderCore/SWCRenderState.hpp"

namespace swc
{
    namespace RenderState
    {
        type::type(in inOther)
        {
            m_KeepLastSetting = inOther.m_KeepLastSetting;
        }

        type::~type()
        {
        }
    } /// namespace RenderState
} /// namespace swc
