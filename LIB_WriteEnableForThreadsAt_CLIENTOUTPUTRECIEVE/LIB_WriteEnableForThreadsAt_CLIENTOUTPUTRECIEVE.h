#ifdef LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
{
	class LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_API CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE 
	{
// classes.

// registers.

// pointers.

	public:
// constructor.
		CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE();

// destructor.

// public.
	// dynamic.
		static void* create_Program();
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
		// get.
		// set.
		static void set_ptr_Framework(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* writeEnable);
	};
}