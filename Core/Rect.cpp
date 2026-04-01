class Rect
{
public:

    _QWORD *__fastcall Rect::Rect(_QWORD *result)
    {
      *result = 0;
      result[1] = 0;
      return result;
    }

    __int64 __fastcall Rect::Rect(__int64 result, float a2, float a3, float a4, float a5)
    {
      *(_QWORD *)result = 0;
      *(float *)result = a2;
      *(float *)(result + 4) = a3;
      *(float *)(result + 8) = a4;
      *(float *)(result + 12) = a5;
      return result;
    }

    _QWORD *__fastcall Rect::~Rect(_QWORD *result)
    {
      *result = 0;
      result[1] = 0;
      return result;
    }

    float __fastcall Rect::getWidth(float *a1)
    {
      return a1[2] - *a1;
    }

    float __fastcall Rect::getHeight(__int64 a1)
    {
      return *(float *)(a1 + 12) - *(float *)(a1 + 4);
    }

    float __fastcall Rect::getMidX(float *a1)
    {
      return *a1 + (float)((float)(a1[2] - *a1) * 0.5);
    }

    float __fastcall Rect::getMidY(__int64 a1)
    {
      return *(float *)(a1 + 4) + (float)((float)(*(float *)(a1 + 12) - *(float *)(a1 + 4)) * 0.5);
    }

    bool __fastcall Rect::containsPoint(DataLoaderFlash *this, float a2, float a3)
    {
      return *(float *)this <= a2 && *((float *)this + 1) <= a3 && *((float *)this + 2) > a2 && *((float *)this + 3) > a3;
    }

}; // end class Rect
