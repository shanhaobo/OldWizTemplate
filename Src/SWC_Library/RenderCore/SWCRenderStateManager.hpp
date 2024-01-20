#ifndef __SIMWORLDCORE_RENDERSTATE_MANAGER_HPP__
#define __SIMWORLDCORE_RENDERSTATE_MANAGER_HPP__

#include "../../../Inc/SWC_Library/RenderCore/SWCRenderState.hpp"

namespace swc
{
    namespace RenderState
    {
        namespace Manager
        {
            WMS_CLASS
            {
            public:
                type();
                ~type();

            public:
                ::wms::Bool::type Update(RenderState::in inNewState);

            protected:
                RenderState::type           m_WorkingState;
            };
        } /// end of namespace Manager
    } /// namespace RenderState
} /// namespace swc

#endif /// #ifndef __SIMWORLDCORE_RENDERSTATE_MANAGER_HPP__
