#ifdef LAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_API __declspec(dllexport)
#else
#define LAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT
{
	class LAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_API CLIBLaunchEnableForConcurrentThreadsAtCLIENT
	{
	public:
		// constructor.
		CLIBLaunchEnableForConcurrentThreadsAtCLIENT();

		// destructor.

		// public.
			// dynamic.
				// get.
				// set.
			// static.
		static void* generate_Program();//ToDO: uncomment for C#.
		//static class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* generate_Program();//ToDO: uncomment for C++.
		static void request_Wait_launch(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID);
		static void thread_End(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework*, uint8_t concurrentThreadID);
		// get.
		static uint8_t get_coreId_To_launch(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
		static bool get_Flag_Active(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
		static bool get_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID);
		static bool get_Flag_Idle(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
		static bool get_State_launchBit(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
		// set.
		static void set_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID, bool value);

	private:
		// private.
			// dynamic.
				// get.
				// set.
			// static.
		static void create_ptr_Framework();
		// get.
		static class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* stat_get_ptr_Framework();
		// set.
		static void stat_set_ptr_Framework(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* newClass);
		// pointers.
			// classes.

			// registers.
	};
}