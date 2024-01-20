#ifndef __SIMWORLDCORE_RENDERSCENE_HPP__
#define __SIMWORLDCORE_RENDERSCENE_HPP__

#include "./SWCFrameworkFwdDclr.hpp"

namespace swc
{
    namespace Scene
    {
		WMS_CLASS : public Obj::Framework::Render::type
        {
        public:
			type();
			virtual ~type();

		private:
			/// ::Wiz::Set::Type<> ;
			/// TStaticMeshDrawList
        };
    } /// namespace Scene
} /// namespace swc

#endif /// #ifndef __SIMWORLDCORE_RENDERSCENE_HPP__
