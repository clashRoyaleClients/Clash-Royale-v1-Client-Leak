class HTTPClient
{
public:

    _QWORD *__fastcall HTTPClient::HTTPClient(_QWORD *result)
    {
      *result = 0;
      result[1] = 0;
      return result;
    }

    __int64 __fastcall HTTPClient::~HTTPClient(__int64 a1)
    {
      void *v2; // x20
    
      v2 = *(void **)(a1 + 8);
      if ( v2 )
      {
        objc_msgSend(*(id *)(a1 + 8), "setHttpClient:", 0);
        objc_msgSend(v2, "release");
      }
      return a1;
    }

    id __fastcall HTTPClient::downloadFile(HTTPClient *a1, __int64 a2, __int64 a3, __int64 a4)
    {
      HTTPClientController *v8; // x20
      NSMutableURLRequest *v9; // x22
      _QWORD *v10; // x2
      NSURL *v11; // x24
      _QWORD *v12; // x2
      NSString *v13; // x21
      _QWORD *v14; // x2
    
      HTTPClient::resetStatus(a1);
      v8 = -[HTTPClientController init](+[HTTPClientController alloc](&OBJC_CLASS___HTTPClientController, "alloc"), "init");
      -[HTTPClientController setHttpClient:](v8, "setHttpClient:", a1);
      a1->var1 = v8;
      if ( -[HTTPClientController status](v8, "status") == 1 )
        __assert_rtn(
          "downloadFile",
          "/Users/Shared/Jenkins/Home/jobs/scroll-stage/workspace/titan/client/src/ios/HTTPClient.mm",
          404,
          "getStatus() != ACTIVE");
      v9 = -[NSMutableURLRequest autorelease](
             -[NSMutableURLRequest init](+[NSMutableURLRequest alloc](&OBJC_CLASS___NSMutableURLRequest, "alloc"), "init"),
             "autorelease");
      v10 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v10 = (_QWORD *)*v10;
      v11 = +[NSURL URLWithString:](
              &OBJC_CLASS___NSURL,
              "URLWithString:",
              +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v10));
      addSkipBackupAttributeToItemAtURL(v11);
      -[NSMutableURLRequest setURL:](v9, "setURL:", v11);
      v12 = (_QWORD *)(a3 + 8);
      if ( *(_DWORD *)(a3 + 4) + 1 > 8 )
        v12 = (_QWORD *)*v12;
      v13 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v12);
      v14 = (_QWORD *)(a4 + 8);
      if ( *(_DWORD *)(a4 + 4) + 1 > 8 )
        v14 = (_QWORD *)*v14;
      return -[HTTPClientController download:to:withSha1hex:](
               v8,
               "download:to:withSha1hex:",
               v9,
               v13,
               +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v14));
    }

    id *__fastcall HTTPClient::resetStatus(id *result)
    {
      id *v1; // x19
      id v2; // x20
    
      v1 = result;
      v2 = result[1];
      if ( v2 )
      {
        objc_msgSend(result[1], "setStatus:", 0);
        objc_msgSend(v2, "setHttpClient:", 0);
        result = (id *)objc_msgSend(v2, "release");
        v1[1] = 0;
      }
      return result;
    }

    id __fastcall HTTPClient::getStatus(__int64 a1)
    {
      return objc_msgSend(*(id *)(a1 + 8), "status");
    }

    id __fastcall HTTPClient::postData(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
    {
      HTTPClientController *v10; // x19
      NSData *v11; // x20
      _QWORD *v12; // x2
      NSURL *v13; // x21
      NSMutableURLRequest *v14; // x21
    
      HTTPClient::resetStatus((id *)a1);
      *(_QWORD *)a1 = a5;
      v10 = -[HTTPClientController init](+[HTTPClientController alloc](&OBJC_CLASS___HTTPClientController, "alloc"), "init");
      -[HTTPClientController setHttpClient:](v10, "setHttpClient:", a1);
      *(_QWORD *)(a1 + 8) = v10;
      v11 = +[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", a3, a4);
      v12 = (_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) + 1 > 8 )
        v12 = (_QWORD *)*v12;
      v13 = +[NSURL URLWithString:](
              &OBJC_CLASS___NSURL,
              "URLWithString:",
              +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v12));
      addSkipBackupAttributeToItemAtURL(v13);
      v14 = +[NSMutableURLRequest requestWithURL:](&OBJC_CLASS___NSMutableURLRequest, "requestWithURL:", v13);
      -[NSMutableURLRequest setHTTPMethod:](v14, "setHTTPMethod:", CFSTR("POST"));
      -[NSMutableURLRequest setHTTPBody:](v14, "setHTTPBody:", v11);
      return -[HTTPClientController post:](v10, "post:", v14);
    }

    id __fastcall HTTPClient::getStatusCode(__int64 a1)
    {
      return objc_msgSend(*(id *)(a1 + 8), "statusCode");
    }

}; // end class HTTPClient
