#pragma once

#include "../../../01_WMS_Base/WMSColor.hpp"

namespace swc
{
    namespace Desc
    {
        namespace World
        {
            WMS_STRUCT
            {
                //////////////////////////////////////////////////////////////////////////
                //////////////////////////////////////////////////////////////////////////

                struct tSize
                {
                public:
                    tSize(
                        ::wms::Vec3::in    Multiple = ::wms::Vec3::type(100.0f, 100.0f, 50.0f)
                        )
                        : m_Multiple(Multiple)
                    {
                    }

                public:
                    ::wms::Vec3::type       m_Multiple;
                };

                //////////////////////////////////////////////////////////////////////////
                //////////////////////////////////////////////////////////////////////////

                struct tSnap
                {
                public:
                    tSnap(
                        ::wms::Vec3::in    Multiple   = ::wms::Vec3::type(100.0f, 100.0f, 50.0f)
                        )
                        : m_Multiple(Multiple)
                    {
                    }

                public:
                    ::wms::Vec3::type       m_Multiple;
                };


                //////////////////////////////////////////////////////////////////////////
                //////////////////////////////////////////////////////////////////////////

                type(
                    ::wms::Vec3::in    SnapMultiple = ::wms::Vec3::type(100.0f, 100.0f, 50.0f)
                    )
                    : SnapSetting(SnapMultiple)
                {

                }

                tSnap              SnapSetting;
            };
        } /// end of namespace Clear
    } /// end of namespace Desc
} /// end of namespace swc
