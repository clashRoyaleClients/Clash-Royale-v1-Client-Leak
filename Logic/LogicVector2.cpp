class LogicVector2
{
public:

    _DWORD *__fastcall LogicVector2::LogicVector2(_DWORD *result, int a2, int a3)
    {
      *result = a2;
      result[1] = a3;
      return result;
    }

    _QWORD *__fastcall LogicVector2::LogicVector2(_QWORD *result)
    {
      *result = 0;
      return result;
    }

    __int64 __fastcall LogicVector2::getLength(_DWORD *a1)
    {
      int v1; // w10
      int v2; // w8
      unsigned int v3; // w9
      unsigned int v4; // w10
      unsigned int v5; // w8
    
      if ( (unsigned int)(46340 - *a1) > 0x16A08 )
        return LogicMath::sqrt((NewsItem *)0x7FFFFFFF);
      v1 = a1[1];
      if ( (unsigned int)(46340 - v1) > 0x16A08 )
        return LogicMath::sqrt((NewsItem *)0x7FFFFFFF);
      v2 = *a1 * *a1;
      v3 = v2 ^ 0x7FFFFFFF;
      v4 = v1 * v1;
      v5 = v4 + v2;
      if ( v4 >= v3 )
        return LogicMath::sqrt((NewsItem *)0x7FFFFFFF);
      else
        return LogicMath::sqrt((NewsItem *)v5);
    }

    __int64 __fastcall LogicVector2::getLengthSquared(int *a1)
    {
      int v1; // w8
      __int64 result; // x0
      int v3; // w10
      int v4; // w8
      unsigned int v5; // w9
      unsigned int v6; // w10
      unsigned int v7; // w8
    
      v1 = *a1;
      if ( (unsigned int)(46340 - *a1) > 0x16A08 )
        return 0x7FFFFFFF;
      v3 = a1[1];
      result = 0x7FFFFFFF;
      if ( (unsigned int)(46340 - v3) <= 0x16A08 )
      {
        v4 = v1 * v1;
        v5 = v4 ^ 0x7FFFFFFF;
        v6 = v3 * v3;
        v7 = v6 + v4;
        if ( v6 >= v5 )
          return 0x7FFFFFFF;
        else
          return v7;
      }
      return result;
    }

    __int64 __fastcall LogicVector2::getDistanceSquaredHelper(_DWORD *a1, int a2, int a3)
    {
      int v3; // w8
      int v4; // w11
      int v6; // w8
      unsigned int v7; // w9
      unsigned int v8; // w8
    
      v3 = a2 - *a1;
      if ( (unsigned int)(v3 + 46340) > 0x16A08 )
        return 0x7FFFFFFF;
      v4 = a3 - a1[1];
      if ( (unsigned int)(v4 + 46340) > 0x16A08 )
        return 0x7FFFFFFF;
      v6 = v3 * v3;
      v7 = v6 ^ 0x7FFFFFFF;
      v8 = v4 * v4 + v6;
      if ( v4 * v4 >= v7 )
        return 0x7FFFFFFF;
      else
        return v8;
    }

    _DWORD *__fastcall LogicVector2::set(_DWORD *result, int a2, int a3)
    {
      *result = a2;
      result[1] = a3;
      return result;
    }

    __int64 __fastcall LogicVector2::normalize(int *a1, int a2)
    {
      __int64 result; // x0
      int v5; // w9
    
      result = LogicVector2::getLength(a1);
      if ( (_DWORD)result )
      {
        v5 = a1[1];
        *a1 = *a1 * a2 / (int)result;
        a1[1] = v5 * a2 / (int)result;
      }
      return result;
    }

    __int64 __fastcall LogicVector2::getAngle(unsigned int *a1)
    {
      return LogicMath::getAngle((NewsItem *)*a1, a1[1]);
    }

    __int64 __fastcall LogicVector2::getDistance(
            LogicCompleteTutorialHomeCommand *a1,
            const LogicCompleteTutorialHomeCommand *a2)
    {
      NewsItem *DistanceSquared; // x0
    
      DistanceSquared = (NewsItem *)LogicVector2::getDistanceSquared(a1, a2);
      return LogicMath::sqrt(DistanceSquared);
    }

    __int64 __fastcall LogicVector2::getDistanceSquared(
            LogicCompleteTutorialHomeCommand *this,
            const LogicCompleteTutorialHomeCommand *a2)
    {
      int v2; // w8
      __int64 result; // x0
      int v4; // w10
      int v5; // w8
      unsigned int v6; // w9
      unsigned int v7; // w10
      unsigned int v8; // w8
    
      v2 = *(_DWORD *)a2 - *(_DWORD *)this;
      if ( (unsigned int)(v2 + 46340) > 0x16A08 )
        return 0x7FFFFFFF;
      v4 = *((_DWORD *)a2 + 1) - *((_DWORD *)this + 1);
      result = 0x7FFFFFFF;
      if ( (unsigned int)(v4 + 46340) <= 0x16A08 )
      {
        v5 = v2 * v2;
        v6 = v5 ^ 0x7FFFFFFF;
        v7 = v4 * v4;
        v8 = v7 + v5;
        if ( v7 >= v6 )
          return 0x7FFFFFFF;
        else
          return v8;
      }
      return result;
    }

    __int64 __fastcall LogicVector2::getDistance(LogicCompleteTutorialHomeCommand *this, int a2, int a3)
    {
      int v3; // w8
      int v4; // w10
      int v5; // w8
      unsigned int v6; // w9
      unsigned int v7; // w10
      unsigned int v8; // w8
    
      v3 = a2 - *(_DWORD *)this;
      if ( (unsigned int)(v3 + 46340) > 0x16A08 )
        return LogicMath::sqrt((NewsItem *)0x7FFFFFFF);
      v4 = a3 - *((_DWORD *)this + 1);
      if ( (unsigned int)(v4 + 46340) > 0x16A08 )
        return LogicMath::sqrt((NewsItem *)0x7FFFFFFF);
      v5 = v3 * v3;
      v6 = v5 ^ 0x7FFFFFFF;
      v7 = v4 * v4;
      v8 = v7 + v5;
      if ( v7 >= v6 )
        return LogicMath::sqrt((NewsItem *)0x7FFFFFFF);
      else
        return LogicMath::sqrt((NewsItem *)v8);
    }

    bool __fastcall LogicVector2::isInDistanceXY(_DWORD *a1, int a2, int a3, int a4)
    {
      int v4; // w9
      __int64 v5; // x8
      int v6; // w10
      int v8; // w8
      int v10; // w9
      unsigned int v11; // w11
      unsigned int v12; // w10
      int v13; // w9
    
      v4 = a2 - *a1;
      if ( v4 > a4 )
        return 0;
      v5 = 0;
      if ( v4 < -a4 )
        return v5;
      v6 = a3 - a1[1];
      if ( v6 > a4 || v6 < -a4 )
        return 0;
      v8 = 0x7FFFFFFF;
      if ( (unsigned int)(v4 + 46340) <= 0x16A08 && (unsigned int)(v6 + 46340) <= 0x16A08 )
      {
        v10 = v4 * v4;
        v11 = v10 ^ 0x7FFFFFFF;
        v12 = v6 * v6;
        v13 = v12 + v10;
        if ( v12 >= v11 )
          v8 = 0x7FFFFFFF;
        else
          v8 = v13;
      }
      return v8 <= a4 * a4;
    }

    bool __fastcall LogicVector2::isInDistance(_DWORD *a1, int *a2, int a3)
    {
      return LogicVector2::isInDistanceXY(a1, *a2, a2[1], a3);
    }

    __int64 __fastcall LogicVector2::getDistanceSquaredTo(_DWORD *a1, int a2, int a3)
    {
      int v3; // w8
      __int64 result; // x0
      int v5; // w10
      int v6; // w8
      unsigned int v7; // w9
      unsigned int v8; // w10
      unsigned int v9; // w8
    
      v3 = a2 - *a1;
      if ( (unsigned int)(v3 + 46340) > 0x16A08 )
        return 0x7FFFFFFF;
      v5 = a3 - a1[1];
      result = 0x7FFFFFFF;
      if ( (unsigned int)(v5 + 46340) <= 0x16A08 )
      {
        v6 = v3 * v3;
        v7 = v6 ^ 0x7FFFFFFF;
        v8 = v5 * v5;
        v9 = v8 + v6;
        if ( v8 >= v7 )
          return 0x7FFFFFFF;
        else
          return v9;
      }
      return result;
    }

    __int64 __fastcall LogicVector2::rotate(unsigned int *a1, NewsItem *a2)
    {
      unsigned int RotatedX; // w21
      __int64 result; // x0
    
      RotatedX = LogicMath::getRotatedX((NewsItem *)*a1, a1[1], a2);
      result = LogicMath::getRotatedY((NewsItem *)*a1, a1[1], a2);
      *a1 = RotatedX;
      a1[1] = result;
      return result;
    }

    _QWORD *__fastcall LogicVector2::destruct(_QWORD *result)
    {
      *result = 0;
      return result;
    }

}; // end class LogicVector2
