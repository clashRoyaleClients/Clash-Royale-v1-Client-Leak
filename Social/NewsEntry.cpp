class NewsEntry
{
public:

    void __fastcall NewsEntry::NewsEntry(NewsEntry *this, const AreaEffectObject *a2)
    {
      *((_BYTE *)this + 8) = 0;
      *(_QWORD *)this = a2;
    }

    void __fastcall NewsEntry::~NewsEntry(UpgradeSpellPopup *this)
    {
      *(_QWORD *)this = 0;
      *((_BYTE *)this + 8) = 0;
    }

    void __fastcall NewsEntry::setSeen(ResetAccountMessage ***this, int a2)
    {
      int v3; // w21
    
      if ( a2 && (unsigned int)LogicData::getDataType(*this) == 58 )
      {
        v3 = *((_DWORD *)*this + 25);
        if ( v3 > (int)NewsManager::getLastSeenNewsID((#1306 *)NewsManager::sm_pInstance) )
          NewsManager::setLastSeenNewsID((#1306 *)NewsManager::sm_pInstance, (String *)*((unsigned int *)*this + 25));
      }
    }

}; // end class NewsEntry
