#ifndef __CORE_DESC_RENDERTARGET_HPP__SHANHAOBO_19800429__
#define __CORE_DESC_RENDERTARGET_HPP__SHANHAOBO_19800429__

#include "../../../01_WMS_Base/WMSBase.hpp"

#include "../Enum/SWCEnumPixelFormat.hpp"

#include "./SWCDescRenderTarget.hpp"
#include "./SWCDescClear.hpp"

namespace swc
{
    namespace Desc
    {
        namespace RenderTarget
        {
            WMS_STRUCT
            {
                //////////////////////////////////////////////////////////////////////////
                //////////////////////////////////////////////////////////////////////////

                type(
                    ::wms::Size::in                 Width,
                    ::wms::Size::in                 Height,
                    ::swc::Enum::PixelFormat::in    ColorFormat             = ::swc::Enum::PixelFormat::eRGBA_16F_16F_16F_16F,
                    ::swc::Enum::PixelFormat::in    DepthFormat             = ::swc::Enum::PixelFormat::eDS_24UN_8U,
                    ::swc::Enum::PixelFormat::in    StencilFormat           = ::swc::Enum::PixelFormat::eDS_24UN_8U,
                    ::wms::U::in                    index                   = 0,
                    ::wms::Bool::in                 ClearColorEnable        = ::wms::Bool::False,
                    ::wms::Color::in                ClearColorValue         = ::wms::Color::Black,
                    ::wms::Bool::in                 ClearDepthEnable        = ::wms::Bool::False,
                    ::wms::F32::in                  ClearDepthValue         = 0,
                    ::wms::Bool::in                 ClearStencilEnable      = ::wms::Bool::False,
                    ::wms::U::in                    ClearStencilValue       = 0,
                    ::swc::Enum::MultiSample::in    MultiSample             = ::swc::Enum::MultiSample::eNone,
                    ::wms::U::in                    MultiSampleQuality      = 0
                    )
                    : m_Width(Width)
                    , m_Height(Height)
                    , m_ColorPixelFormat(ColorFormat)
                    , m_DepthPixelFormat(DepthFormat)
                    , m_StencilPixelFormat(StencilFormat)
                    , m_Index(index)
                    , Clear(ClearColorEnable, ClearColorValue, ClearDepthEnable, ClearDepthValue, ClearStencilEnable, ClearStencilValue)
                    , m_MultiSample(MultiSample, MultiSampleQuality)
                {

                }

                //////////////////////////////////////////////////////////////////////////
                //////////////////////////////////////////////////////////////////////////

                ::wms::Size::type                       m_Width;
                ::wms::Size::type                       m_Height;

                ::swc::Enum::PixelFormat::type          m_ColorPixelFormat;
                ::swc::Enum::PixelFormat::type          m_DepthPixelFormat;
                ::swc::Enum::PixelFormat::type          m_StencilPixelFormat;
                ::wms::U::type                          m_Index;

                ::swc::Desc::Clear::type                Clear;

                ::swc::Desc::MultiSample::type          m_MultiSample;

            };
        } /// end of namespace RenderTarget
    } /// end of namespace Desc
} /// end of namespace swc

#endif /*__CORE_DESC_RENDERTARGET_HPP__SHANHAOBO_19800429__*/

