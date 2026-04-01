class CSVTable
{
public:

    void __fastcall CSVTable::CSVTable(CSVTable *this, StartMissionMessage *a2, int a3, int a4)
    {
      char *v8; // x20
      char *v9; // x21
      __int64 v10; // x25
    
      *((_QWORD *)this + 2) = 0;
      v8 = (char *)this + 16;
      *((_QWORD *)this + 4) = 0;
      v9 = (char *)this + 32;
      *((_DWORD *)this + 14) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 6) = 0;
      if ( a3 <= 0 )
        v10 = 4;
      else
        v10 = (unsigned int)a3;
      *((_QWORD *)this + 3) = 0;
      *(_QWORD *)this = 0;
      *((_QWORD *)this + 1) = 0;
      LogicArrayList<String>::ensureCapacity((String **)this, v10);
      *((_DWORD *)this + 14) = a4;
      LogicArrayList<CSVRow *>::ensureCapacity((__int64)v9, a4);
      if ( (a3 & 0x80000000) == 0 )
        LogicArrayList<CSVColumn *>::ensureCapacity(v8, v10);
      *((_QWORD *)this + 6) = a2;
    }

    void __fastcall CSVTable::CSVTable(CSVTable *this, StartMissionMessage *a2, int a3, int a4)
    {
      CSVTable::CSVTable(this, a2, a3, a4);
    }

    // attributes: thunk
    __int64 __fastcall CSVTable::addColumn(__int64 this, const String *a2)
    {
      return LogicArrayList<String>::add(this);
    }

    __int64 __fastcall CSVTable::addAndConvertValue(UdpConnectionInfoMessage *this, String *a2, __int64 a3)
    {
      int v3; // w21
      __int64 v6; // x8
      const String *v7; // x1
      _guard_variable_for_ChestInfoPopup *v8; // x19
      int Type; // w0
      const String *v10; // x1
      char v11; // w1
      int v13; // w0
      int v14; // w8
      internal_t *p_internal; // x22
      __int64 ColumnName; // x0
      _QWORD *v17; // x21
      __int64 FileName; // x0
      _QWORD *v19; // x8
      const String *v20; // x1
      String v21; // [xsp+20h] [xbp-50h] BYREF
      String v22; // [xsp+38h] [xbp-38h] BYREF
    
      v3 = a3;
      v6 = *((unsigned int *)this + 7);
      if ( (a3 & 0x80000000) != 0 || (int)v6 <= (int)a3 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v22, a3, v6);
        Debugger::error((Debugger *)&v22, v7);
      }
      v8 = *(_guard_variable_for_ChestInfoPopup **)(*((_QWORD *)this + 2) + 8LL * (int)a3);
      if ( !a2->m_length )
        return CSVColumn::addEmptyValue(*(_guard_variable_for_ChestInfoPopup **)(*((_QWORD *)this + 2) + 8LL * (int)a3));
      Type = CSVColumn::getType(*(_guard_variable_for_ChestInfoPopup **)(*((_QWORD *)this + 2) + 8LL * (int)a3));
      if ( Type == 2 )
      {
        if ( String::equalsIgnoreCase((__int64)a2, "true") )
        {
          v11 = 1;
        }
        else
        {
          if ( !String::equalsIgnoreCase((__int64)a2, "false") )
          {
            v14 = a2->m_bytes + 1;
            p_internal = &a2->internal;
            if ( v14 > 8 )
              p_internal = (internal_t *)p_internal->pHeap;
            ColumnName = CSVTable::getColumnName(this, v3);
            v17 = (_QWORD *)(ColumnName + 8);
            if ( *(_DWORD *)(ColumnName + 4) + 1 > 8 )
              v17 = (_QWORD *)*v17;
            FileName = CSVNode::getFileName(*((StartMissionMessage **)this + 6));
            v19 = (_QWORD *)(FileName + 8);
            if ( *(_DWORD *)(FileName + 4) + 1 > 8 )
              v19 = (_QWORD *)*v19;
            String::format(
              (String *)"CSVTable::addAndConvertValue invalid value '%s' in Boolean column '%s', %s",
              (__int64)&v21,
              p_internal,
              v17,
              v19);
            Debugger::warning((__siginfo *)&v21, v20);
            String::~String((__int64)&v21);
          }
          v11 = 0;
        }
        return CSVColumn::addBooleanValue(v8, v11);
      }
      else if ( Type == 1 )
      {
        v13 = LogicStringUtil::convertToInt((LogicStringUtil *)a2, v10);
        return CSVColumn::addIntValue(v8, v13);
      }
      else
      {
        return CSVColumn::addStringValue(v8, a2);
      }
    }

    __int64 __fastcall CSVTable::getColumnName(UdpConnectionInfoMessage *this, __int64 a2)
    {
      __int64 v2; // x8
      const String *v3; // x1
      String v5; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *((unsigned int *)this + 3);
      if ( (a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v5, a2, v2);
        Debugger::error((Debugger *)&v5, v3);
      }
      return *(_QWORD *)this + 24LL * (int)a2;
    }

    __int64 __fastcall CSVTable::getFileName(StartMissionMessage **this)
    {
      return CSVNode::getFileName(*(this + 6));
    }

    __int64 __fastcall CSVTable::addColumnType(UdpConnectionInfoMessage *this, const char *a2)
    {
      CSVColumn *v4; // x20
      CSVColumn *v6; // [xsp+8h] [xbp-28h] BYREF
    
      v4 = (CSVColumn *)operator new(56);
      CSVColumn::CSVColumn(v4, a2, *((unsigned int *)this + 14));
      v6 = v4;
      return LogicArrayList<CSVColumn *>::add((char *)this + 16, &v6);
    }

    __int64 __fastcall CSVTable::getColumnCount(UdpConnectionInfoMessage *this)
    {
      return *((unsigned int *)this + 3);
    }

    void __fastcall CSVTable::destruct(UdpConnectionInfoMessage *this)
    {
      __int64 v2; // x8
      __int64 i; // x22
      const String *v5; // x1
      __int64 v6; // x8
      __int64 *v7; // x21
      __int64 v8; // x0
      __int64 v9; // x0
      __int64 v10; // x8
      _QWORD *v11; // x22
      __int64 j; // x23
      const String *v14; // x1
      __int64 v15; // x8
      void *v16; // x21
      String v17; // [xsp+10h] [xbp-60h] BYREF
      String v18; // [xsp+28h] [xbp-48h] BYREF
    
      v2 = *((unsigned int *)this + 7);
      if ( (int)v2 >= 1 )
      {
        for ( i = (int)v2 - 1LL; ; --i )
        {
          if ( (int)i + 1 < 1 || (int)v2 <= i )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v18, i, v2);
            Debugger::error((Debugger *)&v18, v5);
          }
          v6 = *((_QWORD *)this + 2);
          v7 = *(__int64 **)(v6 + 8 * i);
          if ( v7 )
          {
            CSVColumn::destruct(*(_DWORD **)(v6 + 8 * i));
            v8 = v7[5];
            if ( v8 )
              operator delete[](v8);
            v7[5] = 0;
            v7[6] = 0;
            v9 = v7[3];
            if ( v9 )
              operator delete[](v9);
            v7[3] = 0;
            v7[4] = 0;
            LogicArrayList<String>::~LogicArrayList(v7 + 1);
            operator delete(v7);
          }
          if ( i + 1 < 2 )
            break;
          v2 = *((unsigned int *)this + 7);
        }
      }
      v11 = (_QWORD *)((char *)this + 44);
      v10 = *((unsigned int *)this + 11);
      if ( (int)v10 >= 1 )
      {
        for ( j = (int)v10 - 1LL; ; --j )
        {
          if ( (int)j + 1 < 1 || (int)v10 <= j )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v17, j, v10);
            Debugger::error((Debugger *)&v17, v14);
          }
          v15 = *((_QWORD *)this + 4);
          v16 = *(void **)(v15 + 8 * j);
          if ( v16 )
          {
            CSVRow::destruct(*(_QWORD *)(v15 + 8 * j));
            operator delete(v16);
          }
          if ( j + 1 < 2 )
            break;
          v10 = *(unsigned int *)v11;
        }
      }
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 7) = 0;
      *v11 = 0;
      *(_QWORD *)((char *)this + 52) = 0;
    }

    void *__fastcall CSVTable::getValueAt(UdpConnectionInfoMessage *this, __int64 a2, __int64 a3)
    {
      __int64 v3; // x8
      const String *v4; // x1
      String v6; // [xsp+18h] [xbp-38h] BYREF
    
      if ( (a2 & 0x80000000) != 0 )
        return &EMPTY_STRING;
      v3 = *((unsigned int *)this + 7);
      if ( (int)v3 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v6, a2, v3);
        Debugger::error((Debugger *)&v6, v4);
      }
      return (void *)CSVColumn::getStringValue(
                       *(_guard_variable_for_ChestInfoPopup **)(*((_QWORD *)this + 2) + 8LL * (int)a2),
                       a3);
    }

    void *__fastcall CSVTable::getValue(UdpConnectionInfoMessage *this, const String *a2, __int64 a3)
    {
      __int64 v5; // x1
    
      v5 = LogicArrayList<String>::indexOfString(this, a2);
      return CSVTable::getValueAt(this, v5, a3);
    }

    // attributes: thunk
    __int64 __fastcall CSVTable::getColumnIndexByName(UdpConnectionInfoMessage *this, const String *a2)
    {
      return LogicArrayList<String>::indexOfString(this, a2);
    }

    __int64 __fastcall CSVTable::getIntegerValueAt(__int64 a1, __int64 a2, __int64 a3)
    {
      __int64 v3; // x8
      const String *v4; // x1
      String v6; // [xsp+18h] [xbp-38h] BYREF
    
      if ( (a2 & 0x80000000) != 0 )
        return 0;
      v3 = *(unsigned int *)(a1 + 28);
      if ( (int)v3 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v6, a2, v3);
        Debugger::error((Debugger *)&v6, v4);
      }
      return CSVColumn::getIntValue(*(_guard_variable_for_ChestInfoPopup **)(*(_QWORD *)(a1 + 16) + 8LL * (int)a2), a3);
    }

    __int64 __fastcall CSVTable::getIntegerValue(__int64 a1, __int64 a2, __int64 a3)
    {
      __int64 v5; // x1
    
      v5 = LogicArrayList<String>::indexOfString(a1, a2);
      return CSVTable::getIntegerValueAt(a1, v5, a3);
    }

    bool __fastcall CSVTable::getBooleanValueAt(__int64 a1, __int64 a2, __int64 a3)
    {
      __int64 v3; // x8
      const String *v4; // x1
      String v6; // [xsp+18h] [xbp-38h] BYREF
    
      if ( (a2 & 0x80000000) != 0 )
        return 0;
      v3 = *(unsigned int *)(a1 + 28);
      if ( (int)v3 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v6, a2, v3);
        Debugger::error((Debugger *)&v6, v4);
      }
      return CSVColumn::getBooleanValue(*(_guard_variable_for_ChestInfoPopup **)(*(_QWORD *)(a1 + 16) + 8LL * (int)a2), a3);
    }

    bool __fastcall CSVTable::getBooleanValue(__int64 a1, __int64 a2, __int64 a3)
    {
      __int64 v5; // x1
    
      v5 = LogicArrayList<String>::indexOfString(a1, a2);
      return CSVTable::getBooleanValueAt(a1, v5, a3);
    }

    __int64 __fastcall CSVTable::getRowAt(__int64 a1, __int64 a2)
    {
      __int64 v2; // x8
      const String *v3; // x1
      String v5; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *(unsigned int *)(a1 + 44);
      if ( (a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v5, a2, v2);
        Debugger::error((Debugger *)&v5, v3);
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (int)a2);
    }

    void __fastcall CSVTable::addRow(UdpConnectionInfoMessage *this, EditClanPopup *a2)
    {
      EditClanPopup *v2; // [xsp+8h] [xbp-8h] BYREF
    
      v2 = a2;
      LogicArrayList<CSVRow *>::add((__int64)this + 32, (__int64 *)&v2);
    }

    __int64 __fastcall CSVTable::getColumnRowCount(_guard_variable_for_ChestInfoPopup ***this)
    {
      __int64 v1; // x8
      const String *v2; // x1
      String v4; // [xsp+18h] [xbp-28h] BYREF
    
      v1 = *((unsigned int *)this + 7);
      if ( !(_DWORD)v1 )
        return 0;
      if ( (int)v1 <= 0 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v4, 0, v1);
        Debugger::error((Debugger *)&v4, v2);
      }
      return CSVColumn::getSize(**(this + 2));
    }

    __int64 __fastcall CSVTable::getColumnType(UdpConnectionInfoMessage *this, __int64 a2)
    {
      __int64 v2; // x8
      const String *v3; // x1
      String v5; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *((unsigned int *)this + 7);
      if ( (a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v5, a2, v2);
        Debugger::error((Debugger *)&v5, v3);
      }
      return CSVColumn::getType(*(_guard_variable_for_ChestInfoPopup **)(*((_QWORD *)this + 2) + 8LL * (int)a2));
    }

    __int64 __fastcall CSVTable::getRowCount(UdpConnectionInfoMessage *this)
    {
      return *((unsigned int *)this + 11);
    }

    __int64 __fastcall CSVTable::getParentNode(UdpConnectionInfoMessage *this)
    {
      return *((_QWORD *)this + 6);
    }

    __int64 __fastcall CSVTable::getArraySizeAt(UdpConnectionInfoMessage *this, const EditClanPopup *a2, __int64 a3)
    {
      __int64 v4; // x8
      __int64 v5; // x22
      __int64 v6; // x9
      const String *v7; // x1
      _guard_variable_for_ChestInfoPopup *v8; // x21
      const String *v9; // x1
      int Size; // w0
      int v12; // w20
      int RowOffset; // w0
      String v14; // [xsp+10h] [xbp-50h] BYREF
      String v15; // [xsp+28h] [xbp-38h] BYREF
    
      v4 = *((unsigned int *)this + 11);
      if ( (int)v4 < 1 )
        return 0;
      v5 = 0;
      while ( *(const EditClanPopup **)(*((_QWORD *)this + 4) + 8 * v5) != a2 )
      {
        if ( ++v5 >= (int)v4 )
          return 0;
      }
      if ( (_DWORD)v5 == -1 )
        return 0;
      v6 = *((unsigned int *)this + 7);
      if ( (a3 & 0x80000000) != 0 || (int)v6 <= (int)a3 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v15, a3, v6);
        Debugger::error((Debugger *)&v15, v7);
      }
      v8 = *(_guard_variable_for_ChestInfoPopup **)(*((_QWORD *)this + 2) + 8LL * (int)a3);
      if ( (int)v5 + 1 >= (int)v4 )
      {
        Size = CSVColumn::getSize(*(_guard_variable_for_ChestInfoPopup **)(*((_QWORD *)this + 2) + 8LL * (int)a3));
      }
      else
      {
        if ( (int)v5 <= -2 )
        {
          String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v14, v5 + 1, v4);
          Debugger::error((Debugger *)&v14, v9);
        }
        Size = CSVRow::getRowOffset(*(_QWORD *)(*((_QWORD *)this + 4) + 8 * v5 + 8));
      }
      v12 = Size;
      RowOffset = CSVRow::getRowOffset((__int64)a2);
      return CSVColumn::getArraySize(v8, RowOffset, v12);
    }

    __int64 __fastcall CSVTable::setStringValueAt(__int64 a1, const String *a2, __int64 a3, __int64 a4)
    {
      __int64 v4; // x8
      const String *v5; // x1
      _BYTE v7[24]; // [xsp+18h] [xbp-38h] BYREF
    
      v4 = *(unsigned int *)(a1 + 28);
      if ( (a3 & 0x80000000) != 0 || (int)v4 <= (int)a3 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)v7, a3, v4);
        Debugger::error((Debugger *)v7, v5);
      }
      return CSVColumn::setStringValue(
               *(_guard_variable_for_ChestInfoPopup **)(*(_QWORD *)(a1 + 16) + 8LL * (int)a3),
               a2,
               a4);
    }

    EditClanPopup *__fastcall CSVTable::createRow(int *a1)
    {
      EditClanPopup *v2; // x19
      const char *v3; // x1
    
      v2 = (EditClanPopup *)operator new(16);
      CSVRow::CSVRow(v2, (UdpConnectionInfoMessage *)a1);
      if ( a1[11] >= 2 && !(unsigned int)CSVRow::getRowOffset((__int64)v2) )
        Debugger::error((__siginfo *)"Invalid pRow offset", v3);
      return v2;
    }

    __int64 __fastcall CSVTable::columnNamesLoaded(__int64 a1)
    {
      return LogicArrayList<CSVColumn *>::ensureCapacity(a1 + 16, *(unsigned int *)(a1 + 12));
    }

    void __fastcall CSVTable::validateColumnTypes(__int64 a1)
    {
      __int64 v1; // x19
      __int64 v2; // x20
      __int64 FileName; // x0
      _QWORD *v4; // x8
      const String *v5; // x1
      _BYTE v6[24]; // [xsp+18h] [xbp-28h] BYREF
    
      v1 = *(unsigned int *)(a1 + 12);
      v2 = *(unsigned int *)(a1 + 28);
      if ( (_DWORD)v1 != (_DWORD)v2 )
      {
        FileName = CSVNode::getFileName(*(StartMissionMessage **)(a1 + 48));
        v4 = (_QWORD *)(FileName + 8);
        if ( *(_DWORD *)(FileName + 4) + 1 > 8 )
          v4 = (_QWORD *)*v4;
        String::format((String *)"Column name count %d, column type count %d, file %s", (__int64)v6, v1, v2, v4);
        Debugger::warning((__siginfo *)v6, v5);
        String::~String((__int64)v6);
      }
    }

    __int64 __fastcall CSVTable::getColumnTypeCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 28);
    }

    __int64 __fastcall CSVTable::getCSVColumn(__int64 a1, __int64 a2)
    {
      __int64 v2; // x8
      const String *v3; // x1
      _BYTE v5[24]; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *(unsigned int *)(a1 + 28);
      if ( (a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)v5, a2, v2);
        Debugger::error((Debugger *)v5, v3);
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * (int)a2);
    }

}; // end class CSVTable
