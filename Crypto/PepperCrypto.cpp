class PepperCrypto
{
public:

    bool __fastcall PepperCrypto::box(
            const void *a1,
            size_t a2,
            void *a3,
            unsigned __int64 a4,
            __int64 a5,
            __int64 a6,
            __int64 a7)
    {
      unsigned __int64 v14; // x25
      _QWORD *v15; // x26
      int v16; // w21
    
      v14 = (__int64)((a2 << 32) + 0x2000000000LL) >> 32;
      PepperCrypto::ScratchBuffer::ensureCapacity((PepperCrypto::ScratchBuffer *)&PepperCrypto::gCryptoScratch, v14);
      if ( a2 + 16 > a4 )
        __assert_rtn(
          "box",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/PepperCrypto.cpp",
          77,
          "cipherLen >= clearLen + BOX_MACBYTES");
      v15 = (_QWORD *)PepperCrypto::gCryptoScratch;
      *(_QWORD *)(PepperCrypto::gCryptoScratch + 16) = 0;
      v15[3] = 0;
      *v15 = 0;
      v15[1] = 0;
      memcpy(v15 + 4, a1, a2);
      v16 = crypto_box_curve25519xsalsa20poly1305_tweet(v15, v15, v14, a5, a6, a7);
      if ( !v16 )
        memcpy(a3, v15 + 2, a2 + 16);
      if ( (unsigned __int64)qword_1004F71F0 >= 0xC801 )
      {
        if ( PepperCrypto::gCryptoScratch )
          operator delete[](PepperCrypto::gCryptoScratch);
        qword_1004F71F0 = 0;
      }
      return v16 != 0;
    }

    bool __fastcall PepperCrypto::box_open(
            const void *a1,
            size_t a2,
            void *a3,
            unsigned __int64 a4,
            __int64 a5,
            __int64 a6,
            __int64 a7)
    {
      size_t v14; // x25
      _QWORD *v15; // x26
      int v16; // w21
    
      v14 = a2 + 16;
      PepperCrypto::ScratchBuffer::ensureCapacity((PepperCrypto::ScratchBuffer *)&PepperCrypto::gCryptoScratch, a2 + 16);
      if ( a2 - 16 > a4 )
        __assert_rtn(
          "box_open",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/PepperCrypto.cpp",
          109,
          "clearLen >= cipherLen - BOX_MACBYTES");
      v15 = (_QWORD *)PepperCrypto::gCryptoScratch;
      *(_QWORD *)PepperCrypto::gCryptoScratch = 0;
      v15[1] = 0;
      memcpy(v15 + 2, a1, a2);
      v16 = crypto_box_curve25519xsalsa20poly1305_tweet_open(v15, v15, v14, a5, a6, a7);
      if ( !v16 )
        memcpy(a3, v15 + 4, a2 - 16);
      if ( (unsigned __int64)qword_1004F71F0 >= 0xC801 )
      {
        if ( PepperCrypto::gCryptoScratch )
          operator delete[](PepperCrypto::gCryptoScratch);
        qword_1004F71F0 = 0;
      }
      return v16 != 0;
    }

    bool __fastcall PepperCrypto::secretbox(const void *a1, size_t a2, void *a3, size_t a4, __int64 a5, __int64 a6)
    {
      size_t v12; // x24
      _QWORD *v13; // x23
      size_t v14; // x25
      int v15; // w21
    
      v12 = a2 + 32;
      PepperCrypto::ScratchBuffer::ensureCapacity((PepperCrypto::ScratchBuffer *)&PepperCrypto::gCryptoScratch, a2 + 32);
      v13 = (_QWORD *)PepperCrypto::gCryptoScratch;
      *(_QWORD *)(PepperCrypto::gCryptoScratch + 16) = 0;
      v13[3] = 0;
      *v13 = 0;
      v13[1] = 0;
      memcpy(v13 + 4, a1, a2);
      v14 = a2 + 16;
      if ( v14 > a4 )
        __assert_rtn(
          "secretbox",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/PepperCrypto.cpp",
          133,
          "cipherLen >= clearLen + SECRETBOX_MACBYTES");
      v15 = crypto_secretbox_xsalsa20poly1305_tweet(v13, v13, v12, a5, a6);
      if ( !v15 )
        memcpy(a3, v13 + 2, v14);
      if ( (unsigned __int64)qword_1004F71F0 >= 0xC801 )
      {
        if ( PepperCrypto::gCryptoScratch )
          operator delete[](PepperCrypto::gCryptoScratch);
        qword_1004F71F0 = 0;
      }
      return v15 != 0;
    }

    bool __fastcall PepperCrypto::secretbox_open(
            const void *a1,
            size_t a2,
            void *a3,
            unsigned __int64 a4,
            __int64 a5,
            __int64 a6)
    {
      size_t v12; // x24
      _QWORD *v13; // x25
      int v14; // w21
    
      v12 = a2 + 16;
      PepperCrypto::ScratchBuffer::ensureCapacity((PepperCrypto::ScratchBuffer *)&PepperCrypto::gCryptoScratch, a2 + 16);
      if ( a2 - 16 > a4 )
        __assert_rtn(
          "secretbox_open",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/PepperCrypto.cpp",
          148,
          "clearLen >= cipherLen - SECRETBOX_MACBYTES");
      v13 = (_QWORD *)PepperCrypto::gCryptoScratch;
      *(_QWORD *)PepperCrypto::gCryptoScratch = 0;
      v13[1] = 0;
      memcpy(v13 + 2, a1, a2);
      v14 = crypto_secretbox_xsalsa20poly1305_tweet_open(v13, v13, v12, a5, a6);
      if ( !v14 )
        memcpy(a3, v13 + 4, a2 - 16);
      if ( (unsigned __int64)qword_1004F71F0 >= 0xC801 )
      {
        if ( PepperCrypto::gCryptoScratch )
          operator delete[](PepperCrypto::gCryptoScratch);
        qword_1004F71F0 = 0;
      }
      return v14 != 0;
    }

    // attributes: thunk
    __int64 PepperCrypto::generateKeyPair()
    {
      return crypto_box_curve25519xsalsa20poly1305_tweet_keypair();
    }

    void __fastcall PepperCrypto::generateRandom(void *a1, int a2)
    {
      randombytes(a1, a2);
    }

}; // end class PepperCrypto
