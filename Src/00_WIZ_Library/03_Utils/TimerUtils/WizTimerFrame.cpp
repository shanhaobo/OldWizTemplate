#include "../../../../Inc/00_WIZ_Library/03_Utils/TimerUtils/WizTimerFrame.hpp"

#include "../../../../Inc/00_WIZ_Library/01_Basic/04_TU/WizBasicTU.hpp"

namespace Wiz
{
    namespace Timer
    {
        namespace Frame
        {
            Type::Type()
            {
                Reset();
            }

            Void::Type Type::Reset()
            {
                m_Now       = ::Wiz::Timer::HighRes::instancePtr()->Now_Second();

                m_DeltaTime = 0;
            }

            Void::Type Type::Tick()
            {
                R64::TypeC NowSec = ::Wiz::Timer::HighRes::instancePtr()->Now_Second();

                m_DeltaTime = NowSec - m_Now;

                m_Now = NowSec;
            }
        } /// end of namespace Frame
    } /// end of namespace Timer
} /// end of namespace Wiz
