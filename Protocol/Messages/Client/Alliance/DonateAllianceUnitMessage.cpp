class DonateAllianceUnitMessage
{
public:

    _QWORD *__fastcall DonateAllianceUnitMessage::DonateAllianceUnitMessage(__int64 a1)
    {
      _QWORD *result; // x0
    
      result = (_QWORD *)PiranhaMessage::PiranhaMessage(a1, 0);
      *result = off_10046FBD8;
      result[9] = 0;
      result[10] = 0;
      return result;
    }

    __int64 __fastcall DonateAllianceUnitMessage::encode(__int64 a1)
    {
      PiranhaMessage::encode((#1242 *)a1);
      ByteStreamHelper::writeDataReference(a1 + 16, *(AreaEffectObject **)(a1 + 72));
      return ChecksumEncoder::writeLong(a1 + 16, *(_QWORD *)(a1 + 80));
    }

    __int64 __fastcall DonateAllianceUnitMessage::decode(__int64 a1)
    {
      __int64 result; // x0
    
      PiranhaMessage::decode((#1242 *)a1);
      *(_QWORD *)(a1 + 72) = ByteStreamHelper::readDataReference(a1 + 16, 7);
      result = ByteStream::readLong((ByteStream *)(a1 + 16));
      *(_QWORD *)(a1 + 80) = result;
      return result;
    }

    __int64 DonateAllianceUnitMessage::getMessageType()
    {
      return 14310;
    }

    __int64 __fastcall DonateAllianceUnitMessage::setAllianceSpellData(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 72) = a2;
      return result;
    }

    __int64 DonateAllianceUnitMessage::getServiceNodeType()
    {
      return 11;
    }

    void __fastcall DonateAllianceUnitMessage::destruct(__int64 a1)
    {
      void *v2; // x0
    
      PiranhaMessage::destruct((#1242 *)a1);
      v2 = *(void **)(a1 + 80);
      if ( v2 )
        operator delete(v2);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = 0;
    }

    __int64 __fastcall DonateAllianceUnitMessage::setStreamId(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 80) = a2;
      return result;
    }

    void __fastcall DonateAllianceUnitMessage::~DonateAllianceUnitMessage(InfoPopup *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall DonateAllianceUnitMessage::~DonateAllianceUnitMessage(InfoPopup *this)
    {
      operator delete(this);
    }

}; // end class DonateAllianceUnitMessage
