class std
{
public:

    __int64 __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,long,bool (*)(BadgeItem const*,BadgeItem const*)>(
            __int64 result,
            char *a2,
            __int64 a3,
            __int64 (__fastcall *a4)(__int64, __int64))
    {
      char *v6; // x22
      char *v7; // x20
      __int64 v8; // x8
      char *v9; // x24
      char *v10; // x23
      char v11; // w0
      char *v12; // x8
      char v13; // w0
      __int64 v14; // x24
      char *v15; // x26
      char *i; // x25
      __int64 v17; // x8
      char *v18; // x23
      __int64 v19; // t1
      __int64 v20; // t1
    
      v6 = a2;
      v7 = (char *)result;
      v8 = (__int64)&a2[-result];
      if ( (__int64)&a2[-result] >= 129 )
      {
        while ( a3 )
        {
          --a3;
          v9 = &v7[(4 * ((v8 >> 3) + (v8 >> 3 < 0))) & 0xFFFFFFFFFFFFFFF8LL];
          v10 = v6 - 8;
          if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v9) )
          {
            v11 = a4(*(_QWORD *)v9, *(_QWORD *)v10);
            v12 = v9;
            if ( (v11 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v7;
            }
          }
          else
          {
            v13 = a4(*(_QWORD *)v7, *(_QWORD *)v10);
            v12 = v7;
            if ( (v13 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v9, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v9;
            }
          }
          v14 = *(_QWORD *)v12;
          v15 = v7;
          for ( i = v6; ; *(_QWORD *)i = v17 )
          {
            v18 = v15 - 8;
            do
            {
              v19 = *((_QWORD *)v18 + 1);
              v18 += 8;
            }
            while ( (a4(v19, v14) & 1) != 0 );
            v15 = v18 + 8;
            do
            {
              v20 = *((_QWORD *)i - 1);
              i -= 8;
            }
            while ( (a4(v14, v20) & 1) != 0 );
            if ( v18 >= i )
              break;
            v17 = *(_QWORD *)v18;
            *(_QWORD *)v18 = *(_QWORD *)i;
          }
          result = std::__introsort_loop<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,long,bool (*)(BadgeItem const*,BadgeItem const*)>(
                     v18,
                     v6,
                     a3,
                     a4);
          v8 = v18 - v7;
          v6 = v18;
          if ( v18 - v7 <= 128 )
            return result;
        }
        std::__heap_select<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,bool (*)(BadgeItem const*,BadgeItem const*)>(
          v7,
          v6,
          v6,
          a4);
        return std::sort_heap<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,bool (*)(BadgeItem const*,BadgeItem const*)>(
                 v7,
                 v6,
                 a4);
      }
      return result;
    }

    __int64 __fastcall std::__final_insertion_sort<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,bool (*)(BadgeItem const*,BadgeItem const*)>(
            __int64 a1,
            __int64 *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      __int64 *v5; // x21
      __int64 result; // x0
      __int64 v7; // x22
      __int64 *v8; // x23
      __int64 *v9; // x8
      __int64 *v10; // x9
      __int64 *v11; // x24
      __int64 *v12; // x25
    
      if ( (__int64)a2 - a1 < 129 )
        return std::__insertion_sort<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,bool (*)(BadgeItem const*,BadgeItem const*)>();
      v5 = (__int64 *)(a1 + 128);
      result = std::__insertion_sort<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,bool (*)(BadgeItem const*,BadgeItem const*)>();
      while ( v5 != a2 )
      {
        v7 = *v5;
        v8 = v5 - 1;
        result = a3(*v5, *(v5 - 1));
        if ( (_DWORD)result )
        {
          v9 = v5;
          v10 = v5;
          do
          {
            v11 = v8;
            *v10 = *v8;
            v12 = v9 - 2;
            result = a3(v7, *(v9 - 2));
            v9 = v8;
            v8 = v12;
            v10 = v11;
          }
          while ( (result & 1) != 0 );
        }
        else
        {
          v11 = v5;
        }
        *v11 = v7;
        ++v5;
      }
      return result;
    }

    __int64 __fastcall std::__heap_select<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,bool (*)(BadgeItem const*,BadgeItem const*)>(
            __int64 result,
            _QWORD *a2,
            unsigned __int64 a3,
            __int64 (__fastcall *a4)(_QWORD, _QWORD))
    {
      _QWORD *v6; // x21
      _QWORD *v7; // x22
      __int64 v8; // x23
      __int64 v9; // x8
      __int64 v10; // x24
      __int64 v11; // x3
    
      v6 = a2;
      v7 = (_QWORD *)result;
      v8 = ((__int64)a2 - result) >> 3;
      if ( (__int64)a2 - result >= 16 )
      {
        v9 = v8 - 2;
        if ( v8 - 2 < 0 )
          v9 = v8 - 1;
        v10 = v9 >> 1;
        do
        {
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,long,BadgeItem *,bool (*)(BadgeItem const*,BadgeItem const*)>(
                     v7,
                     v10,
                     v8,
                     v7[v10],
                     a4);
          --v10;
        }
        while ( v10 != -1 );
      }
      while ( (unsigned __int64)v6 < a3 )
      {
        result = a4(*v6, *v7);
        if ( (_DWORD)result )
        {
          v11 = *v6;
          *v6 = *v7;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,long,BadgeItem *,bool (*)(BadgeItem const*,BadgeItem const*)>(
                     v7,
                     0,
                     v8,
                     v11,
                     a4);
        }
        ++v6;
      }
      return result;
    }

    __int64 __fastcall std::sort_heap<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,bool (*)(BadgeItem const*,BadgeItem const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3)
    {
      char *v4; // x20
      char *v5; // x21
      __int64 v6; // x3
      __int64 v7; // x22
    
      v4 = (char *)result;
      if ( a2 - result >= 9 )
      {
        v5 = (char *)(a2 - 8);
        do
        {
          v6 = *(_QWORD *)v5;
          v7 = v5 - v4;
          *(_QWORD *)v5 = *(_QWORD *)v4;
          v5 -= 8;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,long,BadgeItem *,bool (*)(BadgeItem const*,BadgeItem const*)>(
                     v4,
                     0,
                     v7 >> 3,
                     v6,
                     a3);
        }
        while ( v7 > 8 );
      }
      return result;
    }

    __int64 __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,long,BadgeItem *,bool (*)(BadgeItem const*,BadgeItem const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 (__fastcall *a5)(_QWORD, __int64))
    {
      __int64 v9; // x20
      __int64 v10; // x8
      __int64 v11; // x25
      __int64 v12; // x26
      __int64 v13; // x24
      __int64 v14; // x8
      __int64 v15; // x8
      __int64 v16; // x23
    
      v9 = result;
      v10 = 2 * a2;
      v11 = 2 * a2 + 2;
      if ( v11 >= a3 )
      {
        v13 = a2;
      }
      else
      {
        v12 = a2;
        do
        {
          v13 = v10 | 1;
          result = a5(*(_QWORD *)(v9 + 8 * v11), *(_QWORD *)(v9 + 8 * (v10 | 1)));
          if ( !(_DWORD)result )
            v13 = v11;
          *(_QWORD *)(v9 + 8 * v12) = *(_QWORD *)(v9 + 8 * v13);
          v10 = 2 * v13;
          v11 = 2 * v13 + 2;
          v12 = v13;
        }
        while ( v11 < a3 );
      }
      if ( v11 == a3 )
      {
        v14 = v10 | 1;
        *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v14);
        v13 = v14;
      }
      if ( v13 > a2 )
      {
        while ( 1 )
        {
          v15 = v13 - 1;
          if ( v13 - 1 < 0 )
            v15 = v13;
          v16 = v15 >> 1;
          result = a5(*(_QWORD *)(v9 + 8 * (v15 >> 1)), a4);
          if ( !(_DWORD)result )
            break;
          *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v16);
          v13 = v16;
          if ( v16 <= a2 )
            goto LABEL_17;
        }
      }
      v16 = v13;
    LABEL_17:
      *(_QWORD *)(v9 + 8 * v16) = a4;
      return result;
    }

    __int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<BadgeItem **,std::vector<BadgeItem *>>,bool (*)(BadgeItem const*,BadgeItem const*)>(
            __int64 result,
            char *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      char *v5; // x21
      char *v6; // x23
      char *v7; // x25
      __int64 v8; // x22
      char *v9; // x8
      char *v10; // x26
      char *v11; // x9
      char *v12; // x27
      char *v13; // x28
      char *v14; // x8
      bool v15; // zf
    
      v5 = (char *)result;
      if ( (char *)result != a2 )
      {
        v6 = (char *)(result + 8);
        if ( (char *)(result + 8) != a2 )
        {
          v7 = (char *)result;
          do
          {
            v8 = *(_QWORD *)v6;
            if ( (unsigned int)a3(*(_QWORD *)v6, *(_QWORD *)v5) )
            {
              result = (__int64)memmove(&v7[8 * (2 - ((unsigned __int64)(v6 - v5) >> 3))], v5, v6 - v5);
              *(_QWORD *)v5 = v8;
            }
            else
            {
              result = a3(v8, *(_QWORD *)v7);
              v9 = v6;
              v10 = v7;
              v11 = v6;
              if ( (_DWORD)result )
              {
                do
                {
                  v12 = v10;
                  *(_QWORD *)v11 = *(_QWORD *)v10;
                  v13 = v9 - 16;
                  result = a3(v8, *((_QWORD *)v9 - 2));
                  v9 = v10;
                  v10 = v13;
                  v11 = v12;
                }
                while ( (result & 1) != 0 );
              }
              *(_QWORD *)v11 = v8;
            }
            v14 = v7 + 16;
            v15 = v7 + 16 == a2;
            v7 = v6;
            v6 = v14;
          }
          while ( !v15 );
        }
      }
      return result;
    }

    __int64 __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,long,bool (*)(FriendItem const*,FriendItem const*)>(
            __int64 result,
            char *a2,
            __int64 a3,
            __int64 (__fastcall *a4)(__int64, __int64))
    {
      char *v6; // x22
      char *v7; // x20
      __int64 v8; // x8
      char *v9; // x24
      char *v10; // x23
      char v11; // w0
      char *v12; // x8
      char v13; // w0
      __int64 v14; // x24
      char *v15; // x26
      char *i; // x25
      __int64 v17; // x8
      char *v18; // x23
      __int64 v19; // t1
      __int64 v20; // t1
    
      v6 = a2;
      v7 = (char *)result;
      v8 = (__int64)&a2[-result];
      if ( (__int64)&a2[-result] >= 129 )
      {
        while ( a3 )
        {
          --a3;
          v9 = &v7[(4 * ((v8 >> 3) + (v8 >> 3 < 0))) & 0xFFFFFFFFFFFFFFF8LL];
          v10 = v6 - 8;
          if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v9) )
          {
            v11 = a4(*(_QWORD *)v9, *(_QWORD *)v10);
            v12 = v9;
            if ( (v11 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v7;
            }
          }
          else
          {
            v13 = a4(*(_QWORD *)v7, *(_QWORD *)v10);
            v12 = v7;
            if ( (v13 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v9, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v9;
            }
          }
          v14 = *(_QWORD *)v12;
          v15 = v7;
          for ( i = v6; ; *(_QWORD *)i = v17 )
          {
            v18 = v15 - 8;
            do
            {
              v19 = *((_QWORD *)v18 + 1);
              v18 += 8;
            }
            while ( (a4(v19, v14) & 1) != 0 );
            v15 = v18 + 8;
            do
            {
              v20 = *((_QWORD *)i - 1);
              i -= 8;
            }
            while ( (a4(v14, v20) & 1) != 0 );
            if ( v18 >= i )
              break;
            v17 = *(_QWORD *)v18;
            *(_QWORD *)v18 = *(_QWORD *)i;
          }
          result = std::__introsort_loop<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,long,bool (*)(FriendItem const*,FriendItem const*)>(
                     v18,
                     v6,
                     a3,
                     a4);
          v8 = v18 - v7;
          v6 = v18;
          if ( v18 - v7 <= 128 )
            return result;
        }
        std::__heap_select<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,bool (*)(FriendItem const*,FriendItem const*)>(
          v7,
          v6,
          v6,
          a4);
        return std::sort_heap<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,bool (*)(FriendItem const*,FriendItem const*)>(
                 v7,
                 v6,
                 a4);
      }
      return result;
    }

    __int64 __fastcall std::__final_insertion_sort<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,bool (*)(FriendItem const*,FriendItem const*)>(
            __int64 a1,
            __int64 *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      __int64 *v5; // x21
      __int64 result; // x0
      __int64 v7; // x22
      __int64 *v8; // x23
      __int64 *v9; // x8
      __int64 *v10; // x9
      __int64 *v11; // x24
      __int64 *v12; // x25
    
      if ( (__int64)a2 - a1 < 129 )
        return std::__insertion_sort<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,bool (*)(FriendItem const*,FriendItem const*)>();
      v5 = (__int64 *)(a1 + 128);
      result = std::__insertion_sort<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,bool (*)(FriendItem const*,FriendItem const*)>();
      while ( v5 != a2 )
      {
        v7 = *v5;
        v8 = v5 - 1;
        result = a3(*v5, *(v5 - 1));
        if ( (_DWORD)result )
        {
          v9 = v5;
          v10 = v5;
          do
          {
            v11 = v8;
            *v10 = *v8;
            v12 = v9 - 2;
            result = a3(v7, *(v9 - 2));
            v9 = v8;
            v8 = v12;
            v10 = v11;
          }
          while ( (result & 1) != 0 );
        }
        else
        {
          v11 = v5;
        }
        *v11 = v7;
        ++v5;
      }
      return result;
    }

    __int64 __fastcall std::__heap_select<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,bool (*)(FriendItem const*,FriendItem const*)>(
            __int64 result,
            _QWORD *a2,
            unsigned __int64 a3,
            __int64 (__fastcall *a4)(_QWORD, _QWORD))
    {
      _QWORD *v6; // x21
      _QWORD *v7; // x22
      __int64 v8; // x23
      __int64 v9; // x8
      __int64 v10; // x24
      __int64 v11; // x3
    
      v6 = a2;
      v7 = (_QWORD *)result;
      v8 = ((__int64)a2 - result) >> 3;
      if ( (__int64)a2 - result >= 16 )
      {
        v9 = v8 - 2;
        if ( v8 - 2 < 0 )
          v9 = v8 - 1;
        v10 = v9 >> 1;
        do
        {
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,long,FriendItem *,bool (*)(FriendItem const*,FriendItem const*)>(
                     v7,
                     v10,
                     v8,
                     v7[v10],
                     a4);
          --v10;
        }
        while ( v10 != -1 );
      }
      while ( (unsigned __int64)v6 < a3 )
      {
        result = a4(*v6, *v7);
        if ( (_DWORD)result )
        {
          v11 = *v6;
          *v6 = *v7;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,long,FriendItem *,bool (*)(FriendItem const*,FriendItem const*)>(
                     v7,
                     0,
                     v8,
                     v11,
                     a4);
        }
        ++v6;
      }
      return result;
    }

    __int64 __fastcall std::sort_heap<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,bool (*)(FriendItem const*,FriendItem const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3)
    {
      char *v4; // x20
      char *v5; // x21
      __int64 v6; // x3
      __int64 v7; // x22
    
      v4 = (char *)result;
      if ( a2 - result >= 9 )
      {
        v5 = (char *)(a2 - 8);
        do
        {
          v6 = *(_QWORD *)v5;
          v7 = v5 - v4;
          *(_QWORD *)v5 = *(_QWORD *)v4;
          v5 -= 8;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,long,FriendItem *,bool (*)(FriendItem const*,FriendItem const*)>(
                     v4,
                     0,
                     v7 >> 3,
                     v6,
                     a3);
        }
        while ( v7 > 8 );
      }
      return result;
    }

    __int64 __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,long,FriendItem *,bool (*)(FriendItem const*,FriendItem const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 (__fastcall *a5)(_QWORD, __int64))
    {
      __int64 v9; // x20
      __int64 v10; // x8
      __int64 v11; // x25
      __int64 v12; // x26
      __int64 v13; // x24
      __int64 v14; // x8
      __int64 v15; // x8
      __int64 v16; // x23
    
      v9 = result;
      v10 = 2 * a2;
      v11 = 2 * a2 + 2;
      if ( v11 >= a3 )
      {
        v13 = a2;
      }
      else
      {
        v12 = a2;
        do
        {
          v13 = v10 | 1;
          result = a5(*(_QWORD *)(v9 + 8 * v11), *(_QWORD *)(v9 + 8 * (v10 | 1)));
          if ( !(_DWORD)result )
            v13 = v11;
          *(_QWORD *)(v9 + 8 * v12) = *(_QWORD *)(v9 + 8 * v13);
          v10 = 2 * v13;
          v11 = 2 * v13 + 2;
          v12 = v13;
        }
        while ( v11 < a3 );
      }
      if ( v11 == a3 )
      {
        v14 = v10 | 1;
        *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v14);
        v13 = v14;
      }
      if ( v13 > a2 )
      {
        while ( 1 )
        {
          v15 = v13 - 1;
          if ( v13 - 1 < 0 )
            v15 = v13;
          v16 = v15 >> 1;
          result = a5(*(_QWORD *)(v9 + 8 * (v15 >> 1)), a4);
          if ( !(_DWORD)result )
            break;
          *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v16);
          v13 = v16;
          if ( v16 <= a2 )
            goto LABEL_17;
        }
      }
      v16 = v13;
    LABEL_17:
      *(_QWORD *)(v9 + 8 * v16) = a4;
      return result;
    }

    __int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<FriendItem **,std::vector<FriendItem *>>,bool (*)(FriendItem const*,FriendItem const*)>(
            __int64 result,
            char *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      char *v5; // x21
      char *v6; // x23
      char *v7; // x25
      __int64 v8; // x22
      char *v9; // x8
      char *v10; // x26
      char *v11; // x9
      char *v12; // x27
      char *v13; // x28
      char *v14; // x8
      bool v15; // zf
    
      v5 = (char *)result;
      if ( (char *)result != a2 )
      {
        v6 = (char *)(result + 8);
        if ( (char *)(result + 8) != a2 )
        {
          v7 = (char *)result;
          do
          {
            v8 = *(_QWORD *)v6;
            if ( (unsigned int)a3(*(_QWORD *)v6, *(_QWORD *)v5) )
            {
              result = (__int64)memmove(&v7[8 * (2 - ((unsigned __int64)(v6 - v5) >> 3))], v5, v6 - v5);
              *(_QWORD *)v5 = v8;
            }
            else
            {
              result = a3(v8, *(_QWORD *)v7);
              v9 = v6;
              v10 = v7;
              v11 = v6;
              if ( (_DWORD)result )
              {
                do
                {
                  v12 = v10;
                  *(_QWORD *)v11 = *(_QWORD *)v10;
                  v13 = v9 - 16;
                  result = a3(v8, *((_QWORD *)v9 - 2));
                  v9 = v10;
                  v10 = v13;
                  v11 = v12;
                }
                while ( (result & 1) != 0 );
              }
              *(_QWORD *)v11 = v8;
            }
            v14 = v7 + 16;
            v15 = v7 + 16 == a2;
            v7 = v6;
            v6 = v14;
          }
          while ( !v15 );
        }
      }
      return result;
    }

    String *__fastcall std::__uninitialized_fill_n_aux<ServerConnection::Account *,unsigned long,ServerConnection::Account>(
            String *result,
            __int64 a2,
            __int64 a3)
    {
      __int64 v4; // x21
      String *v5; // x19
      __int64 v6; // x23
      char *v7; // x8
    
      v4 = a2;
      v5 = result;
      if ( a2 )
      {
        v6 = 0;
        do
        {
          v7 = (char *)v5 + v6;
          *((_DWORD *)v7 + 2) = *(_DWORD *)(a3 + 8);
          *(_QWORD *)v7 = *(_QWORD *)a3;
          result = String::String((String *)((char *)&v5->m_iteratorCacheByteOffset + v6), (const String *)(a3 + 16));
          --v4;
          v6 += 40;
        }
        while ( v4 );
      }
      return result;
    }

    __int64 __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,long,bool (*)(ShopItem const*,ShopItem const*)>(
            __int64 result,
            char *a2,
            __int64 a3,
            __int64 (__fastcall *a4)(__int64, __int64))
    {
      char *v6; // x22
      char *v7; // x20
      __int64 v8; // x8
      char *v9; // x24
      char *v10; // x23
      char v11; // w0
      char *v12; // x8
      char v13; // w0
      __int64 v14; // x24
      char *v15; // x26
      char *i; // x25
      __int64 v17; // x8
      char *v18; // x23
      __int64 v19; // t1
      __int64 v20; // t1
    
      v6 = a2;
      v7 = (char *)result;
      v8 = (__int64)&a2[-result];
      if ( (__int64)&a2[-result] >= 129 )
      {
        while ( a3 )
        {
          --a3;
          v9 = &v7[(4 * ((v8 >> 3) + (v8 >> 3 < 0))) & 0xFFFFFFFFFFFFFFF8LL];
          v10 = v6 - 8;
          if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v9) )
          {
            v11 = a4(*(_QWORD *)v9, *(_QWORD *)v10);
            v12 = v9;
            if ( (v11 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v7;
            }
          }
          else
          {
            v13 = a4(*(_QWORD *)v7, *(_QWORD *)v10);
            v12 = v7;
            if ( (v13 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v9, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v9;
            }
          }
          v14 = *(_QWORD *)v12;
          v15 = v7;
          for ( i = v6; ; *(_QWORD *)i = v17 )
          {
            v18 = v15 - 8;
            do
            {
              v19 = *((_QWORD *)v18 + 1);
              v18 += 8;
            }
            while ( (a4(v19, v14) & 1) != 0 );
            v15 = v18 + 8;
            do
            {
              v20 = *((_QWORD *)i - 1);
              i -= 8;
            }
            while ( (a4(v14, v20) & 1) != 0 );
            if ( v18 >= i )
              break;
            v17 = *(_QWORD *)v18;
            *(_QWORD *)v18 = *(_QWORD *)i;
          }
          result = std::__introsort_loop<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,long,bool (*)(ShopItem const*,ShopItem const*)>(
                     v18,
                     v6,
                     a3,
                     a4);
          v8 = v18 - v7;
          v6 = v18;
          if ( v18 - v7 <= 128 )
            return result;
        }
        std::__heap_select<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,bool (*)(ShopItem const*,ShopItem const*)>(
          v7,
          v6,
          v6,
          a4);
        return std::sort_heap<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,bool (*)(ShopItem const*,ShopItem const*)>(
                 v7,
                 v6,
                 a4);
      }
      return result;
    }

    __int64 __fastcall std::__final_insertion_sort<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,bool (*)(ShopItem const*,ShopItem const*)>(
            __int64 a1,
            __int64 *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      __int64 *v5; // x21
      __int64 result; // x0
      __int64 v7; // x22
      __int64 *v8; // x23
      __int64 *v9; // x8
      __int64 *v10; // x9
      __int64 *v11; // x24
      __int64 *v12; // x25
    
      if ( (__int64)a2 - a1 < 129 )
        return std::__insertion_sort<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,bool (*)(ShopItem const*,ShopItem const*)>();
      v5 = (__int64 *)(a1 + 128);
      result = std::__insertion_sort<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,bool (*)(ShopItem const*,ShopItem const*)>();
      while ( v5 != a2 )
      {
        v7 = *v5;
        v8 = v5 - 1;
        result = a3(*v5, *(v5 - 1));
        if ( (_DWORD)result )
        {
          v9 = v5;
          v10 = v5;
          do
          {
            v11 = v8;
            *v10 = *v8;
            v12 = v9 - 2;
            result = a3(v7, *(v9 - 2));
            v9 = v8;
            v8 = v12;
            v10 = v11;
          }
          while ( (result & 1) != 0 );
        }
        else
        {
          v11 = v5;
        }
        *v11 = v7;
        ++v5;
      }
      return result;
    }

    __int64 __fastcall std::__heap_select<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,bool (*)(ShopItem const*,ShopItem const*)>(
            __int64 result,
            _QWORD *a2,
            unsigned __int64 a3,
            __int64 (__fastcall *a4)(_QWORD, _QWORD))
    {
      _QWORD *v6; // x21
      _QWORD *v7; // x22
      __int64 v8; // x23
      __int64 v9; // x8
      __int64 v10; // x24
      __int64 v11; // x3
    
      v6 = a2;
      v7 = (_QWORD *)result;
      v8 = ((__int64)a2 - result) >> 3;
      if ( (__int64)a2 - result >= 16 )
      {
        v9 = v8 - 2;
        if ( v8 - 2 < 0 )
          v9 = v8 - 1;
        v10 = v9 >> 1;
        do
        {
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,long,ShopItem *,bool (*)(ShopItem const*,ShopItem const*)>(
                     v7,
                     v10,
                     v8,
                     v7[v10],
                     a4);
          --v10;
        }
        while ( v10 != -1 );
      }
      while ( (unsigned __int64)v6 < a3 )
      {
        result = a4(*v6, *v7);
        if ( (_DWORD)result )
        {
          v11 = *v6;
          *v6 = *v7;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,long,ShopItem *,bool (*)(ShopItem const*,ShopItem const*)>(
                     v7,
                     0,
                     v8,
                     v11,
                     a4);
        }
        ++v6;
      }
      return result;
    }

    __int64 __fastcall std::sort_heap<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,bool (*)(ShopItem const*,ShopItem const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3)
    {
      char *v4; // x20
      char *v5; // x21
      __int64 v6; // x3
      __int64 v7; // x22
    
      v4 = (char *)result;
      if ( a2 - result >= 9 )
      {
        v5 = (char *)(a2 - 8);
        do
        {
          v6 = *(_QWORD *)v5;
          v7 = v5 - v4;
          *(_QWORD *)v5 = *(_QWORD *)v4;
          v5 -= 8;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,long,ShopItem *,bool (*)(ShopItem const*,ShopItem const*)>(
                     v4,
                     0,
                     v7 >> 3,
                     v6,
                     a3);
        }
        while ( v7 > 8 );
      }
      return result;
    }

    __int64 __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,long,ShopItem *,bool (*)(ShopItem const*,ShopItem const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 (__fastcall *a5)(_QWORD, __int64))
    {
      __int64 v9; // x20
      __int64 v10; // x8
      __int64 v11; // x25
      __int64 v12; // x26
      __int64 v13; // x24
      __int64 v14; // x8
      __int64 v15; // x8
      __int64 v16; // x23
    
      v9 = result;
      v10 = 2 * a2;
      v11 = 2 * a2 + 2;
      if ( v11 >= a3 )
      {
        v13 = a2;
      }
      else
      {
        v12 = a2;
        do
        {
          v13 = v10 | 1;
          result = a5(*(_QWORD *)(v9 + 8 * v11), *(_QWORD *)(v9 + 8 * (v10 | 1)));
          if ( !(_DWORD)result )
            v13 = v11;
          *(_QWORD *)(v9 + 8 * v12) = *(_QWORD *)(v9 + 8 * v13);
          v10 = 2 * v13;
          v11 = 2 * v13 + 2;
          v12 = v13;
        }
        while ( v11 < a3 );
      }
      if ( v11 == a3 )
      {
        v14 = v10 | 1;
        *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v14);
        v13 = v14;
      }
      if ( v13 > a2 )
      {
        while ( 1 )
        {
          v15 = v13 - 1;
          if ( v13 - 1 < 0 )
            v15 = v13;
          v16 = v15 >> 1;
          result = a5(*(_QWORD *)(v9 + 8 * (v15 >> 1)), a4);
          if ( !(_DWORD)result )
            break;
          *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v16);
          v13 = v16;
          if ( v16 <= a2 )
            goto LABEL_17;
        }
      }
      v16 = v13;
    LABEL_17:
      *(_QWORD *)(v9 + 8 * v16) = a4;
      return result;
    }

    __int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<ShopItem **,std::vector<ShopItem *>>,bool (*)(ShopItem const*,ShopItem const*)>(
            __int64 result,
            char *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      char *v5; // x21
      char *v6; // x23
      char *v7; // x25
      __int64 v8; // x22
      char *v9; // x8
      char *v10; // x26
      char *v11; // x9
      char *v12; // x27
      char *v13; // x28
      char *v14; // x8
      bool v15; // zf
    
      v5 = (char *)result;
      if ( (char *)result != a2 )
      {
        v6 = (char *)(result + 8);
        if ( (char *)(result + 8) != a2 )
        {
          v7 = (char *)result;
          do
          {
            v8 = *(_QWORD *)v6;
            if ( (unsigned int)a3(*(_QWORD *)v6, *(_QWORD *)v5) )
            {
              result = (__int64)memmove(&v7[8 * (2 - ((unsigned __int64)(v6 - v5) >> 3))], v5, v6 - v5);
              *(_QWORD *)v5 = v8;
            }
            else
            {
              result = a3(v8, *(_QWORD *)v7);
              v9 = v6;
              v10 = v7;
              v11 = v6;
              if ( (_DWORD)result )
              {
                do
                {
                  v12 = v10;
                  *(_QWORD *)v11 = *(_QWORD *)v10;
                  v13 = v9 - 16;
                  result = a3(v8, *((_QWORD *)v9 - 2));
                  v9 = v10;
                  v10 = v13;
                  v11 = v12;
                }
                while ( (result & 1) != 0 );
              }
              *(_QWORD *)v11 = v8;
            }
            v14 = v7 + 16;
            v15 = v7 + 16 == a2;
            v7 = v6;
            v6 = v14;
          }
          while ( !v15 );
        }
      }
      return result;
    }

    __int64 __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,long,bool (*)(AchievementItem const*,AchievementItem const*)>(
            __int64 result,
            char *a2,
            __int64 a3,
            __int64 (__fastcall *a4)(__int64, __int64))
    {
      char *v6; // x22
      char *v7; // x20
      __int64 v8; // x8
      char *v9; // x24
      char *v10; // x23
      char v11; // w0
      char *v12; // x8
      char v13; // w0
      __int64 v14; // x24
      char *v15; // x26
      char *i; // x25
      __int64 v17; // x8
      char *v18; // x23
      __int64 v19; // t1
      __int64 v20; // t1
    
      v6 = a2;
      v7 = (char *)result;
      v8 = (__int64)&a2[-result];
      if ( (__int64)&a2[-result] >= 129 )
      {
        while ( a3 )
        {
          --a3;
          v9 = &v7[(4 * ((v8 >> 3) + (v8 >> 3 < 0))) & 0xFFFFFFFFFFFFFFF8LL];
          v10 = v6 - 8;
          if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v9) )
          {
            v11 = a4(*(_QWORD *)v9, *(_QWORD *)v10);
            v12 = v9;
            if ( (v11 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v7;
            }
          }
          else
          {
            v13 = a4(*(_QWORD *)v7, *(_QWORD *)v10);
            v12 = v7;
            if ( (v13 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v9, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v9;
            }
          }
          v14 = *(_QWORD *)v12;
          v15 = v7;
          for ( i = v6; ; *(_QWORD *)i = v17 )
          {
            v18 = v15 - 8;
            do
            {
              v19 = *((_QWORD *)v18 + 1);
              v18 += 8;
            }
            while ( (a4(v19, v14) & 1) != 0 );
            v15 = v18 + 8;
            do
            {
              v20 = *((_QWORD *)i - 1);
              i -= 8;
            }
            while ( (a4(v14, v20) & 1) != 0 );
            if ( v18 >= i )
              break;
            v17 = *(_QWORD *)v18;
            *(_QWORD *)v18 = *(_QWORD *)i;
          }
          result = std::__introsort_loop<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,long,bool (*)(AchievementItem const*,AchievementItem const*)>(
                     v18,
                     v6,
                     a3,
                     a4);
          v8 = v18 - v7;
          v6 = v18;
          if ( v18 - v7 <= 128 )
            return result;
        }
        std::__heap_select<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,bool (*)(AchievementItem const*,AchievementItem const*)>(
          v7,
          v6,
          v6,
          a4);
        return std::sort_heap<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,bool (*)(AchievementItem const*,AchievementItem const*)>(
                 v7,
                 v6,
                 a4);
      }
      return result;
    }

    __int64 __fastcall std::__final_insertion_sort<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,bool (*)(AchievementItem const*,AchievementItem const*)>(
            __int64 a1,
            __int64 *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      __int64 *v5; // x21
      __int64 result; // x0
      __int64 v7; // x22
      __int64 *v8; // x23
      __int64 *v9; // x8
      __int64 *v10; // x9
      __int64 *v11; // x24
      __int64 *v12; // x25
    
      if ( (__int64)a2 - a1 < 129 )
        return std::__insertion_sort<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,bool (*)(AchievementItem const*,AchievementItem const*)>();
      v5 = (__int64 *)(a1 + 128);
      result = std::__insertion_sort<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,bool (*)(AchievementItem const*,AchievementItem const*)>();
      while ( v5 != a2 )
      {
        v7 = *v5;
        v8 = v5 - 1;
        result = a3(*v5, *(v5 - 1));
        if ( (_DWORD)result )
        {
          v9 = v5;
          v10 = v5;
          do
          {
            v11 = v8;
            *v10 = *v8;
            v12 = v9 - 2;
            result = a3(v7, *(v9 - 2));
            v9 = v8;
            v8 = v12;
            v10 = v11;
          }
          while ( (result & 1) != 0 );
        }
        else
        {
          v11 = v5;
        }
        *v11 = v7;
        ++v5;
      }
      return result;
    }

    __int64 __fastcall std::__heap_select<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,bool (*)(AchievementItem const*,AchievementItem const*)>(
            __int64 result,
            _QWORD *a2,
            unsigned __int64 a3,
            __int64 (__fastcall *a4)(_QWORD, _QWORD))
    {
      _QWORD *v6; // x21
      _QWORD *v7; // x22
      __int64 v8; // x23
      __int64 v9; // x8
      __int64 v10; // x24
      __int64 v11; // x3
    
      v6 = a2;
      v7 = (_QWORD *)result;
      v8 = ((__int64)a2 - result) >> 3;
      if ( (__int64)a2 - result >= 16 )
      {
        v9 = v8 - 2;
        if ( v8 - 2 < 0 )
          v9 = v8 - 1;
        v10 = v9 >> 1;
        do
        {
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,long,AchievementItem *,bool (*)(AchievementItem const*,AchievementItem const*)>(
                     v7,
                     v10,
                     v8,
                     v7[v10],
                     a4);
          --v10;
        }
        while ( v10 != -1 );
      }
      while ( (unsigned __int64)v6 < a3 )
      {
        result = a4(*v6, *v7);
        if ( (_DWORD)result )
        {
          v11 = *v6;
          *v6 = *v7;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,long,AchievementItem *,bool (*)(AchievementItem const*,AchievementItem const*)>(
                     v7,
                     0,
                     v8,
                     v11,
                     a4);
        }
        ++v6;
      }
      return result;
    }

    __int64 __fastcall std::sort_heap<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,bool (*)(AchievementItem const*,AchievementItem const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3)
    {
      char *v4; // x20
      char *v5; // x21
      __int64 v6; // x3
      __int64 v7; // x22
    
      v4 = (char *)result;
      if ( a2 - result >= 9 )
      {
        v5 = (char *)(a2 - 8);
        do
        {
          v6 = *(_QWORD *)v5;
          v7 = v5 - v4;
          *(_QWORD *)v5 = *(_QWORD *)v4;
          v5 -= 8;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,long,AchievementItem *,bool (*)(AchievementItem const*,AchievementItem const*)>(
                     v4,
                     0,
                     v7 >> 3,
                     v6,
                     a3);
        }
        while ( v7 > 8 );
      }
      return result;
    }

    __int64 __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,long,AchievementItem *,bool (*)(AchievementItem const*,AchievementItem const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 (__fastcall *a5)(_QWORD, __int64))
    {
      __int64 v9; // x20
      __int64 v10; // x8
      __int64 v11; // x25
      __int64 v12; // x26
      __int64 v13; // x24
      __int64 v14; // x8
      __int64 v15; // x8
      __int64 v16; // x23
    
      v9 = result;
      v10 = 2 * a2;
      v11 = 2 * a2 + 2;
      if ( v11 >= a3 )
      {
        v13 = a2;
      }
      else
      {
        v12 = a2;
        do
        {
          v13 = v10 | 1;
          result = a5(*(_QWORD *)(v9 + 8 * v11), *(_QWORD *)(v9 + 8 * (v10 | 1)));
          if ( !(_DWORD)result )
            v13 = v11;
          *(_QWORD *)(v9 + 8 * v12) = *(_QWORD *)(v9 + 8 * v13);
          v10 = 2 * v13;
          v11 = 2 * v13 + 2;
          v12 = v13;
        }
        while ( v11 < a3 );
      }
      if ( v11 == a3 )
      {
        v14 = v10 | 1;
        *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v14);
        v13 = v14;
      }
      if ( v13 > a2 )
      {
        while ( 1 )
        {
          v15 = v13 - 1;
          if ( v13 - 1 < 0 )
            v15 = v13;
          v16 = v15 >> 1;
          result = a5(*(_QWORD *)(v9 + 8 * (v15 >> 1)), a4);
          if ( !(_DWORD)result )
            break;
          *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v16);
          v13 = v16;
          if ( v16 <= a2 )
            goto LABEL_17;
        }
      }
      v16 = v13;
    LABEL_17:
      *(_QWORD *)(v9 + 8 * v16) = a4;
      return result;
    }

    __int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<AchievementItem **,std::vector<AchievementItem *>>,bool (*)(AchievementItem const*,AchievementItem const*)>(
            __int64 result,
            char *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      char *v5; // x21
      char *v6; // x23
      char *v7; // x25
      __int64 v8; // x22
      char *v9; // x8
      char *v10; // x26
      char *v11; // x9
      char *v12; // x27
      char *v13; // x28
      char *v14; // x8
      bool v15; // zf
    
      v5 = (char *)result;
      if ( (char *)result != a2 )
      {
        v6 = (char *)(result + 8);
        if ( (char *)(result + 8) != a2 )
        {
          v7 = (char *)result;
          do
          {
            v8 = *(_QWORD *)v6;
            if ( (unsigned int)a3(*(_QWORD *)v6, *(_QWORD *)v5) )
            {
              result = (__int64)memmove(&v7[8 * (2 - ((unsigned __int64)(v6 - v5) >> 3))], v5, v6 - v5);
              *(_QWORD *)v5 = v8;
            }
            else
            {
              result = a3(v8, *(_QWORD *)v7);
              v9 = v6;
              v10 = v7;
              v11 = v6;
              if ( (_DWORD)result )
              {
                do
                {
                  v12 = v10;
                  *(_QWORD *)v11 = *(_QWORD *)v10;
                  v13 = v9 - 16;
                  result = a3(v8, *((_QWORD *)v9 - 2));
                  v9 = v10;
                  v10 = v13;
                  v11 = v12;
                }
                while ( (result & 1) != 0 );
              }
              *(_QWORD *)v11 = v8;
            }
            v14 = v7 + 16;
            v15 = v7 + 16 == a2;
            v7 = v6;
            v6 = v14;
          }
          while ( !v15 );
        }
      }
      return result;
    }

    __int64 __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,long,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
            __int64 result,
            char *a2,
            __int64 a3,
            __int64 (__fastcall *a4)(__int64, __int64))
    {
      char *v6; // x22
      char *v7; // x20
      __int64 v8; // x8
      char *v9; // x24
      char *v10; // x23
      char v11; // w0
      char *v12; // x8
      char v13; // w0
      __int64 v14; // x24
      char *v15; // x26
      char *i; // x25
      __int64 v17; // x8
      char *v18; // x23
      __int64 v19; // t1
      __int64 v20; // t1
    
      v6 = a2;
      v7 = (char *)result;
      v8 = (__int64)&a2[-result];
      if ( (__int64)&a2[-result] >= 129 )
      {
        while ( a3 )
        {
          --a3;
          v9 = &v7[(4 * ((v8 >> 3) + (v8 >> 3 < 0))) & 0xFFFFFFFFFFFFFFF8LL];
          v10 = v6 - 8;
          if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v9) )
          {
            v11 = a4(*(_QWORD *)v9, *(_QWORD *)v10);
            v12 = v9;
            if ( (v11 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v7;
            }
          }
          else
          {
            v13 = a4(*(_QWORD *)v7, *(_QWORD *)v10);
            v12 = v7;
            if ( (v13 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v9, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v9;
            }
          }
          v14 = *(_QWORD *)v12;
          v15 = v7;
          for ( i = v6; ; *(_QWORD *)i = v17 )
          {
            v18 = v15 - 8;
            do
            {
              v19 = *((_QWORD *)v18 + 1);
              v18 += 8;
            }
            while ( (a4(v19, v14) & 1) != 0 );
            v15 = v18 + 8;
            do
            {
              v20 = *((_QWORD *)i - 1);
              i -= 8;
            }
            while ( (a4(v14, v20) & 1) != 0 );
            if ( v18 >= i )
              break;
            v17 = *(_QWORD *)v18;
            *(_QWORD *)v18 = *(_QWORD *)i;
          }
          result = std::__introsort_loop<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,long,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
                     v18,
                     v6,
                     a3,
                     a4);
          v8 = v18 - v7;
          v6 = v18;
          if ( v18 - v7 <= 128 )
            return result;
        }
        std::__heap_select<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
          v7,
          v6,
          v6,
          a4);
        return std::sort_heap<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
                 v7,
                 v6,
                 a4);
      }
      return result;
    }

    __int64 __fastcall std::__final_insertion_sort<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
            __int64 a1,
            __int64 *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      __int64 *v5; // x21
      __int64 result; // x0
      __int64 v7; // x22
      __int64 *v8; // x23
      __int64 *v9; // x8
      __int64 *v10; // x9
      __int64 *v11; // x24
      __int64 *v12; // x25
    
      if ( (__int64)a2 - a1 < 129 )
        return std::__insertion_sort<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,bool (*)(LogicSpellData const*,LogicSpellData const*)>();
      v5 = (__int64 *)(a1 + 128);
      result = std::__insertion_sort<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,bool (*)(LogicSpellData const*,LogicSpellData const*)>();
      while ( v5 != a2 )
      {
        v7 = *v5;
        v8 = v5 - 1;
        result = a3(*v5, *(v5 - 1));
        if ( (_DWORD)result )
        {
          v9 = v5;
          v10 = v5;
          do
          {
            v11 = v8;
            *v10 = *v8;
            v12 = v9 - 2;
            result = a3(v7, *(v9 - 2));
            v9 = v8;
            v8 = v12;
            v10 = v11;
          }
          while ( (result & 1) != 0 );
        }
        else
        {
          v11 = v5;
        }
        *v11 = v7;
        ++v5;
      }
      return result;
    }

    __int64 __fastcall std::__heap_select<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
            __int64 result,
            _QWORD *a2,
            unsigned __int64 a3,
            __int64 (__fastcall *a4)(_QWORD, _QWORD))
    {
      _QWORD *v6; // x21
      _QWORD *v7; // x22
      __int64 v8; // x23
      __int64 v9; // x8
      __int64 v10; // x24
      __int64 v11; // x3
    
      v6 = a2;
      v7 = (_QWORD *)result;
      v8 = ((__int64)a2 - result) >> 3;
      if ( (__int64)a2 - result >= 16 )
      {
        v9 = v8 - 2;
        if ( v8 - 2 < 0 )
          v9 = v8 - 1;
        v10 = v9 >> 1;
        do
        {
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,long,LogicSpellData const*,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
                     v7,
                     v10,
                     v8,
                     v7[v10],
                     a4);
          --v10;
        }
        while ( v10 != -1 );
      }
      while ( (unsigned __int64)v6 < a3 )
      {
        result = a4(*v6, *v7);
        if ( (_DWORD)result )
        {
          v11 = *v6;
          *v6 = *v7;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,long,LogicSpellData const*,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
                     v7,
                     0,
                     v8,
                     v11,
                     a4);
        }
        ++v6;
      }
      return result;
    }

    __int64 __fastcall std::sort_heap<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3)
    {
      char *v4; // x20
      char *v5; // x21
      __int64 v6; // x3
      __int64 v7; // x22
    
      v4 = (char *)result;
      if ( a2 - result >= 9 )
      {
        v5 = (char *)(a2 - 8);
        do
        {
          v6 = *(_QWORD *)v5;
          v7 = v5 - v4;
          *(_QWORD *)v5 = *(_QWORD *)v4;
          v5 -= 8;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,long,LogicSpellData const*,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
                     v4,
                     0,
                     v7 >> 3,
                     v6,
                     a3);
        }
        while ( v7 > 8 );
      }
      return result;
    }

    __int64 __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,long,LogicSpellData const*,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 (__fastcall *a5)(_QWORD, __int64))
    {
      __int64 v9; // x20
      __int64 v10; // x8
      __int64 v11; // x25
      __int64 v12; // x26
      __int64 v13; // x24
      __int64 v14; // x8
      __int64 v15; // x8
      __int64 v16; // x23
    
      v9 = result;
      v10 = 2 * a2;
      v11 = 2 * a2 + 2;
      if ( v11 >= a3 )
      {
        v13 = a2;
      }
      else
      {
        v12 = a2;
        do
        {
          v13 = v10 | 1;
          result = a5(*(_QWORD *)(v9 + 8 * v11), *(_QWORD *)(v9 + 8 * (v10 | 1)));
          if ( !(_DWORD)result )
            v13 = v11;
          *(_QWORD *)(v9 + 8 * v12) = *(_QWORD *)(v9 + 8 * v13);
          v10 = 2 * v13;
          v11 = 2 * v13 + 2;
          v12 = v13;
        }
        while ( v11 < a3 );
      }
      if ( v11 == a3 )
      {
        v14 = v10 | 1;
        *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v14);
        v13 = v14;
      }
      if ( v13 > a2 )
      {
        while ( 1 )
        {
          v15 = v13 - 1;
          if ( v13 - 1 < 0 )
            v15 = v13;
          v16 = v15 >> 1;
          result = a5(*(_QWORD *)(v9 + 8 * (v15 >> 1)), a4);
          if ( !(_DWORD)result )
            break;
          *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v16);
          v13 = v16;
          if ( v16 <= a2 )
            goto LABEL_17;
        }
      }
      v16 = v13;
    LABEL_17:
      *(_QWORD *)(v9 + 8 * v16) = a4;
      return result;
    }

    __int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<LogicSpellData const**,std::vector<LogicSpellData const*>>,bool (*)(LogicSpellData const*,LogicSpellData const*)>(
            __int64 result,
            char *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      char *v5; // x21
      char *v6; // x23
      char *v7; // x25
      __int64 v8; // x22
      char *v9; // x8
      char *v10; // x26
      char *v11; // x9
      char *v12; // x27
      char *v13; // x28
      char *v14; // x8
      bool v15; // zf
    
      v5 = (char *)result;
      if ( (char *)result != a2 )
      {
        v6 = (char *)(result + 8);
        if ( (char *)(result + 8) != a2 )
        {
          v7 = (char *)result;
          do
          {
            v8 = *(_QWORD *)v6;
            if ( (unsigned int)a3(*(_QWORD *)v6, *(_QWORD *)v5) )
            {
              result = (__int64)memmove(&v7[8 * (2 - ((unsigned __int64)(v6 - v5) >> 3))], v5, v6 - v5);
              *(_QWORD *)v5 = v8;
            }
            else
            {
              result = a3(v8, *(_QWORD *)v7);
              v9 = v6;
              v10 = v7;
              v11 = v6;
              if ( (_DWORD)result )
              {
                do
                {
                  v12 = v10;
                  *(_QWORD *)v11 = *(_QWORD *)v10;
                  v13 = v9 - 16;
                  result = a3(v8, *((_QWORD *)v9 - 2));
                  v9 = v10;
                  v10 = v13;
                  v11 = v12;
                }
                while ( (result & 1) != 0 );
              }
              *(_QWORD *)v11 = v8;
            }
            v14 = v7 + 16;
            v15 = v7 + 16 == a2;
            v7 = v6;
            v6 = v14;
          }
          while ( !v15 );
        }
      }
      return result;
    }

    __int64 __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,long,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
            __int64 result,
            char *a2,
            __int64 a3,
            __int64 (__fastcall *a4)(__int64, __int64))
    {
      char *v6; // x22
      char *v7; // x20
      __int64 v8; // x8
      char *v9; // x24
      char *v10; // x23
      char v11; // w0
      char *v12; // x8
      char v13; // w0
      __int64 v14; // x24
      char *v15; // x26
      char *i; // x25
      __int64 v17; // x8
      char *v18; // x23
      __int64 v19; // t1
      __int64 v20; // t1
    
      v6 = a2;
      v7 = (char *)result;
      v8 = (__int64)&a2[-result];
      if ( (__int64)&a2[-result] >= 129 )
      {
        while ( a3 )
        {
          --a3;
          v9 = &v7[(4 * ((v8 >> 3) + (v8 >> 3 < 0))) & 0xFFFFFFFFFFFFFFF8LL];
          v10 = v6 - 8;
          if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v9) )
          {
            v11 = a4(*(_QWORD *)v9, *(_QWORD *)v10);
            v12 = v9;
            if ( (v11 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v7;
            }
          }
          else
          {
            v13 = a4(*(_QWORD *)v7, *(_QWORD *)v10);
            v12 = v7;
            if ( (v13 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v9, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v9;
            }
          }
          v14 = *(_QWORD *)v12;
          v15 = v7;
          for ( i = v6; ; *(_QWORD *)i = v17 )
          {
            v18 = v15 - 8;
            do
            {
              v19 = *((_QWORD *)v18 + 1);
              v18 += 8;
            }
            while ( (a4(v19, v14) & 1) != 0 );
            v15 = v18 + 8;
            do
            {
              v20 = *((_QWORD *)i - 1);
              i -= 8;
            }
            while ( (a4(v14, v20) & 1) != 0 );
            if ( v18 >= i )
              break;
            v17 = *(_QWORD *)v18;
            *(_QWORD *)v18 = *(_QWORD *)i;
          }
          result = std::__introsort_loop<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,long,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
                     v18,
                     v6,
                     a3,
                     a4);
          v8 = v18 - v7;
          v6 = v18;
          if ( v18 - v7 <= 128 )
            return result;
        }
        std::__heap_select<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
          v7,
          v6,
          v6,
          a4);
        return std::sort_heap<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
                 v7,
                 v6,
                 a4);
      }
      return result;
    }

    __int64 __fastcall std::__final_insertion_sort<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
            __int64 a1,
            __int64 *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      __int64 *v5; // x21
      __int64 result; // x0
      __int64 v7; // x22
      __int64 *v8; // x23
      __int64 *v9; // x8
      __int64 *v10; // x9
      __int64 *v11; // x24
      __int64 *v12; // x25
    
      if ( (__int64)a2 - a1 < 129 )
        return std::__insertion_sort<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>();
      v5 = (__int64 *)(a1 + 128);
      result = std::__insertion_sort<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>();
      while ( v5 != a2 )
      {
        v7 = *v5;
        v8 = v5 - 1;
        result = a3(*v5, *(v5 - 1));
        if ( (_DWORD)result )
        {
          v9 = v5;
          v10 = v5;
          do
          {
            v11 = v8;
            *v10 = *v8;
            v12 = v9 - 2;
            result = a3(v7, *(v9 - 2));
            v9 = v8;
            v8 = v12;
            v10 = v11;
          }
          while ( (result & 1) != 0 );
        }
        else
        {
          v11 = v5;
        }
        *v11 = v7;
        ++v5;
      }
      return result;
    }

    __int64 __fastcall std::__heap_select<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
            __int64 result,
            _QWORD *a2,
            unsigned __int64 a3,
            __int64 (__fastcall *a4)(_QWORD, _QWORD))
    {
      _QWORD *v6; // x21
      _QWORD *v7; // x22
      __int64 v8; // x23
      __int64 v9; // x8
      __int64 v10; // x24
      __int64 v11; // x3
    
      v6 = a2;
      v7 = (_QWORD *)result;
      v8 = ((__int64)a2 - result) >> 3;
      if ( (__int64)a2 - result >= 16 )
      {
        v9 = v8 - 2;
        if ( v8 - 2 < 0 )
          v9 = v8 - 1;
        v10 = v9 >> 1;
        do
        {
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,long,RoyalTVEntry *,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
                     v7,
                     v10,
                     v8,
                     v7[v10],
                     a4);
          --v10;
        }
        while ( v10 != -1 );
      }
      while ( (unsigned __int64)v6 < a3 )
      {
        result = a4(*v6, *v7);
        if ( (_DWORD)result )
        {
          v11 = *v6;
          *v6 = *v7;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,long,RoyalTVEntry *,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
                     v7,
                     0,
                     v8,
                     v11,
                     a4);
        }
        ++v6;
      }
      return result;
    }

    __int64 __fastcall std::sort_heap<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3)
    {
      char *v4; // x20
      char *v5; // x21
      __int64 v6; // x3
      __int64 v7; // x22
    
      v4 = (char *)result;
      if ( a2 - result >= 9 )
      {
        v5 = (char *)(a2 - 8);
        do
        {
          v6 = *(_QWORD *)v5;
          v7 = v5 - v4;
          *(_QWORD *)v5 = *(_QWORD *)v4;
          v5 -= 8;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,long,RoyalTVEntry *,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
                     v4,
                     0,
                     v7 >> 3,
                     v6,
                     a3);
        }
        while ( v7 > 8 );
      }
      return result;
    }

    __int64 __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,long,RoyalTVEntry *,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 (__fastcall *a5)(_QWORD, __int64))
    {
      __int64 v9; // x20
      __int64 v10; // x8
      __int64 v11; // x25
      __int64 v12; // x26
      __int64 v13; // x24
      __int64 v14; // x8
      __int64 v15; // x8
      __int64 v16; // x23
    
      v9 = result;
      v10 = 2 * a2;
      v11 = 2 * a2 + 2;
      if ( v11 >= a3 )
      {
        v13 = a2;
      }
      else
      {
        v12 = a2;
        do
        {
          v13 = v10 | 1;
          result = a5(*(_QWORD *)(v9 + 8 * v11), *(_QWORD *)(v9 + 8 * (v10 | 1)));
          if ( !(_DWORD)result )
            v13 = v11;
          *(_QWORD *)(v9 + 8 * v12) = *(_QWORD *)(v9 + 8 * v13);
          v10 = 2 * v13;
          v11 = 2 * v13 + 2;
          v12 = v13;
        }
        while ( v11 < a3 );
      }
      if ( v11 == a3 )
      {
        v14 = v10 | 1;
        *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v14);
        v13 = v14;
      }
      if ( v13 > a2 )
      {
        while ( 1 )
        {
          v15 = v13 - 1;
          if ( v13 - 1 < 0 )
            v15 = v13;
          v16 = v15 >> 1;
          result = a5(*(_QWORD *)(v9 + 8 * (v15 >> 1)), a4);
          if ( !(_DWORD)result )
            break;
          *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v16);
          v13 = v16;
          if ( v16 <= a2 )
            goto LABEL_17;
        }
      }
      v16 = v13;
    LABEL_17:
      *(_QWORD *)(v9 + 8 * v16) = a4;
      return result;
    }

    __int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<RoyalTVEntry **,std::vector<RoyalTVEntry *>>,bool (*)(RoyalTVEntry const*,RoyalTVEntry const*)>(
            __int64 result,
            char *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      char *v5; // x21
      char *v6; // x23
      char *v7; // x25
      __int64 v8; // x22
      char *v9; // x8
      char *v10; // x26
      char *v11; // x9
      char *v12; // x27
      char *v13; // x28
      char *v14; // x8
      bool v15; // zf
    
      v5 = (char *)result;
      if ( (char *)result != a2 )
      {
        v6 = (char *)(result + 8);
        if ( (char *)(result + 8) != a2 )
        {
          v7 = (char *)result;
          do
          {
            v8 = *(_QWORD *)v6;
            if ( (unsigned int)a3(*(_QWORD *)v6, *(_QWORD *)v5) )
            {
              result = (__int64)memmove(&v7[8 * (2 - ((unsigned __int64)(v6 - v5) >> 3))], v5, v6 - v5);
              *(_QWORD *)v5 = v8;
            }
            else
            {
              result = a3(v8, *(_QWORD *)v7);
              v9 = v6;
              v10 = v7;
              v11 = v6;
              if ( (_DWORD)result )
              {
                do
                {
                  v12 = v10;
                  *(_QWORD *)v11 = *(_QWORD *)v10;
                  v13 = v9 - 16;
                  result = a3(v8, *((_QWORD *)v9 - 2));
                  v9 = v10;
                  v10 = v13;
                  v11 = v12;
                }
                while ( (result & 1) != 0 );
              }
              *(_QWORD *)v11 = v8;
            }
            v14 = v7 + 16;
            v15 = v7 + 16 == a2;
            v7 = v6;
            v6 = v14;
          }
          while ( !v15 );
        }
      }
      return result;
    }

    String *__fastcall std::__uninitialized_fill_n_aux<LocalNotificationManager::NotifData *,unsigned long,LocalNotificationManager::NotifData>(
            String *result,
            __int64 a2,
            __int64 a3)
    {
      __int64 v4; // x21
      String *v5; // x19
      __int64 v6; // x22
    
      v4 = a2;
      v5 = result;
      if ( a2 )
      {
        v6 = 0;
        do
        {
          result = String::String((String *)((char *)v5 + v6), (const String *)a3);
          *(_QWORD *)&result[1].m_length = *(_QWORD *)(a3 + 24);
          --v4;
          v6 += 32;
        }
        while ( v4 );
      }
      return result;
    }

    __int64 __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,long,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
            __int64 result,
            char *a2,
            __int64 a3,
            __int64 (__fastcall *a4)(__int64, __int64))
    {
      char *v6; // x22
      char *v7; // x20
      __int64 v8; // x8
      char *v9; // x24
      char *v10; // x23
      char v11; // w0
      char *v12; // x8
      char v13; // w0
      __int64 v14; // x24
      char *v15; // x26
      char *i; // x25
      __int64 v17; // x8
      char *v18; // x23
      __int64 v19; // t1
      __int64 v20; // t1
    
      v6 = a2;
      v7 = (char *)result;
      v8 = (__int64)&a2[-result];
      if ( (__int64)&a2[-result] >= 129 )
      {
        while ( a3 )
        {
          --a3;
          v9 = &v7[(4 * ((v8 >> 3) + (v8 >> 3 < 0))) & 0xFFFFFFFFFFFFFFF8LL];
          v10 = v6 - 8;
          if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v9) )
          {
            v11 = a4(*(_QWORD *)v9, *(_QWORD *)v10);
            v12 = v9;
            if ( (v11 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v7;
            }
          }
          else
          {
            v13 = a4(*(_QWORD *)v7, *(_QWORD *)v10);
            v12 = v7;
            if ( (v13 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v9, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v9;
            }
          }
          v14 = *(_QWORD *)v12;
          v15 = v7;
          for ( i = v6; ; *(_QWORD *)i = v17 )
          {
            v18 = v15 - 8;
            do
            {
              v19 = *((_QWORD *)v18 + 1);
              v18 += 8;
            }
            while ( (a4(v19, v14) & 1) != 0 );
            v15 = v18 + 8;
            do
            {
              v20 = *((_QWORD *)i - 1);
              i -= 8;
            }
            while ( (a4(v14, v20) & 1) != 0 );
            if ( v18 >= i )
              break;
            v17 = *(_QWORD *)v18;
            *(_QWORD *)v18 = *(_QWORD *)i;
          }
          result = std::__introsort_loop<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,long,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
                     v18,
                     v6,
                     a3,
                     a4);
          v8 = v18 - v7;
          v6 = v18;
          if ( v18 - v7 <= 128 )
            return result;
        }
        std::__heap_select<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
          v7,
          v6,
          v6,
          a4);
        return std::sort_heap<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
                 v7,
                 v6,
                 a4);
      }
      return result;
    }

    __int64 __fastcall std::__final_insertion_sort<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
            __int64 a1,
            __int64 *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      __int64 *v5; // x21
      __int64 result; // x0
      __int64 v7; // x22
      __int64 *v8; // x23
      __int64 *v9; // x8
      __int64 *v10; // x9
      __int64 *v11; // x24
      __int64 *v12; // x25
    
      if ( (__int64)a2 - a1 < 129 )
        return std::__insertion_sort<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>();
      v5 = (__int64 *)(a1 + 128);
      result = std::__insertion_sort<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>();
      while ( v5 != a2 )
      {
        v7 = *v5;
        v8 = v5 - 1;
        result = a3(*v5, *(v5 - 1));
        if ( (_DWORD)result )
        {
          v9 = v5;
          v10 = v5;
          do
          {
            v11 = v8;
            *v10 = *v8;
            v12 = v9 - 2;
            result = a3(v7, *(v9 - 2));
            v9 = v8;
            v8 = v12;
            v10 = v11;
          }
          while ( (result & 1) != 0 );
        }
        else
        {
          v11 = v5;
        }
        *v11 = v7;
        ++v5;
      }
      return result;
    }

    __int64 __fastcall std::__heap_select<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
            __int64 result,
            _QWORD *a2,
            unsigned __int64 a3,
            __int64 (__fastcall *a4)(_QWORD, _QWORD))
    {
      _QWORD *v6; // x21
      _QWORD *v7; // x22
      __int64 v8; // x23
      __int64 v9; // x8
      __int64 v10; // x24
      __int64 v11; // x3
    
      v6 = a2;
      v7 = (_QWORD *)result;
      v8 = ((__int64)a2 - result) >> 3;
      if ( (__int64)a2 - result >= 16 )
      {
        v9 = v8 - 2;
        if ( v8 - 2 < 0 )
          v9 = v8 - 1;
        v10 = v9 >> 1;
        do
        {
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,long,DonationReceivedStreamEntry const*,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
                     v7,
                     v10,
                     v8,
                     v7[v10],
                     a4);
          --v10;
        }
        while ( v10 != -1 );
      }
      while ( (unsigned __int64)v6 < a3 )
      {
        result = a4(*v6, *v7);
        if ( (_DWORD)result )
        {
          v11 = *v6;
          *v6 = *v7;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,long,DonationReceivedStreamEntry const*,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
                     v7,
                     0,
                     v8,
                     v11,
                     a4);
        }
        ++v6;
      }
      return result;
    }

    __int64 __fastcall std::sort_heap<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3)
    {
      char *v4; // x20
      char *v5; // x21
      __int64 v6; // x3
      __int64 v7; // x22
    
      v4 = (char *)result;
      if ( a2 - result >= 9 )
      {
        v5 = (char *)(a2 - 8);
        do
        {
          v6 = *(_QWORD *)v5;
          v7 = v5 - v4;
          *(_QWORD *)v5 = *(_QWORD *)v4;
          v5 -= 8;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,long,DonationReceivedStreamEntry const*,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
                     v4,
                     0,
                     v7 >> 3,
                     v6,
                     a3);
        }
        while ( v7 > 8 );
      }
      return result;
    }

    __int64 __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,long,DonationReceivedStreamEntry const*,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 (__fastcall *a5)(_QWORD, __int64))
    {
      __int64 v9; // x20
      __int64 v10; // x8
      __int64 v11; // x25
      __int64 v12; // x26
      __int64 v13; // x24
      __int64 v14; // x8
      __int64 v15; // x8
      __int64 v16; // x23
    
      v9 = result;
      v10 = 2 * a2;
      v11 = 2 * a2 + 2;
      if ( v11 >= a3 )
      {
        v13 = a2;
      }
      else
      {
        v12 = a2;
        do
        {
          v13 = v10 | 1;
          result = a5(*(_QWORD *)(v9 + 8 * v11), *(_QWORD *)(v9 + 8 * (v10 | 1)));
          if ( !(_DWORD)result )
            v13 = v11;
          *(_QWORD *)(v9 + 8 * v12) = *(_QWORD *)(v9 + 8 * v13);
          v10 = 2 * v13;
          v11 = 2 * v13 + 2;
          v12 = v13;
        }
        while ( v11 < a3 );
      }
      if ( v11 == a3 )
      {
        v14 = v10 | 1;
        *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v14);
        v13 = v14;
      }
      if ( v13 > a2 )
      {
        while ( 1 )
        {
          v15 = v13 - 1;
          if ( v13 - 1 < 0 )
            v15 = v13;
          v16 = v15 >> 1;
          result = a5(*(_QWORD *)(v9 + 8 * (v15 >> 1)), a4);
          if ( !(_DWORD)result )
            break;
          *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v16);
          v13 = v16;
          if ( v16 <= a2 )
            goto LABEL_17;
        }
      }
      v16 = v13;
    LABEL_17:
      *(_QWORD *)(v9 + 8 * v16) = a4;
      return result;
    }

    __int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<DonationReceivedStreamEntry const**,std::vector<DonationReceivedStreamEntry const*>>,bool (*)(DonationReceivedStreamEntry const*,DonationReceivedStreamEntry const*)>(
            __int64 result,
            char *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      char *v5; // x21
      char *v6; // x23
      char *v7; // x25
      __int64 v8; // x22
      char *v9; // x8
      char *v10; // x26
      char *v11; // x9
      char *v12; // x27
      char *v13; // x28
      char *v14; // x8
      bool v15; // zf
    
      v5 = (char *)result;
      if ( (char *)result != a2 )
      {
        v6 = (char *)(result + 8);
        if ( (char *)(result + 8) != a2 )
        {
          v7 = (char *)result;
          do
          {
            v8 = *(_QWORD *)v6;
            if ( (unsigned int)a3(*(_QWORD *)v6, *(_QWORD *)v5) )
            {
              result = (__int64)memmove(&v7[8 * (2 - ((unsigned __int64)(v6 - v5) >> 3))], v5, v6 - v5);
              *(_QWORD *)v5 = v8;
            }
            else
            {
              result = a3(v8, *(_QWORD *)v7);
              v9 = v6;
              v10 = v7;
              v11 = v6;
              if ( (_DWORD)result )
              {
                do
                {
                  v12 = v10;
                  *(_QWORD *)v11 = *(_QWORD *)v10;
                  v13 = v9 - 16;
                  result = a3(v8, *((_QWORD *)v9 - 2));
                  v9 = v10;
                  v10 = v13;
                  v11 = v12;
                }
                while ( (result & 1) != 0 );
              }
              *(_QWORD *)v11 = v8;
            }
            v14 = v7 + 16;
            v15 = v7 + 16 == a2;
            v7 = v6;
            v6 = v14;
          }
          while ( !v15 );
        }
      }
      return result;
    }

    __int64 __fastcall std::__uninitialized_copy_aux<FacebookManager::Request *,FacebookManager::Request *>(
            const String *a1,
            const String *a2,
            __int64 a3)
    {
      __int64 v6; // x23
      String *v7; // x0
      const String *v8; // x22
    
      if ( a1 != a2 )
      {
        v6 = 0;
        do
        {
          v7 = String::String((String *)(a3 + v6), (const String *)((char *)a1 + v6));
          String::String(v7 + 1, (const String *)((char *)a1 + v6 + 24));
          String::String((String *)(a3 + v6 + 48), (const String *)((char *)a1 + v6 + 48));
          v8 = (const String *)((char *)a1 + v6 + 72);
          String::String((String *)(a3 + v6 + 72), v8);
          *(_DWORD *)(a3 + v6 + 96) = *(int *)((char *)&a1[4].m_length + v6);
          v6 += 104;
        }
        while ( &v8[1].internal != (internal_t *)a2 );
        a3 += v6;
      }
      return a3;
    }

    __int64 __fastcall std::fill<GameCenterPlayer *,GameCenterPlayer>(__int64 result, String *a2)
    {
      String *i; // x21
    
      for ( i = (String *)result; i != a2; i += 2 )
      {
        String::operator=(i);
        result = String::operator=(i + 1);
      }
      return result;
    }

    String *__fastcall std::__uninitialized_fill_n_aux<GameCenterPlayer *,unsigned long,GameCenterPlayer>(
            String *result,
            __int64 a2,
            String *a3)
    {
      __int64 v4; // x21
      String *v5; // x19
      __int64 v6; // x23
      String *v7; // x0
    
      v4 = a2;
      v5 = result;
      if ( a2 )
      {
        v6 = 0;
        do
        {
          v7 = String::String(&v5[v6], a3);
          result = String::String(v7 + 1, a3 + 1);
          --v4;
          v6 += 2;
        }
        while ( v4 );
      }
      return result;
    }

    __int64 __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,long,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
            __int64 result,
            char *a2,
            __int64 a3,
            __int64 (__fastcall *a4)(__int64, __int64))
    {
      char *v6; // x22
      char *v7; // x20
      __int64 v8; // x8
      char *v9; // x24
      char *v10; // x23
      char v11; // w0
      char *v12; // x8
      char v13; // w0
      __int64 v14; // x24
      char *v15; // x26
      char *i; // x25
      __int64 v17; // x8
      char *v18; // x23
      __int64 v19; // t1
      __int64 v20; // t1
    
      v6 = a2;
      v7 = (char *)result;
      v8 = (__int64)&a2[-result];
      if ( (__int64)&a2[-result] >= 129 )
      {
        while ( a3 )
        {
          --a3;
          v9 = &v7[(4 * ((v8 >> 3) + (v8 >> 3 < 0))) & 0xFFFFFFFFFFFFFFF8LL];
          v10 = v6 - 8;
          if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v9) )
          {
            v11 = a4(*(_QWORD *)v9, *(_QWORD *)v10);
            v12 = v9;
            if ( (v11 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v7, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v7;
            }
          }
          else
          {
            v13 = a4(*(_QWORD *)v7, *(_QWORD *)v10);
            v12 = v7;
            if ( (v13 & 1) == 0 )
            {
              if ( (unsigned int)a4(*(_QWORD *)v9, *(_QWORD *)v10) )
                v12 = v6 - 8;
              else
                v12 = v9;
            }
          }
          v14 = *(_QWORD *)v12;
          v15 = v7;
          for ( i = v6; ; *(_QWORD *)i = v17 )
          {
            v18 = v15 - 8;
            do
            {
              v19 = *((_QWORD *)v18 + 1);
              v18 += 8;
            }
            while ( (a4(v19, v14) & 1) != 0 );
            v15 = v18 + 8;
            do
            {
              v20 = *((_QWORD *)i - 1);
              i -= 8;
            }
            while ( (a4(v14, v20) & 1) != 0 );
            if ( v18 >= i )
              break;
            v17 = *(_QWORD *)v18;
            *(_QWORD *)v18 = *(_QWORD *)i;
          }
          result = std::__introsort_loop<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,long,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
                     v18,
                     v6,
                     a3,
                     a4);
          v8 = v18 - v7;
          v6 = v18;
          if ( v18 - v7 <= 128 )
            return result;
        }
        std::__heap_select<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
          v7,
          v6,
          v6,
          a4);
        return std::sort_heap<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
                 v7,
                 v6,
                 a4);
      }
      return result;
    }

    __int64 __fastcall std::__final_insertion_sort<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
            __int64 a1,
            __int64 *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      __int64 *v5; // x21
      __int64 result; // x0
      __int64 v7; // x22
      __int64 *v8; // x23
      __int64 *v9; // x8
      __int64 *v10; // x9
      __int64 *v11; // x24
      __int64 *v12; // x25
    
      if ( (__int64)a2 - a1 < 129 )
        return std::__insertion_sort<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,bool (*)(EventScreenItem const*,EventScreenItem const*)>();
      v5 = (__int64 *)(a1 + 128);
      result = std::__insertion_sort<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,bool (*)(EventScreenItem const*,EventScreenItem const*)>();
      while ( v5 != a2 )
      {
        v7 = *v5;
        v8 = v5 - 1;
        result = a3(*v5, *(v5 - 1));
        if ( (_DWORD)result )
        {
          v9 = v5;
          v10 = v5;
          do
          {
            v11 = v8;
            *v10 = *v8;
            v12 = v9 - 2;
            result = a3(v7, *(v9 - 2));
            v9 = v8;
            v8 = v12;
            v10 = v11;
          }
          while ( (result & 1) != 0 );
        }
        else
        {
          v11 = v5;
        }
        *v11 = v7;
        ++v5;
      }
      return result;
    }

    __int64 __fastcall std::__heap_select<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
            __int64 result,
            _QWORD *a2,
            unsigned __int64 a3,
            __int64 (__fastcall *a4)(_QWORD, _QWORD))
    {
      _QWORD *v6; // x21
      _QWORD *v7; // x22
      __int64 v8; // x23
      __int64 v9; // x8
      __int64 v10; // x24
      __int64 v11; // x3
    
      v6 = a2;
      v7 = (_QWORD *)result;
      v8 = ((__int64)a2 - result) >> 3;
      if ( (__int64)a2 - result >= 16 )
      {
        v9 = v8 - 2;
        if ( v8 - 2 < 0 )
          v9 = v8 - 1;
        v10 = v9 >> 1;
        do
        {
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,long,EventScreenItem *,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
                     v7,
                     v10,
                     v8,
                     v7[v10],
                     a4);
          --v10;
        }
        while ( v10 != -1 );
      }
      while ( (unsigned __int64)v6 < a3 )
      {
        result = a4(*v6, *v7);
        if ( (_DWORD)result )
        {
          v11 = *v6;
          *v6 = *v7;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,long,EventScreenItem *,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
                     v7,
                     0,
                     v8,
                     v11,
                     a4);
        }
        ++v6;
      }
      return result;
    }

    __int64 __fastcall std::sort_heap<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3)
    {
      char *v4; // x20
      char *v5; // x21
      __int64 v6; // x3
      __int64 v7; // x22
    
      v4 = (char *)result;
      if ( a2 - result >= 9 )
      {
        v5 = (char *)(a2 - 8);
        do
        {
          v6 = *(_QWORD *)v5;
          v7 = v5 - v4;
          *(_QWORD *)v5 = *(_QWORD *)v4;
          v5 -= 8;
          result = std::__adjust_heap<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,long,EventScreenItem *,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
                     v4,
                     0,
                     v7 >> 3,
                     v6,
                     a3);
        }
        while ( v7 > 8 );
      }
      return result;
    }

    __int64 __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,long,EventScreenItem *,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
            __int64 result,
            __int64 a2,
            __int64 a3,
            __int64 a4,
            __int64 (__fastcall *a5)(_QWORD, __int64))
    {
      __int64 v9; // x20
      __int64 v10; // x8
      __int64 v11; // x25
      __int64 v12; // x26
      __int64 v13; // x24
      __int64 v14; // x8
      __int64 v15; // x8
      __int64 v16; // x23
    
      v9 = result;
      v10 = 2 * a2;
      v11 = 2 * a2 + 2;
      if ( v11 >= a3 )
      {
        v13 = a2;
      }
      else
      {
        v12 = a2;
        do
        {
          v13 = v10 | 1;
          result = a5(*(_QWORD *)(v9 + 8 * v11), *(_QWORD *)(v9 + 8 * (v10 | 1)));
          if ( !(_DWORD)result )
            v13 = v11;
          *(_QWORD *)(v9 + 8 * v12) = *(_QWORD *)(v9 + 8 * v13);
          v10 = 2 * v13;
          v11 = 2 * v13 + 2;
          v12 = v13;
        }
        while ( v11 < a3 );
      }
      if ( v11 == a3 )
      {
        v14 = v10 | 1;
        *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v14);
        v13 = v14;
      }
      if ( v13 > a2 )
      {
        while ( 1 )
        {
          v15 = v13 - 1;
          if ( v13 - 1 < 0 )
            v15 = v13;
          v16 = v15 >> 1;
          result = a5(*(_QWORD *)(v9 + 8 * (v15 >> 1)), a4);
          if ( !(_DWORD)result )
            break;
          *(_QWORD *)(v9 + 8 * v13) = *(_QWORD *)(v9 + 8 * v16);
          v13 = v16;
          if ( v16 <= a2 )
            goto LABEL_17;
        }
      }
      v16 = v13;
    LABEL_17:
      *(_QWORD *)(v9 + 8 * v16) = a4;
      return result;
    }

    __int64 __fastcall std::__insertion_sort<__gnu_cxx::__normal_iterator<EventScreenItem **,std::vector<EventScreenItem *>>,bool (*)(EventScreenItem const*,EventScreenItem const*)>(
            __int64 result,
            char *a2,
            __int64 (__fastcall *a3)(__int64, _QWORD))
    {
      char *v5; // x21
      char *v6; // x23
      char *v7; // x25
      __int64 v8; // x22
      char *v9; // x8
      char *v10; // x26
      char *v11; // x9
      char *v12; // x27
      char *v13; // x28
      char *v14; // x8
      bool v15; // zf
    
      v5 = (char *)result;
      if ( (char *)result != a2 )
      {
        v6 = (char *)(result + 8);
        if ( (char *)(result + 8) != a2 )
        {
          v7 = (char *)result;
          do
          {
            v8 = *(_QWORD *)v6;
            if ( (unsigned int)a3(*(_QWORD *)v6, *(_QWORD *)v5) )
            {
              result = (__int64)memmove(&v7[8 * (2 - ((unsigned __int64)(v6 - v5) >> 3))], v5, v6 - v5);
              *(_QWORD *)v5 = v8;
            }
            else
            {
              result = a3(v8, *(_QWORD *)v7);
              v9 = v6;
              v10 = v7;
              v11 = v6;
              if ( (_DWORD)result )
              {
                do
                {
                  v12 = v10;
                  *(_QWORD *)v11 = *(_QWORD *)v10;
                  v13 = v9 - 16;
                  result = a3(v8, *((_QWORD *)v9 - 2));
                  v9 = v10;
                  v10 = v13;
                  v11 = v12;
                }
                while ( (result & 1) != 0 );
              }
              *(_QWORD *)v11 = v8;
            }
            v14 = v7 + 16;
            v15 = v7 + 16 == a2;
            v7 = v6;
            v6 = v14;
          }
          while ( !v15 );
        }
      }
      return result;
    }

    _QWORD *__fastcall std::__find<__gnu_cxx::__normal_iterator<void (**)(BITCrashUncaughtCXXExceptionInfo const*),std::vector<void (*)(BITCrashUncaughtCXXExceptionInfo const*)>>,void (*)(BITCrashUncaughtCXXExceptionInfo const*)>(
            _QWORD *result,
            __int64 a2,
            __int64 *a3)
    {
      __int64 v3; // x9
      __int64 v4; // x8
      __int64 v5; // x9
      _QWORD *v6; // x10
      __int64 v7; // x8
      __int64 v8; // x8
    
      v3 = (a2 - (__int64)result) >> 5;
      if ( v3 < 1 )
      {
    LABEL_8:
        v7 = (a2 - (__int64)result) >> 3;
        switch ( v7 )
        {
          case 3LL:
            v8 = *a3;
            if ( *result == *a3 )
              return result;
            ++result;
            break;
          case 2LL:
            v8 = *a3;
            break;
          case 1LL:
            v8 = *a3;
    LABEL_18:
            if ( *result == v8 )
              return result;
            return (_QWORD *)a2;
          default:
            return (_QWORD *)a2;
        }
        if ( *result == v8 )
          return result;
        ++result;
        goto LABEL_18;
      }
      v4 = *a3;
      v5 = v3 + 1;
      while ( *result != v4 )
      {
        v6 = result + 1;
        if ( result[1] == v4 )
          return v6;
        v6 = result + 2;
        if ( result[2] == v4 )
          return v6;
        v6 = result + 3;
        if ( result[3] == v4 )
          return v6;
        result += 4;
        if ( --v5 <= 1 )
          goto LABEL_8;
      }
      return result;
    }

    long double __fastcall std::__uninitialized_fill_n_aux<ResourceListenerFile *,unsigned long,ResourceListenerFile>(
            __int64 a1,
            __int64 a2,
            const std::string *a3)
    {
      __int64 v4; // x22
      long double *v5; // x23
      long double result; // q0
    
      v4 = a2;
      if ( a2 )
      {
        v5 = (long double *)((char *)a3 + 8);
        do
        {
          std::string::string((std::string *)a1, a3);
          result = *v5;
          *(long double *)(a1 + 8) = *v5;
          --v4;
          a1 += 24;
        }
        while ( v4 );
      }
      return result;
    }

    __int64 __fastcall std::__uninitialized_copy_aux<HTTPQueue::Item *,HTTPQueue::Item *>(
            _DWORD *a1,
            _DWORD *a2,
            __int64 a3)
    {
      __int64 v6; // x24
      _DWORD *v7; // x22
    
      if ( a1 != a2 )
      {
        v6 = 0;
        do
        {
          String::String(a3 + v6 * 4, &a1[v6]);
          String::String(a3 + v6 * 4 + 24, &a1[v6 + 6]);
          v7 = &a1[v6 + 12];
          String::String(a3 + v6 * 4 + 48, v7);
          v6 += 18;
        }
        while ( v7 + 6 != a2 );
        a3 += v6 * 4;
      }
      return a3;
    }

    __int64 __fastcall std::__uninitialized_fill_n_aux<String *,unsigned long,String>(
            __int64 result,
            __int64 a2,
            _DWORD *a3)
    {
      __int64 v4; // x21
      __int64 v5; // x19
      __int64 v6; // x22
    
      v4 = a2;
      v5 = result;
      if ( a2 )
      {
        v6 = 0;
        do
        {
          result = String::String(v5 + v6, a3);
          --v4;
          v6 += 24;
        }
        while ( v4 );
      }
      return result;
    }

    // attributes: thunk
    _QWORD *__fastcall std::__find<__gnu_cxx::__normal_iterator<void (**)(BITCrashUncaughtCXXExceptionInfo const*),std::vector<void (*)(BITCrashUncaughtCXXExceptionInfo const*)>>,void (*)(BITCrashUncaughtCXXExceptionInfo const*)>(
            _QWORD *result,
            __int64 a2,
            __int64 *a3)
    {
      return __ZSt6__findIN9__gnu_cxx17__normal_iteratorIPPFvPK32BITCrashUncaughtCXXExceptionInfoESt6vectorIS6_SaIS6_EEEES6_ET_SC_SC_RKT0_St26random_access_iterator_tag(
               result,
               a2,
               a3);
    }

    // attributes: thunk
    __int64 __fastcall std::__ostream_insert<char,std::char_traits<char>>()
    {
      return __imp___ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l();
    }

    // attributes: thunk
    void __noreturn std::__throw_bad_alloc(void)
    {
      __imp___ZSt17__throw_bad_allocv();
    }

    // attributes: thunk
    __int64 __fastcall std::_Rb_tree_decrement()
    {
      return __imp___ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base();
    }

    // attributes: thunk
    __int64 __fastcall std::_Rb_tree_increment()
    {
      return __imp___ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base();
    }

    // attributes: thunk
    __int64 __fastcall std::_Rb_tree_increment()
    {
      return __imp___ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base();
    }

    // attributes: thunk
    void __fastcall __noreturn std::__throw_length_error(const char *a1)
    {
      __imp___ZSt20__throw_length_errorPKc(a1);
    }

    // attributes: thunk
    void __fastcall __noreturn std::__throw_out_of_range(const char *a1)
    {
      __imp___ZSt20__throw_out_of_rangePKc(a1);
    }

    // attributes: thunk
    __int64 __fastcall std::_Rb_tree_rebalance_for_erase()
    {
      return __imp___ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_();
    }

    // attributes: thunk
    __int64 __fastcall std::_Rb_tree_insert_and_rebalance()
    {
      return __imp___ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_();
    }

    // attributes: thunk
    void __noreturn std::terminate(void)
    {
      __imp___ZSt9terminatev();
    }

}; // end class std
