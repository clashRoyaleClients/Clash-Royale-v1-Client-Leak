class std::pair<String const,String>
{
public:

    String *__fastcall std::pair<String const,String>::pair(String *a1, const String *a2, const String *a3)
    {
      String::String(a1, a2);
      String::String(a1 + 1, a3);
      return a1;
    }

}; // end class std::pair<String const,String>
