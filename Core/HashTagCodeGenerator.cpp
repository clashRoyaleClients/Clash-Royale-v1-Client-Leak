class HashTagCodeGenerator
{
public:

    #1333 **__fastcall HashTagCodeGenerator::HashTagCodeGenerator(#1333 **a1)
    {
      #1333 *v2; // x20
    
      *a1 = 0;
      v2 = (#1333 *)operator new(48);
      LogicLongToCodeConverterUtil::LogicLongToCodeConverterUtil(
        v2,
        &HashTagCodeGenerator::HASH_TAG,
        &HashTagCodeGenerator::CONVERSION_CHARS);
      *a1 = v2;
      return a1;
    }

    // attributes: thunk
    void __fastcall HashTagCodeGenerator::HashTagCodeGenerator(HashTagCodeGenerator *this)
    {
      __ZN20HashTagCodeGeneratorC2Ev((#1333 **)this);
    }

    void __fastcall HashTagCodeGenerator::destruct(String **a1)
    {
      String *v2; // x19
    
      v2 = *a1;
      if ( *a1 )
      {
        String::~String(v2 + 1);
        String::~String(v2);
        operator delete(v2);
      }
      *a1 = 0;
    }

    __int64 __fastcall HashTagCodeGenerator::toCode(#1333 **a1, const #1236 *a2)
    {
      return LogicLongToCodeConverterUtil::toCode(*a1, a2);
    }

}; // end class HashTagCodeGenerator
