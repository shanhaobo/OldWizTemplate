#ifndef __RENDERKINGKONG_FRAMEWORK_FORWARD_DELCARE_HPP__
#define __RENDERKINGKONG_FRAMEWORK_FORWARD_DELCARE_HPP__

#include "../../01_WMS_Base/WMSBase.hpp"
#include "../../02_WMS_Core/WMSCore.hpp"

namespace rkk
{
    namespace ERKK_OBJ_CAT
    {
        namespace Framework
        {
            WIZ_ACD(eROC_General);

			WIZ_ACD(eROC_Render);
            WIZ_ACD(eROC_RenderCmd);
        } /// end of namespace Framework
    } /// end of namespace ERKK_OBJ_CAT

    namespace Allocator
    {
        namespace Framework
        {
            namespace General
            {
                typedef ::Wiz::Allocator::Categorized<ERKK_OBJ_CAT::Framework::eROC_General>::Type		type;
            }
			namespace Render
			{
				namespace Cmd
				{
					typedef ::Wiz::Allocator::Categorized<ERKK_OBJ_CAT::Framework::eROC_RenderCmd>::Type	type;
				}
				typedef ::Wiz::Allocator::Categorized<ERKK_OBJ_CAT::Framework::eROC_Render>::Type		type;
			}
        } /// end of namespace Framework
    } /// end of namespace Allocator

    namespace Obj
    {
        namespace Framework
        {
            namespace General
            {
                WMS_DECLARE(::wms::Obj::type<::rkk::Allocator::Framework::General::type>);
            }
            namespace Render
			{
				namespace Cmd
				{
					WMS_DECLARE(::wms::Obj::type<::rkk::Allocator::Framework::Render::Cmd::type>);
				}
                WMS_DECLARE(::wms::Obj::type<::rkk::Allocator::Framework::Render::type>);
            }
        } /// end of namespace Framework
    } /// end of namespace Obj

	namespace Root
	{
		class type;
		WMS_DECLARE_PTR(type);
	} /// namespace Root

	////////////////////////////////////////////

	namespace Renderer
	{
		WMS_FORWARD_DECLARE_CLASS;
	} /// end of namespace Renderer;

	namespace RenderPass
	{
		WMS_FORWARD_DECLARE_CLASS;
	} /// end of namespace RenderPass;

	namespace RenderFlow
	{
		WMS_FORWARD_DECLARE_CLASS;
	} /// end of namespace RenderFlow;

    namespace Scene
	{
		WMS_FORWARD_DECLARE_CLASS;
    } /// end of namespace RenderScene
} /// namespace rkk

#endif /// #ifndef __RENDERKINGKONG_FRAMEWORK_FORWARD_DELCARE_HPP__
