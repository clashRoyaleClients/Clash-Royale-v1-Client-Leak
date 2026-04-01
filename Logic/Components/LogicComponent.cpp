class LogicComponent
{
public:

    void __fastcall LogicComponent::LogicComponent(LogicComponent *this, GameMode *a2, const char *a3)
    {
      *(_QWORD *)this = off_100460FE0;
      *((_QWORD *)this + 1) = 0;
      Debugger::doAssert((Debugger *)(a2 != 0), (bool)"", a3);
      *((_QWORD *)this + 1) = a2;
    }

    void __fastcall LogicComponent::removeGameObjectReferences(
            Sprite *this,
            const GameMode *a2,
            int a3,
            bool a4,
            GameMode *a5)
    {
      ;
    }

    __int64 __fastcall LogicComponent::destruct(__int64 this)
    {
      *(_QWORD *)(this + 8) = 0;
      return this;
    }

    __int64 __fastcall LogicComponent::getParent(Sprite *this)
    {
      return *((_QWORD *)this + 1);
    }

    __int64 __fastcall LogicComponent::getLogicBattle(GameMode **this)
    {
      return LogicGameObject::getLogicBattle(*(this + 1));
    }

    __int64 __fastcall LogicComponent::getParentCharacter(Sprite *this)
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 88LL))(*((_QWORD *)this + 1)) == 5 )
        return *((_QWORD *)this + 1);
      else
        return 0;
    }

    __int64 __fastcall LogicComponent::getLogicGameObjectManager(GameMode **this)
    {
      return LogicGameObject::getLogicGameObjectManager(*(this + 1));
    }

    void __fastcall LogicComponent::~LogicComponent(Sprite *this)
    {
      ;
    }

    // attributes: thunk
    void __fastcall LogicComponent::~LogicComponent(Sprite *this)
    {
      operator delete(this);
    }

}; // end class LogicComponent
