#ifdef LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API __declspec(dllexport)
#else
#define LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
{
	class LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API CLIBLaunchEnableForConcurrentThreadsAtSERVER {
	public:
		CLIBLaunchEnableForConcurrentThreadsAtSERVER();
		static void* create_Program();

		static void request_Wait_launch(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId);
		static void thread_End(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework*, uint8_t concurrent_CoreId);

		static uint8_t get_coreId_To_launch(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		static bool get_Flag_Active(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		static bool get_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId);
		static bool get_Flag_Idle(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		static bool get_State_launchBit(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		static void set_state_ConcurrentCore(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId, bool value);

	private:
		static class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* get_ptr_Framework();
		static void set_ptr_Framework(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* framework);
	};
}