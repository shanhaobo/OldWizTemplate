#ifndef __SIMWORLDCORE_RENDERTARGET_MANAGER_HPP__
#define __SIMWORLDCORE_RENDERTARGET_MANAGER_HPP__

#include "./SWCRenderCoreFwdDclr.hpp"

#include "./SWCRenderTarget.hpp"

namespace swc
{
	namespace RenderTarget
	{
		enum EUsage
		{
			eSceneColor,
			eSceneDepth,
		};
	} /// end of RenderTarget

    namespace RenderTargetManager
    {
        WMS_CLASS
        {
			typedef ::swc::RenderTarget::ptr	tElementPtr;

        public:
            type();
            virtual ~type();

			::wms::Bool::type ActiveRenderTarget(::swc::RenderTarget::EUsage inCategory);
			::wms::Void::type DeactiveRenderTarget(::swc::RenderTarget::EUsage inCategory);

		protected:
			::Wiz::Array::Type<tElementPtr>		RenderTargetTable;
        };
    } /// namespace RenderTargetManager
} /// namespace swc

#endif __SIMWORLDCORE_RENDERTARGET_MANAGER_HPP__
