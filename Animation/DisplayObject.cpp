class DisplayObject
{
public:

    __int64 __fastcall DisplayObject::DisplayObject(__int64 a1)
    {
      DataLoaderShader *v2; // x21
    
      *(_QWORD *)a1 = off_100475E20;
      v2 = (DataLoaderShader *)(a1 + 16);
      ColorTransform::ColorTransform(a1 + 9);
      Matrix2x3::Matrix2x3(v2);
      *(_DWORD *)(a1 + 60) = 0;
      *(_BYTE *)(a1 + 8) = 1;
      *(_QWORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 56) = -1;
      *(_DWORD *)(a1 + 40) = 0;
      return a1;
    }

    __int64 __fastcall DisplayObject::~DisplayObject(__int64 a1)
    {
      __int64 v2; // x0
    
      *(_QWORD *)a1 = off_100475E20;
      v2 = *(_QWORD *)(a1 + 48);
      if ( v2 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 184LL))(v2, *(unsigned int *)(a1 + 56));
      *(_DWORD *)(a1 + 60) = 0;
      *(_BYTE *)(a1 + 8) = 1;
      *(_QWORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 56) = -1;
      *(_DWORD *)(a1 + 40) = 0;
      Matrix2x3::~Matrix2x3((DataLoaderShader *)(a1 + 16));
      ColorTransform::~ColorTransform();
      return a1;
    }

    __int64 __fastcall DisplayObject::~DisplayObject(__int64 a1)
    {
      DisplayObject::~DisplayObject(a1);
      return a1;
    }

    void __fastcall DisplayObject::~DisplayObject(void *a1)
    {
      DisplayObject::~DisplayObject((__int64)a1);
      operator delete(a1);
    }

    __int64 __fastcall DisplayObject::setX(__int64 this, float a2)
    {
      *(float *)(this + 32) = a2;
      return this;
    }

    __int64 __fastcall DisplayObject::setY(__int64 result, float a2)
    {
      *(float *)(result + 36) = a2;
      return result;
    }

    __int64 __fastcall DisplayObject::setXY(__int64 result, float a2, float a3)
    {
      *(float *)(result + 32) = a2;
      *(float *)(result + 36) = a3;
      return result;
    }

    float __fastcall DisplayObject::setPixelSnappedXY(__int64 a1, float a2, float a3)
    {
      float result; // s0
    
      result = floorf(a2);
      *(float *)(a1 + 32) = result;
      *(float *)(a1 + 36) = floorf(a3);
      return result;
    }

    __int64 __fastcall DisplayObject::setScale(__int64 result, float a2)
    {
      *(float *)(result + 16) = a2;
      *(float *)(result + 28) = a2;
      return result;
    }

    __int64 __fastcall DisplayObject::setScaleX(__int64 result, float a2)
    {
      *(float *)(result + 16) = a2;
      return result;
    }

    __int64 __fastcall DisplayObject::setScaleY(__int64 result, float a2)
    {
      *(float *)(result + 28) = a2;
      return result;
    }

    float __fastcall DisplayObject::getX(__int64 a1)
    {
      return *(float *)(a1 + 32);
    }

    __int64 __fastcall DisplayObject::setGrayOut(__int64 result, int a2)
    {
      int v2; // w8
      unsigned int v3; // w9
      int v4; // w8
    
      v2 = *(_DWORD *)(result + 40);
      v3 = v2 & 0xFFFFFFF8;
      v4 = v2 | 7;
      if ( !a2 )
        v4 = v3;
      *(_DWORD *)(result + 40) = v4;
      return result;
    }

    __int64 __fastcall DisplayObject::enableRenderConfigBits(__int64 result, int a2)
    {
      *(_DWORD *)(result + 40) |= a2;
      return result;
    }

    __int64 __fastcall DisplayObject::disableRenderConfigBits(__int64 result, int a2)
    {
      *(_DWORD *)(result + 40) &= ~a2;
      return result;
    }

    float __fastcall DisplayObject::getY(__int64 a1)
    {
      return *(float *)(a1 + 36);
    }

    __int64 __fastcall DisplayObject::rotate(__int64 a1, float a2)
    {
      return Matrix2x3::rotate((DataLoaderShader *)(a1 + 16), a2, 1.0, 1.0);
    }

    __int64 __fastcall DisplayObject::rotate(__int64 a1, float a2, float a3, float a4)
    {
      return Matrix2x3::rotate((DataLoaderShader *)(a1 + 16), a2, a3, a4);
    }

    Rect *__fastcall DisplayObject::getBounds(__int64 a1, const Sprite *a2, Rect *a3)
    {
      Stage *Instance; // x0
      char v7; // w22
      int v8; // w23
    
      if ( !a3 )
        __assert_rtn(
          "getBounds",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/common/titan/flash/DisplayObject.cpp",
          99,
          "pTargetRect != NULL");
      Instance = (Stage *)Stage::getInstance((Stage *)a1);
      v7 = *(_BYTE *)(a1 + 8);
      *(_BYTE *)(a1 + 8) = 1;
      v8 = *(_DWORD *)(a1 + 40);
      Stage::calculateDisplayObjectBounds(Instance, (DisplayObject *)a1, a2, a3);
      *(_DWORD *)(a1 + 40) = v8;
      *(_BYTE *)(a1 + 8) = v7;
      return a3;
    }

    Rect *__fastcall DisplayObject::getGlobalBounds(Stage *a1, Rect *a2)
    {
      const Sprite *v4; // x1
    
      v4 = *(const Sprite **)(Stage::getInstance(a1) + 176LL);
      return DisplayObject::getBounds((__int64)a1, v4, a2);
    }

    __int64 __fastcall DisplayObject::localToGlobal(Stage *a1, float *a2, float *a3, float a4, float a5)
    {
      Stage *Instance; // x0
    
      Instance = (Stage *)Stage::getInstance(a1);
      return Stage::localToGlobal(Instance, a1, a4, a5, a2, a3);
    }

    __int64 __fastcall DisplayObject::globalToLocal(Stage *a1, float *a2, float *a3, float a4, float a5)
    {
      Stage *Instance; // x0
    
      Instance = (Stage *)Stage::getInstance(a1);
      return Stage::globalToLocal(Instance, a1, a4, a5, a2, a3);
    }

    void __fastcall DisplayObject::removedFromStage(Multitouch *this)
    {
      ;
    }

    void __fastcall DisplayObject::setSize(__int64 a1, float a2, float a3)
    {
      Stage *v6; // x0
      Stage *Instance; // x0
      char v8; // w20
      int v9; // w21
      float v10; // s10
      long double Height; // q0
      float v12; // s2
      float v13; // s1
      float v14; // s0
      Rect v15[2]; // [xsp+0h] [xbp-50h] BYREF
    
      v6 = (Stage *)Rect::Rect(v15);
      Instance = (Stage *)Stage::getInstance(v6);
      v8 = *(_BYTE *)(a1 + 8);
      *(_BYTE *)(a1 + 8) = 1;
      v9 = *(_DWORD *)(a1 + 40);
      Stage::calculateDisplayObjectBounds(Instance, (DisplayObject *)a1, 0, v15);
      *(_DWORD *)(a1 + 40) = v9;
      *(_BYTE *)(a1 + 8) = v8;
      v10 = COERCE_FLOAT(COERCE_UNSIGNED_INT128(Rect::getWidth(v15)));
      Height = Rect::getHeight(v15);
      v12 = *(float *)&Height;
      v13 = 1.0;
      v14 = 1.0;
      if ( v10 > 0.0 )
        v14 = a2 / v10;
      if ( v12 > 0.0 )
        v13 = a3 / v12;
      Matrix2x3::scaleMultiply((DataLoaderShader *)(a1 + 16), v14, v13);
      Rect::~Rect(v15);
    }

    __int64 __fastcall DisplayObject::removeFromParent(Multitouch *this)
    {
      __int64 result; // x0
    
      result = *((_QWORD *)this + 6);
      if ( result )
        return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)result + 184LL))(
                 result,
                 *((unsigned int *)this + 14));
      return result;
    }

    long double __fastcall DisplayObject::getWidth(__int64 a1)
    {
      Stage *v2; // x0
      Stage *Instance; // x0
      char v4; // w20
      int v5; // w21
      long double Width; // q8
      Rect v8[2]; // [xsp+0h] [xbp-40h] BYREF
    
      v2 = (Stage *)Rect::Rect(v8);
      Instance = (Stage *)Stage::getInstance(v2);
      v4 = *(_BYTE *)(a1 + 8);
      *(_BYTE *)(a1 + 8) = 1;
      v5 = *(_DWORD *)(a1 + 40);
      Stage::calculateDisplayObjectBounds(Instance, (DisplayObject *)a1, 0, v8);
      *(_DWORD *)(a1 + 40) = v5;
      *(_BYTE *)(a1 + 8) = v4;
      Width = Rect::getWidth(v8);
      Rect::~Rect(v8);
      return Width;
    }

    long double __fastcall DisplayObject::getHeight(Multitouch *this)
    {
      Stage *v2; // x0
      Stage *Instance; // x0
      char v4; // w20
      int v5; // w21
      long double Height; // q8
      Rect v8[2]; // [xsp+0h] [xbp-40h] BYREF
    
      v2 = (Stage *)Rect::Rect(v8);
      Instance = (Stage *)Stage::getInstance(v2);
      v4 = *((_BYTE *)this + 8);
      *((_BYTE *)this + 8) = 1;
      v5 = *((_DWORD *)this + 10);
      Stage::calculateDisplayObjectBounds(Instance, this, 0, v8);
      *((_DWORD *)this + 10) = v5;
      *((_BYTE *)this + 8) = v4;
      Height = Rect::getHeight(v8);
      Rect::~Rect(v8);
      return Height;
    }

    void __fastcall DisplayObject::setInteractiveRecursive(Multitouch *this)
    {
      ;
    }

    __int64 __fastcall DisplayObject::setVisibleRecursive(__int64 this, char a2)
    {
      *(_BYTE *)(this + 8) = a2;
      return this;
    }

    __int64 __fastcall DisplayObject::setHeight(Multitouch *this, float a2)
    {
      float v4; // s0
      float v5; // s1
    
      v4 = (*(float (__fastcall **)(Multitouch *))(*(_QWORD *)this + 96LL))(this);
      if ( v4 <= 0.0 )
        v5 = 1.0;
      else
        v5 = a2 / v4;
      return Matrix2x3::scaleMultiply((Multitouch *)((char *)this + 16), 1.0, v5);
    }

    __int64 __fastcall DisplayObject::setWidth(Multitouch *this, float a2)
    {
      float v4; // s0
      float v5; // s0
    
      v4 = (*(float (__fastcall **)(Multitouch *))(*(_QWORD *)this + 88LL))(this);
      if ( v4 <= 0.0 )
        v5 = 1.0;
      else
        v5 = a2 / v4;
      return Matrix2x3::scaleMultiply((Multitouch *)((char *)this + 16), v5, 1.0);
    }

    __int64 __fastcall DisplayObject::isMovieClip(Multitouch *this)
    {
      return 0;
    }

    __int64 __fastcall DisplayObject::isTextField(Multitouch *this)
    {
      return 0;
    }

    __int64 DisplayObject::isSprite()
    {
      return 0;
    }

    float __fastcall DisplayObject::setAlpha(__int64 a1, float a2)
    {
      return ColorTransform::setAlpha(a1 + 9, a2);
    }

    float __fastcall DisplayObject::getAlpha(__int64 a1)
    {
      return (float)*(unsigned __int8 *)(a1 + 12) / 255.0;
    }

    __int64 __fastcall DisplayObject::setBlendMode(__int64 result, __int16 a2)
    {
      *(_DWORD *)(result + 40) = ((*(_DWORD *)(result + 40) | 0xFFFFFE3F) ^ 0x1C0) & *(_DWORD *)(result + 40) | a2 & 0x1C0;
      return result;
    }

    __int64 DisplayObject::isShape()
    {
      return 0;
    }

    float __fastcall DisplayObject::getScaleX(__int64 a1)
    {
      return *(float *)(a1 + 16);
    }

    float __fastcall DisplayObject::getScaleY(__int64 a1)
    {
      return *(float *)(a1 + 28);
    }

    __int64 __fastcall DisplayObject::getRenderConfigBits(__int64 a1)
    {
      return *(unsigned int *)(a1 + 40);
    }

}; // end class DisplayObject
