class Mutex
{
public:

    __int64 __fastcall Mutex::lock(pthread_mutex_t *a1)
    {
      __int64 result; // x0
    
      result = pthread_mutex_lock(a1);
      if ( (result & 0x80000000) != 0 )
        __assert_rtn("lock", "../../include/titan/Mutex.h", 44, "ret >= 0");
      return result;
    }

    __int64 __fastcall Mutex::unlock(pthread_mutex_t *a1)
    {
      __int64 result; // x0
    
      result = pthread_mutex_unlock(a1);
      if ( (result & 0x80000000) != 0 )
        __assert_rtn("unlock", "../../include/titan/Mutex.h", 54, "ret >= 0");
      return result;
    }

    void __fastcall Mutex::~Mutex(pthread_mutex_t *this)
    {
      pthread_mutex_destroy(this);
    }

}; // end class Mutex
