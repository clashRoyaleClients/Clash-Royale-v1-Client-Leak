class LogicDataSlot
{
public:

    void __fastcall LogicDataSlot::LogicDataSlot(LogicDataSlot *this)
    {
      *(_QWORD *)this = 0;
      *((_DWORD *)this + 2) = 0;
    }

    void __fastcall LogicDataSlot::LogicDataSlot(LogicDataSlot *this, const AreaEffectObject *a2, int a3)
    {
      *(_QWORD *)this = a2;
      *((_DWORD *)this + 2) = a3;
    }

    __int64 __fastcall LogicDataSlot::destruct(__int64 this)
    {
      *(_QWORD *)this = 0;
      *(_DWORD *)(this + 8) = 0;
      return this;
    }

    __int64 __fastcall LogicDataSlot::encode(AreaEffectObject **this, #1226 *a2)
    {
      ByteStreamHelper::writeDataReference((int)a2, *this);
      return (*(__int64 (__fastcall **)(#1226 *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, *((unsigned int *)this + 2));
    }

    __int64 __fastcall LogicDataSlot::decode(LogicGameObject *this, #1225 *a2)
    {
      __int64 result; // x0
    
      *(_QWORD *)this = ByteStreamHelper::readDataReference(a2, a2);
      result = (*(__int64 (__fastcall **)(#1225 *))(*(_QWORD *)a2 + 152LL))(a2);
      *((_DWORD *)this + 2) = result;
      return result;
    }

}; // end class LogicDataSlot
