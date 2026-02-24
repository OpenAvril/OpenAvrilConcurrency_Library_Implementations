#ifdef LAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_API __declspec(dllexport)
#else
#define LAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT
{
	class LAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_API CLIBLaunchEnableForConcurrentThreadsAtCLIENT {
// classes.

// registers.

// pointer.

	public:
// constructor.
		CLIBLaunchEnableForConcurrentThreadsAtCLIENT();

// destructor.

// public.
	// dynamic.
		// get.
		// set.
	// static.
		static void* create_Program();
		static void request_Wait_launch(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrent_CoreId);
		static void thread_End(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework*, uint8_t concurrent_CoreId);
		// get.
		static uint8_t get_coreId_To_launch(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
		static bool get_Flag_Active(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
		static bool get_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrent_CoreId);
		static bool get_Flag_Idle(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
		static bool get_State_launchBit(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
		static void set_state_ConcurrentCore(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrent_CoreId, bool value);
		// set.

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		// get.
		static class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* get_ptr_Framework();
		// set.
		static void set_ptr_Framework(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* framework);
	};
}