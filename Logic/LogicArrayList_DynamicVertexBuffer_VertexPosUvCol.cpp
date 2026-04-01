class LogicArrayList<DynamicVertexBuffer<VertexPosUvCol> *>
{
public:

    __int64 *__fastcall LogicArrayList<DynamicVertexBuffer<VertexPosUvCol> *>::~LogicArrayList(__int64 *a1)
    {
      __int64 v2; // x0
    
      v2 = *a1;
      if ( v2 )
        operator delete[](v2);
      *a1 = 0;
      a1[1] = 0;
      return a1;
    }

}; // end class LogicArrayList<DynamicVertexBuffer<VertexPosUvCol> *>
