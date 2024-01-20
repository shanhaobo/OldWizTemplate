#ifndef __RENDERKINGKONG_RENDERSCENE_HPP__
#define __RENDERKINGKONG_RENDERSCENE_HPP__

#include "./RKKFrameworkFwdDclr.hpp"

namespace rkk
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
} /// namespace rkk

#endif /// #ifndef __RENDERKINGKONG_RENDERSCENE_HPP__
