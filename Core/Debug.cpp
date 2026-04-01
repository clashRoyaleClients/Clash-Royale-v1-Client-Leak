class Debug
{
public:

    void Debug::deinit()
    {
      __int64 v0; // x8
      __int64 i; // x21
      void *v2; // x20
      void *v3; // x20
      void *v4; // x20
      void *v5; // x19
      void *v6; // x20
      void *v7; // x19
    
      v0 = Debug::vb;
      if ( Debug::vb )
      {
        for ( i = 0; i < 4; ++i )
        {
          v2 = *(void **)(v0 + 8 * i);
          do
          {
            if ( v2 )
            {
              DynamicVertexBuffer<VertexPosUvCol>::~DynamicVertexBuffer(v2);
              operator delete(v2);
              v0 = Debug::vb;
            }
            *(_QWORD *)(v0 + 8 * i) = 0;
            v0 = Debug::vb;
            v2 = *(void **)(Debug::vb + 8 * i);
          }
          while ( v2 );
        }
        if ( Debug::vb )
          operator delete[](Debug::vb);
        Debug::vb = 0;
      }
      v3 = (void *)Debug::shader;
      if ( Debug::shader )
      {
        Shader::~Shader((Shader *)Debug::shader);
        operator delete(v3);
      }
      Debug::shader = 0;
      if ( Debug::font )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Debug::font + 8LL))(Debug::font);
      Debug::font = 0;
      v4 = (void *)Debug::fontShader;
      if ( Debug::fontShader )
      {
        Shader::~Shader((Shader *)Debug::fontShader);
        operator delete(v4);
      }
      Debug::fontShader = 0;
      v5 = (void *)Debug::s_vecLines;
      if ( Debug::s_vecLines )
      {
        if ( *(_QWORD *)Debug::s_vecLines )
          operator delete(*(void **)Debug::s_vecLines);
        operator delete(v5);
      }
      Debug::s_vecLines = 0;
      v6 = (void *)Debug::s_vecTexts;
      if ( Debug::s_vecTexts )
      {
        std::vector<Debug::Text>::~vector(Debug::s_vecTexts);
        operator delete(v6);
      }
      Debug::s_vecTexts = 0;
      v7 = (void *)Debug::s_vecTriangles;
      if ( Debug::s_vecTriangles )
      {
        if ( *(_QWORD *)Debug::s_vecTriangles )
          operator delete(*(void **)Debug::s_vecTriangles);
        operator delete(v7);
      }
      Debug::s_vecTriangles = 0;
    }

}; // end class Debug
