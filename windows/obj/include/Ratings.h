// Generated by Haxe 4.1.5
#ifndef INCLUDED_Ratings
#define INCLUDED_Ratings

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Ratings)



class HXCPP_CLASS_ATTRIBUTES Ratings_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Ratings_obj OBJ_;
		Ratings_obj();

	public:
		enum { _hx_ClassId = 0x07eb05f2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Ratings")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Ratings"); }

		inline static ::hx::ObjectPtr< Ratings_obj > __new() {
			::hx::ObjectPtr< Ratings_obj > __this = new Ratings_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Ratings_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Ratings_obj *__this = (Ratings_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Ratings_obj), false, "Ratings"));
			*(void **)__this = Ratings_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Ratings_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Ratings",96,8d,b4,2a); }

		static ::String GenerateLetterRank(Float accuracy);
		static ::Dynamic GenerateLetterRank_dyn();

		static ::String CalculateRating(Float noteDiff, ::Dynamic customSafeZone);
		static ::Dynamic CalculateRating_dyn();

		static ::String CalculateRanking(int score,int scoreDef,int nps,Float accuracy);
		static ::Dynamic CalculateRanking_dyn();

};


#endif /* INCLUDED_Ratings */ 
