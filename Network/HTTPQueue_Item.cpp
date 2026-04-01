class HTTPQueue::Item
{
public:

    String *__fastcall HTTPQueue::Item::operator=(String *a1, String *a2)
    {
      String::operator=(a1, a2);
      String::operator=(a1 + 1, a2 + 1);
      String::operator=(a1 + 2, a2 + 2);
      return a1;
    }

}; // end class HTTPQueue::Item
