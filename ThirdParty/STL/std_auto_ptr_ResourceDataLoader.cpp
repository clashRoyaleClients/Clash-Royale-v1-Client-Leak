class std::auto_ptr<ResourceDataLoader>
{
public:

    __int64 *__fastcall std::auto_ptr<ResourceDataLoader>::operator=(__int64 *a1, __int64 a2)
    {
      __int64 v4; // x0
    
      v4 = *a1;
      if ( a2 != v4 )
      {
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        *a1 = a2;
      }
      return a1;
    }

}; // end class std::auto_ptr<ResourceDataLoader>
