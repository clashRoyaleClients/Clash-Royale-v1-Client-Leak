class StageSprite
{
public:

    void __fastcall StageSprite::StageSprite(StageSprite *this, int a2)
    {
      Sprite::Sprite((__int64)this, a2);
      *(_QWORD *)this = off_100476840;
    }

    void __fastcall StageSprite::~StageSprite(#1336 *this)
    {
      *(_QWORD *)this = off_100476840;
      Sprite::~Sprite((__int64)this);
    }

    void __fastcall StageSprite::~StageSprite(#1336 *this)
    {
      *(_QWORD *)this = off_100476840;
      Sprite::~Sprite((__int64)this);
      operator delete(this);
    }

}; // end class StageSprite
