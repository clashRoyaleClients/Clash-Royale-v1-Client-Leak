class std::domain_error
{
public:

    void __cdecl std::domain_error::~domain_error(std::domain_error *this)
    {
      std::logic_error::~logic_error(this);
    }

    void __cdecl std::domain_error::~domain_error(std::domain_error *this)
    {
      std::logic_error::~logic_error(this);
    }

    void __cdecl std::domain_error::~domain_error(std::domain_error *this)
    {
      std::logic_error::~logic_error(this);
      operator delete(this);
    }

}; // end class std::domain_error
