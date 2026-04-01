class Titan
{
public:

    __int64 __fastcall Titan::installEvent(InstallEvent *a1)
    {
      const String *v2; // x1
    
      if ( (Application::existsKeyValue((__int64)&INSTALL_EVENT_KEY) & 1) != 0 )
        return 0;
      InstallEvent::send(a1, v2);
      return 1;
    }

}; // end class Titan
