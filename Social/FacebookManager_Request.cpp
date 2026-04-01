class FacebookManager::Request
{
public:

    String *__fastcall FacebookManager::Request::operator=(String *a1, __int64 a2)
    {
      String::operator=(a1);
      String::operator=(a1 + 1);
      String::operator=(a1 + 2);
      String::operator=(a1 + 3);
      a1[4].m_length = *(_DWORD *)(a2 + 96);
      return a1;
    }

}; // end class FacebookManager::Request
