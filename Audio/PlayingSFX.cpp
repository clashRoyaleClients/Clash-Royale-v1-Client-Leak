class PlayingSFX
{
public:

    bool __fastcall PlayingSFX::update(#1318 *this, float a2)
    {
      #1318 *v3; // x19
      _BOOL8 v4; // x20
      float v5; // s0
      float v6; // s1
      float v7; // s9
      float v8; // s0
      float v9; // s2
      float v10; // s3
      float v11; // s2
      float v12; // s0
      SoundSystem *Instance; // x0
      float v14; // s0
      float v15; // s1
      float v16; // s2
      float v17; // s3
      float v18; // s2
      float v19; // s0
      SoundSystem *v20; // x0
    
      v3 = this;
      if ( *((_BYTE *)this + 48) )
      {
        v4 = 0;
      }
      else
      {
        v5 = *((float *)this + 9) - a2;
        *((float *)this + 9) = v5;
        v4 = v5 < 0.0;
      }
      v6 = *((float *)this + 4);
      v7 = *((float *)this + 5);
      v8 = *((float *)this + 3);
      v9 = v8 - v6;
      if ( (float)(v8 - v6) < 0.0 )
        v9 = -v9;
      if ( v9 > 0.0 )
      {
        v10 = v8 - (float)(v7 * a2);
        if ( v10 <= v6 )
          v10 = *((float *)this + 4);
        v11 = (float)(v7 * a2) + v8;
        if ( v11 >= v6 )
          v11 = *((float *)this + 4);
        if ( v8 < v6 )
          v12 = v11;
        else
          v12 = v10;
        *((float *)this + 3) = v12;
        Instance = (SoundSystem *)SoundSystem::getInstance(this);
        this = (#1318 *)SoundSystem::setChannelVolume(Instance, *((_DWORD *)v3 + 11), *((float *)v3 + 3));
      }
      v14 = *((float *)v3 + 6);
      v15 = *((float *)v3 + 7);
      v16 = v14 - v15;
      if ( (float)(v14 - v15) < 0.0 )
        v16 = -v16;
      if ( v16 > 0.0 )
      {
        v17 = v14 - (float)(v7 * a2);
        if ( v17 <= v15 )
          v17 = *((float *)v3 + 7);
        v18 = (float)(v7 * a2) + v14;
        if ( v18 >= v15 )
          v18 = *((float *)v3 + 7);
        if ( v14 < v15 )
          v19 = v18;
        else
          v19 = v17;
        *((float *)v3 + 6) = v19;
        v20 = (SoundSystem *)SoundSystem::getInstance(this);
        SoundSystem::setChannelPitch(v20, *((_DWORD *)v3 + 11), *((float *)v3 + 6));
      }
      return v4;
    }

}; // end class PlayingSFX
