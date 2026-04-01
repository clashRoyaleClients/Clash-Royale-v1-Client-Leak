class ServerConnection::Account
{
public:

    #1347 *__fastcall ServerConnection::Account::Account(#1347 *this)
    {
      char *v2; // x19
    
      v2 = (char *)this + 16;
      String::String((String *)((char *)this + 16));
      *(_BYTE *)this = 0;
      String::operator=(v2, "");
      *(_QWORD *)((char *)this + 4) = 0;
      return this;
    }

}; // end class ServerConnection::Account
