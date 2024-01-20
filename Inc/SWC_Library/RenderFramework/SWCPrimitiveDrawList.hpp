#ifndef __SIMWORLDCORE_PRIMITIVE_DRAWLIST_HPP__
#define __SIMWORLDCORE_PRIMITIVE_DRAWLIST_HPP__

#include "./SWCFrameworkFwdDclr.hpp"

namespace swc
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
} /// end of namespace swc

#endif /// #ifndef __SIMWORLDCORE_PRIMITIVE_DRAWLIST_HPP__
