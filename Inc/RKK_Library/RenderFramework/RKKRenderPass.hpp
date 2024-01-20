#ifndef __RENDERKINGKONG_RENDERPASS_HPP__
#define __RENDERKINGKONG_RENDERPASS_HPP__

#include "../RenderCore/RKKRenderState.hpp"
#include "../RenderCore/RKKRenderTarget.hpp"

#include "../RenderCore/RKKRenderShader_PixelShader.hpp"
#include "../RenderCore/RKKRenderShader_VertexShader.hpp"

#include "./RKKPrimitiveDrawList.hpp"
#include "./RKKPrimitiveProxy.hpp"

namespace rkk
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
} /// namespace rkk

#endif /// #ifndef __RENDERKINGKONG_RENDERPASS_HPP__
