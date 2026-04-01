class CSVRow
{
public:

    EditClanPopup *__fastcall CSVRow::CSVRow(EditClanPopup *a1, UdpConnectionInfoMessage *a2)
    {
      *((_DWORD *)a1 + 2) = 0;
      *(_QWORD *)a1 = a2;
      *((_DWORD *)a1 + 2) = CSVTable::getColumnRowCount(a2);
      CSVTable::addRow(a2, a1);
      return a1;
    }

    __int64 __fastcall CSVRow::getValueAt(__int64 a1, int a2, int a3)
    {
      return CSVTable::getValueAt(*(UdpConnectionInfoMessage **)a1, a2, *(_DWORD *)(a1 + 8) + a3);
    }

    __int64 __fastcall CSVRow::getColumnCount(UdpConnectionInfoMessage **a1)
    {
      return CSVTable::getColumnCount(*a1);
    }

    __int64 __fastcall CSVRow::getArraySizeAt(UdpConnectionInfoMessage **a1, int a2)
    {
      return CSVTable::getArraySizeAt(*a1, (const EditClanPopup *)a1, a2);
    }

    __int64 __fastcall CSVRow::getValue(__int64 a1, const String *a2, int a3)
    {
      return CSVTable::getValue(*(UdpConnectionInfoMessage **)a1, a2, *(_DWORD *)(a1 + 8) + a3);
    }

    __int64 __fastcall CSVRow::getColumnIndexByName(UdpConnectionInfoMessage **a1, const String *a2)
    {
      return CSVTable::getColumnIndexByName(*a1, a2);
    }

    __int64 __fastcall CSVRow::getIntegerValueAt(__int64 a1, __int64 a2, int a3)
    {
      return CSVTable::getIntegerValueAt(*(_QWORD *)a1, a2, (unsigned int)(*(_DWORD *)(a1 + 8) + a3));
    }

    __int64 __fastcall CSVRow::getIntegerValue(__int64 a1, __int64 a2, int a3)
    {
      return CSVTable::getIntegerValue(*(_QWORD *)a1, a2, (unsigned int)(*(_DWORD *)(a1 + 8) + a3));
    }

    __int64 __fastcall CSVRow::getBooleanValueAt(__int64 a1, __int64 a2, int a3)
    {
      return CSVTable::getBooleanValueAt(*(_QWORD *)a1, a2, (unsigned int)(*(_DWORD *)(a1 + 8) + a3));
    }

    __int64 __fastcall CSVRow::getBooleanValue(__int64 a1, __int64 a2, int a3)
    {
      return CSVTable::getBooleanValue(*(_QWORD *)a1, a2, (unsigned int)(*(_DWORD *)(a1 + 8) + a3));
    }

    __int64 __fastcall CSVRow::getArraySize(UdpConnectionInfoMessage **a1, const String *a2)
    {
      int ColumnIndexByName; // w8
    
      ColumnIndexByName = CSVTable::getColumnIndexByName(*a1, a2);
      if ( ColumnIndexByName == -1 )
        return 0;
      else
        return CSVTable::getArraySizeAt(*a1, (const EditClanPopup *)a1, ColumnIndexByName);
    }

    __int64 __fastcall CSVRow::getRowOffset(__int64 a1)
    {
      return *(unsigned int *)(a1 + 8);
    }

    __int64 __fastcall CSVRow::getName(__int64 a1)
    {
      return CSVTable::getValueAt(*(UdpConnectionInfoMessage **)a1, 0, *(_DWORD *)(a1 + 8));
    }

    __int64 __fastcall CSVRow::destruct(__int64 result)
    {
      *(_QWORD *)result = 0;
      *(_DWORD *)(result + 8) = 0;
      return result;
    }

    __int64 __fastcall CSVRow::getTable(__int64 a1)
    {
      return *(_QWORD *)a1;
    }

    __int64 __fastcall CSVRow::setStringValueAt(__int64 a1, const String *a2, int a3, int a4)
    {
      return CSVTable::setStringValueAt(*(CSVTable **)a1, a2, a3, *(_DWORD *)(a1 + 8) + a4);
    }

    __int64 __fastcall CSVRow::getBooleanValueAt(__int64 a1, __int64 a2)
    {
      return CSVTable::getBooleanValueAt(*(_QWORD *)a1, a2, *(unsigned int *)(a1 + 8));
    }

    __int64 __fastcall CSVRow::getIntegerValueAt(__int64 a1, __int64 a2)
    {
      return CSVTable::getIntegerValueAt(*(_QWORD *)a1, a2, *(unsigned int *)(a1 + 8));
    }

    __int64 __fastcall CSVRow::getValueAt(__int64 a1, int a2)
    {
      return CSVTable::getValueAt(*(UdpConnectionInfoMessage **)a1, a2, *(_DWORD *)(a1 + 8));
    }

}; // end class CSVRow
