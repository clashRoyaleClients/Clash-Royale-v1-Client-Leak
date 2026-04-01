class ResourceDataLoader
{
public:

    __int64 __fastcall ResourceDataLoader::load(
            LogicJoinAllianceCommand *this,
            const char *a2,
            const char *a3,
            const int *a4)
    {
      return (*(__int64 (__fastcall **)(LogicJoinAllianceCommand *, const char *, const int *))(*(_QWORD *)this + 24LL))(
               this,
               a2,
               a4);
    }

    void __fastcall ResourceDataLoader::load(LogicJoinAllianceCommand *this, const char *a2, const int *a3)
    {
      const char *v5; // x1
      const String *v6; // x1
      String v7; // [xsp+8h] [xbp-48h] BYREF
      _BYTE v8[32]; // [xsp+20h] [xbp-30h] BYREF
    
      InStream::InStream((InStream *)v8, a2);
      if ( !v8[0] )
      {
        String::format((String *)"Can't find resource: %s", v5, a2);
        Debugger::error((Debugger *)&v7, v6);
      }
      (*(void (__fastcall **)(LogicJoinAllianceCommand *, _BYTE *))(*(_QWORD *)this + 32LL))(this, v8);
      InStream::~InStream((InStream *)v8);
    }

    void __fastcall __noreturn ResourceDataLoader::load(LogicJoinAllianceCommand *this, #1328 *a2)
    {
      Debugger::error((__siginfo *)"Should not ever be called!", (const char *)a2);
    }

}; // end class ResourceDataLoader
