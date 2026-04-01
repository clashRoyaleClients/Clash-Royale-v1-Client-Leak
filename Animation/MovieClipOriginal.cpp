class MovieClipOriginal
{
public:

    void __fastcall MovieClipOriginal::createTimelineChildren(ResourceDataLoader *this, const jpeg_decoder_file_stream *a2)
    {
      __int64 v4; // x21
      __int64 v5; // x22
      __int64 v6; // x0
    
      if ( !*((_QWORD *)this + 4) )
      {
        v4 = *((unsigned __int16 *)this + 29);
        *((_QWORD *)this + 4) = operator new[](8 * v4);
        if ( v4 )
        {
          v5 = 0;
          do
          {
            *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v5) = SupercellSWF::getOriginalDisplayObject(
                                                            a2,
                                                            *(_WORD *)(*((_QWORD *)this + 2) + 2 * v5),
                                                            *((const char **)this + 1));
            ++v5;
          }
          while ( (_DWORD)v4 != (_DWORD)v5 );
        }
        v6 = *((_QWORD *)this + 2);
        if ( v6 )
          operator delete[](v6);
        *((_QWORD *)this + 2) = 0;
      }
    }

    void __fastcall MovieClipOriginal::destructOriginal(__int64 a1, int a2)
    {
      __int64 v4; // x0
      __int64 v5; // x22
      __int64 v6; // x8
      _QWORD *v7; // x9
      __int64 i; // x10
      __int64 v9; // x8
      __int64 v10; // x21
      __int64 v11; // x0
      __int64 v12; // x0
      __int64 v13; // x20
      __int64 v14; // x21
      __int64 v15; // x8
      __int64 v16; // x0
    
      v4 = *(_QWORD *)(a1 + 32);
      if ( v4 )
        operator delete[](v4);
      *(_QWORD *)(a1 + 32) = 0;
      v5 = *(_QWORD *)(a1 + 48);
      if ( v5 )
      {
        v6 = *(unsigned __int16 *)(a1 + 56);
        if ( a2 != 14 && (unsigned int)v6 >= 2 )
        {
          v7 = (_QWORD *)(v5 + 16);
          for ( i = 1; i < v6; ++i )
          {
            *v7 = 0;
            v7 += 2;
          }
        }
        *(_QWORD *)(v5 + 16 * v6) = 0;
        v9 = *(_QWORD *)(v5 - 8);
        if ( v9 )
        {
          v10 = 16 * v9;
          do
          {
            MovieClipFrame::~MovieClipFrame((MovieClipFrame *)(v5 - 16 + v10));
            v10 -= 16;
          }
          while ( v10 );
        }
        operator delete[](v5 - 16);
        *(_QWORD *)(a1 + 48) = 0;
      }
      v11 = *(_QWORD *)(a1 + 24);
      if ( v11 )
        operator delete[](v11);
      *(_QWORD *)(a1 + 24) = 0;
      v12 = *(_QWORD *)(a1 + 40);
      if ( v12 )
      {
        v13 = *(unsigned __int16 *)(a1 + 58);
        if ( !*(_WORD *)(a1 + 58) )
          goto LABEL_22;
        do
        {
          v14 = v13--;
          v15 = *(_QWORD *)(v12 + 8 * v13);
          do
          {
            if ( v15 )
            {
              operator delete[](v15);
              v12 = *(_QWORD *)(a1 + 40);
            }
            *(_QWORD *)(v12 + 8 * v13) = 0;
            v12 = *(_QWORD *)(a1 + 40);
            v15 = *(_QWORD *)(v12 + 8 * v13);
          }
          while ( v15 );
        }
        while ( v14 >= 2 );
        if ( v12 )
    LABEL_22:
          operator delete[](v12);
        *(_QWORD *)(a1 + 40) = 0;
      }
      v16 = *(_QWORD *)(a1 + 16);
      if ( v16 )
        operator delete[](v16);
      *(_QWORD *)(a1 + 16) = 0;
    }

    __int64 __fastcall MovieClipOriginal::load(__int64 a1, SupercellSWF *a2, int a3)
    {
      unsigned int Short; // w28
      unsigned __int16 v7; // w26
      __int64 TimelineOffset; // x0
      int Int; // w0
      unsigned __int16 v10; // w23
      _QWORD *v11; // x27
      unsigned __int64 v12; // x20
      __int64 v13; // x26
      __int64 v14; // x24
      _BYTE *v15; // x0
      __int64 v16; // x9
      __int64 v17; // x0
      __int64 v18; // x22
      char v19; // w20
      __int64 v20; // x20
      MovieClipFrame *v21; // x24
      __int64 v22; // x23
      int v23; // w28
      int v24; // w22
      int UnsignedChar; // w27
      int v26; // w2
      __int64 FileName; // x0
      _QWORD *v28; // x8
      MovieClipFrame *v29; // x25
      __int64 v30; // x26
      int v31; // w8
      int AmountOfChildMemoryNeeded; // w0
      unsigned __int64 v33; // x9
      MovieClip *v34; // x21
      int FrameDataLength; // w0
      int v36; // w0
      unsigned int v38; // [xsp+Ch] [xbp-74h]
      __int64 v39; // [xsp+10h] [xbp-70h]
      String v40; // [xsp+18h] [xbp-68h] BYREF
    
      Short = SupercellSWF::readShort(a2);
      *(_BYTE *)(a1 + 62) = SupercellSWF::readUnsignedChar(a2);
      v7 = SupercellSWF::readShort(a2);
      if ( a3 == 14 )
      {
        TimelineOffset = SupercellSWF::getTimelineOffset(a2);
      }
      else
      {
        if ( a3 == 3 )
          Debugger::error("TAG_MOVIE_CLIP no longer supported");
        Int = SupercellSWF::readInt(a2);
        TimelineOffset = SupercellSWF::readShortArray(a2, 3 * Int);
      }
      v39 = TimelineOffset;
      v10 = SupercellSWF::readShort(a2);
      *(_WORD *)(a1 + 56) = v7;
      v11 = (_QWORD *)operator new[](16 * (v7 + 1LL) + 16);
      v12 = 0;
      *v11 = 16;
      v11[1] = v7 + 1LL;
      v13 = 16LL * v7 + 16;
      do
      {
        MovieClipFrame::MovieClipFrame((MovieClipFrame *)&v11[v12 / 8 + 2]);
        v12 += 16LL;
      }
      while ( v13 != v12 );
      *(_QWORD *)(a1 + 48) = v11 + 2;
      *(_WORD *)(a1 + 58) = v10;
      *(_QWORD *)(a1 + 16) = SupercellSWF::readShortArray(a2, v10);
      if ( a3 == 12 )
      {
        *(_QWORD *)(a1 + 24) = SupercellSWF::readByteArray(a2, v10);
        v14 = v10;
      }
      else
      {
        v14 = v10;
        v15 = (_BYTE *)operator new[](v10);
        *(_QWORD *)(a1 + 24) = v15;
        if ( v10 )
        {
          *v15 = 0;
          if ( v10 != 1 )
          {
            v16 = 1;
            do
              *(_BYTE *)(*(_QWORD *)(a1 + 24) + v16++) = 0;
            while ( v10 != (_DWORD)v16 );
          }
        }
      }
      v17 = operator new[](8 * v14);
      *(_QWORD *)(a1 + 40) = v17;
      if ( !v10 )
        goto LABEL_19;
      v18 = 0;
      v19 = 0;
      do
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v18) = SupercellSWF::readAscii(a2);
        v17 = *(_QWORD *)(a1 + 40);
        v19 |= *(_QWORD *)(v17 + 8 * v18++) != 0;
      }
      while ( v10 != (_DWORD)v18 );
      if ( (v19 & 1) != 0 )
      {
        v38 = Short;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = 0;
      }
      else
      {
    LABEL_19:
        v38 = Short;
        if ( v17 )
          operator delete[](v17);
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = 0;
        *(_QWORD *)(a1 + 40) = 0;
      }
      while ( 1 )
      {
        UnsignedChar = SupercellSWF::readUnsignedChar(a2);
        SupercellSWF::readInt(a2);
        if ( UnsignedChar != 11 )
          break;
        v29 = (MovieClipFrame *)(*(_QWORD *)(a1 + 48) + 16 * v20);
        v30 = MovieClipFrame::load(v29, a2);
        *(_QWORD *)v29 = v39 + 2LL * v24;
        v24 += 3 * v30;
        v31 = v30;
        if ( v21 )
        {
          AmountOfChildMemoryNeeded = MovieClipFrame::getAmountOfChildMemoryNeeded(v21, v29, v30, v22);
          if ( AmountOfChildMemoryNeeded <= v23 )
            v31 = v23;
          else
            v31 = AmountOfChildMemoryNeeded;
        }
        ++v20;
        v21 = v29;
        v22 = v30;
        v23 = v31;
      }
      if ( UnsignedChar )
      {
        if ( UnsignedChar != 5 )
        {
          FileName = SupercellSWF::getFileName(a2);
          v28 = (_QWORD *)(FileName + 8);
          if ( *(_DWORD *)(FileName + 4) + 1 > 8 )
            v28 = (_QWORD *)*v28;
          String::format((String *)"Unknown tag in MovieClip, %s", (__int64)&v40, v28);
          Debugger::error(&v40);
        }
        Debugger::error("TAG_MOVIE_CLIP_FRAME no longer supported");
      }
      v33 = *(unsigned __int16 *)(a1 + 56);
      v34 = *(MovieClip **)(a1 + 48);
      *((_QWORD *)v34 + 2 * v33) = v39 + 2LL * v24;
      if ( v33 >= 2 )
      {
        FrameDataLength = MovieClip::getFrameDataLength(v34, 0, v26);
        v36 = MovieClipFrame::getAmountOfChildMemoryNeeded(v21, v34, (unsigned int)(FrameDataLength / 3), v22);
        if ( v36 > v23 )
          LOWORD(v23) = v36;
      }
      *(_WORD *)(a1 + 60) = v23;
      return v38;
    }

    _QWORD *__fastcall MovieClipOriginal::MovieClipOriginal(_QWORD *a1)
    {
      DisplayObjectOriginal::DisplayObjectOriginal(a1);
      *(_QWORD *)((char *)a1 + 55) = 0;
      a1[6] = 0;
      *a1 = off_1004765B8;
      a1[4] = 0;
      a1[5] = 0;
      a1[2] = 0;
      a1[3] = 0;
      a1[1] = 0;
      return a1;
    }

    _QWORD *__fastcall MovieClipOriginal::~MovieClipOriginal(_QWORD *a1)
    {
      *(_QWORD *)((char *)a1 + 55) = 0;
      *a1 = off_1004765B8;
      a1[5] = 0;
      a1[6] = 0;
      a1[3] = 0;
      a1[4] = 0;
      a1[1] = 0;
      a1[2] = 0;
      DisplayObjectOriginal::~DisplayObjectOriginal(a1);
      return a1;
    }

    void __fastcall MovieClipOriginal::~MovieClipOriginal(_QWORD *a1)
    {
      *(_QWORD *)((char *)a1 + 55) = 0;
      *a1 = off_1004765B8;
      a1[5] = 0;
      a1[6] = 0;
      a1[3] = 0;
      a1[4] = 0;
      a1[1] = 0;
      a1[2] = 0;
      DisplayObjectOriginal::~DisplayObjectOriginal(a1);
      operator delete(a1);
    }

    // attributes: thunk
    __int64 __fastcall MovieClipOriginal::clone(
            DataLoaderTexture *this,
            ResourceDataLoader *a2,
            const jpeg_decoder_file_stream *a3)
    {
      return MovieClip::createMovieClip(this, a2, a3);
    }

}; // end class MovieClipOriginal
