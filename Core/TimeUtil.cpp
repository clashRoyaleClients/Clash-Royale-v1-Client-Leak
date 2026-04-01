class TimeUtil
{
public:

    void __usercall TimeUtil::getTimeAsString(int a1@<W0>, int a2@<W1>, int a3@<W2>, String *a4@<X8>)
    {
      char v4; // w20
      __int64 v8; // x26
      unsigned int v9; // w25
      __int64 v10; // x27
      __int64 v11; // x23
      unsigned int v12; // w10
      const char *v13; // x1
      char *String; // x0
      const char *v15; // x1
      _QWORD *v16; // x9
      char *v17; // x0
      const char *v18; // x1
      _QWORD *v19; // x8
      char *v20; // x0
      const char *v21; // x1
      _QWORD *v22; // x8
      char *v23; // x0
      const char *v24; // x1
      _QWORD *v25; // x8
      char *v26; // x0
      const char *v27; // x1
      _QWORD *v28; // x8
      bool v29; // w8
      int m_length; // w9
      const char *v31; // x1
      char *v32; // x0
      const char *v33; // x1
      _QWORD *v34; // x8
      char *v35; // x0
      const char *v36; // x1
      _QWORD *v37; // x8
      String v38; // [xsp+18h] [xbp-158h] BYREF
      String v39; // [xsp+30h] [xbp-140h] BYREF
      String v40; // [xsp+48h] [xbp-128h] BYREF
      String v41; // [xsp+78h] [xbp-F8h] BYREF
      String v42; // [xsp+90h] [xbp-E0h] BYREF
      String v43; // [xsp+C0h] [xbp-B0h] BYREF
      String v44; // [xsp+D8h] [xbp-98h] BYREF
    
      v4 = a3;
      v8 = (unsigned int)(a1 / 3600 % 24);
      v9 = a1 + 86399;
      if ( a2 )
      {
        if ( v9 < 0x2A2FF || (v10 = 0, v11 = 0, a3) )
        {
          if ( a3 )
            v12 = a1 % 60;
          else
            v12 = 0;
          v10 = (unsigned int)(a1 / 60 % 60);
          if ( (_DWORD)v8 )
            v11 = v12;
          else
            v11 = (unsigned int)(a1 % 60);
        }
      }
      else
      {
        v10 = (unsigned int)(a1 / 60 % 60);
        v11 = (unsigned int)(a1 % 60);
      }
      String::String(a4);
      if ( v9 > 0x2A2FE )
      {
        String = (char *)StringTable::getString((#1308 *)"TID_TIME_DAYS", v13);
        v16 = String + 8;
        if ( *((_DWORD *)String + 1) + 1 > 8 )
          v16 = (_QWORD *)*v16;
        String::format((String *)"%i%s", v15, (unsigned int)(a1 / 86400), v16);
        String::operator=(a4);
        String::~String();
      }
      if ( (_DWORD)v8 )
      {
        if ( a4->m_length )
        {
          v17 = (char *)StringTable::getString((#1308 *)"TID_TIME_HOURS", v13);
          v19 = v17 + 8;
          if ( *((_DWORD *)v17 + 1) + 1 > 8 )
            v19 = (_QWORD *)*v19;
          String::format((String *)" %i%s", v18, v8, v19);
          operator+((__int64 *)&v44.m_length, a4, &v43);
          String::operator=(a4);
          String::~String();
          String::~String();
        }
        else
        {
          v20 = (char *)StringTable::getString((#1308 *)"TID_TIME_HOURS", v13);
          v22 = v20 + 8;
          if ( *((_DWORD *)v20 + 1) + 1 > 8 )
            v22 = (_QWORD *)*v22;
          String::format((String *)"%i%s", v21, v8, v22);
          String::operator=(a4);
          String::~String();
        }
      }
      if ( (_DWORD)v10 )
      {
        if ( a4->m_length )
        {
          v23 = (char *)StringTable::getString((#1308 *)"TID_TIME_MINS", v13);
          v25 = v23 + 8;
          if ( *((_DWORD *)v23 + 1) + 1 > 8 )
            v25 = (_QWORD *)*v25;
          String::format((String *)" %i%s", v24, v10, v25);
          operator+((__int64 *)&v42.m_length, a4, &v41);
          String::operator=(a4);
          String::~String();
          String::~String();
        }
        else
        {
          v26 = (char *)StringTable::getString((#1308 *)"TID_TIME_MINS", v13);
          v28 = v26 + 8;
          if ( *((_DWORD *)v26 + 1) + 1 > 8 )
            v28 = (_QWORD *)*v28;
          String::format((String *)"%i%s", v27, v10, v28);
          String::operator=(a4);
          String::~String();
        }
      }
      if ( a2 )
        v29 = v9 < 0x2A2FF && (_DWORD)v8 == 0;
      else
        v29 = (_DWORD)v11 != 0;
      m_length = a4->m_length;
      if ( !v29 && (v4 & 1) == 0 )
      {
        if ( m_length )
          return;
        goto LABEL_42;
      }
      if ( !m_length )
      {
    LABEL_42:
        v35 = (char *)StringTable::getString((#1308 *)"TID_TIME_SECS", v13);
        v37 = v35 + 8;
        if ( *((_DWORD *)v35 + 1) + 1 > 8 )
          v37 = (_QWORD *)*v37;
        String::format((String *)"%i%s", v36, v11, v37);
        String::operator=(a4);
        String::~String();
        return;
      }
      operator+(a4, " ");
      v32 = (char *)StringTable::getString((#1308 *)"TID_TIME_SECS", v31);
      v34 = v32 + 8;
      if ( *((_DWORD *)v32 + 1) + 1 > 8 )
        v34 = (_QWORD *)*v34;
      String::format((String *)" %i%s", v33, v11, v34);
      operator+((__int64 *)&v40.m_length, &v39, &v38);
      String::operator=(a4);
      String::~String();
      String::~String();
      String::~String();
    }

    void __usercall TimeUtil::getTimeString(int a1@<W0>, int a2@<W1>, String *a3@<X8>)
    {
      TimeUtil::getTimeAsString(a1, a2, 0, a3);
    }

    void __usercall TimeUtil::getTimeStringWithSeconds(int a1@<W0>, int a2@<W1>, String *a3@<X8>)
    {
      TimeUtil::getTimeAsString(a1, a2, 1, a3);
    }

}; // end class TimeUtil
