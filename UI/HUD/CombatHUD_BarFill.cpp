class CombatHUD::BarFill
{
public:

    void __fastcall CombatHUD::BarFill::set(__int64 a1, float a2)
    {
      Rect v4; // [xsp+0h] [xbp-30h] BYREF
      float v5; // [xsp+8h] [xbp-28h]
    
      (*(void (__fastcall **)(_QWORD, float))(**(_QWORD **)(a1 + 8) + 48LL))(
        *(_QWORD *)(a1 + 8),
        (float)((float)((float)(*(float *)(a1 + 32) - *(float *)(a1 + 36)) * a2) / *(float *)(a1 + 24))
      * *(float *)(a1 + 28));
      if ( *(_QWORD *)(a1 + 16) )
      {
        Rect::Rect(&v4);
        DisplayObject::getBounds(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), &v4);
        DisplayObject::setX(*(#1249 **)(a1 + 16), v5);
        Rect::~Rect(&v4);
      }
      *(float *)(a1 + 40) = a2;
    }

    __int64 __fastcall CombatHUD::BarFill::BarFill(__int64 a1, __int64 a2, __int64 a3, float a4)
    {
      *(_QWORD *)a1 = off_10046CAF8;
      *(_DWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(float *)(a1 + 32) = a4;
      *(_QWORD *)(a1 + 8) = a2;
      *(float *)(a1 + 24) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
      *(float *)(a1 + 28) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
      if ( a3 )
      {
        *(_QWORD *)(a1 + 16) = a3;
        *(float *)(a1 + 36) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a3 + 88LL))(a3);
      }
      return a1;
    }

    __int64 __fastcall CombatHUD::BarFill::~BarFill(__int64 result)
    {
      *(_QWORD *)result = off_10046CAF8;
      *(_DWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      return result;
    }

    // attributes: thunk
    void __fastcall CombatHUD::BarFill::~BarFill(void *a1)
    {
      operator delete(a1);
    }

}; // end class CombatHUD::BarFill
