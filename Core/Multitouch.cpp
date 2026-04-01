class Multitouch
{
public:

    id Multitouch::getTouchCount()
    {
      return objc_msgSend((id)touchScreen, "getTouchCount");
    }

    float __fastcall Multitouch::getTouchWithId(__int64 a1, int *a2, int *a3, __int64 a4)
    {
      objc_msgSend((id)touchScreen, "getTouchWithId:x:y:tID:", a1, a2, a3, a4);
      return applyScreenOrientationAndScaleToCoordinates(a2, a3);
    }

    id __fastcall Multitouch::touchConsumed(__int64 a1)
    {
      return objc_msgSend((id)touchScreen, "touchConsumed:", a1);
    }

    id Multitouch::clearConsumed()
    {
      return objc_msgSend((id)touchScreen, "clearConsumed");
    }

}; // end class Multitouch
