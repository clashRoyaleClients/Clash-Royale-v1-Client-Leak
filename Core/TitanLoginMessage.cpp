class TitanLoginMessage
{
public:

    void TitanLoginMessage::~TitanLoginMessage()
    {
      ;
    }

    // attributes: thunk
    void __fastcall TitanLoginMessage::~TitanLoginMessage(void *a1)
    {
      operator delete(a1);
    }

    __int64 TitanLoginMessage::getServiceNodeType()
    {
      return 0;
    }

    __int64 __fastcall TitanLoginMessage::getMessageType(__int64 a1)
    {
      return *(unsigned int *)(a1 + 68);
    }

}; // end class TitanLoginMessage
