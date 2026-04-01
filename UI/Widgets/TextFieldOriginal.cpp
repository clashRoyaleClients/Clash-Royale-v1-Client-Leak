class TextFieldOriginal
{
public:

    __int64 __fastcall TextFieldOriginal::load(
            _guard_variable_for_Assert *this,
            jpeg_decoder_file_stream *a2,
            __int64 a3,
            __int64 a4,
            __int64 a5,
            __int64 a6,
            unsigned int a7)
    {
      int v7; // w22
      __int64 Short; // x20
      __int64 v11; // x1
      __int64 v12; // x2
      __int64 v13; // x3
      __int64 v14; // x4
      __int64 v15; // x5
      unsigned int v16; // w6
      __int64 v17; // x1
      __int64 v18; // x2
      __int64 v19; // x3
      __int64 v20; // x4
      __int64 v21; // x5
      unsigned int v22; // w6
      __int64 v23; // x1
      __int64 v24; // x2
      __int64 v25; // x3
      __int64 v26; // x4
      __int64 v27; // x5
      unsigned int v28; // w6
      __int64 v29; // x1
      __int64 v30; // x2
      __int64 v31; // x3
      __int64 v32; // x4
      __int64 v33; // x5
      unsigned int v34; // w6
      __int64 v35; // x1
      __int64 v36; // x2
      __int64 v37; // x3
      __int64 v38; // x4
      __int64 v39; // x5
      unsigned int v40; // w6
      __int64 v41; // x1
      __int64 v42; // x2
      __int64 v43; // x3
      __int64 v44; // x4
      __int64 v45; // x5
      unsigned int v46; // w6
      __int64 v47; // x1
      __int64 v48; // x2
      __int64 v49; // x3
      __int64 v50; // x4
      __int64 v51; // x5
      unsigned int v52; // w6
      __int64 v53; // x1
      __int64 v54; // x2
      __int64 v55; // x3
      __int64 v56; // x4
      __int64 v57; // x5
      unsigned int v58; // w6
      __int64 v59; // x1
      __int64 v60; // x2
      __int64 v61; // x3
      __int64 v62; // x4
      __int64 v63; // x5
      unsigned int v64; // w6
      __int64 v65; // x1
      __int64 v66; // x2
      __int64 v67; // x3
      __int64 v68; // x4
      __int64 v69; // x5
      unsigned int v70; // w6
      __int64 v71; // x1
      __int64 v72; // x2
      __int64 v73; // x3
      __int64 v74; // x4
      __int64 v75; // x5
      unsigned int v76; // w6
      __int64 v77; // x1
      __int64 v78; // x2
      __int64 v79; // x3
      __int64 v80; // x4
      __int64 v81; // x5
      unsigned int v82; // w6
      __int64 v83; // x1
      __int64 v84; // x2
      __int64 v85; // x3
      __int64 v86; // x4
      __int64 v87; // x5
      unsigned int v88; // w6
      __int64 v89; // x3
      __int64 v90; // x4
      __int64 v91; // x5
      unsigned int v92; // w6
      __int64 v93; // x1
      __int64 v94; // x2
      __int64 v95; // x3
      __int64 v96; // x4
      __int64 v97; // x5
      unsigned int v98; // w6
      __int64 v99; // x1
      __int64 v100; // x2
      __int64 v101; // x3
      __int64 v102; // x4
      __int64 v103; // x5
      unsigned int v104; // w6
      int v106; // [xsp+Ch] [xbp-24h] BYREF
    
      v7 = a3;
      Short = SupercellSWF::readShort((__int64)a2, (__int64)a2, a3, a4, a5, a6, a7);
      *((_QWORD *)this + 1) = SupercellSWF::readFontName((__int64)a2, v11, v12, v13, v14, v15, v16);
      *((_DWORD *)this + 6) = SupercellSWF::readInt((__int64)a2, v17, v18, v19, v20, v21, v22);
      if ( SupercellSWF::readBool((__int64)a2, v23, v24, v25, v26, v27, v28) )
        *((_BYTE *)this + 41) |= 4u;
      if ( SupercellSWF::readBool((__int64)a2, v29, v30, v31, v32, v33, v34) )
        *((_BYTE *)this + 41) |= 8u;
      if ( SupercellSWF::readBool((__int64)a2, v35, v36, v37, v38, v39, v40) )
        *((_BYTE *)this + 41) |= 0x10u;
      SupercellSWF::readBool((__int64)a2, v41, v42, v43, v44, v45, v46);
      *((_BYTE *)this + 42) = SupercellSWF::readUnsignedChar((__int64)a2, v47, v48, v49, v50, v51, v52);
      *((_BYTE *)this + 43) = SupercellSWF::readUnsignedChar((__int64)a2, v53, v54, v55, v56, v57, v58);
      *((_WORD *)this + 8) = SupercellSWF::readShort((__int64)a2, v59, v60, v61, v62, v63, v64);
      *((_WORD *)this + 9) = SupercellSWF::readShort((__int64)a2, v65, v66, v67, v68, v69, v70);
      *((_WORD *)this + 10) = SupercellSWF::readShort((__int64)a2, v71, v72, v73, v74, v75, v76);
      *((_WORD *)this + 11) = SupercellSWF::readShort((__int64)a2, v77, v78, v79, v80, v81, v82);
      if ( SupercellSWF::readBool((__int64)a2, v83, v84, v85, v86, v87, v88) )
        *((_BYTE *)this + 41) |= 2u;
      v106 = 0;
      *((_QWORD *)this + 4) = SupercellSWF::readAscii(a2, &v106, 0, v89, v90, v91, v92);
      *((_BYTE *)this + 40) = v106;
      if ( v7 != 7 )
      {
        if ( SupercellSWF::readBool((__int64)a2, v93, v94, v95, v96, v97, v98) )
          *((_BYTE *)this + 41) |= 1u;
        if ( v7 == 25 || (v7 & 0xFFFFFFFE) == 0x14 && (*((_BYTE *)this + 41) |= 0x20u, v7 == 21) )
          *((_DWORD *)this + 7) = SupercellSWF::readInt((__int64)a2, v99, v100, v101, v102, v103, v104);
      }
      return Short;
    }

    void __fastcall TextFieldOriginal::TextFieldOriginal(TextFieldOriginal *this)
    {
      DisplayObjectOriginal::DisplayObjectOriginal(this);
      *(_QWORD *)this = off_100476A10;
      *((_DWORD *)this + 10) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
    }

    void __fastcall TextFieldOriginal::~TextFieldOriginal(_guard_variable_for_Assert *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_100476A10;
      v2 = *((_QWORD *)this + 4);
      if ( v2 )
        operator delete[](v2);
      *((_DWORD *)this + 10) = 0;
      *((_QWORD *)this + 3) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      DisplayObjectOriginal::~DisplayObjectOriginal(this);
    }

    void __fastcall TextFieldOriginal::~TextFieldOriginal(_guard_variable_for_Assert *this)
    {
      TextFieldOriginal::~TextFieldOriginal(this);
    }

    void __fastcall TextFieldOriginal::~TextFieldOriginal(_guard_variable_for_Assert *this)
    {
      TextFieldOriginal::~TextFieldOriginal(this);
      operator delete(this);
    }

    // attributes: thunk
    __int64 __fastcall TextFieldOriginal::clone(int16x4_t *this, const _guard_variable_for_Assert *a2)
    {
      return TextField::createTextField(this, a2);
    }

}; // end class TextFieldOriginal
