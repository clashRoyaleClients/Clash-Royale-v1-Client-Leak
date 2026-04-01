class ZlibHelper
{
public:

    __int64 __fastcall ZlibHelper::decompressInMySQLFormat(unsigned __int8 *a1, __int64 a2, _QWORD *a3)
    {
      size_t v5; // x21
      const Bytef *v6; // x22
      void *v7; // x23
      __int64 v8; // x0
      const String *v9; // x1
      unsigned __int64 *pad; // x0
      const String *v11; // x1
      const String *v13; // x1
      const String *v14; // x1
      __siginfo v15; // [xsp+8h] [xbp-98h] BYREF
    
      v5 = (a1[3] << 24) | *a1 | (unsigned __int64)(unsigned __int16)(a1[1] << 8) | ((unsigned __int64)a1[2] << 16);
      v15.__pad[6] = v5;
      v6 = a1 + 4;
      v7 = (void *)operator new[](v5);
      *a3 = v7;
      bzero(v7, v5);
      v8 = uncompress((Bytef *)v7, &v15.__pad[6], v6, (int)a2 - 4);
      switch ( (int)v8 )
      {
        case -5:
          String::format(
            (String *)"[decompressInMySQLFormat] Not enough room in output buffer. Uncompressed Length: %d",
            (__int64)v15.__pad,
            v15.__pad[6]);
          Debugger::warning((__siginfo *)v15.__pad, v9);
          pad = v15.__pad;
          goto LABEL_4;
        case -4:
          String::format(
            (String *)"[decompressInMySQLFormat] Not enough memory uncompressing %d bytes of data.",
            (__int64)&v15.__pad[3],
            a2);
          Debugger::warning((__siginfo *)&v15.__pad[3], v13);
          pad = &v15.__pad[3];
          goto LABEL_4;
        case -3:
          String::format(
            (String *)"[decompressInMySQLFormat] Input data is corrupted or incomplete. Compressed Length: %d",
            (__int64)&v15.si_addr,
            a2);
          Debugger::warning((__siginfo *)&v15.si_addr, v14);
          pad = (unsigned __int64 *)&v15.si_addr;
          goto LABEL_4;
        case 0:
          return LODWORD(v15.__pad[6]);
        default:
          String::format((String *)"[decompressInMySQLFormat] Unknown error in uncompress. Result: %d", (__int64)&v15, v8);
          Debugger::warning(&v15, v11);
          pad = (unsigned __int64 *)&v15;
    LABEL_4:
          String::~String((__int64)pad);
          return 0xFFFFFFFFLL;
      }
    }

}; // end class ZlibHelper
