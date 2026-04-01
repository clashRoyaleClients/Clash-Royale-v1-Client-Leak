class xTimer
{
public:

    __int64 xTimer::init()
    {
      mach_timebase_info((mach_timebase_info_t)&gTimebaseInfo);
      return 1;
    }

    void xTimer::exit()
    {
      ;
    }

    // attributes: thunk
    uint64_t xTimer::getNativeTime(void)
    {
      return mach_absolute_time();
    }

    float __fastcall xTimer::getPassedTimeMs(__int64 a1, __int64 a2)
    {
      return (double)((unsigned __int64)(unsigned int)gTimebaseInfo * (a2 - a1) / (unsigned int)dword_1004F9894) / 1000000.0;
    }

    unsigned __int64 xTimer::getSecondsSince1970()
    {
      double v0; // d0
    
      -[NSDate timeIntervalSince1970](+[NSDate date](&OBJC_CLASS___NSDate, "date"), "timeIntervalSince1970");
      return (unsigned __int64)v0;
    }

}; // end class xTimer
