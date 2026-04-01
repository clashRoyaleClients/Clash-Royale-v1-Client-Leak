class DelayedSFX
{
public:

    void __fastcall DelayedSFX::DelayedSFX(DelayedSFX *this)
    {
      String::String((String *)this);
      String::operator=(this, "");
      *(_QWORD *)((char *)this + 45) = 0;
      *((_QWORD *)this + 4) = 0;
      *((_QWORD *)this + 5) = 0;
      *((_QWORD *)this + 3) = 0;
    }

}; // end class DelayedSFX
