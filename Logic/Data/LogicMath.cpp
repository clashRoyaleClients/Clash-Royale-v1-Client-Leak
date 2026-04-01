class LogicMath
{
public:

    __int64 __fastcall LogicMath::max(__int64 result, int a2)
    {
      if ( (int)result <= a2 )
        return (unsigned int)a2;
      else
        return (unsigned int)result;
    }

    __int64 __fastcall LogicMath::min(__int64 result, int a2)
    {
      if ( (int)result >= a2 )
        return (unsigned int)a2;
      else
        return (unsigned int)result;
    }

    __int64 __fastcall LogicMath::clamp(NewsItem *this, int a2, int a3)
    {
      unsigned int v3; // w8
    
      if ( (int)this >= a3 )
        v3 = a3;
      else
        v3 = (unsigned int)this;
      if ( (int)this > a2 )
        return v3;
      else
        return (unsigned int)a2;
    }

    __int64 __fastcall LogicMath::abs(__int64 this)
    {
      if ( (int)this >= 0 )
        return (unsigned int)this;
      else
        return (unsigned int)-(int)this;
    }

    __int64 __fastcall LogicMath::sin(NewsItem *this, int a2)
    {
      return (unsigned int)((int)(LogicMath::sin(this, a2) * a2) / 1024);
    }

    __int64 __fastcall LogicMath::sin(NewsItem *this)
    {
      int v1; // w8
      int v3; // w10
      int v4; // w8
    
      v1 = (int)this % 360 + ((int)this % 360 < 0 ? 0x168 : 0);
      if ( v1 > 179 )
      {
        v3 = v1 - 180;
        v4 = 360 - v1;
        if ( v3 <= 90 )
          v4 = v3;
        return -LogicMath::SIN_TABLE[v4];
      }
      else
      {
        if ( v1 > 90 )
          v1 = 180 - v1;
        return LogicMath::SIN_TABLE[v1];
      }
    }

    __int64 __fastcall LogicMath::cos(NewsItem *this, int a2)
    {
      return (unsigned int)((int)(LogicMath::sin((NewsItem *)(unsigned int)((_DWORD)this + 90)) * a2) / 1024);
    }

    __int64 __fastcall LogicMath::cos(NewsItem *this)
    {
      return LogicMath::sin((NewsItem *)(unsigned int)((_DWORD)this + 90));
    }

    __int64 __fastcall LogicMath::sqrt(NewsItem *this)
    {
      unsigned int v2; // w8
      int v3; // w8
      int v4; // w8
      int v5; // w8
    
      if ( (int)this < 0x10000 )
      {
        if ( (int)this < 256 )
        {
          if ( ((unsigned int)this & 0x80000000) != 0 )
            return 0xFFFFFFFFLL;
          else
            return (unsigned int)(LogicMath::SQRT_TABLE[(int)this] >> 4);
        }
        else
        {
          if ( (int)this < 4096 )
          {
            if ( (int)this < 1024 )
              v2 = LogicMath::SQRT_TABLE[(int)this >> 2] >> 3;
            else
              v2 = LogicMath::SQRT_TABLE[(int)this >> 4] >> 2;
          }
          else if ( (int)this < 0x4000 )
          {
            v2 = LogicMath::SQRT_TABLE[(int)this >> 6] >> 1;
          }
          else
          {
            v2 = LogicMath::SQRT_TABLE[(int)this >> 8];
          }
          if ( (int)((v2 + 1) * (v2 + 1)) > (int)this )
            return v2;
          else
            return v2 + 1;
        }
      }
      else
      {
        if ( (int)this < 0x1000000 )
        {
          if ( (int)this < 0x100000 )
          {
            if ( (int)this < 0x40000 )
              v3 = 2 * LogicMath::SQRT_TABLE[(int)this >> 10];
            else
              v3 = 4 * LogicMath::SQRT_TABLE[(int)this >> 12];
          }
          else if ( (int)this < 0x400000 )
          {
            v3 = 8 * LogicMath::SQRT_TABLE[(int)this >> 14];
          }
          else
          {
            v3 = 16 * LogicMath::SQRT_TABLE[(int)this >> 16];
          }
          v5 = (v3 | 1) + (int)this / v3;
        }
        else
        {
          if ( (int)this < 0x10000000 )
          {
            if ( (int)this < 0x4000000 )
              v4 = 32 * LogicMath::SQRT_TABLE[(int)this >> 18];
            else
              v4 = LogicMath::SQRT_TABLE[(int)this >> 20] << 6;
          }
          else if ( (int)this < 0x40000000 )
          {
            v4 = LogicMath::SQRT_TABLE[(int)this >> 22] << 7;
          }
          else
          {
            if ( (_DWORD)this == 0x7FFFFFFF )
              return 0xFFFF;
            v4 = LogicMath::SQRT_TABLE[(int)this >> 24] << 8;
          }
          v5 = (int)this / (((v4 | 1) + (int)this / v4) >> 1) + (((v4 | 1) + (int)this / v4) >> 1) + 1;
        }
        return (v5 >> 1) - (unsigned int)((v5 >> 1) * (v5 >> 1) > (int)this);
      }
    }

    __int64 __fastcall LogicMath::getAngle(NewsItem *this, int a2)
    {
      int v3; // w8
      int v4; // w9
      int v5; // w8
    
      if ( !(a2 | (unsigned int)this) )
        return 0;
      if ( (int)this >= 1 && (a2 & 0x80000000) == 0 )
      {
        if ( a2 >= (int)this )
          return 90 - LogicMath::ATAN_TABLE[((_DWORD)this << 7) / a2];
        else
          return LogicMath::ATAN_TABLE[(a2 << 7) / (int)this];
      }
      if ( (int)this >= 0 )
        v3 = (int)this;
      else
        v3 = -(int)this;
      if ( (int)this <= 0 && a2 >= 1 )
      {
        if ( v3 >= a2 )
          return 180 - LogicMath::ATAN_TABLE[(a2 << 7) / v3];
        else
          return LogicMath::ATAN_TABLE[(v3 << 7) / a2] + 90;
      }
      if ( a2 >= 0 )
        v4 = a2;
      else
        v4 = -a2;
      if ( ((unsigned int)this & 0x80000000) != 0 && a2 <= 0 )
      {
        if ( v4 < v3 )
          return LogicMath::ATAN_TABLE[(v4 << 7) / v3] + 180;
        if ( v4 )
          return 270 - LogicMath::ATAN_TABLE[(v3 << 7) / v4];
        return 0;
      }
      if ( v3 < v4 )
        return LogicMath::ATAN_TABLE[(v3 << 7) / v4] + 270;
      if ( !v3 )
        return 0;
      v5 = (int)(360 - LogicMath::ATAN_TABLE[(v4 << 7) / v3]) % 360;
      if ( v5 >= 0 )
        return (unsigned int)v5;
      else
        return (unsigned int)(v5 + 360);
    }

    __int64 __fastcall LogicMath::getRotatedX(NewsItem *this, int a2, NewsItem *a3)
    {
      int v5; // w21
    
      v5 = LogicMath::sin((NewsItem *)(unsigned int)((_DWORD)a3 + 90)) * (_DWORD)this;
      return (unsigned int)((int)(v5 - LogicMath::sin(a3) * a2) >> 10);
    }

    __int64 __fastcall LogicMath::getRotatedY(NewsItem *this, int a2, NewsItem *a3)
    {
      int v3; // w19
      int v5; // w21
    
      v3 = (int)a3;
      v5 = LogicMath::sin(a3) * (_DWORD)this;
      return (unsigned int)((int)(v5 + LogicMath::sin((NewsItem *)(unsigned int)(v3 + 90)) * a2) >> 10);
    }

    __int64 __fastcall LogicMath::getBitsInInteger(NewsItem *this)
    {
      return (unsigned int)(LogicMath::BITS_IN_BYTE[BYTE2(this)]
                          + LogicMath::BITS_IN_BYTE[(unsigned int)this >> 24]
                          + LogicMath::BITS_IN_BYTE[BYTE1(this)]
                          + LogicMath::BITS_IN_BYTE[(unsigned __int8)this]);
    }

}; // end class LogicMath
