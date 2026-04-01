class AllianceStreamContainer
{
public:

    // attributes: thunk
    void __fastcall AllianceStreamContainer::~AllianceStreamContainer(#1393 *this)
    {
      DropGUIContainer::~DropGUIContainer(this);
    }

    void __fastcall AllianceStreamContainer::~AllianceStreamContainer(#1393 *this)
    {
      DropGUIContainer::~DropGUIContainer(this);
      operator delete(this);
    }

    void __fastcall AllianceStreamContainer::inputFieldOkPressed(#1393 *this, #1321 *a2)
    {
      AllianceStream::sendChatMessage((#1279 **)AllianceStream::sm_pInstance);
    }

}; // end class AllianceStreamContainer
