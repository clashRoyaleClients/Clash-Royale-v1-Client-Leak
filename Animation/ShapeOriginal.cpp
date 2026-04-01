class ShapeOriginal
{
public:

    __int64 __fastcall ShapeOriginal::load(DataLoaderSound *this, jpeg_decoder_file_stream *a2, int a3)
    {
      __int64 Short; // x19
      __int64 v7; // x24
      _QWORD *v8; // x23
      __int64 v9; // x25
      int v10; // w23
      __int64 v11; // x0
      __int64 v12; // x0
      __int64 v13; // x22
      __int64 v14; // x9
      __int64 v15; // x25
      int v16; // w26
      __int64 v17; // x23
      __int64 UnsignedChar; // x24
      int Int; // w1
      __int64 FileName; // x0
      _QWORD *v21; // x8
      String v23; // [xsp+8h] [xbp-58h] BYREF
    
      Short = SupercellSWF::readShort(a2);
      v7 = (unsigned __int16)SupercellSWF::readShort(a2);
      v8 = (_QWORD *)operator new[](24 * v7 + 16);
      *v8 = 24;
      v8[1] = v7;
      if ( (_DWORD)v7 )
      {
        v9 = 0;
        do
        {
          ShapeDrawBitmapCommand::ShapeDrawBitmapCommand((ShapeDrawBitmapCommand *)&v8[v9 + 2]);
          v9 += 3;
        }
        while ( 3 * v7 != v9 );
      }
      *((_QWORD *)this + 2) = v8 + 2;
      *((_DWORD *)this + 2) = v7;
      if ( a3 == 18 )
        v10 = (unsigned __int16)SupercellSWF::readShort(a2);
      else
        v10 = 4 * v7;
      if ( is_mul_ok(v10, 0xCu) )
        v11 = 12LL * v10;
      else
        v11 = -1;
      v12 = operator new[](v11);
      v13 = v12;
      if ( v10 )
      {
        v14 = v12;
        do
        {
          *(_DWORD *)v14 = 0;
          *(_QWORD *)(v14 + 4) = 0;
          v14 += 12;
        }
        while ( v14 != v12 + 12LL * v10 );
      }
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          UnsignedChar = SupercellSWF::readUnsignedChar(a2);
          Int = SupercellSWF::readInt(a2);
          if ( (int)UnsignedChar > 21 )
          {
            if ( (_DWORD)UnsignedChar != 22 )
              goto LABEL_15;
            goto LABEL_14;
          }
          if ( (int)UnsignedChar <= 5 )
            break;
          if ( (_DWORD)UnsignedChar == 6 )
          {
            FileName = SupercellSWF::getFileName(a2);
            v21 = (_QWORD *)(FileName + 8);
            if ( *(_DWORD *)(FileName + 4) + 1 > 8 )
              v21 = (_QWORD *)*v21;
            String::format(
              (String *)"SupercellSWF::TAG_SHAPE_DRAW_COLOR_FILL_COMMAND not supported, %s",
              (__int64)&v23,
              v21);
            Debugger::error(&v23);
          }
          if ( (_DWORD)UnsignedChar != 17 )
            goto LABEL_15;
    LABEL_14:
          v17 = *((_QWORD *)this + 2) + 24 * v15;
          ShapeDrawBitmapCommand::load(v17, a2, UnsignedChar, v13 + 12LL * v16);
          v16 += ShapeDrawBitmapCommand::getVertexCount(v17);
          ++v15;
        }
        if ( !(_DWORD)UnsignedChar )
          break;
        if ( (_DWORD)UnsignedChar == 4 )
          goto LABEL_14;
    LABEL_15:
        SupercellSWF::skip(a2, Int);
      }
      if ( !(_DWORD)v15 )
        operator delete[](v13);
      return Short;
    }

    void __fastcall ShapeOriginal::ShapeOriginal(ShapeOriginal *this)
    {
      DisplayObjectOriginal::DisplayObjectOriginal(this);
      *(_QWORD *)this = off_1004766C8;
      *((_DWORD *)this + 2) = 0;
      *((_QWORD *)this + 2) = 0;
    }

    void __fastcall ShapeOriginal::~ShapeOriginal(DataLoaderSound *this)
    {
      __int64 Data; // x0
      __int64 v3; // x23
      __int64 v4; // x8
      __int64 v5; // x22
    
      *(_QWORD *)this = off_1004766C8;
      if ( *((int *)this + 2) >= 1 )
      {
        Data = ShapeDrawBitmapCommand::getData(*((_QWORD *)this + 2));
        if ( Data )
          operator delete[](Data);
      }
      v3 = *((_QWORD *)this + 2);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 - 8);
        if ( v4 )
        {
          v5 = 24 * v4;
          do
          {
            ShapeDrawBitmapCommand::~ShapeDrawBitmapCommand((ShapeDrawBitmapCommand *)(v3 - 24 + v5));
            v5 -= 24;
          }
          while ( v5 );
        }
        operator delete[](v3 - 16);
      }
      *((_DWORD *)this + 2) = 0;
      *((_QWORD *)this + 2) = 0;
      DisplayObjectOriginal::~DisplayObjectOriginal(this);
    }

    DataLoaderSound *__fastcall ShapeOriginal::~ShapeOriginal(DataLoaderSound *a1)
    {
      ShapeOriginal::~ShapeOriginal(a1);
      return a1;
    }

    void __fastcall ShapeOriginal::~ShapeOriginal(DataLoaderSound *a1)
    {
      ShapeOriginal::~ShapeOriginal(a1);
      operator delete(a1);
    }

    // attributes: thunk
    __int64 __fastcall ShapeOriginal::clone(__int64 a1)
    {
      return Shape::createShape(a1);
    }

}; // end class ShapeOriginal
