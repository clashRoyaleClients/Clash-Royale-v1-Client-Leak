class LogicDeviceLinkCodeResponseMessage
{
public:

    __int64 __fastcall LogicDeviceLinkCodeResponseMessage::getLinkCode(SupercellSWF *this)
    {
      return (__int64)this + 72;
    }

    __int64 __fastcall LogicDeviceLinkCodeResponseMessage::getErrorCode(__int64 a1)
    {
      return *(unsigned int *)(a1 + 100);
    }

    __int64 __fastcall LogicDeviceLinkCodeResponseMessage::getCodeValidSeconds(__int64 a1)
    {
      return *(unsigned int *)(a1 + 96);
    }

}; // end class LogicDeviceLinkCodeResponseMessage
