#ifndef __RENDERKINGKONG_PRIMITIVE_DRAWLIST_HPP__
#define __RENDERKINGKONG_PRIMITIVE_DRAWLIST_HPP__

#include "./RKKFrameworkFwdDclr.hpp"

namespace rkk
{
    namespace Primitive
    {
		namespace DrawList
		{
			template<class TDrawProxy>
			class type : public ::Wiz::Array::Type<TDrawProxy>
			{
			public:
				type() {}
				~type() {}
			};
		} /// end of namespace DrawList
    } /// end of namespace Primitive
} /// end of namespace rkk

#endif /// #ifndef __RENDERKINGKONG_PRIMITIVE_DRAWLIST_HPP__
