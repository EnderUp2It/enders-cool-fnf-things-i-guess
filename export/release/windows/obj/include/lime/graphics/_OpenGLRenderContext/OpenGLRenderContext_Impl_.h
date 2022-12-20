#ifndef INCLUDED_lime_graphics__OpenGLRenderContext_OpenGLRenderContext_Impl_
#define INCLUDED_lime_graphics__OpenGLRenderContext_OpenGLRenderContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeOpenGLRenderContext)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,_OpenGLRenderContext,OpenGLRenderContext_Impl_)

namespace lime{
namespace graphics{
namespace _OpenGLRenderContext{


class HXCPP_CLASS_ATTRIBUTES OpenGLRenderContext_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OpenGLRenderContext_Impl__obj OBJ_;
		OpenGLRenderContext_Impl__obj();

	public:
		enum { _hx_ClassId = 0x1501f9df };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics._OpenGLRenderContext.OpenGLRenderContext_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics._OpenGLRenderContext.OpenGLRenderContext_Impl_"); }

		inline static ::hx::ObjectPtr< OpenGLRenderContext_Impl__obj > __new() {
			::hx::ObjectPtr< OpenGLRenderContext_Impl__obj > __this = new OpenGLRenderContext_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OpenGLRenderContext_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			OpenGLRenderContext_Impl__obj *__this = (OpenGLRenderContext_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OpenGLRenderContext_Impl__obj), false, "lime.graphics._OpenGLRenderContext.OpenGLRenderContext_Impl_"));
			*(void **)__this = OpenGLRenderContext_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OpenGLRenderContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OpenGLRenderContext_Impl_",4a,a7,74,1b); }

		static  ::lime::_internal::backend::native::NativeOpenGLRenderContext fromRenderContext( ::lime::graphics::RenderContext context);
		static ::Dynamic fromRenderContext_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace _OpenGLRenderContext

#endif /* INCLUDED_lime_graphics__OpenGLRenderContext_OpenGLRenderContext_Impl_ */ 