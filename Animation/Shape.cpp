class Shape
{
public:

    void __fastcall Shape::Shape(Shape *this, int a2, int a3)
    {
      __int64 v6; // x8
      bool v7; // cf
      __int64 v8; // x8
      __int64 v9; // x0
      _QWORD *v10; // x21
      __int64 v11; // x23
      _QWORD *v12; // x23
      unsigned __int64 v13; // x24
      __int64 v14; // x0
      __int64 v15; // x0
      __int64 v16; // x21
      __int64 v17; // x9
      int v18; // w24
      __int64 v19; // x25
      __int64 v20; // x26
    
      DisplayObject::DisplayObject((__int64)this);
      *(_QWORD *)this = off_100476618;
      *((_QWORD *)this + 9) = 0;
      *((_DWORD *)this + 16) = 0;
      if ( a3 )
      {
        v6 = 24LL * a2;
        v7 = __CFADD__(v6, 16);
        v8 = v6 + 16;
        if ( v7 )
          v8 = -1;
        if ( is_mul_ok(a2, 0x18u) )
          v9 = v8;
        else
          v9 = -1;
        v10 = (_QWORD *)operator new[](v9);
        *v10 = 24;
        v10[1] = a2;
        if ( a2 )
        {
          v11 = 0;
          do
          {
            ShapeDrawBitmapCommand::ShapeDrawBitmapCommand((ShapeDrawBitmapCommand *)&v10[v11 + 2]);
            v11 += 3;
          }
          while ( 3LL * a2 != v11 );
        }
        v12 = v10 + 2;
        *((_QWORD *)this + 9) = v10 + 2;
        v13 = 4 * a2;
        if ( is_mul_ok(v13, 0xCu) )
          v14 = 12 * v13;
        else
          v14 = -1;
        v15 = operator new[](v14);
        v16 = v15;
        if ( a2 )
        {
          v17 = v15;
          do
          {
            *(_DWORD *)v17 = 0;
            *(_QWORD *)(v17 + 4) = 0;
            v17 += 12;
          }
          while ( v17 != v15 + 12 * v13 );
          if ( a2 >= 1 )
          {
            v18 = 0;
            v19 = 0;
            v20 = 0;
            while ( 1 )
            {
              ShapeDrawBitmapCommand::setData(&v12[v19], v16 + 12LL * v18, 4);
              if ( ++v20 >= a2 )
                break;
              v19 += 3;
              v18 += 4;
              v12 = (_QWORD *)*((_QWORD *)this + 9);
            }
          }
        }
      }
      *((_DWORD *)this + 16) = a2;
    }

    void __fastcall Shape::Shape(Shape *this, int a2, int a3)
    {
      Shape::Shape(this, a2, a3);
    }

    void __fastcall Shape::~Shape(DataLoaderFont *this)
    {
      *(_QWORD *)this = off_100476618;
      *((_QWORD *)this + 9) = 0;
      *((_DWORD *)this + 16) = 0;
      DisplayObject::~DisplayObject((__int64)this);
    }

    void __fastcall Shape::~Shape(DataLoaderFont *this)
    {
      *(_QWORD *)this = off_100476618;
      *((_QWORD *)this + 9) = 0;
      *((_DWORD *)this + 16) = 0;
      DisplayObject::~DisplayObject((__int64)this);
    }

    void __fastcall Shape::~Shape(DataLoaderFont *this)
    {
      *(_QWORD *)this = off_100476618;
      *((_QWORD *)this + 9) = 0;
      *((_DWORD *)this + 16) = 0;
      DisplayObject::~DisplayObject((__int64)this);
      operator delete(this);
    }

    void __fastcall Shape::destructOriginal(DataLoaderFont *this)
    {
      __int64 Data; // x0
      __int64 v3; // x22
      __int64 v4; // x8
      __int64 v5; // x21
    
      if ( *((int *)this + 16) >= 1 )
      {
        Data = ShapeDrawBitmapCommand::getData(*((_QWORD *)this + 9));
        if ( Data )
          operator delete[](Data);
      }
      v3 = *((_QWORD *)this + 9);
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
      *((_QWORD *)this + 9) = 0;
    }

    __int64 __fastcall Shape::render(DataLoaderFont *this, DataLoaderShader *a2, BitmapFont *a3, int a4, float a5)
    {
      int v7; // w20
      __int64 v8; // x21
      __int64 v9; // x22
      __int64 v10; // x23
      _BYTE v12[8]; // [xsp+8h] [xbp-58h] BYREF
      _BYTE v13[28]; // [xsp+10h] [xbp-50h] BYREF
      int v14; // [xsp+2Ch] [xbp-34h] BYREF
    
      v14 = a4;
      Matrix2x3::Matrix2x3((Matrix2x3 *)v13, (DataLoaderFont *)((char *)this + 16), a2);
      ColorTransform::ColorTransform(v12, (unsigned __int8 *)this + 9, (unsigned __int8 *)a3, &v14);
      v14 |= *((_DWORD *)this + 10);
      v7 = ShapeDrawBitmapCommand::render(*((_QWORD *)this + 9), v13, v12);
      v8 = *((int *)this + 16);
      if ( (int)v8 >= 2 )
      {
        v9 = 1;
        v10 = 24;
        do
        {
          v7 |= ShapeDrawBitmapCommand::render(*((_QWORD *)this + 9) + v10, v13, v12);
          ++v9;
          v10 += 24;
        }
        while ( v9 < v8 );
      }
      ColorTransform::~ColorTransform();
      Matrix2x3::~Matrix2x3((DataLoaderShader *)v13);
      return v7 & 1;
    }

    __int64 __fastcall Shape::collisionRender(DataLoaderFont *this, DataLoaderShader *a2)
    {
      __int64 v3; // x21
      __int64 v4; // x22
      __int64 v5; // x23
      __int64 v6; // x19
      _BYTE v8[24]; // [xsp+8h] [xbp-48h] BYREF
    
      Matrix2x3::Matrix2x3((Matrix2x3 *)v8, (DataLoaderFont *)((char *)this + 16), a2);
      if ( (ShapeDrawBitmapCommand::collisionRender(*((_QWORD *)this + 9), v8, (char *)this + 9) & 1) != 0 )
      {
    LABEL_7:
        v6 = 1;
        goto LABEL_8;
      }
      v3 = *((int *)this + 16);
      if ( (int)v3 >= 2 )
      {
        v4 = 1;
        v5 = 24;
        while ( !(unsigned int)ShapeDrawBitmapCommand::collisionRender(*((_QWORD *)this + 9) + v5, v8, (char *)this + 9) )
        {
          ++v4;
          v5 += 24;
          if ( v4 >= v3 )
            goto LABEL_6;
        }
        goto LABEL_7;
      }
    LABEL_6:
      v6 = 0;
    LABEL_8:
      Matrix2x3::~Matrix2x3((DataLoaderShader *)v8);
      return v6;
    }

    __int64 __fastcall Shape::getDrawCommandAt(DataLoaderFont *this, int a2)
    {
      return *((_QWORD *)this + 9) + 24LL * a2;
    }

    __int64 __fastcall Shape::isShape(DataLoaderFont *this)
    {
      return 1;
    }

    __int64 __fastcall Shape::createShape(__int64 a1)
    {
      __int64 v2; // x20
    
      v2 = operator new(80);
      DisplayObject::DisplayObject(v2);
      *(_QWORD *)v2 = off_100476618;
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(v2 + 72) = *(_QWORD *)(a1 + 16);
      return v2;
    }

}; // end class Shape
