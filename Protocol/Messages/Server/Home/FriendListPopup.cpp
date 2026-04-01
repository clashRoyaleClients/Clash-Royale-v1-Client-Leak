class FriendListPopup
{
public:

    __int64 __fastcall FriendListPopup::refreshFriendData(#1399 *this)
    {
      __int64 *FriendList; // x21
      __int64 v3; // x8
      __int64 *v4; // x20
      __int64 v5; // x22
      __int64 v6; // x0
      pthread_attr_t *State; // x0
      __int64 v8; // x8
      __int64 v9; // x24
      #1144 *v10; // x22
      __int64 v11; // x23
      pthread_attr_t *ClientGlobals; // x0
      __int64 v13; // x21
      const void *v14; // x1
      __int64 v15; // x8
      _BYTE *v16; // x21
      unsigned __int64 v17; // x22
      _QWORD *v18; // x0
      __int64 v19; // x23
      __int64 v20; // x21
      __int64 v21; // x8
      __int64 v22; // x9
      __int64 v23; // x22
      __int64 v24; // x0
      __int64 v25; // x22
      __int64 v26; // x21
      __int64 v27; // x20
      __int64 v28; // x21
      __int64 v29; // x8
      __int64 v30; // x2
      __int64 i; // x8
      __int64 v32; // x21
      DisplayObject *v33; // x20
      float v34; // s8
      float v35; // s9
      long double v36; // q0
      float v38; // [xsp+0h] [xbp-90h]
      __int64 v39; // [xsp+10h] [xbp-80h] BYREF
      __int64 v40; // [xsp+18h] [xbp-78h] BYREF
      void *__dst; // [xsp+20h] [xbp-70h] BYREF
      char *v42; // [xsp+28h] [xbp-68h]
      __int64 v43; // [xsp+38h] [xbp-58h] BYREF
    
      FriendList = (__int64 *)FriendManager::getFriendList((ReportUserStatusMessage *)FriendManager::sm_pInstance);
      v4 = (__int64 *)((char *)this + 248);
      v3 = *((_QWORD *)this + 31);
      if ( (int)((unsigned __int64)(*((_QWORD *)this + 32) - v3) >> 3) >= 1 )
      {
        v5 = 0;
        do
        {
          v6 = *(_QWORD *)(v3 + 8 * v5);
          do
          {
            if ( v6 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
              v3 = *v4;
            }
            *(_QWORD *)(v3 + 8 * v5) = 0;
            v3 = *v4;
            v6 = *(_QWORD *)(*v4 + 8 * v5);
          }
          while ( v6 );
          ++v5;
        }
        while ( v5 < (int)((unsigned __int64)(*((_QWORD *)this + 32) - v3) >> 3) );
      }
      *((_QWORD *)this + 32) = v3;
      ScrollArea::removeAllContent(*((#1253 **)this + 30));
      ScrollArea::setForcedContentBounds(*((ScrollArea **)this + 30), 0);
      ScrollArea::enableHorizontalDrag(*((#1253 **)this + 30), 0);
      ScrollArea::enableVerticalDrag(*((#1253 **)this + 30), 1);
      *(_BYTE *)(*((_QWORD *)this + 30) + 496LL) = 1;
      State = (pthread_attr_t *)FacebookManager::getState((#1010 *)FacebookManager::sm_pInstance);
      if ( (_DWORD)State == 3 )
      {
        v8 = *FriendList;
        if ( (int)((unsigned __int64)(FriendList[1] - *FriendList) >> 3) >= 1 )
        {
          v9 = 0;
          do
          {
            v10 = *(#1144 **)(v8 + 8 * v9);
            State = (pthread_attr_t *)FriendEntry::getAvatarId(v10);
            if ( State )
            {
              v11 = operator new(368);
              FriendItem::FriendItem(v11, v10, 0);
              v43 = v11;
              State = (pthread_attr_t *)std::vector<FriendItem *>::push_back((char *)this + 248, &v43);
            }
            ++v9;
            v8 = *FriendList;
          }
          while ( v9 < (int)((unsigned __int64)(FriendList[1] - *FriendList) >> 3) );
        }
      }
      ClientGlobals = (pthread_attr_t *)LogicDataTables::getClientGlobals(State);
      if ( ClientGlobals
        && *(_BYTE *)(LogicDataTables::getClientGlobals(ClientGlobals) + 380LL)
        && GameCenterManager::sm_pInstance )
      {
        v13 = GameCenterManager::sm_pInstance + 136;
        std::_Vector_base<FacebookFriend *>::_Vector_base(
          &__dst,
          (__int64)(*(_QWORD *)(GameCenterManager::sm_pInstance + 144) - *(_QWORD *)(GameCenterManager::sm_pInstance + 136)) >> 3,
          GameCenterManager::sm_pInstance + 136);
        v14 = *(const void **)v13;
        v15 = *(_QWORD *)(v13 + 8);
        v16 = __dst;
        v17 = (v15 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8LL;
        memmove(__dst, v14, v15 - (_QWORD)v14);
        v42 = &v16[v17];
        v18 = __dst;
        if ( (int)((unsigned __int64)(&v16[v17] - (_BYTE *)__dst) >> 3) >= 1 )
        {
          v19 = 0;
          do
          {
            v20 = v18[v19];
            if ( *(_QWORD *)(v20 + 88) )
            {
              v21 = *((_QWORD *)this + 31);
              v22 = *((_QWORD *)this + 32);
              if ( (int)((unsigned __int64)(v22 - v21) >> 3) >= 1 )
              {
                v23 = 0;
                do
                {
                  v24 = *(_QWORD *)(*(_QWORD *)(v21 + 8 * v23) + 312LL);
                  if ( v24 )
                  {
                    if ( (LogicLong::equals(v24, *(_QWORD *)(v20 + 88)) & 1) != 0 )
                      goto LABEL_27;
                    v21 = *((_QWORD *)this + 31);
                    v22 = *((_QWORD *)this + 32);
                  }
                  ++v23;
                }
                while ( v23 < (int)((unsigned __int64)(v22 - v21) >> 3) );
              }
              v25 = operator new(368);
              FriendItem::FriendItem(v25, v20);
              v40 = v25;
              std::vector<FriendItem *>::push_back((char *)this + 248, &v40);
            }
    LABEL_27:
            ++v19;
            v18 = __dst;
          }
          while ( v19 < (int)((unsigned __int64)(v42 - (_BYTE *)__dst) >> 3) );
        }
        if ( v18 )
          operator delete(v18);
      }
      v26 = operator new(368);
      FriendItem::FriendItem(v26, 0, 1);
      v39 = v26;
      std::vector<FriendItem *>::push_back((char *)this + 248, &v39);
      v27 = *((_QWORD *)this + 31);
      v28 = *((_QWORD *)this + 32);
      v29 = v27;
      if ( v27 != v28 )
      {
        v30 = 0;
        for ( i = (v28 - v27) >> 3; i != 1; i >>= 1 )
          v30 += 2;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,long,bool (*)(FriendItem const*,FriendItem const*)>(
          *((_QWORD *)this + 31),
          *((_QWORD *)this + 32),
          v30,
          FriendListPopup::friendSort);
        std::__final_insertion_sort<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,bool (*)(FriendItem const*,FriendItem const*)>(
          v27,
          v28,
          FriendListPopup::friendSort);
        v27 = *((_QWORD *)this + 31);
        v29 = *((_QWORD *)this + 32);
      }
      if ( (int)((unsigned __int64)(v29 - v27) >> 3) >= 1 )
      {
        v32 = 0;
        v38 = 0.0;
        do
        {
          v33 = *(DisplayObject **)(v27 + 8 * v32);
          v34 = (*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v33 + 88LL))(v33) * 0.5;
          v35 = v38 + (float)((*(float (__fastcall **)(DisplayObject *))(*(_QWORD *)v33 + 96LL))(v33) * 0.5);
          DisplayObject::setPixelSnappedXY(v33, v34, v35);
          v36 = ((long double (__fastcall *)(DisplayObject *))*(_QWORD *)(*(_QWORD *)v33 + 96LL))(v33);
          v38 = v35 + (float)(*(float *)&v36 * 0.5);
          ScrollArea::addContentDontUpdateBounds(*((#1253 **)this + 30), v33);
          ++v32;
          v27 = *((_QWORD *)this + 31);
        }
        while ( v32 < (int)((unsigned __int64)(*((_QWORD *)this + 32) - v27) >> 3) );
      }
      return ScrollArea::updateBounds(*((ScrollArea **)this + 30));
    }

    bool __fastcall FriendListPopup::friendSort(__int64 a1, __int64 a2)
    {
      int v2; // w8
      int v3; // w9
    
      v2 = *(_DWORD *)(a1 + 288);
      v3 = *(_DWORD *)(a2 + 288);
      if ( v2 > v3 )
        return 1;
      if ( v2 == v3 )
        return *(_DWORD *)(a1 + 292) > *(_DWORD *)(a2 + 292);
      return 0;
    }

}; // end class FriendListPopup
