class Screen
{
public:

    float __fastcall Screen::getDisplayFactor(Screen *a1)
    {
      return (float)(unsigned int)Screen::getHeight(a1) / 768.0;
    }

    __int64 Screen::getWidth()
    {
      int *v0; // x8
    
      if ( (unsigned int)(g_screenOrientation - 1) >= 2 )
        v0 = &heightInPixels;
      else
        v0 = &widthInPixels;
      return (unsigned int)*(float *)v0;
    }

    __int64 Screen::getHeight()
    {
      int *v0; // x8
    
      if ( (unsigned int)(g_screenOrientation - 1) >= 2 )
        v0 = &widthInPixels;
      else
        v0 = &heightInPixels;
      return (unsigned int)*(float *)v0;
    }

    __int64 Screen::getDpiClass()
    {
      double v0; // d0
      float v1; // s0
      __int64 result; // x0
    
      -[UIScreen scale](+[UIScreen mainScreen](&OBJC_CLASS___UIScreen, "mainScreen"), "scale");
      v1 = v0 * 160.0;
      if ( v1 >= 290.0 )
        return 320;
      if ( v1 >= 210.0 )
        return 240;
      result = 160;
      if ( v1 < 150.0 )
        return 120;
      return result;
    }

}; // end class Screen
