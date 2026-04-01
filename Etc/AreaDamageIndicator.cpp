class AreaDamageIndicator
{
public:

    void __fastcall AreaDamageIndicator::AreaDamageIndicator(
            AreaDamageIndicator *this,
            float a2,
            OutOfSyncMessage *a3,
            float a4,
            float a5)
    {
      #1344 *v10; // x21
      __int64 v11; // x1
    
      *(_QWORD *)this = 0;
      *((_DWORD *)this + 2) = 0;
      v10 = (#1344 *)operator new(160);
      AttackRadiusSprite::AttackRadiusSprite(v10, 0.0, a2, 1.25, 0.0, 0.0);
      *(_QWORD *)this = v10;
      DisplayObject::setXY(v10, a4, a5);
      v11 = *(_QWORD *)this;
      *(_BYTE *)(v11 + 10) = 127;
      *(_BYTE *)(v11 + 11) = 127;
      (*(void (__fastcall **)(OutOfSyncMessage *))(*(_QWORD *)a3 + 160LL))(a3);
    }

}; // end class AreaDamageIndicator
