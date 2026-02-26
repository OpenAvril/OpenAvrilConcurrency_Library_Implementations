#ifdef LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
{
	class LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_API CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
	{
	public:
		// constructor.
		CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE();

		// destructor.

		// public.
			// dynamic.
		static void* generate_Program();//ToDO: uncomment for C#.
		//static OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* generate_Program();//ToDO: uncomment for C++.
		static void write_End(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId);
		static void write_Start(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId);
		// get.
		static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* get_ptr_Framework();
		// set.
	// static.
		// get.
		// set.

	private:
		// private.
			// dynamic.
				// get.
				// set.
			// static.
		static void create_Framework();
		// get.
		static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* stat_get_ptr_Framework();
		// set.
		static void stat_set_ptr_Framework(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* newPtr);
		// pointers.
			// classes.
			// registers.
	};
}