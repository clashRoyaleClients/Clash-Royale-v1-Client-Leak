class CSVColumn
{
public:

    void __fastcall CSVColumn::CSVColumn(CSVColumn *this, const char *a2, __int64 a3)
    {
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 2) = 0;
      *(_DWORD *)this = (_DWORD)a2;
      if ( (_DWORD)a2 )
      {
        if ( (_DWORD)a2 == 1 )
        {
          LogicArrayList<int>::ensureCapacity((__int64)this + 24, a3);
        }
        else
        {
          if ( (_DWORD)a2 != 2 )
            Debugger::error((__siginfo *)"Invalid CSVColumn type", a2);
          LogicArrayList<char>::ensureCapacity((char *)this + 40, a3);
        }
      }
      else
      {
        LogicArrayList<String>::ensureCapacity((String **)this + 1, a3);
      }
    }

    void __fastcall CSVColumn::CSVColumn(CSVColumn *this, const char *a2, __int64 a3)
    {
      CSVColumn::CSVColumn(this, a2, a3);
    }

    _DWORD *__fastcall CSVColumn::destruct(_DWORD *this)
    {
      *(this + 5) = 0;
      *(this + 9) = 0;
      *(this + 13) = 0;
      *this = -1;
      return this;
    }

    __int64 __fastcall CSVColumn::addIntValue(_guard_variable_for_ChestInfoPopup *this, int a2)
    {
      int v3; // [xsp+Ch] [xbp-4h] BYREF
    
      v3 = a2;
      return LogicArrayList<int>::add((__int64)this + 24, &v3);
    }

    __int64 __fastcall CSVColumn::getIntValue(_guard_variable_for_ChestInfoPopup *this, __int64 a2)
    {
      __int64 v2; // x8
      const String *v3; // x1
      unsigned int v4; // w8
      String v6; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *((unsigned int *)this + 9);
      if ( (a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v6, a2, v2);
        Debugger::error((Debugger *)&v6, v3);
      }
      v4 = *(_DWORD *)(*((_QWORD *)this + 3) + 4LL * (int)a2);
      if ( v4 == 0x7FFFFFFF )
        return 0;
      else
        return v4;
    }

    __int64 __fastcall CSVColumn::addBooleanValue(_guard_variable_for_ChestInfoPopup *this, char a2)
    {
      char v3; // [xsp+Fh] [xbp-1h] BYREF
    
      v3 = a2;
      return LogicArrayList<char>::add((char *)this + 40, &v3);
    }

    bool __fastcall CSVColumn::getBooleanValue(_guard_variable_for_ChestInfoPopup *this, __int64 a2)
    {
      __int64 v2; // x8
      const String *v3; // x1
      String v5; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *((unsigned int *)this + 13);
      if ( (a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v5, a2, v2);
        Debugger::error((Debugger *)&v5, v3);
      }
      return *(_BYTE *)(*((_QWORD *)this + 5) + (int)a2) == 1;
    }

    __int64 __fastcall CSVColumn::addStringValue(_guard_variable_for_ChestInfoPopup *this, const String *a2)
    {
      return LogicArrayList<String>::add((__int64)this + 8);
    }

    __int64 __fastcall CSVColumn::getStringValue(_guard_variable_for_ChestInfoPopup *this, __int64 a2)
    {
      __int64 v2; // x8
      const String *v3; // x1
      String v5; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *((unsigned int *)this + 5);
      if ( (a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v5, a2, v2);
        Debugger::error((Debugger *)&v5, v3);
      }
      return *((_QWORD *)this + 1) + 24LL * (int)a2;
    }

    __int64 __fastcall CSVColumn::getSize(_guard_variable_for_ChestInfoPopup *this)
    {
      char *v1; // x10
      unsigned int *v2; // x8
    
      v1 = (char *)this + 20;
      if ( *(_DWORD *)this == 1 )
        v1 = (char *)this + 36;
      if ( *(_DWORD *)this == 2 )
        v2 = (unsigned int *)((char *)this + 52);
      else
        v2 = (unsigned int *)v1;
      return *v2;
    }

    __int64 __fastcall CSVColumn::getType(_guard_variable_for_ChestInfoPopup *this)
    {
      return *(unsigned int *)this;
    }

    __int64 __fastcall CSVColumn::getArraySize(_guard_variable_for_ChestInfoPopup *this, int a2, int a3)
    {
      __int64 v3; // x22
      __int64 v4; // x24
      __int64 v5; // x8
      bool v6; // cc
      const String *v7; // x1
      int v8; // w8
      __int64 v9; // x24
      __int64 v10; // x8
      const String *v11; // x1
      int v12; // w8
      __int64 v13; // x24
      __int64 v14; // x8
      __int64 v15; // x9
      const String *v16; // x1
      int v17; // w8
      String v19; // [xsp+18h] [xbp-88h] BYREF
      String v20; // [xsp+30h] [xbp-70h] BYREF
      String v21; // [xsp+48h] [xbp-58h] BYREF
    
      v3 = a3;
      if ( *(_DWORD *)this == 1 )
      {
        v4 = a3 - 1;
        while ( v3 > a2 )
        {
          v5 = *((unsigned int *)this + 9);
          v6 = v3-- < 1;
          if ( v6 || (int)v5 <= (int)v4 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v19, v4, v5);
            Debugger::error((Debugger *)&v19, v7);
          }
          v8 = *(_DWORD *)(*((_QWORD *)this + 3) + 4 * v4--);
          if ( v8 != 0x7FFFFFFF )
            return (unsigned int)(v3 - a2 + 1);
        }
      }
      else if ( *(_DWORD *)this == 2 )
      {
        v9 = a3 - 1;
        while ( v3 > a2 )
        {
          v10 = *((unsigned int *)this + 13);
          v6 = v3-- < 1;
          if ( v6 || (int)v10 <= (int)v9 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v20, v9, v10);
            Debugger::error((Debugger *)&v20, v11);
          }
          v12 = *(unsigned __int8 *)(*((_QWORD *)this + 5) + v9--);
          if ( v12 != 2 )
            return (unsigned int)(v3 - a2 + 1);
        }
      }
      else
      {
        v13 = 24LL * (a3 - 1);
        while ( v3 > a2 )
        {
          v14 = v3 - 1;
          v15 = *((unsigned int *)this + 5);
          v6 = v3-- < 1;
          if ( v6 || (int)v15 <= (int)v14 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v21, v14, v15);
            Debugger::error((Debugger *)&v21, v16);
          }
          v17 = *(_DWORD *)(*((_QWORD *)this + 1) + v13);
          v13 -= 24;
          if ( v17 )
            return (unsigned int)(v3 - a2 + 1);
        }
      }
      return 0;
    }

    __int64 __fastcall CSVColumn::setStringValue(_guard_variable_for_ChestInfoPopup *this, const String *a2, __int64 a3)
    {
      char *v4; // x0
    
      v4 = (char *)this + 8;
      if ( *((_DWORD *)this + 5) == (_DWORD)a3 )
        return LogicArrayList<String>::add((__int64)v4);
      else
        return LogicArrayList<String>::set(v4, a3, a2);
    }

    __int64 __fastcall CSVColumn::addEmptyValue(_guard_variable_for_ChestInfoPopup *this)
    {
      char v2; // [xsp+Bh] [xbp-5h] BYREF
      int v3; // [xsp+Ch] [xbp-4h] BYREF
    
      if ( *(_DWORD *)this == 2 )
      {
        v2 = 2;
        return LogicArrayList<char>::add((char *)this + 40, &v2);
      }
      else if ( *(_DWORD *)this == 1 )
      {
        v3 = 0x7FFFFFFF;
        return LogicArrayList<int>::add((__int64)this + 24, &v3);
      }
      else
      {
        return LogicArrayList<String>::add((__int64)this + 8);
      }
    }

}; // end class CSVColumn
