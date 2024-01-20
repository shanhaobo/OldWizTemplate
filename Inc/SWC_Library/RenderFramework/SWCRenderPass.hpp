#ifndef __SIMWORLDCORE_RENDERPASS_HPP__
#define __SIMWORLDCORE_RENDERPASS_HPP__

#include "../RenderCore/SWCRenderState.hpp"
#include "../RenderCore/SWCRenderTarget.hpp"

#include "../RenderCore/SWCRenderShader_PixelShader.hpp"
#include "../RenderCore/SWCRenderShader_VertexShader.hpp"

#include "./SWCPrimitiveDrawList.hpp"
#include "./SWCPrimitiveProxy.hpp"

namespace swc
{
    namespace RenderPass
    {
        WMS_CLASS : public Obj::Framework::Render::type
        {
        public:
            type();
            virtual ~type();

        public:
            RenderState::ptr					m_RenderStagePtr;

            RenderTarget::ptr					m_RenderTargetPtr;

            RenderShader::VertexShader::ptr		m_VertexShaderPtr;
            RenderShader::PixelShader::ptr		m_PixelShaderPtr;

		private:
			Primitive::DrawList::type<Primitive::Proxy::ptr> DrawList;
        };
    } /// namespace RenderPass
} /// namespace swc

#endif /// #ifndef __SIMWORLDCORE_RENDERPASS_HPP__
