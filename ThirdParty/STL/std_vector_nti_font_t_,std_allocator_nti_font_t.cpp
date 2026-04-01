class std::vector<nti_font_t *,std::allocator<nti_font_t *>>
{
public:

    void **__fastcall std::vector<nti_font_t *>::~vector(void **a1)
    {
      void *v2; // x0
    
      v2 = *a1;
      if ( v2 )
        operator delete(v2);
      return a1;
    }

}; // end class std::vector<nti_font_t *,std::allocator<nti_font_t *>>
