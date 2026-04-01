class std::range_error
{
public:

    void __cdecl std::range_error::~range_error(std::range_error *this)
    {
      std::runtime_error::~runtime_error(this);
    }

    void __cdecl std::range_error::~range_error(std::range_error *this)
    {
      std::runtime_error::~runtime_error(this);
    }

    void __cdecl std::range_error::~range_error(std::range_error *this)
    {
      std::runtime_error::~runtime_error(this);
      operator delete(this);
    }

}; // end class std::range_error
