#ifdef LIBWRITEENABLEFORTHREADSATSTACK_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSTACK_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSTACK_API __declspec(dllimport)
#endif

namespace OpenAvrilLIB
{
	class LIBWRITEENABLEFORTHREADSATSTACK_API CLIDWriteEnableForThreadsAtSTACK 
	{
// classes.

// registers.

// pointers.

	public:
// constructor.
		CLIDWriteEnableForThreadsAtSTACK();

// destructor.

// public.
	// dynamic.
		static void* create_Program();
		static void write_End(class WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
		static void write_Start(class WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
		// get.
		static class WriteEnableForThreadsAt_STACK_Framework* get_ptr_Framework();
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
		static void set_ptr_Framework(class WriteEnableForThreadsAt_STACK_Framework* writeEnable);
	};
}