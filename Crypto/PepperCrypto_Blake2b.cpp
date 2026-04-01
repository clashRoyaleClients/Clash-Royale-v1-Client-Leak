class PepperCrypto::Blake2b
{
public:

    int *__fastcall PepperCrypto::Blake2b::Blake2b(int *a1, int a2)
    {
      *a1 = a2;
      if ( a2 >= 256 )
        __assert_rtn(
          "Blake2b",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/PepperCrypto.cpp",
          169,
          "outputSize <= 255");
      blake2b_init(a1 + 1, (unsigned __int8)a2);
      return a1;
    }

    int *__fastcall PepperCrypto::Blake2b::Blake2b(int *a1, int a2)
    {
      PepperCrypto::Blake2b::Blake2b(a1, a2);
      return a1;
    }

    __int64 __fastcall PepperCrypto::Blake2b::update(__int64 a1, __int64 a2, int a3)
    {
      return blake2b_update(a1 + 4, a2, a3);
    }

    __int64 __fastcall PepperCrypto::Blake2b::final(unsigned __int8 *a1, __int64 a2)
    {
      return blake2b_final(a1 + 4, a2, *a1);
    }

}; // end class PepperCrypto::Blake2b
