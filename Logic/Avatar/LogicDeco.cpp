class LogicDeco
{
public:

    void __fastcall LogicDeco::LogicDeco(LogicDeco *this, const LogicDamageTypeData *a2)
    {
      _QWORD *v2; // x0
    
      LogicGameObject::LogicGameObject(this, a2);
      *v2 = off_100468210;
    }

    // attributes: thunk
    __int64 __fastcall LogicDeco::destruct(LoginMessage *this)
    {
      return LogicGameObject::destruct(this);
    }

    void LogicDeco::encode()
    {
      ;
    }

    void LogicDeco::decode()
    {
      ;
    }

    __int64 __fastcall LogicDeco::canBeTargeted(LoginMessage *this)
    {
      return 0;
    }

    // attributes: thunk
    void __fastcall LogicDeco::tick(GameMode *this)
    {
      LogicGameObject::tick(this);
    }

    __int64 __fastcall LogicDeco::shouldDestruct(LoginMessage *this)
    {
      return 0;
    }

    // attributes: thunk
    __int64 __fastcall LogicDeco::getDecoData(LoginMessage *this)
    {
      return LogicGameObject::getData(this);
    }

    __int64 __fastcall LogicDeco::getType(LoginMessage *this)
    {
      return 0;
    }

    __int64 __fastcall LogicDeco::getRadius(LoginMessage *this)
    {
      __int64 Data; // x0
    
      Data = LogicGameObject::getData(this);
      return LogicDecoData::getCollisionRadius(Data);
    }

    __int64 __fastcall LogicDeco::getDeathEffect(LoginMessage *this)
    {
      return 0;
    }

    void __fastcall LogicDeco::~LogicDeco(LoginMessage *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicDeco::~LogicDeco(LoginMessage *this)
    {
      operator delete(this);
    }

}; // end class LogicDeco
