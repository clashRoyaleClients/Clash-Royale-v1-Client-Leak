class std::vector<void (*)(BITCrashUncaughtCXXExceptionInfo const*),std::allocator<void (*)(BITCrashUncaughtCXXExceptionInfo const*)>>
{
public:

    void **__fastcall std::vector<void (*)(BITCrashUncaughtCXXExceptionInfo const*)>::~vector(void **a1)
    {
      void *v2; // x0
    
      v2 = *a1;
      if ( v2 )
        operator delete(v2);
      return a1;
    }

}; // end class std::vector<void (*)(BITCrashUncaughtCXXExceptionInfo const*),std::allocator<void (*)(BITCrashUncaughtCXXExceptionInfo const*)>>
