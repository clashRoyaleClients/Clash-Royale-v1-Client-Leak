class ResourceData
{
public:

    void __fastcall ResourceData::ResourceData(ResourceData *this)
    {
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 0;
      *(_QWORD *)this = 0;
      std::vector<ResourceListener *>::reserve((char *)this + 8, 4);
    }

}; // end class ResourceData
