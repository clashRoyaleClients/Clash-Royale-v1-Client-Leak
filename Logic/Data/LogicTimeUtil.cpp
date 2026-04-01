class LogicTimeUtil
{
public:

    __int64 LogicTimeUtil::getCurrentTime()
    {
      uint64_t NativeTime; // x0
    
      NativeTime = xTimer::getNativeTime();
      return (unsigned int)(int)xTimer::getPassedTimeMs(0, NativeTime);
    }

    unsigned __int64 LogicTimeUtil::getMinutesSince1970()
    {
      return xTimer::getSecondsSince1970() / 0x3C;
    }

}; // end class LogicTimeUtil
