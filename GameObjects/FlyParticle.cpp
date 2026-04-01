class FlyParticle
{
public:

    bool __fastcall FlyParticle::update(#1305 *this, long double a2)
    {
      long double v2; // q9
      float v3; // s8
      float v5; // s0
      float v7; // s11
      float v8; // s13
      float v9; // s10
      float v10; // s2
      float v11; // s3
      float v12; // s12
      float v13; // s14
      float v14; // s0
      float v15; // s10
      float v16; // s11
      float v17; // s0
      float v18; // s0
    
      v3 = *(float *)&a2;
      v5 = *((float *)this + 35);
      *(_BYTE *)(*((_QWORD *)this + 12) + 8LL) = v5 <= 0.0;
      if ( v5 <= 0.0 )
      {
        v7 = *((float *)this + 28);
        v8 = *((float *)this + 29);
        v9 = *((float *)this + 30);
        v10 = *((float *)this + 34);
        v11 = *((float *)this + 37);
        v12 = 0.5;
        if ( v10 >= (float)(v11 * 0.5) )
          LODWORD(a2) = 1.0;
        else
          *(float *)&a2 = v10 / (float)(v11 * 0.5);
        if ( v10 <= v11 )
        {
          v13 = *((float *)this + 31);
        }
        else
        {
          v7 = *((float *)this + 30);
          v9 = *((float *)this + 32);
          v13 = *((float *)this + 33);
          v12 = 1.0;
          v8 = *((float *)this + 31);
          *(float *)&a2 = (float)(v10 - v11) / *((float *)this + 36);
        }
        LODWORD(v2) = 1.0;
        v14 = (*(float (__fastcall **)(_QWORD, long double, long double, long double, long double))(**((_QWORD **)this + 13)
                                                                                                  + 32LL))(
                *((_QWORD *)this + 13),
                a2,
                COERCE_LONG_DOUBLE((unsigned __int128)0),
                v2,
                v2);
        v15 = v7 + (float)((float)(v9 - v7) * v14);
        v16 = v8 + (float)((float)(v13 - v8) * v14);
        v17 = sinf(v14 * 1.57);
        (*(void (__fastcall **)(#1305 *, float))(*(_QWORD *)this + 40LL))(this, v12 + (float)((float)(1.0 - v12) * v17));
        DisplayObject::setXY(this, v15, v16);
        v18 = *((float *)this + 34) + v3;
        *((float *)this + 34) = v18;
        return v18 > (float)(*((float *)this + 36) + *((float *)this + 37));
      }
      else
      {
        *((float *)this + 35) = v5 - v3;
        return 0;
      }
    }

}; // end class FlyParticle
