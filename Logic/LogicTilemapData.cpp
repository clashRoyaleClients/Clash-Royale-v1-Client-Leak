class LogicTilemapData
{
public:

    void __fastcall LogicTilemapData::LogicTilemapData(LogicTilemapData *this)
    {
      String::String((String *)this);
      String::String((String *)this + 1);
      *((_QWORD *)this + 6) = 0;
      *((_QWORD *)this + 8) = 0;
      *((_QWORD *)this + 10) = 0;
      *((_QWORD *)this + 12) = 0;
      *((_QWORD *)this + 13) = 0;
      *((_QWORD *)this + 11) = 0;
      *((_QWORD *)this + 9) = 0;
      *((_QWORD *)this + 7) = 0;
      String::operator=(this, "");
      String::operator=((char *)this + 24, "");
      *((_DWORD *)this + 38) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 14) = 0;
    }

    // attributes: thunk
    void __fastcall LogicTilemapData::LogicTilemapData(LogicTilemapData *this)
    {
      __ZN16LogicTilemapDataC2Ev(this);
    }

    __int64 __fastcall LogicTilemapData::destruct(BillingManager *this)
    {
      __int64 result; // x0
    
      *((_DWORD *)this + 23) = 0;
      *((_DWORD *)this + 15) = 0;
      *((_DWORD *)this + 19) = 0;
      *((_DWORD *)this + 27) = 0;
      String::operator=(this, "");
      result = String::operator=((char *)this + 24, "");
      *((_DWORD *)this + 38) = 0;
      *((_QWORD *)this + 17) = 0;
      *((_QWORD *)this + 18) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 14) = 0;
      return result;
    }

    __int64 __fastcall LogicTilemapData::setCSVNode(__int64 result, __int64 a2)
    {
      *(_QWORD *)(result + 112) = a2;
      return result;
    }

    void __fastcall LogicTilemapData::getFileName(BillingManager *this)
    {
      ;
    }

    __int64 __fastcall LogicTilemapData::getExportName(BillingManager *this)
    {
      return (__int64)this + 24;
    }

    __int64 __fastcall LogicTilemapData::loadRowList(int a1, #1222 *this, __int64 a3, __int64 a4)
    {
      #1224 *Table; // x21
      const char *v7; // x2
      __int64 RowCount; // x22
      __int64 result; // x0
      __int64 v10; // x23
      __int64 RowAt; // [xsp+8h] [xbp-38h] BYREF
    
      Table = (#1224 *)CSVNode::getTable(this);
      Debugger::doAssert((Debugger *)(Table != 0), (bool)"", v7);
      RowCount = CSVTable::getRowCount(Table);
      result = LogicArrayList<CSVRow *>::ensureCapacity(a3, RowCount);
      if ( (int)RowCount >= 1 )
      {
        v10 = 0;
        do
        {
          RowAt = CSVTable::getRowAt(Table, v10);
          result = CSVRow::getArraySizeAt(RowAt, a4);
          if ( (_DWORD)result )
            result = LogicArrayList<CSVRow *>::add(a3, &RowAt);
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (_DWORD)RowCount != (_DWORD)v10 );
      }
      return result;
    }

    __int64 __fastcall LogicTilemapData::getTileCost(BillingManager *this, __int64 a2, __int64 a3)
    {
      __int64 RowAt; // x0
    
      RowAt = CSVTable::getRowAt(*((_QWORD *)this + 17), a3);
      return CSVRow::getIntegerValueAt(RowAt, a2) & 3;
    }

    __int64 __fastcall LogicTilemapData::getMapWidth(#1224 **this)
    {
      return CSVTable::getColumnCount(*(this + 17));
    }

    __int64 __fastcall LogicTilemapData::getMapHeight(#1224 **this)
    {
      return CSVTable::getRowCount(*(this + 17));
    }

    bool __fastcall LogicTilemapData::canPlaceEgg(BillingManager *this, __int64 a2, __int64 a3)
    {
      __int64 RowAt; // x0
      __int64 v7; // x0
    
      RowAt = CSVTable::getRowAt(*((_QWORD *)this + 17), a3);
      if ( (CSVRow::getIntegerValueAt(RowAt, a2) & 0x20) != 0 )
        return 0;
      v7 = CSVTable::getRowAt(*((_QWORD *)this + 17), a3);
      return (CSVRow::getIntegerValueAt(v7, a2) & 0x10) == 0;
    }

    __int64 __fastcall LogicTilemapData::isWater(BillingManager *this, __int64 a2, __int64 a3)
    {
      __int64 RowAt; // x0
    
      RowAt = CSVTable::getRowAt(*((_QWORD *)this + 17), a3);
      return ((unsigned int)CSVRow::getIntegerValueAt(RowAt, a2) >> 5) & 1;
    }

    #1222 *__fastcall LogicTilemapData::createReferences(__int64 a1)
    {
      __int64 v2; // x20
      #1222 *NodeByName; // x20
      __int64 Table; // x0
      __int64 RowAt; // x20
      __int64 v6; // x20
      __int64 v7; // x20
      #1222 *v8; // x20
      const char *v9; // x2
      __int64 v10; // x20
      __int64 v11; // x20
      int NodeCount; // w21
      __int64 v13; // x22
      #1222 *NodeAt; // x26
      #1224 *v15; // x0
      int RowCount; // w27
      __int64 Name; // x28
      int v18; // w0
      int v19; // w27
      int v20; // w8
      int v21; // w26
      const String *v22; // x1
      __int64 v23; // x20
      #1222 *result; // x0
      int v25; // w27
      __int64 v26; // x21
      #1222 *v27; // x23
      int v28; // w24
      __int64 v29; // x26
      __int64 v30; // x22
      __int64 v31; // x0
      Font *v32; // x25
      int v33; // w22
      int v34; // w0
      int v35; // w23
      bool v36; // zf
      #1222 *v37; // [xsp+10h] [xbp-120h] BYREF
      String v38; // [xsp+18h] [xbp-118h] BYREF
      __siginfo v39; // [xsp+30h] [xbp-100h] BYREF
      String v40; // [xsp+98h] [xbp-98h] BYREF
      String v41; // [xsp+B0h] [xbp-80h] BYREF
      __int64 v42; // [xsp+CCh] [xbp-64h]
      int v43; // [xsp+D4h] [xbp-5Ch]
    
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 76) = 0;
      *(_DWORD *)(a1 + 92) = 0;
      *(_DWORD *)(a1 + 108) = 0;
      v2 = *(_QWORD *)(a1 + 112);
      String::String(&v41, "FileName");
      NodeByName = (#1222 *)CSVNode::getNodeByName(v2, &v41);
      String::~String();
      Table = CSVNode::getTable(NodeByName);
      RowAt = CSVTable::getRowAt(Table, 0);
      *(_QWORD *)(a1 + 144) = RowAt;
      String::String(&v40, "SC");
      CSVRow::getValue(RowAt, &v40, 0);
      String::operator=((String *)a1);
      String::~String();
      v6 = *(_QWORD *)(a1 + 144);
      String::String((String *)&v39.__pad[4], "ExportName");
      CSVRow::getValue(v6, &v39.__pad[4], 0);
      String::operator=((String *)(a1 + 24));
      String::~String();
      v7 = *(_QWORD *)(a1 + 112);
      String::String((String *)&v39.__pad[1], "Map");
      v8 = (#1222 *)CSVNode::getNodeByName(v7, &v39.__pad[1]);
      String::~String();
      Debugger::doAssert((Debugger *)(v8 != 0), (bool)"", v9);
      *(_QWORD *)(a1 + 136) = CSVNode::getTable(v8);
      v10 = *(_QWORD *)(a1 + 112);
      String::String((String *)&v39.si_value, "Background");
      *(_QWORD *)(a1 + 128) = CSVNode::getNodeByName(v10, &v39.si_value);
      String::~String();
      if ( *(_QWORD *)(a1 + 128) )
      {
        v11 = LogicDataTables::getTable(50);
        NodeCount = CSVNode::getNodeCount(*(#1222 **)(a1 + 128));
        if ( NodeCount >= 1 )
        {
          v13 = 0;
          do
          {
            NodeAt = (#1222 *)CSVNode::getNodeAt(*(_QWORD *)(a1 + 128), v13);
            v15 = (#1224 *)CSVNode::getTable(NodeAt);
            if ( v15 )
            {
              RowCount = CSVTable::getRowCount(v15);
              if ( RowCount )
              {
                Name = CSVNode::getName(NodeAt);
                v39.si_addr = (void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, Name);
                if ( v39.si_addr )
                {
                  v18 = LogicArrayList<LogicBackgroundDecoData const*>::ensureCapacity(
                          a1 + 96,
                          (unsigned int)(*(_DWORD *)(a1 + 108) + RowCount));
                  v19 = *(_DWORD *)(a1 + 92);
                  LogicTilemapData::loadRowList(v18, NodeAt, a1 + 80, 0);
                  v20 = *(_DWORD *)(a1 + 92);
                  v21 = v20 - v19;
                  if ( v20 > v19 )
                  {
                    do
                    {
                      LogicArrayList<LogicBackgroundDecoData const*>::add(a1 + 96, &v39.si_addr);
                      --v21;
                    }
                    while ( v21 );
                  }
                }
                else
                {
                  operator+(&v39, "Unable to find background deco ", Name);
                  Debugger::warning(&v39, v22);
                  String::~String();
                }
              }
            }
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (int)v13 < NodeCount );
        }
      }
      v23 = *(_QWORD *)(a1 + 112);
      String::String(&v38, "Objects");
      *(_QWORD *)(a1 + 120) = CSVNode::getNodeByName(v23, &v38);
      String::~String();
      *(_DWORD *)(a1 + 152) = 0;
      result = *(#1222 **)(a1 + 120);
      if ( result )
      {
        v42 = 0x2C0000002ALL;
        v43 = 6;
        result = (#1222 *)CSVNode::getNodeCount(result);
        v25 = (_DWORD)result - 1;
        if ( (int)result >= 1 )
        {
          v26 = 0;
          do
          {
            v27 = (#1222 *)CSVNode::getNodeAt(*(_QWORD *)(a1 + 120), v26);
            result = (#1222 *)CSVNode::getTable(v27);
            if ( result )
            {
              result = (#1222 *)CSVTable::getRowCount(result);
              v28 = (int)result;
              if ( (_DWORD)result )
              {
                v29 = CSVNode::getName(v27);
                v30 = 0;
                while ( 1 )
                {
                  v31 = LogicDataTables::getTable(*((_DWORD *)&v42 + v30));
                  result = (#1222 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 56LL))(v31, v29);
                  v32 = result;
                  v37 = result;
                  if ( result )
                    break;
                  if ( ++v30 > 2 )
                    goto LABEL_26;
                }
                LogicArrayList<LogicData const*>::ensureCapacity(a1 + 64, *(_DWORD *)(a1 + 76) + v28);
                v33 = *(_DWORD *)(a1 + 60);
                LogicTilemapData::loadRowList(v34, v27, a1 + 48, 0);
                v35 = *(_DWORD *)(a1 + 60) - v33;
                result = (#1222 *)(*(__int64 (__fastcall **)(Font *))(*(_QWORD *)v32 + 56LL))(v32);
                if ( (_DWORD)result )
                {
                  result = (#1222 *)LogicCharacterData::isPrincessTower(v32);
                  if ( (_DWORD)result )
                    *(_DWORD *)(a1 + 152) += v35;
                }
                if ( v35 >= 1 )
                {
                  do
                  {
                    result = (#1222 *)LogicArrayList<LogicData const*>::add(a1 + 64, (__int64 *)&v37);
                    --v35;
                  }
                  while ( v35 );
                }
              }
            }
    LABEL_26:
            v36 = (_DWORD)v26 == v25;
            v26 = (unsigned int)(v26 + 1);
          }
          while ( !v36 );
        }
      }
      return result;
    }

    __int64 __fastcall LogicTilemapData::getObjectCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 76);
    }

    __int64 __fastcall LogicTilemapData::getObjectData(__int64 a1, int a2)
    {
      return *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * a2);
    }

    __int64 __fastcall LogicTilemapData::getObjectRow(__int64 a1, int a2)
    {
      return *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * a2);
    }

    __int64 __fastcall LogicTilemapData::getTowerCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 152);
    }

    __int64 __fastcall LogicTilemapData::getBackgroundDecoCount(__int64 a1)
    {
      return *(unsigned int *)(a1 + 108);
    }

    __int64 __fastcall LogicTilemapData::getBackgroundDecoData(__int64 a1, int a2)
    {
      return *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * a2);
    }

    __int64 __fastcall LogicTilemapData::getBackgroundDecoRow(__int64 a1, int a2)
    {
      return *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2);
    }

}; // end class LogicTilemapData
