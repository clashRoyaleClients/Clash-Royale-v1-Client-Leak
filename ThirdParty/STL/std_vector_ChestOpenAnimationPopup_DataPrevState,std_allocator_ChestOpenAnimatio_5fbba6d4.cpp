class std::vector<ChestOpenAnimationPopup::DataPrevState,std::allocator<ChestOpenAnimationPopup::DataPrevState>>
{
public:

    _QWORD *__fastcall std::vector<ChestOpenAnimationPopup::DataPrevState>::resize(
            _QWORD *result,
            unsigned __int64 a2,
            __int64 a3,
            int a4)
    {
      __int64 v4; // [xsp+0h] [xbp-10h]
      int v5; // [xsp+8h] [xbp-8h]
    
      v4 = a3;
      v5 = a4;
      if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)(result[1] - *result) >> 2) <= a2 )
        return (_QWORD *)std::vector<ChestOpenAnimationPopup::DataPrevState>::_M_fill_insert(result, result[1]);
      result[1] = *result + 12 * a2;
      return result;
    }

    void __fastcall std::vector<ChestOpenAnimationPopup::DataPrevState>::_M_fill_insert(
            __int64 *a1,
            __int64 *a2,
            unsigned __int64 a3,
            __int64 *a4)
    {
      __int64 *v6; // x19
      __int64 *v8; // x8
      __int64 v9; // x24
      unsigned __int64 v10; // x8
      unsigned __int64 v11; // x9
      bool v12; // cf
      unsigned __int64 v13; // x8
      __int64 v14; // x0
      __int64 v15; // x22
      __int64 *v16; // x9
      unsigned __int64 v17; // x8
      __int64 *v18; // x10
      __int64 v19; // x12
      unsigned __int64 v20; // x9
      unsigned __int64 v21; // x10
      unsigned __int64 v22; // x23
      __int64 *v23; // x9
      __int64 *v24; // x11
      __int64 v25; // t1
      unsigned __int64 v26; // x9
      __int64 v27; // x10
      __int64 v28; // x12
      __int64 v29; // x13
      __int64 v30; // x9
      signed __int64 v31; // x9
      __int64 v32; // x8
      __int64 v33; // x8
      unsigned __int64 v34; // x11
      __int64 v35; // x11
      __int64 v36; // x12
      __int64 v37; // x10
      __int64 *v38; // x11
      __int64 v39; // t1
      __int64 v40; // [xsp+0h] [xbp-40h]
      int v41; // [xsp+8h] [xbp-38h]
    
      v6 = a2;
      if ( a3 )
      {
        v8 = (__int64 *)a1[1];
        if ( 0xAAAAAAAAAAAAAAABLL * ((a1[2] - (__int64)v8) >> 2) >= a3 )
        {
          v41 = *((_DWORD *)a4 + 2);
          v40 = *a4;
          v26 = 0xAAAAAAAAAAAAAAABLL * (((char *)v8 - (char *)a2) >> 2);
          if ( v26 <= a3 )
          {
            v34 = v26 - a3;
            if ( v26 == a3 )
            {
              v35 = a1[1];
            }
            else
            {
              v36 = a1[1];
              do
              {
                *(_DWORD *)(v36 + 8) = v41;
                *(_QWORD *)v36 = v40;
                v36 += 12;
                ++v34;
              }
              while ( v34 );
              v35 = a1[1];
            }
            v37 = v35 + 12 * (a3 - v26);
            a1[1] = v37;
            if ( a2 == v8 )
            {
              a1[1] = v35 + 12 * a3;
            }
            else
            {
              v38 = a2;
              do
              {
                *(_DWORD *)(v37 + 8) = *((_DWORD *)v38 + 2);
                v39 = *v38;
                v38 = (__int64 *)((char *)v38 + 12);
                *(_QWORD *)v37 = v39;
                v37 += 12;
              }
              while ( v8 != v38 );
              a1[1] += 4 * (((char *)v8 - (char *)a2) >> 2);
              do
              {
                *((_DWORD *)v6 + 2) = v41;
                *v6 = v40;
                v6 = (__int64 *)((char *)v6 + 12);
              }
              while ( v8 != v6 );
            }
          }
          else
          {
            v27 = 0;
            v28 = (__int64)v8 - 12 * a3;
            do
            {
              v29 = (__int64)v8 + v27;
              *(_DWORD *)(v29 + 8) = *(_DWORD *)(v28 + v27 + 8);
              *(_QWORD *)v29 = *(_QWORD *)(v28 + v27);
              v27 += 12;
            }
            while ( -12LL * a3 + v27 );
            a1[1] += 12 * a3;
            v30 = (char *)v8 - 12 * a3 - (char *)a2;
            if ( v30 >= 1 )
            {
              v31 = 0xAAAAAAAAAAAAAAABLL * (v30 >> 2) + 1;
              v32 = (__int64)v8 - 12;
              do
              {
                *(_DWORD *)(v32 + 8) = *(_DWORD *)(v32 - 12 * a3 + 8);
                *(_QWORD *)v32 = *(_QWORD *)(v32 - 12 * a3);
                v32 -= 12;
                --v31;
              }
              while ( v31 > 1 );
            }
            v33 = 12 * a3;
            do
            {
              *((_DWORD *)v6 + 2) = v41;
              *v6 = v40;
              v6 = (__int64 *)((char *)v6 + 12);
              v33 -= 12;
            }
            while ( v33 );
          }
        }
        else
        {
          v9 = 0x1555555555555555LL;
          v10 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v8 - *a1) >> 2);
          if ( 0x1555555555555555LL - v10 < a3 )
            std::__throw_length_error("vector::_M_fill_insert");
          if ( v10 >= a3 )
            v11 = v10;
          else
            v11 = a3;
          v12 = __CFADD__(v10, v11);
          v13 = v10 + v11;
          if ( !v12 )
          {
            v9 = v13;
            if ( v13 > 0x1555555555555555LL )
              std::__throw_bad_alloc();
          }
          v14 = operator new(12 * v9);
          v15 = v14;
          v16 = (__int64 *)*a1;
          v17 = v14;
          if ( (__int64 *)*a1 != v6 )
          {
            v18 = 0;
            do
            {
              v19 = (__int64)v18 + v14;
              *(_DWORD *)(v19 + 8) = *(_DWORD *)((char *)v18 + (_QWORD)v16 + 8);
              *(_QWORD *)v19 = *(__int64 *)((char *)v18 + (_QWORD)v16);
              v18 = (__int64 *)((char *)v18 + 12);
            }
            while ( (__int64 *)((char *)v6 - (char *)v16) != v18 );
            v17 = v14 + 12 * (((char *)v6 - 12 - (char *)v16) / 0xCuLL) + 12;
          }
          v20 = v17;
          v21 = a3;
          do
          {
            *(_DWORD *)(v20 + 8) = *((_DWORD *)a4 + 2);
            *(_QWORD *)v20 = *a4;
            v20 += 12LL;
            --v21;
          }
          while ( v21 );
          v22 = v17 + 12 * a3;
          v23 = (__int64 *)a1[1];
          if ( v6 != v23 )
          {
            v24 = v6;
            do
            {
              *(_DWORD *)(v22 + 8) = *((_DWORD *)v24 + 2);
              v25 = *v24;
              v24 = (__int64 *)((char *)v24 + 12);
              *(_QWORD *)v22 = v25;
              v22 += 12LL;
            }
            while ( v23 != v24 );
            v22 = v17 + 12 * (a3 + ((char *)v23 - 12 - (char *)v6) / 0xCuLL) + 12;
          }
          if ( *a1 )
            operator delete((void *)*a1);
          *a1 = v15;
          a1[1] = v22;
          a1[2] = v15 + 12 * v9;
        }
      }
    }

}; // end class std::vector<ChestOpenAnimationPopup::DataPrevState,std::allocator<ChestOpenAnimationPopup::DataPrevState>>
