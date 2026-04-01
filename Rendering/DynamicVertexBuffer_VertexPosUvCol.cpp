class DynamicVertexBuffer<VertexPosUvCol>
{
public:

    __int64 __fastcall DynamicVertexBuffer<VertexPosUvCol>::~DynamicVertexBuffer(__int64 a1)
    {
      #1409 *v2; // x20
      __int64 v3; // x0
      __int64 v4; // x0
      __int64 v5; // x0
    
      v2 = *(#1409 **)a1;
      if ( *(_QWORD *)a1 )
      {
        VertexBuffer::~VertexBuffer(*(#1409 **)a1);
        operator delete(v2);
      }
      v3 = *(_QWORD *)(a1 + 8);
      if ( v3 )
        operator delete[](v3);
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
        operator delete[](v4);
      v5 = *(_QWORD *)(a1 + 40);
      if ( v5 )
        operator delete[](v5);
      *(_DWORD *)(a1 + 26) = 0;
      *(_BYTE *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 32) = 5;
      *(_QWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      return a1;
    }

}; // end class DynamicVertexBuffer<VertexPosUvCol>
