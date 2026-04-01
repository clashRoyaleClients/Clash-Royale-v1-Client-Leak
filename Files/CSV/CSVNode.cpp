class CSVNode
{
public:

    CSVNode *__fastcall CSVNode::CSVNode(CSVNode *a1)
    {
      *((_QWORD *)a1 + 1) = 0;
      *((_QWORD *)a1 + 2) = 0;
      String::String((__int64)a1 + 32);
      String::String((__int64)a1 + 56);
      String::String((__int64)a1 + 88);
      CSVNode::initializeMembers(a1);
      *((_QWORD *)a1 + 3) = a1;
      return a1;
    }

    __int64 __fastcall CSVNode::CSVNode(__int64 a1, __int64 a2, String *a3)
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      String::String(a1 + 32);
      String::String(a1 + 56);
      String::String(a1 + 88);
      CSVNode::initializeMembers((CSVNode *)a1);
      *(_QWORD *)(a1 + 24) = a1;
      String::operator=((String *)(a1 + 56), a3);
      if ( a2 )
        CSVNode::load(a1, a2, 0, 0);
      return a1;
    }

    __int64 __fastcall CSVNode::load(__int64 a1, __int64 a2, __int64 a3, int a4)
    {
      int v8; // w24
      __int64 v9; // x8
      String *v10; // x1
      int v11; // w27
      int v12; // w25
      __int64 v13; // x8
      const String *v14; // x1
      int v15; // w23
      __int64 v16; // x28
      String v18; // [xsp+20h] [xbp-A0h] BYREF
      String v19; // [xsp+38h] [xbp-88h] BYREF
      __int64 v20; // [xsp+50h] [xbp-70h] BYREF
      String v21; // [xsp+58h] [xbp-68h] BYREF
    
      v8 = *(_DWORD *)(a2 + 12);
      String::String((__int64)&v19);
      v9 = *(_QWORD *)(a1 + 24);
      v10 = (String *)(v9 + 88);
      if ( v8 <= (int)a3 )
      {
    LABEL_19:
        String::operator=(v10, &NULL_STRING);
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 112LL) = -1;
        *(_DWORD *)(a1 + 116) = -1;
        a3 = 0x7FFFFFFF;
        goto LABEL_20;
      }
      v11 = 0x7FFFFFFF;
      v12 = -1;
      while ( 1 )
      {
        if ( *(_DWORD *)(v9 + 88) )
        {
          String::operator=(&v19, v10);
          String::operator=((String *)(*(_QWORD *)(a1 + 24) + 88LL), &NULL_STRING);
        }
        else
        {
          v13 = *(unsigned int *)(a2 + 12);
          if ( (a3 & 0x80000000) != 0 || (int)v13 <= (int)a3 )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v21, a3, v13);
            Debugger::error((Debugger *)&v21, v14);
          }
          CSVNode::parseLine(
            (__int64 *)&v18.m_length,
            (StartMissionMessage *)a1,
            (const String *)(*(_QWORD *)a2 + 24LL * (int)a3),
            v12,
            v11,
            v8 - a3);
          String::operator=(&v19, &v18);
          String::~String((__int64)&v18);
          if ( v12 == -1 )
          {
            if ( *(_QWORD *)a1 )
            {
              v12 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 112LL);
              v11 = v12 + CSVTable::getColumnCount(*(UdpConnectionInfoMessage **)a1) - 1;
            }
            else
            {
              v12 = -1;
            }
          }
        }
        if ( v19.m_length )
          break;
        a3 = (unsigned int)(a3 + 1);
        v9 = *(_QWORD *)(a1 + 24);
    LABEL_18:
        v10 = (String *)(v9 + 88);
        if ( v8 <= (int)a3 )
          goto LABEL_19;
      }
      v9 = *(_QWORD *)(a1 + 24);
      v15 = *(_DWORD *)(v9 + 112);
      if ( v15 >= a4 )
      {
        if ( *(_QWORD *)a1 )
        {
          a3 = (unsigned int)(a3 + 1);
        }
        else
        {
          v16 = operator new(128);
          CSVNode::CSVNode((CSVNode *)v16);
          *(_QWORD *)(v16 + 24) = *(_QWORD *)(a1 + 24);
          String::operator=((String *)(v16 + 32), &v19);
          a3 = CSVNode::load(v16, a2, (unsigned int)(a3 + 1), (unsigned int)(v15 + 1));
          v20 = v16;
          LogicArrayList<CSVNode *>::add(a1 + 8, &v20);
          v9 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)(v16 + 24) = v9;
          *(_QWORD *)(v16 + 80) = a1;
        }
        goto LABEL_18;
      }
      if ( *(_BYTE *)(v9 + 120) )
      {
        *(_BYTE *)(v9 + 120) = 0;
        String::operator=((String *)(v9 + 88), &NULL_STRING);
      }
      else
      {
        String::operator=((String *)(v9 + 88), &v19);
      }
    LABEL_20:
      String::~String((__int64)&v19);
      return a3;
    }

    __int64 __fastcall CSVNode::CSVNode(__int64 a1, __int64 a2, String *a3)
    {
      CSVNode::CSVNode(a1, a2, a3);
      return a1;
    }

    __int64 __fastcall CSVNode::destruct(UdpConnectionInfoMessage **this)
    {
      UdpConnectionInfoMessage *v2; // x0
      __int64 *v3; // x20
      __int64 v4; // x0
      __int64 v5; // x0
      __int64 v6; // x8
      __int64 i; // x22
      const String *v9; // x1
      __int64 v10; // x8
      _QWORD *v11; // x21
      __int64 v12; // x0
      String v14; // [xsp+18h] [xbp-48h] BYREF
    
      v2 = *this;
      if ( v2 )
      {
        CSVTable::destruct(v2);
        v3 = (__int64 *)*this;
        if ( *this )
        {
          v4 = v3[4];
          if ( v4 )
            operator delete[](v4);
          v3[4] = 0;
          v3[5] = 0;
          v5 = v3[2];
          if ( v5 )
            operator delete[](v5);
          v3[2] = 0;
          v3[3] = 0;
          LogicArrayList<String>::~LogicArrayList(v3);
          operator delete(v3);
        }
        *this = 0;
      }
      v6 = *((unsigned int *)this + 5);
      if ( (int)v6 >= 1 )
      {
        for ( i = (int)v6 - 1LL; ; --i )
        {
          if ( (int)i + 1 < 1 || (int)v6 <= i )
          {
            String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)&v14, i, v6);
            Debugger::error((Debugger *)&v14, v9);
          }
          v10 = (__int64)*(this + 1);
          v11 = *(_QWORD **)(v10 + 8 * i);
          if ( v11 )
          {
            CSVNode::destruct(*(StartMissionMessage **)(v10 + 8 * i));
            String::~String((__int64)(v11 + 11));
            String::~String((__int64)(v11 + 7));
            String::~String((__int64)(v11 + 4));
            v12 = v11[1];
            if ( v12 )
              operator delete[](v12);
            operator delete(v11);
          }
          if ( i + 1 < 2 )
            break;
          v6 = *((unsigned int *)this + 5);
        }
      }
      return CSVNode::initializeMembers((CSVNode *)this);
    }

    void __usercall CSVNode::parseLine(
            String *__return_ptr a1@<X8>,
            StartMissionMessage *this@<X0>,
            String *a3@<X1>,
            int a4@<W2>,
            int a5@<W3>,
            int a6@<W4>)
    {
      int v8; // w24
      int v12; // w27
      int v13; // w28
      int m_length; // w26
      int v15; // w23
      char v16; // w22
      int v17; // w25
      char v18; // w21
      __int64 v19; // x19
      __int64 v20; // x0
      __int64 v21; // x28
      __int64 v22; // x2
      unsigned int v23; // w0
      unsigned int v24; // w8
      UdpConnectionInfoMessage *v25; // x24
      _BOOL4 v26; // w8
      int v27; // w8
      int v28; // w1
      internal_t *p_internal; // x8
      UdpConnectionInfoMessage *v30; // x19
      int ColumnTypeCount; // w0
      String *ColumnName; // x0
      const String *v33; // x1
      int v34; // w19
      int v36; // w21
      String *v37; // [xsp+20h] [xbp-180h]
      int v38; // [xsp+2Ch] [xbp-174h]
      int v39; // [xsp+30h] [xbp-170h]
      int v40; // [xsp+38h] [xbp-168h]
      int v41; // [xsp+3Ch] [xbp-164h]
      String v43; // [xsp+48h] [xbp-158h] BYREF
      String v44; // [xsp+60h] [xbp-140h] BYREF
      String v45; // [xsp+78h] [xbp-128h] BYREF
      String v46; // [xsp+90h] [xbp-110h] BYREF
      String v47; // [xsp+A8h] [xbp-F8h] BYREF
      String v48; // [xsp+C0h] [xbp-E0h] BYREF
      String v49; // [xsp+D8h] [xbp-C8h] BYREF
      String v50; // [xsp+F0h] [xbp-B0h] BYREF
      String v51; // [xsp+108h] [xbp-98h] BYREF
      String v52; // [xsp+120h] [xbp-80h] BYREF
      String v53; // [xsp+138h] [xbp-68h] BYREF
    
      v8 = a4;
      v12 = a4 != -1;
      String::String((__int64)&v53);
      String::String((__int64)&v52, a3);
      v40 = a5;
      v37 = a1;
      v13 = String::indexOf((__int64)&v52, 34, 0);
      m_length = a3->m_length;
      String::String((__int64)&v51);
      v15 = 0;
      v16 = 0;
      v41 = 0;
      v17 = 0;
      v38 = a6 - 2;
      v18 = 1;
      v39 = -1;
      while ( v17 < m_length )
      {
        if ( v17 == v13 )
        {
          v19 = (unsigned int)(v17 + 1);
          v20 = String::indexOf((__int64)&v52, &STRING_END_MARKER, v19);
          v21 = v20;
          v22 = (unsigned int)(m_length - 1);
          if ( (_DWORD)v20 != -1 )
          {
            v17 = String::indexOf((__int64)&v52, 34, (int)v20 + 2);
            v22 = v21;
          }
          v13 = v17;
          v17 = v22 + 2;
        }
        else
        {
          v23 = String::indexOf((__int64)&v52, 44, v17);
          if ( v23 == -1 )
            v24 = m_length;
          else
            v24 = v23;
          if ( v23 == v17 )
            v19 = (unsigned int)(v17 + 1);
          else
            v19 = (unsigned int)v17;
          if ( v23 == v17 )
            v22 = (unsigned int)(v17 + 1);
          else
            v22 = v24;
          if ( v23 == v17 )
            ++v17;
          else
            v17 = v24 + 1;
        }
        String::substring((unsigned int *)a3, (const char *)v19, v22, (__int64)&v50);
        if ( v50.m_length )
        {
          if ( (v16 & 1) != 0 )
          {
            v16 = 1;
            if ( v41 >= 1 && ((v12 ^ 1) & 1) != 0 )
            {
              if ( (v18 & 1) != 0 )
              {
                v25 = (UdpConnectionInfoMessage *)operator new(64);
                CSVTable::CSVTable(v25, this, -1, v38);
                CSVNode::setTable(this, v25);
                CSVTable::addColumn(v25, &v51);
                v39 = 1;
                *((_DWORD *)this + 29) = 0;
                v16 = 1;
                v18 = 1;
                v12 = 1;
                v8 = v15;
              }
              else
              {
                v18 = 0;
                v16 = 1;
                *(_BYTE *)(*((_QWORD *)this + 3) + 120LL) = 1;
              }
            }
          }
          else
          {
            String::operator=(&v53, &v50);
            *(_DWORD *)(*((_QWORD *)this + 3) + 112LL) = v15;
            v26 = v15 >= v8;
            v18 &= v26;
            v12 &= v26;
            v16 = 1;
          }
        }
        if ( (v12 & 1) != 0 && ((v15 - v8) & 0x80000000) == 0 )
        {
          v27 = *((_DWORD *)this + 29);
          if ( v27 )
          {
            if ( v27 == 1 )
            {
              if ( String::equalsIgnoreCase((__int64)&v50, "string") )
              {
                v28 = 0;
              }
              else if ( String::equalsIgnoreCase((__int64)&v50, "int") )
              {
                v28 = 1;
              }
              else
              {
                if ( !String::equalsIgnoreCase((__int64)&v50, "boolean") )
                {
                  String::String((__int64)&v49);
                  if ( v50.m_length )
                  {
                    p_internal = &v50.internal;
                    if ( v50.m_bytes + 1 >= 9 )
                      p_internal = (internal_t *)v50.internal.pHeap;
                    String::format((String *)"Invalid column type '%s'", (__int64)&v48, p_internal);
                    String::operator=(&v49, &v48);
                    String::~String((__int64)&v48);
                  }
                  else
                  {
                    String::operator=(&v49, "Empty column type");
                  }
                  operator+((__int64)&v49, ", column name ", (__int64)&v43);
                  v30 = *(UdpConnectionInfoMessage **)this;
                  ColumnTypeCount = CSVTable::getColumnTypeCount(*(_QWORD *)this);
                  ColumnName = (String *)CSVTable::getColumnName(v30, ColumnTypeCount);
                  operator+((__int64 *)&v44.m_length, &v43, ColumnName);
                  operator+((__int64)&v44, ", file ", (__int64)&v45);
                  operator+((__int64 *)&v46.m_length, &v45, (String *)(*((_QWORD *)this + 3) + 56LL));
                  operator+((__int64)&v46, ". Expecting: int/string/boolean", (__int64)&v47);
                  Debugger::error((Debugger *)&v47, v33);
                }
                v28 = 2;
              }
              CSVTable::addColumnType(*(UdpConnectionInfoMessage **)this, v28);
              v39 = 2;
            }
            else if ( v27 == 2 )
            {
              if ( v15 == v8 && v50.m_length )
                CSVTable::createRow(*(CSVTable **)this);
              CSVTable::addAndConvertValue(*(UdpConnectionInfoMessage **)this, &v50, v15 - v8);
            }
          }
          else if ( v50.m_length )
          {
            CSVTable::addColumn(*(UdpConnectionInfoMessage **)this, &v50);
          }
        }
        if ( (v12 & 1) == 0 )
        {
          v41 = v50.m_length;
          if ( (v18 & 1) != 0 )
            String::operator=(&v51, &v50);
    LABEL_56:
          v34 = 0;
          goto LABEL_57;
        }
        if ( v15 < v40 )
          goto LABEL_56;
        v34 = 2;
    LABEL_57:
        String::~String((__int64)&v50);
        ++v15;
        if ( v34 )
          break;
      }
      if ( (v12 & 1) != 0 && v15 >= v8 && *((_DWORD *)this + 29) == 2 && v15 <= v40 )
      {
        v36 = v15 - 1;
        do
        {
          CSVTable::addAndConvertValue(*(UdpConnectionInfoMessage **)this, &NULL_STRING, v36 - v8 + 1);
          ++v36;
        }
        while ( v36 < v40 );
      }
      if ( v39 != -1 )
      {
        *((_DWORD *)this + 29) = v39;
        if ( v39 == 2 )
          CSVTable::validateColumnTypes(*(CSVTable **)this);
        else
          CSVTable::columnNamesLoaded(*(CSVTable **)this);
      }
      if ( (v12 & 1) != 0 )
        String::String(v37, "");
      else
        String::String((__int64)v37, &v53);
      String::~String((__int64)&v51);
      String::~String((__int64)&v52);
      String::~String((__int64)&v53);
    }

    _QWORD *__fastcall CSVNode::setTable(_QWORD *result, __int64 a2)
    {
      _QWORD *v2; // x20
      const String *v3; // x1
      _BYTE v4[24]; // [xsp+8h] [xbp-58h] BYREF
      String v5; // [xsp+20h] [xbp-40h] BYREF
      __int64 v6[3]; // [xsp+38h] [xbp-28h] BYREF
    
      v2 = result;
      if ( *result )
      {
        operator+("CSV node already has a table, file:", result[3] + 56LL, (__int64)v4);
        operator+((__int64)v4, ", node ", (__int64)&v5);
        operator+(v6, &v5, (String *)(v2 + 4));
        Debugger::error((Debugger *)v6, v3);
      }
      *result = a2;
      return result;
    }

    __int64 __fastcall CSVNode::getFileName(StartMissionMessage *this)
    {
      return *((_QWORD *)this + 3) + 56LL;
    }

    __int64 __fastcall CSVNode::getTable(StartMissionMessage *this)
    {
      return *(_QWORD *)this;
    }

    __int64 __fastcall CSVNode::getName(StartMissionMessage *this)
    {
      return (__int64)this + 32;
    }

    __int64 __fastcall CSVNode::getNodeCount(StartMissionMessage *this)
    {
      return *((unsigned int *)this + 5);
    }

    __int64 __fastcall CSVNode::getNodeByName(__int64 a1, __int64 a2)
    {
      __int64 v4; // x23
      __int64 v5; // x24
      __int64 v7; // x8
      const String *v8; // x1
      __int64 v9; // x22
      _BYTE v11[24]; // [xsp+18h] [xbp-48h] BYREF
    
      v4 = *(int *)(a1 + 20);
      v5 = (int)v4 - 1;
      while ( v4-- >= 1 )
      {
        v7 = *(unsigned int *)(a1 + 20);
        if ( (int)v7 <= (int)v5 )
        {
          String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)v11, v5, v7);
          Debugger::error((Debugger *)v11, v8);
        }
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5--);
        if ( String::equals(v9 + 32, a2) )
          return v9;
      }
      return 0;
    }

    __int64 __fastcall CSVNode::getNodeAt(__int64 a1, __int64 a2)
    {
      __int64 v2; // x8
      const String *v3; // x1
      _BYTE v5[24]; // [xsp+18h] [xbp-28h] BYREF
    
      v2 = *(unsigned int *)(a1 + 20);
      if ( (a2 & 0x80000000) != 0 || (int)v2 <= (int)a2 )
      {
        String::format((String *)"LogicArrayList.get out of bounds %d/%d", (__int64)v5, a2, v2);
        Debugger::error((Debugger *)v5, v3);
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (int)a2);
    }

    _DWORD *__fastcall CSVNode::initializeMembers(__int64 a1)
    {
      _DWORD *result; // x0
    
      *(_BYTE *)(a1 + 121) = 0;
      String::operator=((_DWORD *)(a1 + 88), "");
      String::operator=((_DWORD *)(a1 + 32), "");
      result = String::operator=((_DWORD *)(a1 + 56), "");
      *(_DWORD *)(a1 + 116) = 0;
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 112) = -1;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 20) = 0;
      return result;
    }

}; // end class CSVNode
