class GlobalID
{
public:

    __int64 __fastcall GlobalID::createGlobalID(SectorCommandMessage *this, int a2)
    {
      return (unsigned int)(a2 % 1000000 + 1000000 * (_DWORD)this);
    }

    __int64 __fastcall GlobalID::getClassID(SectorCommandMessage *this)
    {
      return (unsigned int)((int)this / 1000000);
    }

    __int64 __fastcall GlobalID::getInstanceID(SectorCommandMessage *this)
    {
      return (unsigned int)((int)this % 1000000);
    }

}; // end class GlobalID
