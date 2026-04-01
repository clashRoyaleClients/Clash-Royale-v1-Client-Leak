class BubbleSprite
{
public:

    __n128 __fastcall BubbleSprite::fadeOut(#1257 **a1)
    {
      MovieClip *v2; // x20
      int CurrentFrame; // w21
      int v4; // w2
    
      v2 = *a1;
      CurrentFrame = MovieClip::getCurrentFrame(*a1);
      v4 = MovieClip::getTotalFrames(*a1) - 1;
      return MovieClip::gotoAndPlayFrameIndex(v2, CurrentFrame, v4);
    }

}; // end class BubbleSprite
