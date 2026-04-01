class ProfilePicture
{
public:

    void __fastcall ProfilePicture::ProfilePicture(ProfilePicture *this, const #1144 *a2, #1249 *a3)
    {
      Shape::Shape(this, 1, 1);
      *(_QWORD *)this = off_100465850;
      String::String((String *)((char *)this + 88));
      String::String((String *)((char *)this + 112));
      String::String((String *)this + 6);
      ProfilePicture::initializeMembers(this);
      if ( FriendEntry::getProfilePictureUrl(a2) && FriendEntry::getFacebookId(a2) )
      {
        FriendEntry::getProfilePictureUrl(a2);
        String::operator=((String *)((char *)this + 112));
        FriendEntry::getFacebookId(a2);
        String::operator=((String *)((char *)this + 88));
      }
      *((_QWORD *)this + 23) = a3;
      *((_QWORD *)this + 10) = *(_QWORD *)(FacebookManager::sm_pInstance + 8);
    }

    // attributes: thunk
    void __fastcall ProfilePicture::ProfilePicture(ProfilePicture *this, const #1144 *a2, #1249 *a3)
    {
      __ZN14ProfilePictureC2EPK11FriendEntryP13DisplayObject(this, a2, a3);
    }

    void __fastcall ProfilePicture::~ProfilePicture(#1310 *this)
    {
      __int64 v2; // x0
    
      *(_QWORD *)this = off_100465850;
      if ( *((_BYTE *)this + 192) && *((_DWORD *)this + 36) )
        ImageSet::release(*((#1277 **)this + 10), (const String *)this + 6);
      v2 = *((_QWORD *)this + 25);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      *((_QWORD *)this + 25) = 0;
      Shape::destructOriginal(this);
      ProfilePicture::initializeMembers(this);
      String::~String((String *)this + 6);
      String::~String((String *)((char *)this + 112));
      String::~String((String *)((char *)this + 88));
      Shape::~Shape(this);
    }

    // attributes: thunk
    void __fastcall ProfilePicture::~ProfilePicture(#1310 *this)
    {
      __ZN14ProfilePictureD2Ev(this);
    }

    void __fastcall ProfilePicture::~ProfilePicture(#1310 *this)
    {
      ProfilePicture::~ProfilePicture(this);
      operator delete(this);
    }

    __int64 __fastcall ProfilePicture::update(__int64 this, int a2, char a3)
    {
      __int64 v3; // x19
      const String *v4; // x1
      const String *v5; // x20
    
      v3 = this;
      if ( !*(_BYTE *)(this + 208) && ((a2 ^ 1) & 1) == 0 && !*(_BYTE *)(this + 192) && (a3 & 1) == 0 )
      {
        this = ImageSet::getLoadingCount(*(#1277 **)(this + 80));
        if ( (int)this <= 8 )
        {
          if ( *(_BYTE *)(v3 + 168) )
          {
            v5 = (const String *)(v3 + 144);
            return ImageSet::add(*(#1277 **)(v3 + 80), v5);
          }
          if ( !*(_BYTE *)(v3 + 136) )
            this = ProfilePicture::startProfilePictureLoading((#1310 *)v3);
          v5 = (const String *)(v3 + 144);
          if ( *(_DWORD *)(v3 + 144) )
          {
            this = Path::exists((#1218 *)(v3 + 144), v4);
            if ( (_DWORD)this )
            {
              *(_BYTE *)(v3 + 168) = 1;
              return ImageSet::add(*(#1277 **)(v3 + 80), v5);
            }
          }
        }
      }
      return this;
    }

    void __fastcall ProfilePicture::startProfilePictureLoading(#1310 *this)
    {
      String v2; // [xsp+8h] [xbp-38h] BYREF
    
      if ( !*((_BYTE *)this + 136) )
      {
        if ( (unsigned int)FriendManager::isProfilePictureDownloaded(
                             (ReportUserStatusMessage *)FriendManager::sm_pInstance,
                             (const String *)((char *)this + 88)) )
        {
          FriendManager::getSavePath(
            (ReportUserStatusMessage *)FriendManager::sm_pInstance,
            (const String *)((char *)this + 88));
          String::operator=((String *)this + 6);
        }
        else
        {
          FacebookManager::startProfilePicLoading(
            &v2,
            (LogicBuyChestCommand *)FacebookManager::sm_pInstance,
            (const String *)((char *)this + 88),
            (const String *)((char *)this + 112));
          String::operator=((String *)this + 6);
          String::~String(&v2);
        }
        if ( *((_DWORD *)this + 36) )
        {
          *((_BYTE *)this + 136) = 1;
          FriendManager::setProfilePictureDownloaded(
            (ReportUserStatusMessage *)FriendManager::sm_pInstance,
            (const String *)((char *)this + 88),
            (const String *)this + 6);
        }
      }
    }

    __int64 __fastcall ProfilePicture::imageSetUpdate(__int64 this, int a2)
    {
      __int64 v2; // x19
      ShapeDrawBitmapCommand *DrawCommandAt; // x0
      __int64 *v4; // x21
      float v5; // s8
      float v6; // s9
      float v7; // s10
      float v8; // s11
      Rect v9; // [xsp+0h] [xbp-70h] BYREF
      float v10; // [xsp+8h] [xbp-68h]
      float v11; // [xsp+Ch] [xbp-64h]
      #1193 *v12; // [xsp+10h] [xbp-60h] BYREF
      float v13; // [xsp+18h] [xbp-58h] BYREF
      float v14; // [xsp+1Ch] [xbp-54h]
      float v15; // [xsp+20h] [xbp-50h]
      float v16; // [xsp+24h] [xbp-4Ch]
    
      v2 = this;
      if ( !*(_BYTE *)(this + 208) && ((a2 ^ 1) & 1) == 0 )
      {
        if ( *(_BYTE *)(this + 168) )
        {
          if ( !*(_BYTE *)(this + 192) )
          {
            v12 = 0;
            this = ImageSet::get(*(#1277 **)(this + 80), (const String *)(this + 144), &v13, &v12);
            if ( v12 )
            {
              if ( *(_QWORD *)(v2 + 184) )
              {
                Rect::Rect(&v9);
                DisplayObject::getBounds(*(_QWORD *)(v2 + 184), 0, &v9);
                DrawCommandAt = (ShapeDrawBitmapCommand *)Shape::getDrawCommandAt((#1262 *)v2, 0);
                *(_QWORD *)(v2 + 176) = DrawCommandAt;
                v4 = (__int64 *)(v2 + 176);
                ShapeDrawBitmapCommand::setXY(DrawCommandAt, 0, *(float *)&v9.top, *(float *)&v9.bottom);
                ShapeDrawBitmapCommand::setXY(*(ShapeDrawBitmapCommand **)(v2 + 176), 1, v10, *(float *)&v9.bottom);
                ShapeDrawBitmapCommand::setXY(*(ShapeDrawBitmapCommand **)(v2 + 176), 2, *(float *)&v9.top, v11);
                ShapeDrawBitmapCommand::setXY(*(ShapeDrawBitmapCommand **)(v2 + 176), 3, v10, v11);
                ProfilePicture::replaceProfilePicture((#1310 *)v2, (#1249 *)v2);
                Rect::~Rect(&v9);
              }
              else
              {
                v4 = (__int64 *)(v2 + 176);
              }
              this = *v4;
              if ( *v4 )
              {
                v5 = v13;
                v6 = v14;
                v7 = v15;
                v8 = v16;
                ShapeDrawBitmapCommand::setUV((ShapeDrawBitmapCommand *)this, 0, v13, v14);
                ShapeDrawBitmapCommand::setUV(*(ShapeDrawBitmapCommand **)(v2 + 176), 1, v7, v6);
                ShapeDrawBitmapCommand::setUV(*(ShapeDrawBitmapCommand **)(v2 + 176), 2, v5, v8);
                ShapeDrawBitmapCommand::setUV(*(ShapeDrawBitmapCommand **)(v2 + 176), 3, v7, v8);
                *(_BYTE *)(v2 + 192) = 1;
                this = ShapeDrawBitmapCommand::setTexture(*(_QWORD *)(v2 + 176), v12);
                *(_BYTE *)(v2 + 8) = 1;
                *(_BYTE *)(v2 + 192) = 1;
              }
            }
          }
        }
      }
      return this;
    }

    _QWORD *__fastcall ProfilePicture::replaceProfilePicture(#1310 *this, #1249 *a2)
    {
      _QWORD *result; // x0
      #1257 *v5; // x21
    
      result = (_QWORD *)*((_QWORD *)this + 23);
      v5 = (#1257 *)result[6];
      if ( v5 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 120LL))(result[6]) )
          MovieClip::changeTimelineChild(v5, *((#1249 **)this + 23), a2);
        result = (_QWORD *)*((_QWORD *)this + 23);
      }
      if ( result )
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 8LL))(result);
      *((_QWORD *)this + 23) = 0;
      return result;
    }

    __int64 __fastcall ProfilePicture::initializeMembers(#1310 *this)
    {
      __int64 result; // x0
    
      *((_BYTE *)this + 208) = 0;
      *((_QWORD *)this + 25) = 0;
      *((_QWORD *)this + 10) = 0;
      *((_BYTE *)this + 168) = 0;
      *((_BYTE *)this + 136) = 0;
      *((_QWORD *)this + 22) = 0;
      *((_QWORD *)this + 23) = 0;
      String::operator=((char *)this + 144, "");
      String::operator=((char *)this + 88, "");
      result = String::operator=((char *)this + 112, "");
      *((_BYTE *)this + 192) = 0;
      return result;
    }

}; // end class ProfilePicture
