












































				




























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 


  
 

 



  
 

 
  
  
 

















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    

    
    

























































































































































































































































    
    

































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































    
    
    
    
    
    
    
    
    
    
    

    
    



    
    
    



    
    
    
    
    

    
    
    
    
    
    
    

    
    
    
    



    
    


    
    
    
    
    
    
    
    
    
    
    
    


    
    


    
    


    
    



    
    









    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    


    


    
    
    
    
    

    


    
    
    
    
    

    


    
    
    
    
    

    


    
    
    
    
    


    




    
    
    
    
    

    


    
    
    
    
    


    


    
    
    
    
    
    

    


    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    

    
    
    
    
    

    
    
    
    
    

    
    
    
    
    

    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    

    
    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    

    
    
    
    
    
    

    
    
    
    
    


    
    

    
    
    
    

    

    
    
    

    

    
    
    
    
    
    
    
    
    
    
    
    

    
    


    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    


    
    
    
    
     
    

    
    
        
        
        
        
    
    
    
    
    
    

    
    
    

    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    

    

    
    
    
    
    
    
    
    
    
    
    
    
    


    
    
    
    
    
    


    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    

    
    
    
    
    
    
    
    
    

    
    

    
    

    
    
    
    
    
    


    
    
    

    
	

    
    


    
    


    
    
    


    
    
    


    
    











































































    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    



    
    
    

    
    
    







































































































typedef unsigned __int64    uintptr_t;










typedef   char *  va_list;

































































































extern void __cdecl __va_start(  va_list *, ...);




























 















































































        
            
        









































 
 





 



  
 




























    




  


    
  












    
        
        
    























































































































































































 
  
 







 
  
  
 







 
  
   
  


 


























typedef unsigned __int64    size_t;








typedef size_t rsize_t;






typedef __int64             intptr_t;

















typedef __int64             ptrdiff_t;







typedef unsigned short wchar_t;



typedef unsigned short wint_t;
typedef unsigned short wctype_t;














typedef int errcode;
typedef int errno_t;


typedef  long __time32_t;   


typedef __int64 __time64_t;     









typedef __time64_t time_t;      




































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct * pthreadlocinfo;
typedef struct threadmbcinfostruct * pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct
{
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
} _locale_tstruct, *_locale_t;


typedef struct tagLC_ID {
        unsigned short wLanguage;
        unsigned short wCountry;
        unsigned short wCodePage;
} LC_ID, *LPLC_ID;




typedef struct threadlocaleinfostruct {
        int refcount;
        unsigned int lc_codepage;
        unsigned int lc_collate_cp;
        unsigned long lc_handle[6]; 
        LC_ID lc_id[6];
        struct {
            char *locale;
            wchar_t *wlocale;
            int *refcount;
            int *wrefcount;
        } lc_category[6];
        int lc_clike;
        int mb_cur_max;
        int * lconv_intl_refcount;
        int * lconv_num_refcount;
        int * lconv_mon_refcount;
        struct lconv * lconv;
        int * ctype1_refcount;
        unsigned short * ctype1;
        const unsigned short * pctype;
        const unsigned char * pclmap;
        const unsigned char * pcumap;
        struct __lc_time_data * lc_time_curr;
} threadlocinfo;

























































void

__fastcall

_guard_check_icall (
      uintptr_t Target
    );

int
__cdecl
_guard_icall_checks_enforced (
    void
    );


int
__cdecl
_guard_rf_checks_enforced (
    void
    );





































    




        
        
    



















 
















typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution,
    ExceptionContinueSearch,
    ExceptionNestedException,
    ExceptionCollidedUnwind
} EXCEPTION_DISPOSITION;




























struct _EXCEPTION_RECORD;
struct _CONTEXT;
struct _DISPATCHER_CONTEXT;



 EXCEPTION_DISPOSITION __cdecl __C_specific_handler (
      struct _EXCEPTION_RECORD * ExceptionRecord,
      void * EstablisherFrame,
      struct _CONTEXT * ContextRecord,
      struct _DISPATCHER_CONTEXT * DispatcherContext
);




















unsigned long __cdecl _exception_code(void);
void *        __cdecl _exception_info(void);
int           __cdecl _abnormal_termination(void);






















 





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 

























































                                













   int __cdecl _isctype(  int _C,   int _Type);
   int __cdecl _isctype_l(  int _C,   int _Type,   _locale_t _Locale);
    int __cdecl isalpha(  int _C);
   int __cdecl _isalpha_l(  int _C,   _locale_t _Locale);
    int __cdecl isupper(  int _C);
   int __cdecl _isupper_l(  int _C,   _locale_t _Locale);
    int __cdecl islower(  int _C);
   int __cdecl _islower_l(  int _C,   _locale_t _Locale);
    int __cdecl isdigit(  int _C);
   int __cdecl _isdigit_l(  int _C,   _locale_t _Locale);
   int __cdecl isxdigit(  int _C);
   int __cdecl _isxdigit_l(  int _C,   _locale_t _Locale);
    int __cdecl isspace(  int _C);
   int __cdecl _isspace_l(  int _C,   _locale_t _Locale);
   int __cdecl ispunct(  int _C);
   int __cdecl _ispunct_l(  int _C,   _locale_t _Locale);
    int __cdecl isalnum(  int _C);
   int __cdecl _isalnum_l(  int _C,   _locale_t _Locale);
   int __cdecl isprint(  int _C);
   int __cdecl _isprint_l(  int _C,   _locale_t _Locale);
   int __cdecl isgraph(  int _C);
   int __cdecl _isgraph_l(  int _C,   _locale_t _Locale);
   int __cdecl iscntrl(  int _C);
   int __cdecl _iscntrl_l(  int _C,   _locale_t _Locale);
    int __cdecl toupper(  int _C);
    int __cdecl tolower(  int _C);
    int __cdecl _tolower(  int _C);
   int __cdecl _tolower_l(  int _C,   _locale_t _Locale);
    int __cdecl _toupper(  int _C);
   int __cdecl _toupper_l(  int _C,   _locale_t _Locale);
   int __cdecl __isascii(  int _C);
   int __cdecl __toascii(  int _C);
   int __cdecl __iscsymf(  int _C);
   int __cdecl __iscsym(  int _C);









   int __cdecl iswalpha(  wint_t _C);
   int __cdecl _iswalpha_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswupper(  wint_t _C);
   int __cdecl _iswupper_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswlower(  wint_t _C);
   int __cdecl _iswlower_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswdigit(  wint_t _C);
   int __cdecl _iswdigit_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswxdigit(  wint_t _C);
   int __cdecl _iswxdigit_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswspace(  wint_t _C);
   int __cdecl _iswspace_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswpunct(  wint_t _C);
   int __cdecl _iswpunct_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswalnum(  wint_t _C);
   int __cdecl _iswalnum_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswprint(  wint_t _C);
   int __cdecl _iswprint_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswgraph(  wint_t _C);
   int __cdecl _iswgraph_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswcntrl(  wint_t _C);
   int __cdecl _iswcntrl_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswascii(  wint_t _C);
   int __cdecl isleadbyte(  int _C);
   int __cdecl _isleadbyte_l(  int _C,   _locale_t _Locale);

   wint_t __cdecl towupper(  wint_t _C);
   wint_t __cdecl _towupper_l(  wint_t _C,   _locale_t _Locale);
   wint_t __cdecl towlower(  wint_t _C);
   wint_t __cdecl _towlower_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl iswctype(  wint_t _C,   wctype_t _Type);
   int __cdecl _iswctype_l(  wint_t _C,   wctype_t _Type,   _locale_t _Locale);

   int __cdecl __iswcsymf(  wint_t _C);
   int __cdecl _iswcsymf_l(  wint_t _C,   _locale_t _Locale);
   int __cdecl __iswcsym(  wint_t _C);
   int __cdecl _iswcsym_l(  wint_t _C,   _locale_t _Locale);

  int __cdecl is_wctype(  wint_t _C,   wctype_t _Type);






















































































































































































































































 


















































































































































































































































































































 










































































































































































    
    
    

    
    
    

    


    
    
    
    


    


    



    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    


    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    
    

    
    

    
    
    
    
    
    
    

    
    

    
    
    
    
    
    

    
    

    
    
    
    
    
    
    

    
    

    
    
    
    
    
    
    

    
    

    
    
    
    
    











































































































































 
 typedef unsigned __int64 POINTER_64_INT;
 
  
 









































typedef signed char         INT8, *PINT8;
typedef signed short        INT16, *PINT16;
typedef signed int          INT32, *PINT32;
typedef signed __int64      INT64, *PINT64;
typedef unsigned char       UINT8, *PUINT8;
typedef unsigned short      UINT16, *PUINT16;
typedef unsigned int        UINT32, *PUINT32;
typedef unsigned __int64    UINT64, *PUINT64;





typedef signed int LONG32, *PLONG32;





typedef unsigned int ULONG32, *PULONG32;
typedef unsigned int DWORD32, *PDWORD32;





























    typedef __int64 INT_PTR, *PINT_PTR;
    typedef unsigned __int64 UINT_PTR, *PUINT_PTR;

    typedef __int64 LONG_PTR, *PLONG_PTR;
    typedef unsigned __int64 ULONG_PTR, *PULONG_PTR;

    























typedef void* __ptr64 HANDLE64;
typedef HANDLE64 *PHANDLE64;












typedef __int64 SHANDLE_PTR;
typedef unsigned __int64 HANDLE_PTR;
typedef unsigned int UHALF_PTR, *PUHALF_PTR;
typedef int HALF_PTR, *PHALF_PTR;



unsigned long
HandleToULong(
    const void *h
    )
;


long
HandleToLong(
    const void *h
    )
;


void *
ULongToHandle(
    const unsigned long h
    )
;



void *
LongToHandle(
    const long h
    )
;



unsigned long
PtrToUlong(
    const void  *p
    )
;


unsigned int
PtrToUint(
    const void  *p
    )
;


unsigned short
PtrToUshort(
    const void  *p
    )
;


long
PtrToLong(
    const void  *p
    )
;


int
PtrToInt(
    const void  *p
    )
;


short
PtrToShort(
    const void  *p
    )
;


void *
IntToPtr(
    const int i
    )

;


void *
UIntToPtr(
    const unsigned int ui
    )

;


void *
LongToPtr(
    const long l
    )

;


void *
ULongToPtr(
    const unsigned long ul
    )

;







void *
Ptr32ToPtr(
    const void * __ptr32 p
    )
;


void *
Handle32ToHandle(
    const void * __ptr32 h
    )
;


void * __ptr32
PtrToPtr32(
    const void *p
    )
;
































































































typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG_PTR SSIZE_T, *PSSIZE_T;















































typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;





typedef __int64 LONG64, *PLONG64;






typedef unsigned __int64 ULONG64, *PULONG64;
typedef unsigned __int64 DWORD64, *PDWORD64;







typedef ULONG_PTR KAFFINITY;
typedef KAFFINITY *PKAFFINITY;




































































































































































































































































typedef void *PVOID;
typedef void * __ptr64 PVOID64;




























































typedef char CHAR;
typedef short SHORT;
typedef long LONG;

typedef int INT;








typedef wchar_t WCHAR;    





typedef WCHAR *PWCHAR, *LPWCH, *PWCH;
typedef const WCHAR *LPCWCH, *PCWCH;

typedef   WCHAR *NWPSTR, *LPWSTR, *PWSTR;
typedef   PWSTR *PZPWSTR;
typedef   const PWSTR *PCZPWSTR;
typedef   WCHAR __unaligned *LPUWSTR, *PUWSTR;
typedef   const WCHAR *LPCWSTR, *PCWSTR;
typedef   PCWSTR *PZPCWSTR;
typedef   const PCWSTR *PCZPCWSTR;
typedef   const WCHAR __unaligned *LPCUWSTR, *PCUWSTR;

typedef   WCHAR *PZZWSTR;
typedef   const WCHAR *PCZZWSTR;
typedef   WCHAR __unaligned *PUZZWSTR;
typedef   const WCHAR __unaligned *PCUZZWSTR;

typedef  WCHAR *PNZWCH;
typedef  const WCHAR *PCNZWCH;
typedef  WCHAR __unaligned *PUNZWCH;
typedef  const WCHAR __unaligned *PCUNZWCH;



typedef const WCHAR *LPCWCHAR, *PCWCHAR;
typedef const WCHAR __unaligned *LPCUWCHAR, *PCUWCHAR;





typedef unsigned long UCSCHAR;



















typedef UCSCHAR *PUCSCHAR;
typedef const UCSCHAR *PCUCSCHAR;

typedef UCSCHAR *PUCSSTR;
typedef UCSCHAR __unaligned *PUUCSSTR;

typedef const UCSCHAR *PCUCSSTR;
typedef const UCSCHAR __unaligned *PCUUCSSTR;

typedef UCSCHAR __unaligned *PUUCSCHAR;
typedef const UCSCHAR __unaligned *PCUUCSCHAR;







typedef CHAR *PCHAR, *LPCH, *PCH;
typedef const CHAR *LPCCH, *PCCH;

typedef   CHAR *NPSTR, *LPSTR, *PSTR;
typedef   PSTR *PZPSTR;
typedef   const PSTR *PCZPSTR;
typedef   const CHAR *LPCSTR, *PCSTR;
typedef   PCSTR *PZPCSTR;
typedef   const PCSTR *PCZPCSTR;

typedef   CHAR *PZZSTR;
typedef   const CHAR *PCZZSTR;

typedef  CHAR *PNZCH;
typedef  const CHAR *PCNZCH;

































typedef char TCHAR, *PTCHAR;
typedef unsigned char TUCHAR, *PTUCHAR;



typedef LPCH LPTCH, PTCH;
typedef LPCCH LPCTCH, PCTCH;
typedef LPSTR PTSTR, LPTSTR, PUTSTR, LPUTSTR;
typedef LPCSTR PCTSTR, LPCTSTR, PCUTSTR, LPCUTSTR;
typedef PZZSTR PZZTSTR, PUZZTSTR;
typedef PCZZSTR PCZZTSTR, PCUZZTSTR;
typedef PZPSTR PZPTSTR;
typedef PNZCH PNZTCH, PUNZTCH;
typedef PCNZCH PCNZTCH, PCUNZTCH;













typedef double DOUBLE;

typedef struct _QUAD {
    union {
        __int64 UseThisFieldToCopy;
        double  DoNotUseThisField;
    } ;

} QUAD;





typedef SHORT *PSHORT;  
typedef LONG *PLONG;    
typedef QUAD *PQUAD;








typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned long ULONG;
typedef QUAD UQUAD;





typedef UCHAR *PUCHAR;
typedef USHORT *PUSHORT;
typedef ULONG *PULONG;
typedef UQUAD *PUQUAD;









typedef const UCHAR *PCUCHAR;
typedef const USHORT *PCUSHORT;
typedef const ULONG *PCULONG;
typedef const UQUAD *PCUQUAD;







typedef signed char SCHAR;
typedef SCHAR *PSCHAR;



typedef const SCHAR *PCSCHAR;


















typedef struct _PROCESSOR_NUMBER {
    USHORT Group;
    UCHAR Number;
    UCHAR Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER;






typedef struct _GROUP_AFFINITY {
    KAFFINITY Mask;
    USHORT Group;
    USHORT Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY;




















typedef void *HANDLE;









typedef HANDLE *PHANDLE;







typedef UCHAR  FCHAR;
typedef USHORT FSHORT;
typedef ULONG  FLONG;










typedef   long HRESULT;























    
    
    
    
    







































































typedef char CCHAR;          
typedef short CSHORT;
typedef ULONG CLONG;

typedef CCHAR *PCCHAR;
typedef CSHORT *PCSHORT;
typedef CLONG *PCLONG;



















typedef ULONG LCID;         
typedef PULONG PLCID;       
typedef USHORT LANGID;      










typedef enum {
    UNSPECIFIED_COMPARTMENT_ID = 0,
    DEFAULT_COMPARTMENT_ID
} COMPARTMENT_ID, *PCOMPARTMENT_ID;











typedef ULONG LOGICAL;
typedef ULONG *PLOGICAL;












typedef   LONG NTSTATUS;
  
typedef NTSTATUS *PNTSTATUS;
  


typedef const NTSTATUS *PCNTSTATUS;













































































typedef long SECURITY_STATUS;



































typedef struct _FLOAT128 {
    __int64 LowPart;
    __int64 HighPart;
} FLOAT128;

typedef FLOAT128 *PFLOAT128;













typedef __int64 LONGLONG;
typedef unsigned __int64 ULONGLONG;




















typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;



typedef LONGLONG USN;






typedef union _LARGE_INTEGER {
    struct {
        ULONG LowPart;
        LONG HighPart;
    } ;
    struct {
        ULONG LowPart;
        LONG HighPart;
    } u;
    LONGLONG QuadPart;
} LARGE_INTEGER;


typedef LARGE_INTEGER *PLARGE_INTEGER;






typedef union _ULARGE_INTEGER {
    struct {
        ULONG LowPart;
        ULONG HighPart;
    } ;
    struct {
        ULONG LowPart;
        ULONG HighPart;
    } u;
    ULONGLONG QuadPart;
} ULARGE_INTEGER;


typedef ULARGE_INTEGER *PULARGE_INTEGER;





typedef LONG_PTR RTL_REFERENCE_COUNT, *PRTL_REFERENCE_COUNT;
typedef LONG RTL_REFERENCE_COUNT32, *PRTL_REFERENCE_COUNT32;









typedef struct _LUID {
    ULONG LowPart;
    LONG HighPart;
} LUID, *PLUID;


typedef ULONGLONG  DWORDLONG;
typedef DWORDLONG *PDWORDLONG;












typedef LARGE_INTEGER PHYSICAL_ADDRESS, *PPHYSICAL_ADDRESS;





















































































































































unsigned char
__cdecl
_rotl8 (
      unsigned char Value,
      unsigned char Shift
    );

unsigned short
__cdecl
_rotl16 (
      unsigned short Value,
      unsigned char Shift
    );

unsigned char
__cdecl
_rotr8 (
      unsigned char Value,
      unsigned char Shift
    );

unsigned short
__cdecl
_rotr16 (
      unsigned short Value,
      unsigned char Shift
    );











unsigned int
__cdecl
_rotl (
      unsigned int Value,
      int Shift
    );

unsigned __int64
__cdecl
_rotl64 (
      unsigned __int64 Value,
      int Shift
    );

unsigned int
__cdecl
_rotr (
      unsigned int Value,
      int Shift
    );

unsigned __int64
__cdecl
_rotr64 (
      unsigned __int64 Value,
      int Shift
    );















typedef enum _EVENT_TYPE {
    NotificationEvent,
    SynchronizationEvent
} EVENT_TYPE;






typedef enum _TIMER_TYPE {
    NotificationTimer,
    SynchronizationTimer
} TIMER_TYPE;





typedef enum _WAIT_TYPE {
    WaitAll,
    WaitAny,
    WaitNotification,
    WaitDequeue,
    WaitDpc
} WAIT_TYPE;








typedef   CHAR *PSZ;
typedef   const char *PCSZ;






typedef USHORT RTL_STRING_LENGTH_TYPE;

typedef struct _STRING {
    USHORT Length;
    USHORT MaximumLength;



      PCHAR Buffer;
} STRING;
typedef STRING *PSTRING;
typedef STRING ANSI_STRING;
typedef PSTRING PANSI_STRING;




typedef STRING OEM_STRING;
typedef PSTRING POEM_STRING;
typedef const STRING* PCOEM_STRING;





typedef struct _CSTRING {
    USHORT Length;
    USHORT MaximumLength;
    const char *Buffer;
} CSTRING;
typedef CSTRING *PCSTRING;





typedef STRING CANSI_STRING;
typedef PSTRING PCANSI_STRING;

typedef STRING UTF8_STRING;
typedef PSTRING PUTF8_STRING;






typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;



      PWCH   Buffer;

} UNICODE_STRING;
typedef UNICODE_STRING *PUNICODE_STRING;
typedef const UNICODE_STRING *PCUNICODE_STRING;










































typedef UCHAR BOOLEAN;           
typedef BOOLEAN *PBOOLEAN;       









typedef struct _LIST_ENTRY {
   struct _LIST_ENTRY *Flink;
   struct _LIST_ENTRY *Blink;
} LIST_ENTRY, *PLIST_ENTRY, * PRLIST_ENTRY;






typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY;










typedef struct _RTL_BALANCED_NODE {
    union {
        struct _RTL_BALANCED_NODE *Children[2];
        struct {
            struct _RTL_BALANCED_NODE *Left;
            struct _RTL_BALANCED_NODE *Right;
        } ;
    } ;



    union {
        UCHAR Red : 1;
        UCHAR Balance : 2;
        ULONG_PTR ParentValue;
    } ;
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE;














typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
} LIST_ENTRY32;
typedef LIST_ENTRY32 *PLIST_ENTRY32;

typedef struct LIST_ENTRY64 {
    ULONGLONG Flink;
    ULONGLONG Blink;
} LIST_ENTRY64;
typedef LIST_ENTRY64 *PLIST_ENTRY64;



typedef struct _SINGLE_LIST_ENTRY32 {
    ULONG Next;
} SINGLE_LIST_ENTRY32, *PSINGLE_LIST_ENTRY32;



void
ListEntry32To64(
      PLIST_ENTRY32 l32,
      PLIST_ENTRY64 l64
    )
;


void
ListEntry64To32(
      PLIST_ENTRY64 l64,
      PLIST_ENTRY32 l32
    )
;












typedef struct _WNF_STATE_NAME {
    ULONG Data[2];
} WNF_STATE_NAME;

typedef struct _WNF_STATE_NAME* PWNF_STATE_NAME;
typedef const struct _WNF_STATE_NAME* PCWNF_STATE_NAME;



typedef struct _STRING32 {
    USHORT   Length;
    USHORT   MaximumLength;
    ULONG  Buffer;
} STRING32;
typedef STRING32 *PSTRING32;

typedef STRING32 UNICODE_STRING32;
typedef UNICODE_STRING32 *PUNICODE_STRING32;

typedef STRING32 ANSI_STRING32;
typedef ANSI_STRING32 *PANSI_STRING32;


typedef struct _STRING64 {
    USHORT   Length;
    USHORT   MaximumLength;
    ULONGLONG  Buffer;
} STRING64;
typedef STRING64 *PSTRING64;

typedef STRING64 UNICODE_STRING64;
typedef UNICODE_STRING64 *PUNICODE_STRING64;

typedef STRING64 ANSI_STRING64;
typedef ANSI_STRING64 *PANSI_STRING64;























typedef struct _OBJECT_ATTRIBUTES64 {
    ULONG Length;
    ULONG64 RootDirectory;
    ULONG64 ObjectName;
    ULONG Attributes;
    ULONG64 SecurityDescriptor;
    ULONG64 SecurityQualityOfService;
} OBJECT_ATTRIBUTES64;
typedef OBJECT_ATTRIBUTES64 *POBJECT_ATTRIBUTES64;
typedef const OBJECT_ATTRIBUTES64 *PCOBJECT_ATTRIBUTES64;

typedef struct _OBJECT_ATTRIBUTES32 {
    ULONG Length;
    ULONG RootDirectory;
    ULONG ObjectName;
    ULONG Attributes;
    ULONG SecurityDescriptor;
    ULONG SecurityQualityOfService;
} OBJECT_ATTRIBUTES32;
typedef OBJECT_ATTRIBUTES32 *POBJECT_ATTRIBUTES32;
typedef const OBJECT_ATTRIBUTES32 *PCOBJECT_ATTRIBUTES32;



typedef struct _OBJECT_ATTRIBUTES {
    ULONG Length;
    HANDLE RootDirectory;
    PUNICODE_STRING ObjectName;
    ULONG Attributes;
    PVOID SecurityDescriptor;        
    PVOID SecurityQualityOfService;  
} OBJECT_ATTRIBUTES;
typedef OBJECT_ATTRIBUTES *POBJECT_ATTRIBUTES;
typedef const OBJECT_ATTRIBUTES *PCOBJECT_ATTRIBUTES;

















































































typedef struct _GUID {
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[ 8 ];
} GUID;















































typedef GUID *LPGUID;




typedef const GUID *LPCGUID;





typedef GUID IID;
typedef IID *LPIID;


typedef GUID CLSID;
typedef CLSID *LPCLSID;


typedef GUID FMTID;
typedef FMTID *LPFMTID;
















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 































 void *  __cdecl _memccpy(   void * _Dst,   const void * _Src,   int _Val,   size_t _MaxCount);
    void *  __cdecl memchr(   const void * _Buf ,   int _Val,   size_t _MaxCount);
   int     __cdecl _memicmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
   int     __cdecl _memicmp_l(  const void * _Buf1,   const void * _Buf2,   size_t _Size,   _locale_t _Locale);
  int     __cdecl memcmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
 
 

void *  __cdecl memcpy(  void * _Dst,   const void * _Src,   size_t _MaxCount);

 errno_t  __cdecl memcpy_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);





 

void *  __cdecl memset(  void * _Dst,   int _Val,   size_t _Size);



  void * __cdecl memccpy(  void * _Dst,   const void * _Src,   int _Val,   size_t _Size);
    int __cdecl memicmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);




  errno_t __cdecl _strset_s(  char * _Dst,   size_t _DstSize,   int _Value);

  char * __cdecl _strset( char *_Dest,  int _Value);

  errno_t __cdecl strcpy_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src);


  char * __cdecl strcpy( char *_Dest,  const char * _Source);

  errno_t __cdecl strcat_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src);


  char * __cdecl strcat( char *_Dest,  const char * _Source);
          int     __cdecl strcmp(  const char * _Str1,   const char * _Str2);
        size_t  __cdecl strlen(  const char * _Str);



size_t  __cdecl strnlen(   const char * _Str,   size_t _MaxCount);

static 


size_t  __cdecl strnlen_s(   const char * _Str,   size_t _MaxCount)
;


  errno_t __cdecl memmove_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);





         void *  __cdecl memmove(  void * _Dst,   const void * _Src,   size_t _Size);









   char *  __cdecl _strdup(  const char * _Src);





    char *  __cdecl strchr(  const char * _Str,   int _Val);
   int     __cdecl _stricmp(   const char * _Str1,    const char * _Str2);
   int     __cdecl _strcmpi(   const char * _Str1,    const char * _Str2);
   int     __cdecl _stricmp_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
   int     __cdecl strcoll(   const char * _Str1,    const  char * _Str2);
   int     __cdecl _strcoll_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
   int     __cdecl _stricoll(   const char * _Str1,    const char * _Str2);
   int     __cdecl _stricoll_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
   int     __cdecl _strncoll  (  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
   int     __cdecl _strncoll_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
   int     __cdecl _strnicoll (  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
   int     __cdecl _strnicoll_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
   size_t  __cdecl strcspn(   const char * _Str,    const char * _Control);
    char *  __cdecl _strerror(  const char * _ErrMsg);
  errno_t __cdecl _strerror_s(  char * _Buf,   size_t _SizeInBytes,   const char * _ErrMsg);

    char *  __cdecl strerror(  int);

  errno_t __cdecl strerror_s(  char * _Buf,   size_t _SizeInBytes,   int _ErrNum);


  errno_t __cdecl _strlwr_s(  char * _Str,   size_t _Size);

  char * __cdecl _strlwr( char *_String);
  errno_t __cdecl _strlwr_s_l(  char * _Str,   size_t _Size,   _locale_t _Locale);

  char * __cdecl _strlwr_l(  char *_String,   _locale_t _Locale);

  errno_t __cdecl strncat_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src,   rsize_t _MaxCount);






  char * __cdecl strncat(  char *_Dest,   const char * _Source,   size_t _Count);



   int     __cdecl strncmp(  const char * _Str1,   const char * _Str2,   size_t _MaxCount);

   int     __cdecl _strnicmp(  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
   int     __cdecl _strnicmp_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);

  errno_t __cdecl strncpy_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src,   rsize_t _MaxCount);


  char * __cdecl strncpy(    char *_Dest,   const char * _Source,   size_t _Count);
  errno_t __cdecl _strnset_s(  char * _Str,   size_t _SizeInBytes,   int _Val,   size_t _MaxCount);

  char * __cdecl _strnset(  char *_Dest,   int _Val,   size_t _Count);
    char *  __cdecl strpbrk(  const char * _Str,   const char * _Control);
    char *  __cdecl strrchr(  const char * _Str,   int _Ch);
 char *  __cdecl _strrev(  char * _Str);
 
   size_t  __cdecl strspn(  const char * _Str,   const char * _Control);
    char *  __cdecl strstr(  const char * _Str,   const char * _SubStr);
    char *  __cdecl strtok(  char * _Str,   const char * _Delim);

   char *  __cdecl strtok_s(  char * _Str,   const char * _Delim,     char ** _Context);

  errno_t __cdecl _strupr_s(  char * _Str,   size_t _Size);

  char * __cdecl _strupr( char *_String);
  errno_t __cdecl _strupr_s_l(  char * _Str,   size_t _Size, _locale_t _Locale);

  char * __cdecl _strupr_l(  char *_String,   _locale_t _Locale);
  size_t  __cdecl strxfrm (    char * _Dst,   const char * _Src,   size_t _MaxCount);
  size_t  __cdecl _strxfrm_l(    char * _Dst,   const char * _Src,   size_t _MaxCount,   _locale_t _Locale);































    char * __cdecl strdup(  const char * _Src);






    int __cdecl strcmpi(  const char * _Str1,   const char * _Str2);
    int __cdecl stricmp(  const char * _Str1,   const char * _Str2);
  char * __cdecl strlwr(  char * _Str);
    int __cdecl strnicmp(  const char * _Str1,   const char * _Str,   size_t _MaxCount);
  char * __cdecl strnset(  char * _Str,   int _Val,   size_t _MaxCount);
  char * __cdecl strrev(  char * _Str);
         char * __cdecl strset(  char * _Str,   int _Val);
  char * __cdecl strupr(  char * _Str);













   wchar_t * __cdecl _wcsdup(  const wchar_t * _Str);






  errno_t __cdecl wcscat_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src);


  wchar_t * __cdecl wcscat( wchar_t *_Dest,  const wchar_t * _Source);
  

  wchar_t * __cdecl wcschr(  const wchar_t * _Str, wchar_t _Ch);
   int __cdecl wcscmp(  const wchar_t * _Str1,   const wchar_t * _Str2);

  errno_t __cdecl wcscpy_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src);


  wchar_t * __cdecl wcscpy( wchar_t *_Dest,  const wchar_t * _Source);
   size_t __cdecl wcscspn(  const wchar_t * _Str,   const wchar_t * _Control);
 size_t __cdecl wcslen(  const wchar_t * _Str);



size_t __cdecl wcsnlen(  const wchar_t * _Src,   size_t _MaxCount);

static 


size_t __cdecl wcsnlen_s(  const wchar_t * _Src,   size_t _MaxCount)
;


  errno_t __cdecl wcsncat_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src,   rsize_t _MaxCount);


  wchar_t * __cdecl wcsncat(  wchar_t *_Dest,   const wchar_t * _Source,   size_t _Count);
   int __cdecl wcsncmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);

  errno_t __cdecl wcsncpy_s(  wchar_t * _Dst,   rsize_t _SizeInWords,   const wchar_t * _Src,   rsize_t _MaxCount);


  wchar_t * __cdecl wcsncpy(    wchar_t *_Dest,   const wchar_t * _Source,   size_t _Count);
    wchar_t * __cdecl wcspbrk(  const wchar_t * _Str,   const wchar_t * _Control);
    wchar_t * __cdecl wcsrchr(  const wchar_t * _Str,   wchar_t _Ch);
 
   size_t __cdecl wcsspn(  const wchar_t * _Str,   const wchar_t * _Control);
  

  wchar_t * __cdecl wcsstr(  const wchar_t * _Str,   const wchar_t * _SubStr);








    wchar_t * __cdecl wcstok(  wchar_t * _Str,   const wchar_t * _Delim);



   wchar_t * __cdecl wcstok_s(  wchar_t * _Str,   const wchar_t * _Delim,     wchar_t ** _Context);

    wchar_t * __cdecl _wcserror(  int _ErrNum);
  errno_t __cdecl _wcserror_s(  wchar_t * _Buf,   size_t _SizeInWords,   int _ErrNum);

    wchar_t * __cdecl __wcserror(  const wchar_t * _Str);
  errno_t __cdecl __wcserror_s(  wchar_t * _Buffer,   size_t _SizeInWords,   const wchar_t * _ErrMsg);


   int __cdecl _wcsicmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
   int __cdecl _wcsicmp_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   _locale_t _Locale);
   int __cdecl _wcsnicmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
   int __cdecl _wcsnicmp_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
  errno_t __cdecl _wcsnset_s(  wchar_t * _Dst,   size_t _SizeInWords,   wchar_t _Val,   size_t _MaxCount);

  wchar_t * __cdecl _wcsnset(  wchar_t *_Str, wchar_t _Val,   size_t _MaxCount);
 wchar_t * __cdecl _wcsrev(  wchar_t * _Str);
  errno_t __cdecl _wcsset_s(  wchar_t * _Dst,   size_t _SizeInWords,   wchar_t _Value);

  wchar_t * __cdecl _wcsset(  wchar_t *_Str, wchar_t _Val);

  errno_t __cdecl _wcslwr_s(  wchar_t * _Str,   size_t _SizeInWords);

  wchar_t * __cdecl _wcslwr( wchar_t *_String);
  errno_t __cdecl _wcslwr_s_l(  wchar_t * _Str,   size_t _SizeInWords,   _locale_t _Locale);

  wchar_t * __cdecl _wcslwr_l(  wchar_t *_String,   _locale_t _Locale);
  errno_t __cdecl _wcsupr_s(  wchar_t * _Str,   size_t _Size);

  wchar_t * __cdecl _wcsupr( wchar_t *_String);
  errno_t __cdecl _wcsupr_s_l(  wchar_t * _Str,   size_t _Size,   _locale_t _Locale);

  wchar_t * __cdecl _wcsupr_l(  wchar_t *_String,   _locale_t _Locale);
  size_t __cdecl wcsxfrm(    wchar_t * _Dst,   const wchar_t * _Src,   size_t _MaxCount);
  size_t __cdecl _wcsxfrm_l(    wchar_t * _Dst,   const wchar_t *_Src,   size_t _MaxCount,   _locale_t _Locale);
   int __cdecl wcscoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
   int __cdecl _wcscoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   _locale_t _Locale);
   int __cdecl _wcsicoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
   int __cdecl _wcsicoll_l(  const wchar_t * _Str1,   const wchar_t *_Str2,   _locale_t _Locale);
   int __cdecl _wcsncoll(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
   int __cdecl _wcsncoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
   int __cdecl _wcsnicoll(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
   int __cdecl _wcsnicoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);






























    wchar_t * __cdecl wcsdup(  const wchar_t * _Str);









    int __cdecl wcsicmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
    int __cdecl wcsnicmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
  wchar_t * __cdecl wcsnset(  wchar_t * _Str,   wchar_t _Val,   size_t _MaxCount);
  wchar_t * __cdecl wcsrev(  wchar_t * _Str);
  wchar_t * __cdecl wcsset(  wchar_t * _Str, wchar_t _Val);
  wchar_t * __cdecl wcslwr(  wchar_t * _Str);
  wchar_t * __cdecl wcsupr(  wchar_t * _Str);
    int __cdecl wcsicoll(  const wchar_t * _Str1,   const wchar_t * _Str2);















 

































































typedef struct  _OBJECTID {     
    GUID Lineage;
    ULONG Uniquifier;
} OBJECTID;






















































































































































































































































char _RTL_CONSTANT_STRING_type_check(const void *s);




































typedef
 
 
EXCEPTION_DISPOSITION
__stdcall
EXCEPTION_ROUTINE (
      struct _EXCEPTION_RECORD *ExceptionRecord,
      PVOID EstablisherFrame,
      struct _CONTEXT *ContextRecord,
      PVOID DispatcherContext
    );

typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;










typedef UCHAR KIRQL;

typedef KIRQL *PKIRQL;




















typedef enum _NT_PRODUCT_TYPE {
    NtProductWinNt = 1,
    NtProductLanManNt,
    NtProductServer
} NT_PRODUCT_TYPE, *PNT_PRODUCT_TYPE;








typedef   enum _SUITE_TYPE {
    SmallBusiness,
    Enterprise,
    BackOffice,
    CommunicationServer,
    TerminalServer,
    SmallBusinessRestricted,
    EmbeddedNT,
    DataCenter,
    SingleUserTS,
    Personal,
    Blade,
    EmbeddedRestricted,
    SecurityAppliance,
    StorageServer,
    ComputeServer,
    WHServer,
    PhoneNT,
    MultiUserTS,
    MaxSuiteType
} SUITE_TYPE;













































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((struct { char x; LARGE_INTEGER test; } *)0)->test)) == 8)?1:-1];



















































  






















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 




















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































  




















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































__pragma(warning(disable: 28110 28111 28161 28162)) typedef   int __prefast_analysis_mode_flag0;
__pragma(warning(disable: 28110 28111 28161 28162)) typedef   int __prefast_analysis_mode_flag1;










typedef struct _ACCESS_STATE *PACCESS_STATE;
typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT;







typedef struct _EPROCESS *PEPROCESS;
typedef struct _ETHREAD *PETHREAD;

typedef struct _IO_TIMER *PIO_TIMER;
typedef struct _KINTERRUPT *PKINTERRUPT;
typedef struct _KTHREAD *PKTHREAD, *PRKTHREAD;
typedef struct _KPROCESS *PKPROCESS, *PRKPROCESS;
typedef struct _OBJECT_TYPE *POBJECT_TYPE;
typedef struct _SECURITY_QUALITY_OF_SERVICE *PSECURITY_QUALITY_OF_SERVICE;






typedef struct _CONTEXT *PCONTEXT;
typedef struct _IO_STACK_LOCATION *PIO_STACK_LOCATION;
typedef struct _VPB *PVPB;
typedef struct _FILE_GET_QUOTA_INFORMATION *PFILE_GET_QUOTA_INFORMATION;






ULONG64
__readgsqword (
      ULONG Offset
    );



PKTHREAD
KeGetCurrentThread (
    void
    )

;








































































typedef enum {
    HAL_MCE_RECORD,
    HAL_MCA_RECORD
} MCA_EXCEPTION_TYPE;







typedef union _MCI_ADDR{
    struct {
        ULONG Address;
        ULONG Reserved;
    } ;

    ULONGLONG   QuadPart;
} MCI_ADDR, *PMCI_ADDR;


























typedef union _MCI_STATS {
    struct {
        USHORT  McaErrorCode;
        USHORT  ModelErrorCode;
        ULONG   OtherInformation : 25;
        ULONG   ContextCorrupt : 1;
        ULONG   AddressValid : 1;
        ULONG   MiscValid : 1;
        ULONG   ErrorEnabled : 1;
        ULONG   UncorrectedError : 1;
        ULONG   StatusOverFlow : 1;
        ULONG   Valid : 1;
    } MciStatus;

    ULONG64 QuadPart;
} MCI_STATS, *PMCI_STATS;








































typedef struct _MCA_EXCEPTION {

    
    ULONG               VersionNumber;      
    MCA_EXCEPTION_TYPE  ExceptionType;      
    LARGE_INTEGER       TimeStamp;          
    ULONG               ProcessorNumber;
    ULONG               Reserved1;

    union {
        struct {
            UCHAR           BankNumber;
            UCHAR           Reserved2[7];
            MCI_STATS       Status;
            MCI_ADDR        Address;
            ULONGLONG       Misc;
        } Mca;

        struct {
            ULONGLONG       Address;        
            ULONGLONG       Type;           
        } Mce;
    } u;
    

    
    ULONG                   ExtCnt;
    ULONG                   Reserved3;
    ULONGLONG               ExtReg[24];
    

} MCA_EXCEPTION, *PMCA_EXCEPTION;



























typedef MCA_EXCEPTION CMC_EXCEPTION, *PCMC_EXCEPTION;    
typedef MCA_EXCEPTION CPE_EXCEPTION, *PCPE_EXCEPTION;    

















typedef UCHAR ERROR_SEVERITY, *PERROR_SEVERITY;

typedef enum _ERROR_SEVERITY_VALUE  {
    ErrorRecoverable = 0,
    ErrorFatal       = 1,
    ErrorCorrected   = 2,
    ErrorOthers      = 3,   
} ERROR_SEVERITY_VALUE;












































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































extern  volatile CCHAR KeNumberProcessors;



































































































typedef struct _KSYSTEM_TIME {
    ULONG LowPart;
    LONG High1Time;
    LONG High2Time;
} KSYSTEM_TIME, *PKSYSTEM_TIME;






typedef LONG KPRIORITY;








typedef ULONG_PTR KSPIN_LOCK;
typedef KSPIN_LOCK *PKSPIN_LOCK;
















































typedef ULONG64 KSPIN_LOCK_QUEUE_NUMBER;













































typedef struct _KSPIN_LOCK_QUEUE {
    struct _KSPIN_LOCK_QUEUE * volatile Next;
    PKSPIN_LOCK volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE;

typedef struct _KLOCK_QUEUE_HANDLE {
    KSPIN_LOCK_QUEUE LockQueue;
    KIRQL OldIrql;
} KLOCK_QUEUE_HANDLE, *PKLOCK_QUEUE_HANDLE;




typedef enum _KPROFILE_SOURCE {
    ProfileTime,
    ProfileAlignmentFixup,
    ProfileTotalIssues,
    ProfilePipelineDry,
    ProfileLoadInstructions,
    ProfilePipelineFrozen,
    ProfileBranchInstructions,
    ProfileTotalNonissues,
    ProfileDcacheMisses,
    ProfileIcacheMisses,
    ProfileCacheMisses,
    ProfileBranchMispredictions,
    ProfileStoreInstructions,
    ProfileFpInstructions,
    ProfileIntegerInstructions,
    Profile2Issue,
    Profile3Issue,
    Profile4Issue,
    ProfileSpecialInstructions,
    ProfileTotalCycles,
    ProfileIcacheIssues,
    ProfileDcacheAccesses,
    ProfileMemoryBarrierCycles,
    ProfileLoadLinkedIssues,
    ProfileMaximum
} KPROFILE_SOURCE;










typedef struct _DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK {
    ULONG Signature;
    USHORT Revision;
    USHORT Size;
    USHORT DpcWatchdogProfileOffset;
    ULONG DpcWatchdogProfileLength;
} DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK, *PDPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK;







typedef struct  _M128A {
    ULONGLONG Low;
    LONGLONG High;
} M128A, *PM128A;





typedef struct  _XSAVE_FORMAT {
    USHORT ControlWord;
    USHORT StatusWord;
    UCHAR TagWord;
    UCHAR Reserved1;
    USHORT ErrorOpcode;
    ULONG ErrorOffset;
    USHORT ErrorSelector;
    USHORT Reserved2;
    ULONG DataOffset;
    USHORT DataSelector;
    USHORT Reserved3;
    ULONG MxCsr;
    ULONG MxCsr_Mask;
    M128A FloatRegisters[8];



    M128A XmmRegisters[16];
    UCHAR Reserved4[96];








} XSAVE_FORMAT, *PXSAVE_FORMAT;







typedef struct _XSAVE_CET_U_FORMAT {
    ULONG64 Ia32CetUMsr;
    ULONG64 Ia32Pl3SspMsr;
} XSAVE_CET_U_FORMAT, *PXSAVE_CET_U_FORMAT;

typedef struct  _XSAVE_AREA_HEADER {
    ULONG64 Mask;
    ULONG64 CompactionMask;
    ULONG64 Reserved2[6];
} XSAVE_AREA_HEADER, *PXSAVE_AREA_HEADER;

typedef struct  _XSAVE_AREA {
    XSAVE_FORMAT LegacyState;
    XSAVE_AREA_HEADER Header;
} XSAVE_AREA, *PXSAVE_AREA;

typedef struct _XSTATE_CONTEXT {
    ULONG64 Mask;
    ULONG Length;
    ULONG Reserved1;
      PXSAVE_AREA Area;





    PVOID Buffer;





} XSTATE_CONTEXT, *PXSTATE_CONTEXT;

typedef struct _KERNEL_CET_CONTEXT {
    ULONG64 Ssp;
    ULONG64 Rip;
    USHORT SegCs;
    union {
        USHORT AllFlags;
        struct {
            USHORT UseWrss : 1;
            USHORT PopShadowStackOne : 1;
            USHORT Unused : 14;
        } ;
    } ;
    USHORT Fill[2];
} KERNEL_CET_CONTEXT, *PKERNEL_CET_CONTEXT;



typedef char __C_ASSERT__[(sizeof(KERNEL_CET_CONTEXT) == (3 * sizeof(ULONG64)))?1:-1];


























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































 
BOOLEAN
_bittest (
      LONG const *Base,
      LONG Offset
    );

BOOLEAN
_bittestandcomplement (
      LONG *Base,
      LONG Offset
    );

BOOLEAN
_bittestandset (
      LONG *Base,
      LONG Offset
    );

BOOLEAN
_bittestandreset (
      LONG *Base,
      LONG Offset
    );

BOOLEAN
_interlockedbittestandset (
       LONG volatile *Base,
      LONG Offset
    );

BOOLEAN
_interlockedbittestandreset (
       LONG volatile *Base,
      LONG Offset
    );

BOOLEAN
_bittest64 (
      LONG64 const *Base,
      LONG64 Offset
    );

BOOLEAN
_bittestandcomplement64 (
      LONG64 *Base,
      LONG64 Offset
    );

BOOLEAN
_bittestandset64 (
      LONG64 *Base,
      LONG64 Offset
    );

BOOLEAN
_bittestandreset64 (
      LONG64 *Base,
      LONG64 Offset
    );

BOOLEAN
_interlockedbittestandset64 (
       LONG64 volatile *Base,
      LONG64 Offset
    );

BOOLEAN
_interlockedbittestandreset64 (
       LONG64 volatile *Base,
      LONG64 Offset
    );


















 
BOOLEAN
_BitScanForward (
      ULONG *Index,
      ULONG Mask
    );

 
BOOLEAN
_BitScanReverse (
      ULONG *Index,
      ULONG Mask
    );

 
BOOLEAN
_BitScanForward64 (
      ULONG *Index,
      ULONG64 Mask
    );

 
BOOLEAN
_BitScanReverse64 (
      ULONG *Index,
      ULONG64 Mask
    );







































































































































SHORT
_InterlockedIncrement16 (
       SHORT volatile *Addend
    );

SHORT
_InterlockedDecrement16 (
       SHORT volatile *Addend
    );

SHORT
_InterlockedCompareExchange16 (
       SHORT volatile *Destination,
      SHORT ExChange,
      SHORT Comperand
    );

LONG
_InterlockedAnd (
       LONG volatile *Destination,
      LONG Value
    );

LONG
_InterlockedOr (
       LONG volatile *Destination,
      LONG Value
    );

LONG
_InterlockedXor (
       LONG volatile *Destination,
      LONG Value
    );

LONG64
_InterlockedAnd64 (
       LONG64 volatile *Destination,
      LONG64 Value
    );

LONG64
_InterlockedOr64 (
       LONG64 volatile *Destination,
      LONG64 Value
    );

LONG64
_InterlockedXor64 (
       LONG64 volatile *Destination,
      LONG64 Value
    );

LONG
_InterlockedIncrement (
       LONG volatile *Addend
    );

LONG
_InterlockedDecrement (
       LONG volatile *Addend
    );

LONG
_InterlockedExchange (
       LONG volatile *Target,
      LONG Value
    );

LONG
_InterlockedExchangeAdd (
       LONG volatile *Addend,
      LONG Value
    );




LONG
_InlineInterlockedAdd (
       LONG volatile *Addend,
      LONG Value
    )

;



LONG
_InterlockedCompareExchange (
       LONG volatile *Destination,
      LONG ExChange,
      LONG Comperand
    );

LONG64
_InterlockedIncrement64 (
       LONG64 volatile *Addend
    );

LONG64
_InterlockedDecrement64 (
       LONG64 volatile *Addend
    );

LONG64
_InterlockedExchange64 (
       LONG64 volatile *Target,
      LONG64 Value
    );

LONG64
_InterlockedExchangeAdd64 (
       LONG64 volatile *Addend,
      LONG64 Value
    );




LONG64
_InlineInterlockedAdd64 (
       LONG64 volatile *Addend,
      LONG64 Value
    )

;



LONG64
_InterlockedCompareExchange64 (
       LONG64 volatile *Destination,
      LONG64 ExChange,
      LONG64 Comperand
    );

BOOLEAN
_InterlockedCompareExchange128 (
       LONG64 volatile *Destination,
      LONG64 ExchangeHigh,
      LONG64 ExchangeLow,
      LONG64 *ComparandResult
    );

  PVOID
_InterlockedCompareExchangePointer (
      
     PVOID volatile *Destination,
      PVOID Exchange,
      PVOID Comperand
    );

  PVOID
_InterlockedExchangePointer(
      
     PVOID volatile *Target,
      PVOID Value
    );


















CHAR
_InterlockedExchange8 (
       CHAR volatile *Target,
      CHAR Value
    );

SHORT
_InterlockedExchange16 (
       SHORT volatile *Destination,
      SHORT ExChange
    );

























char
_InterlockedExchangeAdd8 (
       char volatile * _Addend,
      char _Value
    );

char
_InterlockedAnd8 (
       char volatile *Destination,
      char Value
    );

char
_InterlockedOr8 (
       char volatile *Destination,
      char Value
    );

char
_InterlockedXor8 (
       char volatile *Destination,
      char Value
    );

SHORT
_InterlockedAnd16(
       SHORT volatile *Destination,
      SHORT Value
    );

SHORT
_InterlockedOr16(
       SHORT volatile *Destination,
      SHORT Value
    );

SHORT
_InterlockedXor16(
       SHORT volatile *Destination,
      SHORT Value
    );



























void



__cpuidex (
    int CPUInfo[4],
    int Function,
    int SubLeaf
    );


























































void
_mm_clflush (
      void const *Address
    );









void
_ReadWriteBarrier (
    void
    );





























void
__faststorefence (
    void
    );









void
_mm_lfence (
    void
    );

void
_mm_mfence (
    void
    );

void
_mm_sfence (
    void
    );

void
_mm_pause (
    void
    );

void
_mm_prefetch (
      CHAR const *a,
      int sel
    );

void
_m_prefetchw (
      volatile const void *Source
    );
























































unsigned int
_mm_getcsr (
    void
    );

void
_mm_setcsr (
      unsigned int MxCsr
    );














unsigned __int32
__getcallerseflags (
    void
    );








ULONG
__segmentlimit (
      ULONG Selector
    );








ULONG64
__readpmc (
      ULONG Counter
    );








ULONG64
__rdtsc (
    void
    );






void
__movsb (
      PUCHAR Destination,
      UCHAR const *Source,
      SIZE_T Count
    );

void
__movsw (
      PUSHORT Destination,
      USHORT const *Source,
      SIZE_T Count
    );

void
__movsd (
      PULONG Destination,
      ULONG const *Source,
      SIZE_T Count
    );

void
__movsq (
      PULONG64 Destination,
      ULONG64 const *Source,
      SIZE_T Count
    );






void
__stosb (
      PUCHAR Destination,
      UCHAR Value,
      SIZE_T Count
    );

void
__stosw (
      PUSHORT Destination,
      USHORT Value,
      SIZE_T Count
    );

void
__stosd (
      PULONG Destination,
      ULONG Value,
      SIZE_T Count
    );

void
__stosq (
      PULONG64 Destination,
      ULONG64 Value,
      SIZE_T Count
    );









LONGLONG
__mulh (
      LONG64 Multiplier,
      LONG64 Multiplicand
    );

ULONGLONG
__umulh (
      ULONG64 Multiplier,
      ULONG64 Multiplicand
    );



















ULONG64
__popcnt64 (
      ULONG64 operand
    );
























ULONG64
__shiftleft128 (
      ULONG64 LowPart,
      ULONG64 HighPart,
      UCHAR Shift
    );

ULONG64
__shiftright128 (
      ULONG64 LowPart,
      ULONG64 HighPart,
      UCHAR Shift
    );





















LONG64
_mul128 (
      LONG64 Multiplier,
      LONG64 Multiplicand,
      LONG64 *HighProduct
    );








ULONG64
UnsignedMultiply128 (
      ULONG64 Multiplier,
      ULONG64 Multiplicand,
      ULONG64 *HighProduct
    );












ULONG64
_umul128 (
      ULONG64 Multiplier,
      ULONG64 Multiplicand,
      ULONG64 *HighProduct
    );

LONG64
_mul128 (
      LONG64 Multiplier,
      LONG64 Multiplicand,
      LONG64 *HighProduct
    );








__forceinline
LONG64
MultiplyExtract128 (
      LONG64 Multiplier,
      LONG64 Multiplicand,
      UCHAR Shift
    )

{

    LONG64 extractedProduct;
    LONG64 highProduct;
    LONG64 lowProduct;
    BOOLEAN negate;
    ULONG64 uhighProduct;
    ULONG64 ulowProduct;

    lowProduct = _mul128(Multiplier, Multiplicand, &highProduct);
    negate = 0;
    uhighProduct = (ULONG64)highProduct;
    ulowProduct = (ULONG64)lowProduct;
    if (highProduct < 0) {
        negate = 1;
        uhighProduct = (ULONG64)(-highProduct);
        ulowProduct = (ULONG64)(-lowProduct);
        if (ulowProduct != 0) {
            uhighProduct -= 1;
        }
    }

    extractedProduct = (LONG64)__shiftright128(ulowProduct, uhighProduct, Shift);
    if (negate != 0) {
        extractedProduct = -extractedProduct;
    }

    return extractedProduct;
}


ULONG64
UnsignedMultiplyExtract128 (
      ULONG64 Multiplier,
      ULONG64 Multiplicand,
      UCHAR Shift
    )

;







UCHAR
__readgsbyte (
      ULONG Offset
    );

USHORT
__readgsword (
      ULONG Offset
    );

ULONG
__readgsdword (
      ULONG Offset
    );

ULONG64
__readgsqword (
      ULONG Offset
    );

void
__writegsbyte (
      ULONG Offset,
      UCHAR Data
    );

void
__writegsword (
      ULONG Offset,
      USHORT Data
    );

void
__writegsdword (
      ULONG Offset,
      ULONG Data
    );

void
__writegsqword (
      ULONG Offset,
      ULONG64 Data
    );




void
__incgsbyte (
      ULONG Offset
    );

void
__addgsbyte (
      ULONG Offset,
      UCHAR Value
    );

void
__incgsword (
      ULONG Offset
    );

void
__addgsword (
      ULONG Offset,
      USHORT Value
    );

void
__incgsdword (
      ULONG Offset
    );

void
__addgsdword (
      ULONG Offset,
      ULONG Value
    );

void
__incgsqword (
      ULONG Offset
    );

void
__addgsqword (
      ULONG Offset,
      ULONG64 Value
    );




























typedef XSAVE_FORMAT XMM_SAVE_AREA32, *PXMM_SAVE_AREA32;






























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































CHAR
ReadAcquire8 (
       CHAR const volatile *Source
    )

;


CHAR
ReadNoFence8 (
       CHAR const volatile *Source
    )

;


void
WriteRelease8 (
       CHAR volatile *Destination,
      CHAR Value
    )

;


void
WriteNoFence8 (
       CHAR volatile *Destination,
      CHAR Value
    )

;


SHORT
ReadAcquire16 (
       SHORT const volatile *Source
    )

;


SHORT
ReadNoFence16 (
       SHORT const volatile *Source
    )

;


void
WriteRelease16 (
       SHORT volatile *Destination,
      SHORT Value
    )

;


void
WriteNoFence16 (
       SHORT volatile *Destination,
      SHORT Value
    )

;


LONG
ReadAcquire (
       LONG const volatile *Source
    )

;


LONG
ReadNoFence (
       LONG const volatile *Source
    )

;


void
WriteRelease (
       LONG volatile *Destination,
      LONG Value
    )

;


void
WriteNoFence (
       LONG volatile *Destination,
      LONG Value
    )

;


LONG64
ReadAcquire64 (
       LONG64 const volatile *Source
    )

;


LONG64
ReadNoFence64 (
       LONG64 const volatile *Source
    )

;


void
WriteRelease64 (
       LONG64 volatile *Destination,
      LONG64 Value
    )

;


void
WriteNoFence64 (
       LONG64 volatile *Destination,
      LONG64 Value
    )

;




void
BarrierAfterRead (
    void
    )

;














CHAR
ReadRaw8 (
       CHAR const volatile *Source
    )

;


void
WriteRaw8 (
       CHAR volatile *Destination,
      CHAR Value
    )

;


SHORT
ReadRaw16 (
       SHORT const volatile *Source
    )

;


void
WriteRaw16 (
       SHORT volatile *Destination,
      SHORT Value
    )

;


LONG
ReadRaw (
       LONG const volatile *Source
    )

;


void
WriteRaw (
       LONG volatile *Destination,
      LONG Value
    )

;


LONG64
ReadRaw64 (
       LONG64 const volatile *Source
    )

;


void
WriteRaw64 (
       LONG64 volatile *Destination,
      LONG64 Value
    )

;






UCHAR
ReadUCharAcquire (
       UCHAR const volatile *Source
    )

;


UCHAR
ReadUCharNoFence (
       UCHAR const volatile *Source
    )

;


UCHAR
ReadBooleanAcquire (
       BOOLEAN const volatile *Source
    )

;


UCHAR
ReadBooleanNoFence (
       BOOLEAN const volatile *Source
    )

;


UCHAR
ReadBooleanRaw (
       BOOLEAN const volatile *Source
    )

;


UCHAR
ReadUCharRaw (
       UCHAR const volatile *Source
    )

;


void
WriteUCharRelease (
       UCHAR volatile *Destination,
      UCHAR Value
    )

;


void
WriteUCharNoFence (
       UCHAR volatile *Destination,
      UCHAR Value
    )

;


void
WriteBooleanRelease (
       BOOLEAN volatile *Destination,
      BOOLEAN Value
    )

;


void
WriteBooleanNoFence (
       BOOLEAN volatile *Destination,
      BOOLEAN Value
    )

;


void
WriteUCharRaw (
       UCHAR volatile *Destination,
      UCHAR Value
    )

;


USHORT
ReadUShortAcquire (
       USHORT const volatile *Source
    )

;


USHORT
ReadUShortNoFence (
       USHORT const volatile *Source
    )

;


USHORT
ReadUShortRaw (
       USHORT const volatile *Source
    )

;


void
WriteUShortRelease (
       USHORT volatile *Destination,
      USHORT Value
    )

;


void
WriteUShortNoFence (
       USHORT volatile *Destination,
      USHORT Value
    )

;


void
WriteUShortRaw (
       USHORT volatile *Destination,
      USHORT Value
    )

;


ULONG
ReadULongAcquire (
       ULONG const volatile *Source
    )

;


ULONG
ReadULongNoFence (
       ULONG const volatile *Source
    )

;


ULONG
ReadULongRaw (
       ULONG const volatile *Source
    )

;


void
WriteULongRelease (
       ULONG volatile *Destination,
      ULONG Value
    )

;


void
WriteULongNoFence (
       ULONG volatile *Destination,
      ULONG Value
    )

;


void
WriteULongRaw (
       ULONG volatile *Destination,
      ULONG Value
    )

;


INT32
ReadInt32Acquire (
       INT32 const volatile *Source
    )

;


INT32
ReadInt32NoFence (
       INT32 const volatile *Source
    )

;


INT32
ReadInt32Raw (
       INT32 const volatile *Source
    )

;


void
WriteInt32Release (
       INT32 volatile *Destination,
      INT32 Value
    )

;


void
WriteInt32NoFence (
       INT32 volatile *Destination,
      INT32 Value
    )

;


void
WriteInt32Raw (
       INT32 volatile *Destination,
      INT32 Value
    )

;


UINT32
ReadUInt32Acquire (
       UINT32 const volatile *Source
    )

;


UINT32
ReadUInt32NoFence (
       UINT32 const volatile *Source
    )

;


UINT32
ReadUInt32Raw (
       UINT32 const volatile *Source
    )

;


void
WriteUInt32Release (
       UINT32 volatile *Destination,
      UINT32 Value
    )

;


void
WriteUInt32NoFence (
       UINT32 volatile *Destination,
      UINT32 Value
    )

;


void
WriteUInt32Raw (
       UINT32 volatile *Destination,
      UINT32 Value
    )

;


ULONG64
ReadULong64Acquire (
       ULONG64 const volatile *Source
    )

;


ULONG64
ReadULong64NoFence (
       ULONG64 const volatile *Source
    )

;


ULONG64
ReadULong64Raw (
       ULONG64 const volatile *Source
    )

;


void
WriteULong64Release (
       ULONG64 volatile *Destination,
      ULONG64 Value
    )

;


void
WriteULong64NoFence (
       ULONG64 volatile *Destination,
      ULONG64 Value
    )

;


void
WriteULong64Raw (
       ULONG64 volatile *Destination,
      ULONG64 Value
    )

;


















































































































PVOID
ReadPointerAcquire (
       PVOID const volatile *Source
    )

;


PVOID
ReadPointerNoFence (
       PVOID const volatile *Source
    )

;


PVOID
ReadPointerRaw (
       PVOID const volatile *Source
    )

;


void
WritePointerRelease (
       PVOID volatile *Destination,
      PVOID Value
    )

;


void
WritePointerNoFence (
       PVOID volatile *Destination,
      PVOID Value
    )

;


void
WritePointerRaw (
       PVOID volatile *Destination,
      PVOID Value
    )

;


























































void
__int2c (
    void
    );














































































































































































































































typedef PVOID PACCESS_TOKEN;            





typedef PVOID PSECURITY_DESCRIPTOR;     





typedef PVOID PSID;     





typedef PVOID PCLAIMS_BLOB;     


typedef ULONG ACCESS_MASK;
typedef ACCESS_MASK *PACCESS_MASK;

















































typedef struct _GENERIC_MAPPING {
    ACCESS_MASK GenericRead;
    ACCESS_MASK GenericWrite;
    ACCESS_MASK GenericExecute;
    ACCESS_MASK GenericAll;
} GENERIC_MAPPING;
typedef GENERIC_MAPPING *PGENERIC_MAPPING;














































typedef struct _LUID_AND_ATTRIBUTES {
    LUID Luid;
    ULONG Attributes;
    } LUID_AND_ATTRIBUTES, * PLUID_AND_ATTRIBUTES;
typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[1];
typedef LUID_AND_ATTRIBUTES_ARRAY *PLUID_AND_ATTRIBUTES_ARRAY;





















































typedef struct _ACL {
    UCHAR AclRevision;
    UCHAR Sbz1;
    USHORT AclSize;
    USHORT AceCount;
    USHORT Sbz2;
} ACL;
typedef ACL *PACL;






































typedef struct _PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    LUID_AND_ATTRIBUTES Privilege[1];
    } PRIVILEGE_SET, * PPRIVILEGE_SET;






















































typedef enum _SECURITY_IMPERSONATION_LEVEL {
    SecurityAnonymous,
    SecurityIdentification,
    SecurityImpersonation,
    SecurityDelegation
    } SECURITY_IMPERSONATION_LEVEL, * PSECURITY_IMPERSONATION_LEVEL;












typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE,
                    * PSECURITY_CONTEXT_TRACKING_MODE;







typedef struct _SECURITY_QUALITY_OF_SERVICE {
    ULONG Length;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
    BOOLEAN EffectiveOnly;
    } SECURITY_QUALITY_OF_SERVICE, * PSECURITY_QUALITY_OF_SERVICE;






typedef struct _SE_IMPERSONATION_STATE {
    PACCESS_TOKEN Token;
    BOOLEAN CopyOnOpen;
    BOOLEAN EffectiveOnly;
    SECURITY_IMPERSONATION_LEVEL Level;
} SE_IMPERSONATION_STATE, *PSE_IMPERSONATION_STATE;


typedef ULONG SECURITY_INFORMATION, *PSECURITY_INFORMATION;














































typedef enum _SE_ADT_PARAMETER_TYPE {

    SeAdtParmTypeNone = 0,          
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeString,            
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    



    SeAdtParmTypeFileSpec,          
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    




    SeAdtParmTypeUlong,             
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    


    SeAdtParmTypeSid,               
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    




    SeAdtParmTypeLogonId,           
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    


    SeAdtParmTypeNoLogonId,         
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeAccessMask,        
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    



    SeAdtParmTypePrivs,             
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeObjectTypes,       
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeHexUlong,          
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    



    SeAdtParmTypePtr,               
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    





    SeAdtParmTypeTime,              
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

                                    
    SeAdtParmTypeGuid,              
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    





    SeAdtParmTypeLuid,              
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeHexInt64,          
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeStringList,        
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeSidList,           
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeDuration,          
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeUserAccountControl,
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeNoUac,             
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeMessage,           
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeDateTime,          
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeSockAddr,          
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    





    SeAdtParmTypeSD,                
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeLogonHours,        
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeLogonIdNoSid,      
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeUlongNoConv,       
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeSockAddrNoPort,    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    




    SeAdtParmTypeAccessReason,      
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    




    SeAdtParmTypeStagingReason,     
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeResourceAttribute, 
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeClaims,            
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeLogonIdAsSid,      
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeMultiSzString,     
                                    
                                    
                                    
                                    
                                    
                                    
                                    

    SeAdtParmTypeLogonIdEx,         
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

} SE_ADT_PARAMETER_TYPE, *PSE_ADT_PARAMETER_TYPE;





typedef struct _SE_ADT_OBJECT_TYPE {
    GUID ObjectType;
    USHORT Flags;

    USHORT Level;
    ACCESS_MASK AccessMask;
} SE_ADT_OBJECT_TYPE, *PSE_ADT_OBJECT_TYPE;

typedef struct _SE_ADT_PARAMETER_ARRAY_ENTRY {

    SE_ADT_PARAMETER_TYPE Type;
    ULONG Length;
    ULONG_PTR Data[2];
    PVOID Address;

} SE_ADT_PARAMETER_ARRAY_ENTRY, *PSE_ADT_PARAMETER_ARRAY_ENTRY;


typedef struct _SE_ADT_ACCESS_REASON{
    ACCESS_MASK AccessMask;
    ULONG  AccessReasons[32];
    ULONG  ObjectTypeIndex;
    ULONG AccessGranted;
    PSECURITY_DESCRIPTOR SecurityDescriptor;    
} SE_ADT_ACCESS_REASON, *PSE_ADT_ACCESS_REASON;

typedef struct _SE_ADT_CLAIMS {

    ULONG Length;
    PCLAIMS_BLOB Claims; 

} SE_ADT_CLAIMS, *PSE_ADT_CLAIMS;









typedef struct _SE_ADT_PARAMETER_ARRAY {

    ULONG CategoryId;
    ULONG AuditId;
    ULONG ParameterCount;
    ULONG Length;
    USHORT FlatSubCategoryId;
    USHORT Type;
    ULONG Flags;
    SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[ 32 ];

} SE_ADT_PARAMETER_ARRAY, *PSE_ADT_PARAMETER_ARRAY;

typedef struct _SE_ADT_PARAMETER_ARRAY_EX {

    ULONG CategoryId;
    ULONG AuditId;
    ULONG Version;
    ULONG ParameterCount;
    ULONG Length;
    USHORT FlatSubCategoryId;
    USHORT Type;
    ULONG Flags;
    SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[ 32 ];

} SE_ADT_PARAMETER_ARRAY_EX, *PSE_ADT_PARAMETER_ARRAY_EX;











































































































































































































































































































































































































































































































typedef struct _EXTENDED_CREATE_INFORMATION {
    LONGLONG ExtendedCreateFlags;   
    PVOID EaBuffer;                 
    ULONG EaLength;                 
} EXTENDED_CREATE_INFORMATION, *PEXTENDED_CREATE_INFORMATION;




typedef struct _EXTENDED_CREATE_INFORMATION_32 {
    LONGLONG ExtendedCreateFlags;   
    void* __ptr32 EaBuffer;      
    ULONG EaLength;                 
} EXTENDED_CREATE_INFORMATION_32, *PEXTENDED_CREATE_INFORMATION_32;

























































































typedef struct _IO_STATUS_BLOCK {
    union {
        NTSTATUS Status;
        PVOID Pointer;
    };

    ULONG_PTR Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;








typedef IO_STATUS_BLOCK IO_STATUS_BLOCK64;
































typedef IO_STATUS_BLOCK64 *PIO_STATUS_BLOCK64;



typedef struct _IO_STATUS_BLOCK32 {
    NTSTATUS Status;
    ULONG Information;
} IO_STATUS_BLOCK32, *PIO_STATUS_BLOCK32;







typedef
void
(__stdcall *PIO_APC_ROUTINE) (
      PVOID ApcContext,
      PIO_STATUS_BLOCK IoStatusBlock,
      ULONG Reserved
    );








typedef enum _IO_SESSION_EVENT {
    IoSessionEventIgnore         = 0,
    IoSessionEventCreated,      
    IoSessionEventTerminated,   
    IoSessionEventConnected,    
    IoSessionEventDisconnected, 
    IoSessionEventLogon,        
    IoSessionEventLogoff,       
    IoSessionEventMax
} IO_SESSION_EVENT, *PIO_SESSION_EVENT;

typedef enum _IO_SESSION_STATE {
    IoSessionStateCreated                = 1,
    IoSessionStateInitialized,          
    IoSessionStateConnected,            
    IoSessionStateDisconnected,         
    IoSessionStateDisconnectedLoggedOn, 
    IoSessionStateLoggedOn,             
    IoSessionStateLoggedOff,            
    IoSessionStateTerminated,           
    IoSessionStateMax
} IO_SESSION_STATE, *PIO_SESSION_STATE;























typedef struct _IO_SESSION_CONNECT_INFO {
    ULONG SessionId;
    BOOLEAN LocalSession;
} IO_SESSION_CONNECT_INFO, *PIO_SESSION_CONNECT_INFO;










typedef enum _FILE_INFORMATION_CLASS {
    FileDirectoryInformation                         = 1,
    FileFullDirectoryInformation,                   
    FileBothDirectoryInformation,                   
    FileBasicInformation,                           
    FileStandardInformation,                        
    FileInternalInformation,                        
    FileEaInformation,                              
    FileAccessInformation,                          
    FileNameInformation,                            
    FileRenameInformation,                          
    FileLinkInformation,                            
    FileNamesInformation,                           
    FileDispositionInformation,                     
    FilePositionInformation,                        
    FileFullEaInformation,                          
    FileModeInformation,                            
    FileAlignmentInformation,                       
    FileAllInformation,                             
    FileAllocationInformation,                      
    FileEndOfFileInformation,                       
    FileAlternateNameInformation,                   
    FileStreamInformation,                          
    FilePipeInformation,                            
    FilePipeLocalInformation,                       
    FilePipeRemoteInformation,                      
    FileMailslotQueryInformation,                   
    FileMailslotSetInformation,                     
    FileCompressionInformation,                     
    FileObjectIdInformation,                        
    FileCompletionInformation,                      
    FileMoveClusterInformation,                     
    FileQuotaInformation,                           
    FileReparsePointInformation,                    
    FileNetworkOpenInformation,                     
    FileAttributeTagInformation,                    
    FileTrackingInformation,                        
    FileIdBothDirectoryInformation,                 
    FileIdFullDirectoryInformation,                 
    FileValidDataLengthInformation,                 
    FileShortNameInformation,                       
    FileIoCompletionNotificationInformation,        
    FileIoStatusBlockRangeInformation,              
    FileIoPriorityHintInformation,                  
    FileSfioReserveInformation,                     
    FileSfioVolumeInformation,                      
    FileHardLinkInformation,                        
    FileProcessIdsUsingFileInformation,             
    FileNormalizedNameInformation,                  
    FileNetworkPhysicalNameInformation,             
    FileIdGlobalTxDirectoryInformation,             
    FileIsRemoteDeviceInformation,                  
    FileUnusedInformation,                          
    FileNumaNodeInformation,                        
    FileStandardLinkInformation,                    
    FileRemoteProtocolInformation,                  

        
        
        
        
        
        
        

    FileRenameInformationBypassAccessCheck,         
    FileLinkInformationBypassAccessCheck,           

        
        
        

    FileVolumeNameInformation,                      
    FileIdInformation,                              
    FileIdExtdDirectoryInformation,                 
    FileReplaceCompletionInformation,               
    FileHardLinkFullIdInformation,                  
    FileIdExtdBothDirectoryInformation,             
    FileDispositionInformationEx,                   
    FileRenameInformationEx,                        
    FileRenameInformationExBypassAccessCheck,       
    FileDesiredStorageClassInformation,             
    FileStatInformation,                            
    FileMemoryPartitionInformation,                 
    FileStatLxInformation,                          
    FileCaseSensitiveInformation,                   
    FileLinkInformationEx,                          
    FileLinkInformationExBypassAccessCheck,         
    FileStorageReserveIdInformation,                
    FileCaseSensitiveInformationForceAccessCheck,   
    FileKnownFolderInformation,                     
    FileStatBasicInformation,                       
    FileId64ExtdDirectoryInformation,               
    FileId64ExtdBothDirectoryInformation,           
    FileIdAllExtdDirectoryInformation,              
    FileIdAllExtdBothDirectoryInformation,          

    FileMaximumInformation
} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;

typedef enum _DIRECTORY_NOTIFY_INFORMATION_CLASS {
    DirectoryNotifyInformation           = 1,
    DirectoryNotifyExtendedInformation, 

    DirectoryNotifyFullInformation,     

                                        
    DirectoryNotifyMaximumInformation
} DIRECTORY_NOTIFY_INFORMATION_CLASS, *PDIRECTORY_NOTIFY_INFORMATION_CLASS;








typedef struct _FILE_BASIC_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    ULONG FileAttributes;
} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION;



typedef struct _FILE_STANDARD_INFORMATION {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
} FILE_STANDARD_INFORMATION, *PFILE_STANDARD_INFORMATION;


typedef struct _FILE_STANDARD_INFORMATION_EX {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
    BOOLEAN AlternateStream;
    BOOLEAN MetadataAttribute;
} FILE_STANDARD_INFORMATION_EX, *PFILE_STANDARD_INFORMATION_EX;





typedef struct _FILE_POSITION_INFORMATION {
    LARGE_INTEGER CurrentByteOffset;
} FILE_POSITION_INFORMATION, *PFILE_POSITION_INFORMATION;




typedef struct _FILE_NETWORK_OPEN_INFORMATION {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
} FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION;


typedef struct _FILE_FULL_EA_INFORMATION {
    ULONG NextEntryOffset;
    UCHAR Flags;
    UCHAR EaNameLength;
    USHORT EaValueLength;
    CHAR EaName[1];
} FILE_FULL_EA_INFORMATION, *PFILE_FULL_EA_INFORMATION;






typedef struct _FILE_SFIO_RESERVE_INFORMATION {
    ULONG RequestsPerPeriod;
    ULONG Period;
    BOOLEAN RetryFailures;
    BOOLEAN Discardable;
    ULONG RequestSize;
    ULONG NumOutstandingRequests;
} FILE_SFIO_RESERVE_INFORMATION, *PFILE_SFIO_RESERVE_INFORMATION;





typedef struct _FILE_SFIO_VOLUME_INFORMATION {
    ULONG MaximumRequestsPerPeriod;
    ULONG MinimumPeriod;
    ULONG MinimumTransferSize;
} FILE_SFIO_VOLUME_INFORMATION, *PFILE_SFIO_VOLUME_INFORMATION;





typedef enum _IO_PRIORITY_HINT {
    IoPriorityVeryLow = 0,          
    IoPriorityLow,                  
    IoPriorityNormal,               
    IoPriorityHigh,                 
    IoPriorityCritical,             
    MaxIoPriorityTypes
} IO_PRIORITY_HINT;

typedef struct _FILE_IO_PRIORITY_HINT_INFORMATION {
    IO_PRIORITY_HINT   PriorityHint;
} FILE_IO_PRIORITY_HINT_INFORMATION, *PFILE_IO_PRIORITY_HINT_INFORMATION;

typedef struct _FILE_IO_PRIORITY_HINT_INFORMATION_EX {
    IO_PRIORITY_HINT   PriorityHint;
    BOOLEAN            BoostOutstanding;
} FILE_IO_PRIORITY_HINT_INFORMATION_EX, *PFILE_IO_PRIORITY_HINT_INFORMATION_EX;

















typedef  struct _FILE_IO_COMPLETION_NOTIFICATION_INFORMATION {
    ULONG Flags;
} FILE_IO_COMPLETION_NOTIFICATION_INFORMATION, *PFILE_IO_COMPLETION_NOTIFICATION_INFORMATION;

typedef  struct _FILE_PROCESS_IDS_USING_FILE_INFORMATION {
    ULONG NumberOfProcessIdsInList;
    ULONG_PTR ProcessIdList[1];
} FILE_PROCESS_IDS_USING_FILE_INFORMATION, *PFILE_PROCESS_IDS_USING_FILE_INFORMATION;

typedef struct _FILE_IS_REMOTE_DEVICE_INFORMATION {
    BOOLEAN IsRemote;
} FILE_IS_REMOTE_DEVICE_INFORMATION, *PFILE_IS_REMOTE_DEVICE_INFORMATION;

typedef struct _FILE_NUMA_NODE_INFORMATION {
    USHORT NodeNumber;
} FILE_NUMA_NODE_INFORMATION, *PFILE_NUMA_NODE_INFORMATION;





typedef struct _FILE_IOSTATUSBLOCK_RANGE_INFORMATION {
    PUCHAR       IoStatusBlockRange;
    ULONG        Length;
} FILE_IOSTATUSBLOCK_RANGE_INFORMATION, *PFILE_IOSTATUSBLOCK_RANGE_INFORMATION;



typedef struct _FILE_MEMORY_PARTITION_INFORMATION {
    ULONG_PTR OwnerPartitionHandle;
    union {
        struct {
            UCHAR NoCrossPartitionAccess;
            UCHAR Spare[3];
        } ;

        ULONG AllFlags;
    } Flags;
} FILE_MEMORY_PARTITION_INFORMATION, *PFILE_MEMORY_PARTITION_INFORMATION;









typedef enum _FSINFOCLASS {
    FileFsVolumeInformation          = 1,
    FileFsLabelInformation,         
    FileFsSizeInformation,          
    FileFsDeviceInformation,        
    FileFsAttributeInformation,     
    FileFsControlInformation,       
    FileFsFullSizeInformation,      
    FileFsObjectIdInformation,      
    FileFsDriverPathInformation,    
    FileFsVolumeFlagsInformation,   
    FileFsSectorSizeInformation,    
    FileFsDataCopyInformation,      
    FileFsMetadataSizeInformation,  
    FileFsFullSizeInformationEx,    
    FileFsGuidInformation,          
    FileFsMaximumInformation
} FS_INFORMATION_CLASS, *PFS_INFORMATION_CLASS;


typedef struct _FILE_FS_DEVICE_INFORMATION {
    ULONG DeviceType;
    ULONG Characteristics;
} FILE_FS_DEVICE_INFORMATION, *PFILE_FS_DEVICE_INFORMATION;






typedef union _FILE_SEGMENT_ELEMENT {
    PVOID64 Buffer;
    ULONGLONG Alignment;
}FILE_SEGMENT_ELEMENT, *PFILE_SEGMENT_ELEMENT;





































































typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    Vmcs,
    ACPIBus,
    MaximumInterfaceType
}INTERFACE_TYPE, *PINTERFACE_TYPE;








typedef enum _DMA_WIDTH {
    Width8Bits,
    Width16Bits,
    Width32Bits,
    Width64Bits,
    WidthNoWrap,
    MaximumDmaWidth
}DMA_WIDTH, *PDMA_WIDTH;





typedef enum _DMA_SPEED {
    Compatible,
    TypeA,
    TypeB,
    TypeC,
    TypeF,
    MaximumDmaSpeed
}DMA_SPEED, *PDMA_SPEED;








typedef void (*PINTERFACE_REFERENCE)(PVOID Context);
typedef void (*PINTERFACE_DEREFERENCE)(PVOID Context);






typedef struct _IO_ERROR_LOG_PACKET {
    UCHAR MajorFunctionCode;
    UCHAR RetryCount;
    USHORT DumpDataSize;
    USHORT NumberOfStrings;
    USHORT StringOffset;
    USHORT EventCategory;
    NTSTATUS ErrorCode;
    ULONG UniqueErrorValue;
    NTSTATUS FinalStatus;
    ULONG SequenceNumber;
    ULONG IoControlCode;
    LARGE_INTEGER DeviceOffset;
    ULONG DumpData[1];
}IO_ERROR_LOG_PACKET, *PIO_ERROR_LOG_PACKET;






typedef struct _IO_ERROR_LOG_MESSAGE {
    USHORT Type;
    USHORT Size;
    USHORT DriverNameLength;
    LARGE_INTEGER TimeStamp;
    ULONG DriverNameOffset;
    IO_ERROR_LOG_PACKET EntryData;
}IO_ERROR_LOG_MESSAGE, *PIO_ERROR_LOG_MESSAGE;









































































































                                                        


                                                        


                                                        


                                                        
                                                        




                                                        
                                                        
                                                        



































































                                                      












typedef struct _KEY_BASIC_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG   TitleIndex;
    ULONG   NameLength;
    WCHAR   Name[1];            
} KEY_BASIC_INFORMATION, *PKEY_BASIC_INFORMATION;

typedef struct _KEY_NODE_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG   TitleIndex;
    ULONG   ClassOffset;
    ULONG   ClassLength;
    ULONG   NameLength;
    WCHAR   Name[1];            

} KEY_NODE_INFORMATION, *PKEY_NODE_INFORMATION;

typedef struct _KEY_FULL_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG   TitleIndex;
    ULONG   ClassOffset;
    ULONG   ClassLength;
    ULONG   SubKeys;
    ULONG   MaxNameLen;
    ULONG   MaxClassLen;
    ULONG   Values;
    ULONG   MaxValueNameLen;
    ULONG   MaxValueDataLen;
    WCHAR   Class[1];           
} KEY_FULL_INFORMATION, *PKEY_FULL_INFORMATION;

typedef enum _KEY_INFORMATION_CLASS {
    KeyBasicInformation,
    KeyNodeInformation,
    KeyFullInformation,
    KeyNameInformation,
    KeyCachedInformation,
    KeyFlagsInformation,
    KeyVirtualizationInformation,
    KeyHandleTagsInformation,
    KeyTrustInformation,
    KeyLayerInformation,
    MaxKeyInfoClass  
} KEY_INFORMATION_CLASS;

typedef struct _KEY_WRITE_TIME_INFORMATION {
    LARGE_INTEGER LastWriteTime;
} KEY_WRITE_TIME_INFORMATION, *PKEY_WRITE_TIME_INFORMATION;

typedef struct _KEY_WOW64_FLAGS_INFORMATION {
    ULONG   UserFlags;
} KEY_WOW64_FLAGS_INFORMATION, *PKEY_WOW64_FLAGS_INFORMATION;

typedef struct _KEY_CONTROL_FLAGS_INFORMATION {
    ULONG   ControlFlags;
} KEY_CONTROL_FLAGS_INFORMATION, *PKEY_CONTROL_FLAGS_INFORMATION;

typedef struct _KEY_SET_VIRTUALIZATION_INFORMATION {
    ULONG   VirtualTarget           : 1; 
    ULONG   VirtualStore                : 1; 
    ULONG   VirtualSource           : 1; 
    ULONG   Reserved                : 29;
} KEY_SET_VIRTUALIZATION_INFORMATION, *PKEY_SET_VIRTUALIZATION_INFORMATION;


typedef enum _KEY_SET_INFORMATION_CLASS {
    KeyWriteTimeInformation,
    KeyWow64FlagsInformation,
    KeyControlFlagsInformation,
    KeySetVirtualizationInformation,
    KeySetDebugInformation,
    KeySetHandleTagsInformation,
    KeySetLayerInformation,
    MaxKeySetInfoClass  
} KEY_SET_INFORMATION_CLASS;






typedef struct _KEY_VALUE_BASIC_INFORMATION {
    ULONG   TitleIndex;
    ULONG   Type;
    ULONG   NameLength;
    WCHAR   Name[1];            
} KEY_VALUE_BASIC_INFORMATION, *PKEY_VALUE_BASIC_INFORMATION;

typedef struct _KEY_VALUE_FULL_INFORMATION {
    ULONG   TitleIndex;
    ULONG   Type;
    ULONG   DataOffset;
    ULONG   DataLength;
    ULONG   NameLength;
    WCHAR   Name[1];            

} KEY_VALUE_FULL_INFORMATION, *PKEY_VALUE_FULL_INFORMATION;

typedef struct _KEY_VALUE_PARTIAL_INFORMATION {
    ULONG   TitleIndex;
    ULONG   Type;
    ULONG   DataLength;
      UCHAR Data[1]; 
} KEY_VALUE_PARTIAL_INFORMATION, *PKEY_VALUE_PARTIAL_INFORMATION;

typedef struct _KEY_VALUE_PARTIAL_INFORMATION_ALIGN64 {
    ULONG   Type;
    ULONG   DataLength;
      UCHAR   Data[1];            
} KEY_VALUE_PARTIAL_INFORMATION_ALIGN64, *PKEY_VALUE_PARTIAL_INFORMATION_ALIGN64;

typedef struct _KEY_VALUE_LAYER_INFORMATION {
    ULONG   IsTombstone     : 1;
    ULONG   Reserved        : 31;
} KEY_VALUE_LAYER_INFORMATION, *PKEY_VALUE_LAYER_INFORMATION;

typedef struct _KEY_VALUE_ENTRY {
    PUNICODE_STRING ValueName;
    ULONG           DataLength;
    ULONG           DataOffset;
    ULONG           Type;
} KEY_VALUE_ENTRY, *PKEY_VALUE_ENTRY;

typedef enum _KEY_VALUE_INFORMATION_CLASS {
    KeyValueBasicInformation,
    KeyValueFullInformation,
    KeyValuePartialInformation,
    KeyValueFullInformationAlign64,
    KeyValuePartialInformationAlign64,
    KeyValueLayerInformation,
    MaxKeyValueInfoClass  
} KEY_VALUE_INFORMATION_CLASS;



typedef struct _KEY_TRUST_INFORMATION {
    ULONG   TrustedKey      : 1; 
    ULONG   Reserved        : 31;
} KEY_TRUST_INFORMATION, *PKEY_TRUST_INFORMATION;














































typedef struct _OBJECT_NAME_INFORMATION {
    UNICODE_STRING Name;
} OBJECT_NAME_INFORMATION, *POBJECT_NAME_INFORMATION;








typedef enum _SECTION_INHERIT {
    ViewShare = 1,
    ViewUnmap = 2
} SECTION_INHERIT;




























































































typedef struct _MEM_ADDRESS_REQUIREMENTS {
    PVOID LowestStartingAddress;
    PVOID HighestEndingAddress;
    SIZE_T Alignment;
} MEM_ADDRESS_REQUIREMENTS, *PMEM_ADDRESS_REQUIREMENTS;






















typedef enum MEM_EXTENDED_PARAMETER_TYPE {
    MemExtendedParameterInvalidType = 0,
    MemExtendedParameterAddressRequirements,
    MemExtendedParameterNumaNode,
    MemExtendedParameterPartitionHandle,
    MemExtendedParameterUserPhysicalHandle,
    MemExtendedParameterAttributeFlags,
    MemExtendedParameterImageMachine,
    MemExtendedParameterMax
} MEM_EXTENDED_PARAMETER_TYPE, *PMEM_EXTENDED_PARAMETER_TYPE;



typedef struct  MEM_EXTENDED_PARAMETER {

    struct {
        ULONG64 Type : 8;
        ULONG64 Reserved : 64 - 8;
    } ;

    union {
        ULONG64 ULong64;
        PVOID Pointer;
        SIZE_T Size;
        HANDLE Handle;
        ULONG ULong;
    } ;

} MEM_EXTENDED_PARAMETER, *PMEM_EXTENDED_PARAMETER;











typedef enum _MEM_DEDICATED_ATTRIBUTE_TYPE {
    MemDedicatedAttributeReadBandwidth = 0,
    MemDedicatedAttributeReadLatency,
    MemDedicatedAttributeWriteBandwidth,
    MemDedicatedAttributeWriteLatency,
    MemDedicatedAttributeMax
} MEM_DEDICATED_ATTRIBUTE_TYPE, *PMEM_DEDICATED_ATTRIBUTE_TYPE;



typedef struct _MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION {

    
    
    

    ULONG64 DedicatedMemoryTypeId;

    
    
    
    

    ULONG HandleAttributes;
    ACCESS_MASK DesiredAccess;

    
    
    

    HANDLE DedicatedMemoryPartitionHandle;

} MEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION, *PMEMORY_PARTITION_DEDICATED_MEMORY_OPEN_INFORMATION;











typedef enum MEM_SECTION_EXTENDED_PARAMETER_TYPE {
    MemSectionExtendedParameterInvalidType = 0,
    MemSectionExtendedParameterUserPhysicalFlags,
    MemSectionExtendedParameterNumaNode,
    MemSectionExtendedParameterSigningLevel,
    MemSectionExtendedParameterMax
} MEM_SECTION_EXTENDED_PARAMETER_TYPE, *PMEM_SECTION_EXTENDED_PARAMETER_TYPE;





















































typedef struct _CLIENT_ID {
    HANDLE UniqueProcess;
    HANDLE UniqueThread;
} CLIENT_ID;
typedef CLIENT_ID *PCLIENT_ID;






















typedef enum _PARTITION_INFORMATION_CLASS {                     
    SystemMemoryPartitionInformation = 0,                       
    SystemMemoryPartitionDedicatedMemoryInformation = 9,        
    SystemMemoryPartitionOpenDedicatedMemory = 10,              
} PARTITION_INFORMATION_CLASS, *PPARTITION_INFORMATION_CLASS;   

 
 
NTSTATUS
__stdcall
NtManagePartition (
      HANDLE TargetHandle,
      HANDLE SourceHandle,
      PARTITION_INFORMATION_CLASS PartitionInformationClass,
      PVOID PartitionInformation,
      ULONG PartitionInformationLength
    );














extern const GUID  GUID_MAX_POWER_SAVINGS;






extern const GUID  GUID_MIN_POWER_SAVINGS;






extern const GUID  GUID_TYPICAL_POWER_SAVINGS;







extern const GUID  NO_SUBGROUP_GUID;







extern const GUID  ALL_POWERSCHEMES_GUID;




































extern const GUID  GUID_POWERSCHEME_PERSONALITY;








extern const GUID  GUID_ACTIVE_POWERSCHEME;














extern const GUID  GUID_IDLE_RESILIENCY_SUBGROUP;







extern const GUID  GUID_IDLE_RESILIENCY_PERIOD;





extern const GUID  GUID_DEEP_SLEEP_ENABLED;








extern const GUID  GUID_DEEP_SLEEP_PLATFORM_STATE;






extern const GUID  GUID_DISK_COALESCING_POWERDOWN_TIMEOUT;












extern const GUID  GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT;










extern const GUID  GUID_VIDEO_SUBGROUP;







extern const GUID  GUID_VIDEO_POWERDOWN_TIMEOUT;








extern const GUID  GUID_VIDEO_ANNOYANCE_TIMEOUT;








extern const GUID  GUID_VIDEO_ADAPTIVE_PERCENT_INCREASE;







extern const GUID  GUID_VIDEO_DIM_TIMEOUT;







extern const GUID  GUID_VIDEO_ADAPTIVE_POWERDOWN;






extern const GUID  GUID_MONITOR_POWER_ON;






extern const GUID  GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS;






extern const GUID  GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS;






extern const GUID  GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS;







extern const GUID  GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS;






extern const GUID  GUID_CONSOLE_DISPLAY_STATE;







extern const GUID  GUID_ALLOW_DISPLAY_REQUIRED;








extern const GUID  GUID_VIDEO_CONSOLE_LOCK_TIMEOUT;








extern const GUID  GUID_ADVANCED_COLOR_QUALITY_BIAS;






extern const GUID  GUID_ADAPTIVE_POWER_BEHAVIOR_SUBGROUP;






extern const GUID  GUID_NON_ADAPTIVE_INPUT_TIMEOUT;






extern const GUID  GUID_ADAPTIVE_INPUT_CONTROLLER_STATE;







extern const GUID  GUID_DISK_SUBGROUP;




extern const GUID  GUID_DISK_MAX_POWER;





extern const GUID  GUID_DISK_POWERDOWN_TIMEOUT;






extern const GUID  GUID_DISK_IDLE_TIMEOUT;








extern const GUID  GUID_DISK_BURST_IGNORE_THRESHOLD;





extern const GUID  GUID_DISK_ADAPTIVE_POWERDOWN;




extern const GUID  GUID_DISK_NVME_NOPPME;








extern const GUID  GUID_SLEEP_SUBGROUP;







extern const GUID  GUID_SLEEP_IDLE_THRESHOLD;





extern const GUID  GUID_STANDBY_TIMEOUT;








extern const GUID  GUID_UNATTEND_SLEEP_TIMEOUT;





extern const GUID  GUID_HIBERNATE_TIMEOUT;





extern const GUID  GUID_HIBERNATE_FASTS4_POLICY;








extern const GUID  GUID_CRITICAL_POWER_TRANSITION;





extern const GUID  GUID_SYSTEM_AWAYMODE;






extern const GUID  GUID_ALLOW_AWAYMODE;






extern const GUID  GUID_USER_PRESENCE_PREDICTION;






extern const GUID  GUID_STANDBY_BUDGET_GRACE_PERIOD;






extern const GUID  GUID_STANDBY_BUDGET_PERCENT;






extern const GUID  GUID_STANDBY_RESERVE_GRACE_PERIOD;






extern const GUID  GUID_STANDBY_RESERVE_TIME;






extern const GUID  GUID_STANDBY_RESET_PERCENT;






extern const GUID  GUID_HUPR_ADAPTIVE_AWAY_DISPLAY_TIMEOUT;









extern const GUID  GUID_HUPR_ADAPTIVE_INATTENTIVE_DIM_TIMEOUT;








extern const GUID  GUID_HUPR_ADAPTIVE_INATTENTIVE_DISPLAY_TIMEOUT;







extern const GUID  GUID_HUPR_ADAPTIVE_AWAY_DIM_TIMEOUT;







extern const GUID  GUID_ALLOW_STANDBY_STATES;






extern const GUID  GUID_ALLOW_RTC_WAKE;






extern const GUID  GUID_LEGACY_RTC_MITIGATION;







extern const GUID  GUID_ALLOW_SYSTEM_REQUIRED;








extern const GUID  GUID_POWER_SAVING_STATUS;







extern const GUID  GUID_ENERGY_SAVER_SUBGROUP;






extern const GUID  GUID_ENERGY_SAVER_BATTERY_THRESHOLD;






extern const GUID  GUID_ENERGY_SAVER_BRIGHTNESS;






extern const GUID  GUID_ENERGY_SAVER_POLICY;








extern const GUID  GUID_SYSTEM_BUTTON_SUBGROUP;




















extern const GUID  GUID_POWERBUTTON_ACTION;





extern const GUID  GUID_SLEEPBUTTON_ACTION;






extern const GUID  GUID_USERINTERFACEBUTTON_ACTION;





extern const GUID  GUID_LIDCLOSE_ACTION;
extern const GUID  GUID_LIDOPEN_POWERSTATE;








extern const GUID  GUID_BATTERY_SUBGROUP;











extern const GUID  GUID_BATTERY_DISCHARGE_ACTION_0;
extern const GUID  GUID_BATTERY_DISCHARGE_LEVEL_0;
extern const GUID  GUID_BATTERY_DISCHARGE_FLAGS_0;

extern const GUID  GUID_BATTERY_DISCHARGE_ACTION_1;
extern const GUID  GUID_BATTERY_DISCHARGE_LEVEL_1;
extern const GUID  GUID_BATTERY_DISCHARGE_FLAGS_1;

extern const GUID  GUID_BATTERY_DISCHARGE_ACTION_2;
extern const GUID  GUID_BATTERY_DISCHARGE_LEVEL_2;
extern const GUID  GUID_BATTERY_DISCHARGE_FLAGS_2;

extern const GUID  GUID_BATTERY_DISCHARGE_ACTION_3;
extern const GUID  GUID_BATTERY_DISCHARGE_LEVEL_3;
extern const GUID  GUID_BATTERY_DISCHARGE_FLAGS_3;










extern const GUID  GUID_PROCESSOR_SETTINGS_SUBGROUP;





extern const GUID  GUID_PROCESSOR_THROTTLE_POLICY;

















extern const GUID  GUID_PROCESSOR_THROTTLE_MAXIMUM;









extern const GUID  GUID_PROCESSOR_THROTTLE_MAXIMUM_1;









extern const GUID  GUID_PROCESSOR_THROTTLE_MINIMUM;









extern const GUID  GUID_PROCESSOR_THROTTLE_MINIMUM_1;






extern const GUID  GUID_PROCESSOR_FREQUENCY_LIMIT;


extern const GUID  GUID_PROCESSOR_FREQUENCY_LIMIT_1;







extern const GUID  GUID_PROCESSOR_ALLOW_THROTTLING;









extern const GUID  GUID_PROCESSOR_IDLESTATE_POLICY;





extern const GUID  GUID_PROCESSOR_PERFSTATE_POLICY;







extern const GUID  GUID_PROCESSOR_PERF_INCREASE_THRESHOLD;








extern const GUID  GUID_PROCESSOR_PERF_INCREASE_THRESHOLD_1;







extern const GUID  GUID_PROCESSOR_PERF_DECREASE_THRESHOLD;








extern const GUID  GUID_PROCESSOR_PERF_DECREASE_THRESHOLD_1;







extern const GUID  GUID_PROCESSOR_PERF_INCREASE_POLICY;








extern const GUID  GUID_PROCESSOR_PERF_INCREASE_POLICY_1;







extern const GUID  GUID_PROCESSOR_PERF_DECREASE_POLICY;








extern const GUID  GUID_PROCESSOR_PERF_DECREASE_POLICY_1;








extern const GUID  GUID_PROCESSOR_PERF_INCREASE_TIME;








extern const GUID  GUID_PROCESSOR_PERF_INCREASE_TIME_1;








extern const GUID  GUID_PROCESSOR_PERF_DECREASE_TIME;








extern const GUID  GUID_PROCESSOR_PERF_DECREASE_TIME_1;







extern const GUID  GUID_PROCESSOR_PERF_TIME_CHECK;







extern const GUID  GUID_PROCESSOR_PERF_BOOST_POLICY;










extern const GUID  GUID_PROCESSOR_PERF_BOOST_MODE;
















extern const GUID  GUID_PROCESSOR_PERF_AUTONOMOUS_MODE;









extern const GUID  GUID_PROCESSOR_PERF_ENERGY_PERFORMANCE_PREFERENCE;






extern const GUID  GUID_PROCESSOR_PERF_ENERGY_PERFORMANCE_PREFERENCE_1;









extern const GUID  GUID_PROCESSOR_PERF_AUTONOMOUS_ACTIVITY_WINDOW;








extern const GUID  GUID_PROCESSOR_DUTY_CYCLING;










extern const GUID  GUID_PROCESSOR_IDLE_ALLOW_SCALING;






extern const GUID  GUID_PROCESSOR_IDLE_DISABLE;








extern const GUID  GUID_PROCESSOR_IDLE_STATE_MAXIMUM;








extern const GUID  GUID_PROCESSOR_IDLE_TIME_CHECK;








extern const GUID  GUID_PROCESSOR_IDLE_DEMOTE_THRESHOLD;







extern const GUID  GUID_PROCESSOR_IDLE_PROMOTE_THRESHOLD;








extern const GUID  GUID_PROCESSOR_CORE_PARKING_INCREASE_THRESHOLD;








extern const GUID  GUID_PROCESSOR_CORE_PARKING_DECREASE_THRESHOLD;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_INCREASE_POLICY;












extern const GUID  GUID_PROCESSOR_CORE_PARKING_DECREASE_POLICY;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_MAX_CORES;







extern const GUID  GUID_PROCESSOR_CORE_PARKING_MAX_CORES_1;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_MIN_CORES;







extern const GUID  GUID_PROCESSOR_CORE_PARKING_MIN_CORES_1;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_INCREASE_TIME;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_DECREASE_TIME;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_DECREASE_FACTOR;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_THRESHOLD;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_AFFINITY_WEIGHTING;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_DECREASE_FACTOR;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_THRESHOLD;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_WEIGHTING;






extern const GUID  GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_THRESHOLD;







extern const GUID  GUID_PROCESSOR_PARKING_CORE_OVERRIDE;







extern const GUID  GUID_PROCESSOR_PARKING_PERF_STATE;







extern const GUID  GUID_PROCESSOR_PARKING_PERF_STATE_1;







extern const GUID  GUID_PROCESSOR_PARKING_CONCURRENCY_THRESHOLD;







extern const GUID  GUID_PROCESSOR_PARKING_HEADROOM_THRESHOLD;







extern const GUID  GUID_PROCESSOR_PARKING_DISTRIBUTION_THRESHOLD;







extern const GUID  GUID_PROCESSOR_SOFT_PARKING_LATENCY;






extern const GUID  GUID_PROCESSOR_PERF_HISTORY;







extern const GUID  GUID_PROCESSOR_PERF_HISTORY_1;









extern const GUID  GUID_PROCESSOR_PERF_INCREASE_HISTORY;









extern const GUID  GUID_PROCESSOR_PERF_DECREASE_HISTORY;









extern const GUID  GUID_PROCESSOR_PERF_CORE_PARKING_HISTORY;









extern const GUID  GUID_PROCESSOR_PERF_LATENCY_HINT;






extern const GUID  GUID_PROCESSOR_PERF_LATENCY_HINT_PERF;







extern const GUID  GUID_PROCESSOR_PERF_LATENCY_HINT_PERF_1;







extern const GUID  GUID_PROCESSOR_LATENCY_HINT_MIN_UNPARK;







extern const GUID  GUID_PROCESSOR_LATENCY_HINT_MIN_UNPARK_1;






extern const GUID  GUID_PROCESSOR_MODULE_PARKING_POLICY;






extern const GUID  GUID_PROCESSOR_COMPLEX_PARKING_POLICY;















extern const GUID  GUID_PROCESSOR_SMT_UNPARKING_POLICY;












extern const GUID  GUID_PROCESSOR_DISTRIBUTE_UTILITY;










extern const GUID  GUID_PROCESSOR_HETEROGENEOUS_POLICY;







extern const GUID  GUID_PROCESSOR_HETERO_DECREASE_TIME;







extern const GUID  GUID_PROCESSOR_HETERO_INCREASE_TIME;








extern const GUID  GUID_PROCESSOR_HETERO_DECREASE_THRESHOLD;








extern const GUID  GUID_PROCESSOR_HETERO_DECREASE_THRESHOLD_1;








extern const GUID  GUID_PROCESSOR_HETERO_INCREASE_THRESHOLD;








extern const GUID  GUID_PROCESSOR_HETERO_INCREASE_THRESHOLD_1;








extern const GUID  GUID_PROCESSOR_CLASS0_FLOOR_PERF;








extern const GUID  GUID_PROCESSOR_CLASS1_INITIAL_PERF;






extern const GUID  GUID_PROCESSOR_THREAD_SCHEDULING_POLICY;







extern const GUID  GUID_PROCESSOR_SHORT_THREAD_SCHEDULING_POLICY;







extern const GUID  GUID_PROCESSOR_SHORT_THREAD_RUNTIME_THRESHOLD;






extern const GUID  GUID_PROCESSOR_SHORT_THREAD_ARCH_CLASS_UPPER_THRESHOLD;






extern const GUID  GUID_PROCESSOR_SHORT_THREAD_ARCH_CLASS_LOWER_THRESHOLD;






extern const GUID  GUID_PROCESSOR_LONG_THREAD_ARCH_CLASS_UPPER_THRESHOLD;






extern const GUID  GUID_PROCESSOR_LONG_THREAD_ARCH_CLASS_LOWER_THRESHOLD;







extern const GUID  GUID_SYSTEM_COOLING_POLICY;









extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_DISABLE_THRESHOLD;







extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_DISABLE_THRESHOLD_1;






extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_ENABLE_THRESHOLD;






extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_ENABLE_THRESHOLD_1;






extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_DISABLE_TIME;






extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_DISABLE_TIME_1;






extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_ENABLE_TIME;






extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_ENABLE_TIME_1;





extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_EPP_CEILING;






extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_EPP_CEILING_1;






extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_PERF_FLOOR;






extern const GUID  GUID_PROCESSOR_RESPONSIVENESS_PERF_FLOOR_1;









extern const GUID  GUID_LOCK_CONSOLE_ON_WAKE;









extern const GUID  GUID_DEVICE_IDLE_POLICY;








extern const GUID  GUID_CONNECTIVITY_IN_STANDBY;









extern const GUID  GUID_DISCONNECTED_STANDBY_MODE;




















extern const GUID  GUID_ACDC_POWER_SOURCE;















extern const GUID  GUID_LIDSWITCH_STATE_CHANGE;














extern const GUID  GUID_LIDSWITCH_STATE_RELIABILITY;
















extern const GUID  GUID_BATTERY_PERCENTAGE_REMAINING;












extern const GUID  GUID_BATTERY_COUNT;






extern const GUID  GUID_GLOBAL_USER_PRESENCE;










extern const GUID  GUID_SESSION_DISPLAY_STATUS;









extern const GUID  GUID_SESSION_USER_PRESENCE;






extern const GUID  GUID_IDLE_BACKGROUND_TASK;






extern const GUID  GUID_BACKGROUND_TASK_NOTIFICATION;







extern const GUID  GUID_APPLAUNCH_BUTTON;










extern const GUID  GUID_PCIEXPRESS_SETTINGS_SUBGROUP;





extern const GUID  GUID_PCIEXPRESS_ASPM_POLICY;











extern const GUID  GUID_ENABLE_SWITCH_FORCED_SHUTDOWN;






extern const GUID  GUID_INTSTEER_SUBGROUP;


extern const GUID  GUID_INTSTEER_MODE;


extern const GUID  GUID_INTSTEER_LOAD_PER_PROC_TRIGGER;


extern const GUID  GUID_INTSTEER_TIME_UNPARK_TRIGGER;









extern const GUID  GUID_GRAPHICS_SUBGROUP;





extern const GUID  GUID_GPU_PREFERENCE_POLICY;










extern const GUID  GUID_MIXED_REALITY_MODE;






extern const GUID  GUID_SPR_ACTIVE_SESSION_CHANGE;







typedef enum _SYSTEM_POWER_STATE {
    PowerSystemUnspecified = 0,
    PowerSystemWorking     = 1,
    PowerSystemSleeping1   = 2,
    PowerSystemSleeping2   = 3,
    PowerSystemSleeping3   = 4,
    PowerSystemHibernate   = 5,
    PowerSystemShutdown    = 6,
    PowerSystemMaximum     = 7
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;



typedef enum {
    PowerActionNone = 0,
    PowerActionReserved,
    PowerActionSleep,
    PowerActionHibernate,
    PowerActionShutdown,
    PowerActionShutdownReset,
    PowerActionShutdownOff,
    PowerActionWarmEject,
    PowerActionDisplayOff
} POWER_ACTION, *PPOWER_ACTION;

typedef enum _DEVICE_POWER_STATE {
    PowerDeviceUnspecified = 0,
    PowerDeviceD0,
    PowerDeviceD1,
    PowerDeviceD2,
    PowerDeviceD3,
    PowerDeviceMaximum
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef enum _MONITOR_DISPLAY_STATE {
    PowerMonitorOff = 0,
    PowerMonitorOn,
    PowerMonitorDim
} MONITOR_DISPLAY_STATE, *PMONITOR_DISPLAY_STATE;

typedef enum _USER_ACTIVITY_PRESENCE {
    PowerUserPresent = 0,
    PowerUserNotPresent,
    PowerUserInactive,
    PowerUserMaximum,
    PowerUserInvalid = PowerUserMaximum
} USER_ACTIVITY_PRESENCE, *PUSER_ACTIVITY_PRESENCE;





typedef union _POWER_STATE {
    SYSTEM_POWER_STATE SystemState;
    DEVICE_POWER_STATE DeviceState;
} POWER_STATE, *PPOWER_STATE;

typedef enum _POWER_STATE_TYPE {
    SystemPowerState = 0,
    DevicePowerState
} POWER_STATE_TYPE, *PPOWER_STATE_TYPE;


typedef struct _SYSTEM_POWER_STATE_CONTEXT {
    union {
        struct {
            ULONG   Reserved1               : 8;
            ULONG   TargetSystemState       : 4;
            ULONG   EffectiveSystemState    : 4;
            ULONG   CurrentSystemState      : 4;
            ULONG   IgnoreHibernationPath   : 1;
            ULONG   PseudoTransition        : 1;
            ULONG   KernelSoftReboot        : 1;
            ULONG   DirectedDripsTransition : 1;
            ULONG   Reserved2               : 8;
        } ;

        ULONG ContextAsUlong;
    } ;
} SYSTEM_POWER_STATE_CONTEXT, *PSYSTEM_POWER_STATE_CONTEXT;





typedef struct _COUNTED_REASON_CONTEXT {
    ULONG Version;
    ULONG Flags;
    union {
        struct {
            UNICODE_STRING ResourceFileName;
            USHORT ResourceReasonId;
            ULONG StringCount;
              PUNICODE_STRING ReasonStrings;
        } ;

        UNICODE_STRING SimpleString;
    } ;
} COUNTED_REASON_CONTEXT, *PCOUNTED_REASON_CONTEXT;





























typedef ULONG EXECUTION_STATE, *PEXECUTION_STATE;

typedef enum {
    LT_DONT_CARE,
    LT_LOWEST_LATENCY
} LATENCY_TIME;


















typedef enum _POWER_REQUEST_TYPE {
    PowerRequestDisplayRequired,
    PowerRequestSystemRequired,
    PowerRequestAwayModeRequired,
    PowerRequestExecutionRequired
} POWER_REQUEST_TYPE, *PPOWER_REQUEST_TYPE;




















typedef struct CM_Power_Data_s {
    ULONG               PD_Size;
    DEVICE_POWER_STATE  PD_MostRecentPowerState;
    ULONG               PD_Capabilities;
    ULONG               PD_D1Latency;
    ULONG               PD_D2Latency;
    ULONG               PD_D3Latency;
    DEVICE_POWER_STATE  PD_PowerStateMapping[7];
    SYSTEM_POWER_STATE  PD_DeepestSystemWake;
} CM_POWER_DATA, *PCM_POWER_DATA;





typedef enum {
    SystemPowerPolicyAc,
    SystemPowerPolicyDc,
    VerifySystemPolicyAc,
    VerifySystemPolicyDc,
    SystemPowerCapabilities,
    SystemBatteryState,
    SystemPowerStateHandler,
    ProcessorStateHandler,
    SystemPowerPolicyCurrent,
    AdministratorPowerPolicy,
    SystemReserveHiberFile,
    ProcessorInformation,
    SystemPowerInformation,
    ProcessorStateHandler2,
    LastWakeTime,                                   
    LastSleepTime,                                  
    SystemExecutionState,
    SystemPowerStateNotifyHandler,
    ProcessorPowerPolicyAc,
    ProcessorPowerPolicyDc,
    VerifyProcessorPowerPolicyAc,
    VerifyProcessorPowerPolicyDc,
    ProcessorPowerPolicyCurrent,
    SystemPowerStateLogging,
    SystemPowerLoggingEntry,
    SetPowerSettingValue,
    NotifyUserPowerSetting,
    PowerInformationLevelUnused0,
    SystemMonitorHiberBootPowerOff,
    SystemVideoState,
    TraceApplicationPowerMessage,
    TraceApplicationPowerMessageEnd,
    ProcessorPerfStates,
    ProcessorIdleStates,
    ProcessorCap,
    SystemWakeSource,
    SystemHiberFileInformation,
    TraceServicePowerMessage,
    ProcessorLoad,
    PowerShutdownNotification,
    MonitorCapabilities,
    SessionPowerInit,
    SessionDisplayState,
    PowerRequestCreate,
    PowerRequestAction,
    GetPowerRequestList,
    ProcessorInformationEx,
    NotifyUserModeLegacyPowerEvent,
    GroupPark,
    ProcessorIdleDomains,
    WakeTimerList,
    SystemHiberFileSize,
    ProcessorIdleStatesHv,
    ProcessorPerfStatesHv,
    ProcessorPerfCapHv,
    ProcessorSetIdle,
    LogicalProcessorIdling,
    UserPresence,
    PowerSettingNotificationName,
    GetPowerSettingValue,
    IdleResiliency,
    SessionRITState,
    SessionConnectNotification,
    SessionPowerCleanup,
    SessionLockState,
    SystemHiberbootState,
    PlatformInformation,
    PdcInvocation,
    MonitorInvocation,
    FirmwareTableInformationRegistered,
    SetShutdownSelectedTime,
    SuspendResumeInvocation,                        
    PlmPowerRequestCreate,
    ScreenOff,
    CsDeviceNotification,
    PlatformRole,
    LastResumePerformance,
    DisplayBurst,
    ExitLatencySamplingPercentage,
    RegisterSpmPowerSettings,
    PlatformIdleStates,
    ProcessorIdleVeto,                              
    PlatformIdleVeto,                               
    SystemBatteryStatePrecise,
    ThermalEvent,
    PowerRequestActionInternal,
    BatteryDeviceState,
    PowerInformationInternal,
    ThermalStandby,
    SystemHiberFileType,
    PhysicalPowerButtonPress,
    QueryPotentialDripsConstraint,
    EnergyTrackerCreate,
    EnergyTrackerQuery,
    UpdateBlackBoxRecorder,
    SessionAllowExternalDmaDevices,
    SendSuspendResumeNotification,
    BlackBoxRecorderDirectAccessBuffer,
    PowerInformationLevelMaximum
} POWER_INFORMATION_LEVEL;





typedef enum {
    UserNotPresent = 0,
    UserPresent = 1,
    UserUnknown = 0xff
} POWER_USER_PRESENCE_TYPE, *PPOWER_USER_PRESENCE_TYPE;

typedef struct _POWER_USER_PRESENCE {
    POWER_USER_PRESENCE_TYPE UserPresence;
} POWER_USER_PRESENCE, *PPOWER_USER_PRESENCE;




typedef struct _POWER_SESSION_CONNECT {
    BOOLEAN Connected;  
    BOOLEAN Console;    
} POWER_SESSION_CONNECT, *PPOWER_SESSION_CONNECT;

typedef struct _POWER_SESSION_TIMEOUTS {
    ULONG InputTimeout;
    ULONG DisplayTimeout;
} POWER_SESSION_TIMEOUTS, *PPOWER_SESSION_TIMEOUTS;




typedef struct _POWER_SESSION_RIT_STATE {
    BOOLEAN Active;  
    ULONG64 LastInputTime; 
} POWER_SESSION_RIT_STATE, *PPOWER_SESSION_RIT_STATE;




typedef struct _POWER_SESSION_WINLOGON {
    ULONG SessionId; 
    BOOLEAN Console; 
    BOOLEAN Locked; 
} POWER_SESSION_WINLOGON, *PPOWER_SESSION_WINLOGON;




typedef struct _POWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES {
    BOOLEAN IsAllowed;
} POWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES, *PPOWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES;




typedef struct _POWER_IDLE_RESILIENCY {
    ULONG CoalescingTimeout;
    ULONG IdleResiliencyPeriod;
} POWER_IDLE_RESILIENCY, *PPOWER_IDLE_RESILIENCY;






typedef enum {
    MonitorRequestReasonUnknown,
    MonitorRequestReasonPowerButton,
    MonitorRequestReasonRemoteConnection,
    MonitorRequestReasonScMonitorpower,
    MonitorRequestReasonUserInput,
    MonitorRequestReasonAcDcDisplayBurst,
    MonitorRequestReasonUserDisplayBurst,
    MonitorRequestReasonPoSetSystemState,
    MonitorRequestReasonSetThreadExecutionState,
    MonitorRequestReasonFullWake,
    MonitorRequestReasonSessionUnlock,
    MonitorRequestReasonScreenOffRequest,
    MonitorRequestReasonIdleTimeout,
    MonitorRequestReasonPolicyChange,
    MonitorRequestReasonSleepButton,
    MonitorRequestReasonLid,
    MonitorRequestReasonBatteryCountChange,
    MonitorRequestReasonGracePeriod,
    MonitorRequestReasonPnP,
    MonitorRequestReasonDP,
    MonitorRequestReasonSxTransition,
    MonitorRequestReasonSystemIdle,
    MonitorRequestReasonNearProximity,
    MonitorRequestReasonThermalStandby,
    MonitorRequestReasonResumePdc,
    MonitorRequestReasonResumeS4,
    MonitorRequestReasonTerminal,
    MonitorRequestReasonPdcSignal,
    MonitorRequestReasonAcDcDisplayBurstSuppressed,
    MonitorRequestReasonSystemStateEntered, 
                                            
                                            
    MonitorRequestReasonWinrt,
    MonitorRequestReasonUserInputKeyboard,
    MonitorRequestReasonUserInputMouse,
    MonitorRequestReasonUserInputTouchpad,
    MonitorRequestReasonUserInputPen,
    MonitorRequestReasonUserInputAccelerometer,
    MonitorRequestReasonUserInputHid,
    MonitorRequestReasonUserInputPoUserPresent,
    MonitorRequestReasonUserInputSessionSwitch,
    MonitorRequestReasonUserInputInitialization,
    MonitorRequestReasonPdcSignalWindowsMobilePwrNotif,         
    MonitorRequestReasonPdcSignalWindowsMobileShell,            
    MonitorRequestReasonPdcSignalHeyCortana,                    
    MonitorRequestReasonPdcSignalHolographicShell,              
    MonitorRequestReasonPdcSignalFingerprint,                   
    MonitorRequestReasonDirectedDrips,
    MonitorRequestReasonDim,
    MonitorRequestReasonBuiltinPanel,
    MonitorRequestReasonDisplayRequiredUnDim,
    MonitorRequestReasonBatteryCountChangeSuppressed,
    MonitorRequestReasonResumeModernStandby,
    MonitorRequestReasonTerminalInit,
    MonitorRequestReasonPdcSignalSensorsHumanPresence,          
    MonitorRequestReasonBatteryPreCritical,
    MonitorRequestReasonUserInputTouch,
    MonitorRequestReasonMax
} POWER_MONITOR_REQUEST_REASON;

typedef enum _POWER_MONITOR_REQUEST_TYPE {
    MonitorRequestTypeOff,
    MonitorRequestTypeOnAndPresent,
    MonitorRequestTypeToggleOn
} POWER_MONITOR_REQUEST_TYPE;




typedef struct _POWER_MONITOR_INVOCATION {
    BOOLEAN Console;
    POWER_MONITOR_REQUEST_REASON RequestReason;
} POWER_MONITOR_INVOCATION, *PPOWER_MONITOR_INVOCATION;





typedef struct _RESUME_PERFORMANCE {
    ULONG PostTimeMs;
    ULONGLONG TotalResumeTimeMs;
    ULONGLONG ResumeCompleteTimestamp;
} RESUME_PERFORMANCE, *PRESUME_PERFORMANCE;





typedef enum {
    PoAc,
    PoDc,
    PoHot,
    PoConditionMaximum
} SYSTEM_POWER_CONDITION;

typedef struct {

    
    
    
    
    ULONG       Version;


    
    
    
    GUID        Guid;


    
    
    
    
    SYSTEM_POWER_CONDITION PowerCondition;

    
    
    
    ULONG       DataLength;

    
    
    
    UCHAR   Data[1];
} SET_POWER_SETTING_VALUE, *PSET_POWER_SETTING_VALUE;



typedef struct {
    GUID Guid;
} NOTIFY_USER_POWER_SETTING, *PNOTIFY_USER_POWER_SETTING;






typedef struct _APPLICATIONLAUNCH_SETTING_VALUE {

    
    
    
    
    LARGE_INTEGER       ActivationTime;

    
    
    
    ULONG               Flags;

    
    
    
    ULONG               ButtonInstanceID;


} APPLICATIONLAUNCH_SETTING_VALUE, *PAPPLICATIONLAUNCH_SETTING_VALUE;





typedef enum _POWER_PLATFORM_ROLE {
    PlatformRoleUnspecified = 0,
    PlatformRoleDesktop,
    PlatformRoleMobile,
    PlatformRoleWorkstation,
    PlatformRoleEnterpriseServer,
    PlatformRoleSOHOServer,
    PlatformRoleAppliancePC,
    PlatformRolePerformanceServer, 
    PlatformRoleSlate,             
    PlatformRoleMaximum
} POWER_PLATFORM_ROLE, *PPOWER_PLATFORM_ROLE;



















typedef struct _POWER_PLATFORM_INFORMATION {
    BOOLEAN AoAc;
} POWER_PLATFORM_INFORMATION, *PPOWER_PLATFORM_INFORMATION;





typedef enum POWER_SETTING_ALTITUDE {
    ALTITUDE_GROUP_POLICY,
    ALTITUDE_USER,
    ALTITUDE_RUNTIME_OVERRIDE,
    ALTITUDE_PROVISIONING,
    ALTITUDE_OEM_CUSTOMIZATION,
    ALTITUDE_INTERNAL_OVERRIDE,
    ALTITUDE_OS_DEFAULT,
} POWER_SETTING_ALTITUDE, *PPOWER_SETTING_ALTITUDE;






typedef struct {
    ULONG       Granularity;
    ULONG       Capacity;
} BATTERY_REPORTING_SCALE, *PBATTERY_REPORTING_SCALE;





 
 
NTSTATUS
__stdcall
NtPowerInformation(
      POWER_INFORMATION_LEVEL InformationLevel,
      PVOID InputBuffer,
      ULONG InputBufferLength,
      PVOID OutputBuffer,
      ULONG OutputBufferLength
    );









                                            







































































typedef enum _CM_SERVICE_NODE_TYPE {
    DriverType               = 0x00000001,
    FileSystemType           = 0x00000002,
    Win32ServiceOwnProcess   = 0x00000010,
    Win32ServiceShareProcess = 0x00000020,
    AdapterType              = 0x00000004,
    RecognizerType           = 0x00000008
} SERVICE_NODE_TYPE;

typedef enum _CM_SERVICE_LOAD_TYPE {
    BootLoad    = 0x00000000,
    SystemLoad  = 0x00000001,
    AutoLoad    = 0x00000002,
    DemandLoad  = 0x00000003,
    DisableLoad = 0x00000004
} SERVICE_LOAD_TYPE;

typedef enum _CM_ERROR_CONTROL_TYPE {
    IgnoreError   = 0x00000000,
    NormalError   = 0x00000001,
    SevereError   = 0x00000002,
    CriticalError = 0x00000003
} SERVICE_ERROR_TYPE;





















































































typedef int CM_RESOURCE_TYPE;

























typedef enum _CM_SHARE_DISPOSITION {
    CmResourceShareUndetermined = 0,    
    CmResourceShareDeviceExclusive,
    CmResourceShareDriverExclusive,
    CmResourceShareShared
} CM_SHARE_DISPOSITION;













































































































































































typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
    UCHAR Type;
    UCHAR ShareDisposition;
    USHORT Flags;
    union {

        
        
        
        
        

        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length;
        } Generic;

        
        

        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length;
        } Port;

        
        

        struct {




            ULONG Level;

            ULONG Vector;
            KAFFINITY Affinity;
        } Interrupt;

        
        
        
        

        struct {
            union {
               struct {



                   USHORT Reserved;

                   USHORT MessageCount;
                   ULONG Vector;
                   KAFFINITY Affinity;
               } Raw;

               struct {




                   ULONG Level;

                   ULONG Vector;
                   KAFFINITY Affinity;
               } Translated;
            } ;
        } MessageInterrupt;

        
        
        
        
        

        struct {
            PHYSICAL_ADDRESS Start;    
            ULONG Length;
        } Memory;

        
        
        

        struct {
            ULONG Channel;
            ULONG Port;
            ULONG Reserved1;
        } Dma;

        struct {
            ULONG Channel;
            ULONG RequestLine;
            UCHAR TransferWidth;
            UCHAR Reserved1;
            UCHAR Reserved2;
            UCHAR Reserved3;
        } DmaV3;

        
        
        
        

        struct {
            ULONG Data[3];
        } DevicePrivate;

        
        
        

        struct {
            ULONG Start;
            ULONG Length;
            ULONG Reserved;
        } BusNumber;

        
        
        
        
        
        

        struct {
            ULONG DataSize;
            ULONG Reserved1;
            ULONG Reserved2;
        } DeviceSpecificData;

        
        
        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length40;
        } Memory40;

        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length48;
        } Memory48;

        struct {
            PHYSICAL_ADDRESS Start;
            ULONG Length64;
        } Memory64;

        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;

    } u;
} CM_PARTIAL_RESOURCE_DESCRIPTOR, *PCM_PARTIAL_RESOURCE_DESCRIPTOR;


















































typedef struct _CM_PARTIAL_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
} CM_PARTIAL_RESOURCE_LIST, *PCM_PARTIAL_RESOURCE_LIST;












typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
    INTERFACE_TYPE InterfaceType; 
    ULONG BusNumber; 
    CM_PARTIAL_RESOURCE_LIST PartialResourceList;
} CM_FULL_RESOURCE_DESCRIPTOR, *PCM_FULL_RESOURCE_DESCRIPTOR;






typedef struct _CM_RESOURCE_LIST {
    ULONG Count;
    CM_FULL_RESOURCE_DESCRIPTOR List[1];
} CM_RESOURCE_LIST, *PCM_RESOURCE_LIST;













typedef struct _DEVICE_FLAGS {
    ULONG Failed : 1;
    ULONG ReadOnly : 1;
    ULONG Removable : 1;
    ULONG ConsoleIn : 1;
    ULONG ConsoleOut : 1;
    ULONG Input : 1;
    ULONG Output : 1;
} DEVICE_FLAGS, *PDEVICE_FLAGS;





typedef struct _CM_COMPONENT_INFORMATION {
    DEVICE_FLAGS Flags;
    ULONG Version;
    ULONG Key;
    KAFFINITY AffinityMask;
} CM_COMPONENT_INFORMATION, *PCM_COMPONENT_INFORMATION;












typedef struct _CM_ROM_BLOCK {
    ULONG Address;
    ULONG Size;
} CM_ROM_BLOCK, *PCM_ROM_BLOCK;











































typedef struct _CM_INT13_DRIVE_PARAMETER {
    USHORT DriveSelect;
    ULONG MaxCylinders;
    USHORT SectorsPerTrack;
    USHORT MaxHeads;
    USHORT NumberDrives;
} CM_INT13_DRIVE_PARAMETER, *PCM_INT13_DRIVE_PARAMETER;







typedef struct _CM_MCA_POS_DATA {
    USHORT AdapterId;
    UCHAR PosData1;
    UCHAR PosData2;
    UCHAR PosData3;
    UCHAR PosData4;
} CM_MCA_POS_DATA, *PCM_MCA_POS_DATA;





typedef struct _EISA_MEMORY_TYPE {
    UCHAR ReadWrite: 1;
    UCHAR Cached : 1;
    UCHAR Reserved0 :1;
    UCHAR Type:2;
    UCHAR Shared:1;
    UCHAR Reserved1 :1;
    UCHAR MoreEntries : 1;
} EISA_MEMORY_TYPE, *PEISA_MEMORY_TYPE;

typedef struct _EISA_MEMORY_CONFIGURATION {
    EISA_MEMORY_TYPE ConfigurationByte;
    UCHAR DataSize;
    USHORT AddressLowWord;
    UCHAR AddressHighByte;
    USHORT MemorySize;
} EISA_MEMORY_CONFIGURATION, *PEISA_MEMORY_CONFIGURATION;






typedef struct _EISA_IRQ_DESCRIPTOR {
    UCHAR Interrupt : 4;
    UCHAR Reserved :1;
    UCHAR LevelTriggered :1;
    UCHAR Shared : 1;
    UCHAR MoreEntries : 1;
} EISA_IRQ_DESCRIPTOR, *PEISA_IRQ_DESCRIPTOR;

typedef struct _EISA_IRQ_CONFIGURATION {
    EISA_IRQ_DESCRIPTOR ConfigurationByte;
    UCHAR Reserved;
} EISA_IRQ_CONFIGURATION, *PEISA_IRQ_CONFIGURATION;






typedef struct _DMA_CONFIGURATION_BYTE0 {
    UCHAR Channel : 3;
    UCHAR Reserved : 3;
    UCHAR Shared :1;
    UCHAR MoreEntries :1;
} DMA_CONFIGURATION_BYTE0;

typedef struct _DMA_CONFIGURATION_BYTE1 {
    UCHAR Reserved0 : 2;
    UCHAR TransferSize : 2;
    UCHAR Timing : 2;
    UCHAR Reserved1 : 2;
} DMA_CONFIGURATION_BYTE1;

typedef struct _EISA_DMA_CONFIGURATION {
    DMA_CONFIGURATION_BYTE0 ConfigurationByte0;
    DMA_CONFIGURATION_BYTE1 ConfigurationByte1;
} EISA_DMA_CONFIGURATION, *PEISA_DMA_CONFIGURATION;






typedef struct _EISA_PORT_DESCRIPTOR {
    UCHAR NumberPorts : 5;
    UCHAR Reserved :1;
    UCHAR Shared :1;
    UCHAR MoreEntries : 1;
} EISA_PORT_DESCRIPTOR, *PEISA_PORT_DESCRIPTOR;

typedef struct _EISA_PORT_CONFIGURATION {
    EISA_PORT_DESCRIPTOR Configuration;
    USHORT PortAddress;
} EISA_PORT_CONFIGURATION, *PEISA_PORT_CONFIGURATION;








typedef struct _CM_EISA_SLOT_INFORMATION {
    UCHAR ReturnCode;
    UCHAR ReturnFlags;
    UCHAR MajorRevision;
    UCHAR MinorRevision;
    USHORT Checksum;
    UCHAR NumberFunctions;
    UCHAR FunctionInformation;
    ULONG CompressedId;
} CM_EISA_SLOT_INFORMATION, *PCM_EISA_SLOT_INFORMATION;






typedef struct _CM_EISA_FUNCTION_INFORMATION {
    ULONG CompressedId;
    UCHAR IdSlotFlags1;
    UCHAR IdSlotFlags2;
    UCHAR MinorRevision;
    UCHAR MajorRevision;
    UCHAR Selections[26];
    UCHAR FunctionFlags;
    UCHAR TypeString[80];
    EISA_MEMORY_CONFIGURATION EisaMemory[9];
    EISA_IRQ_CONFIGURATION EisaIrq[7];
    EISA_DMA_CONFIGURATION EisaDma[4];
    EISA_PORT_CONFIGURATION EisaPort[20];
    UCHAR InitializationData[60];
} CM_EISA_FUNCTION_INFORMATION, *PCM_EISA_FUNCTION_INFORMATION;



















typedef struct _CM_PNP_BIOS_DEVICE_NODE {
    USHORT Size;
    UCHAR Node;
    ULONG ProductId;
    UCHAR DeviceType[3];
    USHORT DeviceAttributes;
    
    
} CM_PNP_BIOS_DEVICE_NODE,*PCM_PNP_BIOS_DEVICE_NODE;





typedef struct _CM_PNP_BIOS_INSTALLATION_CHECK {
    UCHAR Signature[4];             
    UCHAR Revision;
    UCHAR Length;
    USHORT ControlField;
    UCHAR Checksum;
    ULONG EventFlagAddress;         
    USHORT RealModeEntryOffset;
    USHORT RealModeEntrySegment;
    USHORT ProtectedModeEntryOffset;
    ULONG ProtectedModeCodeBaseAddress;
    ULONG OemDeviceId;
    USHORT RealModeDataBaseAddress;
    ULONG ProtectedModeDataBaseAddress;
} CM_PNP_BIOS_INSTALLATION_CHECK, *PCM_PNP_BIOS_INSTALLATION_CHECK;

























































































typedef struct _CM_SCSI_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    UCHAR HostIdentifier;
} CM_SCSI_DEVICE_DATA, *PCM_SCSI_DEVICE_DATA;









typedef struct _CM_VIDEO_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    ULONG VideoClock;
} CM_VIDEO_DEVICE_DATA, *PCM_VIDEO_DEVICE_DATA;





typedef struct _CM_SONIC_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    USHORT DataConfigurationRegister;
    UCHAR EthernetAddress[8];
} CM_SONIC_DEVICE_DATA, *PCM_SONIC_DEVICE_DATA;





typedef struct _CM_SERIAL_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    ULONG BaudClock;
} CM_SERIAL_DEVICE_DATA, *PCM_SERIAL_DEVICE_DATA;









typedef struct _CM_MONITOR_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    USHORT HorizontalScreenSize;
    USHORT VerticalScreenSize;
    USHORT HorizontalResolution;
    USHORT VerticalResolution;
    USHORT HorizontalDisplayTimeLow;
    USHORT HorizontalDisplayTime;
    USHORT HorizontalDisplayTimeHigh;
    USHORT HorizontalBackPorchLow;
    USHORT HorizontalBackPorch;
    USHORT HorizontalBackPorchHigh;
    USHORT HorizontalFrontPorchLow;
    USHORT HorizontalFrontPorch;
    USHORT HorizontalFrontPorchHigh;
    USHORT HorizontalSyncLow;
    USHORT HorizontalSync;
    USHORT HorizontalSyncHigh;
    USHORT VerticalBackPorchLow;
    USHORT VerticalBackPorch;
    USHORT VerticalBackPorchHigh;
    USHORT VerticalFrontPorchLow;
    USHORT VerticalFrontPorch;
    USHORT VerticalFrontPorchHigh;
    USHORT VerticalSyncLow;
    USHORT VerticalSync;
    USHORT VerticalSyncHigh;
} CM_MONITOR_DEVICE_DATA, *PCM_MONITOR_DEVICE_DATA;





typedef struct _CM_FLOPPY_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    CHAR Size[8];
    ULONG MaxDensity;
    ULONG MountDensity;
    
    
    
    UCHAR StepRateHeadUnloadTime;
    UCHAR HeadLoadTime;
    UCHAR MotorOffTime;
    UCHAR SectorLengthCode;
    UCHAR SectorPerTrack;
    UCHAR ReadWriteGapLength;
    UCHAR DataTransferLength;
    UCHAR FormatGapLength;
    UCHAR FormatFillCharacter;
    UCHAR HeadSettleTime;
    UCHAR MotorSettleTime;
    UCHAR MaximumTrackValue;
    UCHAR DataTransferRate;
} CM_FLOPPY_DEVICE_DATA, *PCM_FLOPPY_DEVICE_DATA;














typedef struct _CM_KEYBOARD_DEVICE_DATA {
    USHORT Version;
    USHORT Revision;
    UCHAR Type;
    UCHAR Subtype;
    USHORT KeyboardFlags;
} CM_KEYBOARD_DEVICE_DATA, *PCM_KEYBOARD_DEVICE_DATA;





typedef struct _CM_DISK_GEOMETRY_DEVICE_DATA {
    ULONG BytesPerSector;
    ULONG NumberOfCylinders;
    ULONG SectorsPerTrack;
    ULONG NumberOfHeads;
} CM_DISK_GEOMETRY_DEVICE_DATA, *PCM_DISK_GEOMETRY_DEVICE_DATA;

































typedef enum _IRQ_DEVICE_POLICY {
    IrqPolicyMachineDefault = 0,
    IrqPolicyAllCloseProcessors,
    IrqPolicyOneCloseProcessor,
    IrqPolicyAllProcessorsInMachine,
    IrqPolicySpecifiedProcessors,
    IrqPolicySpreadMessagesAcrossAllProcessors,
    IrqPolicyAllProcessorsInMachineWhenSteered
} IRQ_DEVICE_POLICY, *PIRQ_DEVICE_POLICY;







typedef enum _IRQ_PRIORITY {
    IrqPriorityUndefined = 0,
    IrqPriorityLow,
    IrqPriorityNormal,
    IrqPriorityHigh
} IRQ_PRIORITY, *PIRQ_PRIORITY;





typedef enum _IRQ_GROUP_POLICY {
    GroupAffinityAllGroupZero = 0,
    GroupAffinityDontCare
} IRQ_GROUP_POLICY, *PIRQ_GROUP_POLICY;





typedef struct _IO_RESOURCE_DESCRIPTOR {
    UCHAR Option;
    UCHAR Type;                         
    UCHAR ShareDisposition;             
    UCHAR Spare1;
    USHORT Flags;                       
    USHORT Spare2;                      

    union {
        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Port;

        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory;

        struct {
            ULONG MinimumVector;
            ULONG MaximumVector;




            IRQ_DEVICE_POLICY AffinityPolicy;

            IRQ_PRIORITY PriorityPolicy;
            KAFFINITY TargetedProcessors;
        } Interrupt;

        struct {
            ULONG MinimumChannel;
            ULONG MaximumChannel;
        } Dma;

        struct {
            ULONG RequestLine;
            ULONG Reserved;
            ULONG Channel;
            ULONG TransferWidth;
        } DmaV3;

        struct {
            ULONG Length;
            ULONG Alignment;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Generic;

        struct {
            ULONG Data[3];
        } DevicePrivate;

        
        
        

        struct {
            ULONG Length;
            ULONG MinBusNumber;
            ULONG MaxBusNumber;
            ULONG Reserved;
        } BusNumber;

        struct {
            ULONG Priority;   
            ULONG Reserved1;
            ULONG Reserved2;
        } ConfigData;

        
        
        
        

        struct {
            ULONG Length40;
            ULONG Alignment40;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory40;

        struct {
            ULONG Length48;
            ULONG Alignment48;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory48;

        struct {
            ULONG Length64;
            ULONG Alignment64;
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } Memory64;

        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;

    } u;

} IO_RESOURCE_DESCRIPTOR, *PIO_RESOURCE_DESCRIPTOR;


typedef struct _IO_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;

    ULONG Count;
    IO_RESOURCE_DESCRIPTOR Descriptors[1];
} IO_RESOURCE_LIST, *PIO_RESOURCE_LIST;


typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
    ULONG ListSize;
    INTERFACE_TYPE InterfaceType; 
    ULONG BusNumber; 
    ULONG SlotNumber;
    ULONG Reserved[3];
    ULONG AlternativeLists;
    IO_RESOURCE_LIST  List[1];
} IO_RESOURCE_REQUIREMENTS_LIST, *PIO_RESOURCE_REQUIREMENTS_LIST;






























typedef struct  _SLIST_ENTRY {
    struct _SLIST_ENTRY *Next;
} SLIST_ENTRY, *PSLIST_ENTRY;










typedef union  _SLIST_HEADER {
    struct {  
        ULONGLONG Alignment;
        ULONGLONG Region;
    } ;
    struct {  
        ULONGLONG Depth:16;
        ULONGLONG Sequence:48;
        ULONGLONG Reserved:4;
        ULONGLONG NextEntry:60; 
    } HeaderX64;
} SLIST_HEADER, *PSLIST_HEADER;





















































void
__stdcall
RtlAssert(
      PVOID VoidFailedAssertion,
      PVOID VoidFileName,
      ULONG LineNumber,
      PSTR MutableMessage
    );











































































































































void
__fastfail(
      unsigned int Code
    );








































void
RtlFailFast(
      ULONG Code
    )

;


































void
InitializeListHead(
      PLIST_ENTRY ListHead
    )

;

 
BOOLEAN

IsListEmpty(
      const LIST_ENTRY * ListHead
    )

;


BOOLEAN
RemoveEntryListUnsafe(
      PLIST_ENTRY Entry
    )

;
















































































































































void
FatalListEntryError(
      PVOID p1,
      PVOID p2,
      PVOID p3
    )

;


void
RtlpCheckListEntry(
      PLIST_ENTRY Entry
    )

;



BOOLEAN
RemoveEntryList(
      PLIST_ENTRY Entry
    )

;


PLIST_ENTRY
RemoveHeadList(
      PLIST_ENTRY ListHead
    )

;


PLIST_ENTRY
RemoveTailList(
      PLIST_ENTRY ListHead
    )
;



void
InsertTailList(
      PLIST_ENTRY ListHead,
        PLIST_ENTRY Entry
    )
;



void
InsertHeadList(
      PLIST_ENTRY ListHead,
        PLIST_ENTRY Entry
    )

;


void
AppendTailList(
      PLIST_ENTRY ListHead,
      PLIST_ENTRY ListToAppend
    )
;






PSINGLE_LIST_ENTRY
PopEntryList(
      PSINGLE_LIST_ENTRY ListHead
    )
;



void
PushEntryList(
      PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY Entry
    )

;















 


NTSTATUS
__stdcall
RtlIntegerToUnicodeString (
      ULONG Value,
      ULONG Base,
      PUNICODE_STRING String
    );



 


NTSTATUS
__stdcall
RtlInt64ToUnicodeString (
      ULONGLONG Value,
      ULONG Base,
      PUNICODE_STRING String
    );









 

NTSTATUS
__stdcall
RtlUnicodeStringToInteger (
      PCUNICODE_STRING String,
      ULONG Base,
      PULONG Value
    );



NTSTATUS
RtlUnicodeStringToInt64 (
      PCUNICODE_STRING String,
      ULONG Base,
      PLONG64 Number,
      PWSTR *EndPointer
    );






















extern BOOLEAN (*NlsMbCodePageTag);     
extern BOOLEAN (*NlsMbOemCodePageTag); 




 

void
__stdcall
RtlInitString(
      PSTRING DestinationString,
        PCSZ SourceString
    );



 

void
__stdcall
RtlInitAnsiString(
      PANSI_STRING DestinationString,
        PCSZ SourceString
    );



 

void
__stdcall
RtlInitUTF8String(
      PUTF8_STRING DestinationString,
        PCSZ SourceString
    );





 




void
__stdcall
RtlInitUnicodeString(
      PUNICODE_STRING DestinationString,
        PCWSTR SourceString
    );








void
RtlSanitizeUnicodeStringPadding(
      PUNICODE_STRING String
    )
;








void
RtlInitEmptyUnicodeString(
      PUNICODE_STRING UnicodeString,
     
    
      PWCHAR Buffer,
      USHORT BufferSize
    )
;







void
RtlInitEmptyAnsiString(
      PANSI_STRING AnsiString,
          PCHAR Buffer,
      USHORT BufferSize
    )
;







typedef
 
 
 
NTSTATUS
__stdcall
RTL_QUERY_REGISTRY_ROUTINE(
      PWSTR ValueName,
      ULONG ValueType,
      PVOID ValueData,
      ULONG ValueLength,
      PVOID Context,
      PVOID EntryContext
    );
typedef RTL_QUERY_REGISTRY_ROUTINE *PRTL_QUERY_REGISTRY_ROUTINE;

typedef struct _RTL_QUERY_REGISTRY_TABLE {
    PRTL_QUERY_REGISTRY_ROUTINE QueryRoutine;
    ULONG Flags;
    PWSTR Name;
    PVOID EntryContext;
    ULONG DefaultType;
    PVOID DefaultData;
    ULONG DefaultLength;

} RTL_QUERY_REGISTRY_TABLE, *PRTL_QUERY_REGISTRY_TABLE;








                                                
                                                


                                                


                                                


                                                
                                                


                                                
                                                
                                                


                                                
                                                
                                                
                                                
                                                
                                                
                                                


                                                


                                                
                                                
                                                
                                                
                                                
                                                
                                                
                                                


                                                
                                                
                                                











 

NTSTATUS
__stdcall
RtlQueryRegistryValues(
          ULONG RelativeTo,
          PCWSTR Path,
      
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
      PVOID Context,
      PVOID Environment
    );





 



PVOID
__stdcall
MmGetSystemRoutineAddress (
      PUNICODE_STRING SystemRoutineName
    );

 

NTSTATUS
RtlxQueryRegistryValues(
          ULONG RelativeTo,
          PCWSTR Path,
      
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
      PVOID Context,
      PVOID Environment
    )
;









 

NTSTATUS
__stdcall
RtlWriteRegistryValue(
      ULONG RelativeTo,
      PCWSTR Path,
      PCWSTR ValueName,
      ULONG ValueType,
      PVOID ValueData,
      ULONG ValueLength
    );



 

NTSTATUS
__stdcall
RtlDeleteRegistryValue(
      ULONG RelativeTo,
      PCWSTR Path,
      PCWSTR ValueName
    );



 

NTSTATUS
__stdcall
RtlCreateRegistryKey(
      ULONG RelativeTo,
      PWSTR Path
    );



 
 

NTSTATUS
__stdcall
RtlCheckRegistryKey(
      ULONG RelativeTo,
      PWSTR Path
    );





















 

NTSTATUS
__stdcall
RtlInitAnsiStringEx(
      PANSI_STRING DestinationString,
        PCSZ SourceString
    );



 

NTSTATUS
__stdcall
RtlInitStringEx(
      PSTRING DestinationString,
        PCSZ SourceString
    );



 

NTSTATUS
__stdcall
RtlInitUTF8StringEx(
      PUTF8_STRING DestinationString,
        PCSZ SourceString
    );










 
 

NTSTATUS
__stdcall
RtlAnsiStringToUnicodeString(
    
    
        PUNICODE_STRING DestinationString,
      PCANSI_STRING SourceString,
      BOOLEAN AllocateDestinationString
    );







 


NTSTATUS
__stdcall
RtlUnicodeStringToAnsiString(
    
    
        PANSI_STRING DestinationString,
      PCUNICODE_STRING SourceString,
      BOOLEAN AllocateDestinationString
    );








 
 

LONG
__stdcall
RtlCompareUnicodeStrings(
      PCWCH String1,
      SIZE_T String1Length,
      PCWCH String2,
      SIZE_T String2Length,
      BOOLEAN CaseInSensitive
    );

 
 

LONG
__stdcall
RtlCompareUnicodeString(
      PCUNICODE_STRING String1,
      PCUNICODE_STRING String2,
      BOOLEAN CaseInSensitive
    );




 
 

BOOLEAN
__stdcall
RtlEqualUnicodeString(
      PCUNICODE_STRING String1,
      PCUNICODE_STRING String2,
      BOOLEAN CaseInSensitive
    );









 

NTSTATUS
__stdcall
RtlHashUnicodeString(
      PCUNICODE_STRING String,
      BOOLEAN CaseInSensitive,
      ULONG HashAlgorithm,
      PULONG HashValue
    );






 
 


void
__stdcall
RtlCopyUnicodeString(
      PUNICODE_STRING DestinationString,
      PCUNICODE_STRING SourceString
    );



 
 
 



NTSTATUS
__stdcall
RtlAppendUnicodeStringToString (
      PUNICODE_STRING Destination,
      PCUNICODE_STRING Source
    );



 
 
 



NTSTATUS
__stdcall
RtlAppendUnicodeToString (
      PUNICODE_STRING Destination,
      PCWSTR Source
    );






 

WCHAR
__stdcall
RtlUpcaseUnicodeChar(
      WCHAR SourceCharacter
    );



 

WCHAR
__stdcall
RtlDowncaseUnicodeChar(
      WCHAR SourceCharacter
    );





 

void
__stdcall
RtlFreeUnicodeString(
      
        PUNICODE_STRING UnicodeString
    );




 

void
__stdcall
RtlFreeAnsiString(
      
        PANSI_STRING AnsiString
    );



 

void
__stdcall
RtlFreeUTF8String(
      
        PUTF8_STRING utf8String
    );




 

ULONG
__stdcall
RtlxUnicodeStringToAnsiSize(
      PCUNICODE_STRING UnicodeString
    );

















 

ULONG
__stdcall
RtlxAnsiStringToUnicodeSize(
      PCANSI_STRING AnsiString
    );
















 
 

NTSTATUS
__stdcall
RtlUnicodeToUTF8N(
      PCHAR  UTF8StringDestination,
                                     ULONG  UTF8StringMaxByteCount,
                                    PULONG UTF8StringActualByteCount,
      PCWCH UnicodeStringSource,
                                     ULONG  UnicodeStringByteCount
    );



 
 

NTSTATUS
__stdcall
RtlUTF8ToUnicodeN(
      PWSTR  UnicodeStringDestination,
                                  ULONG  UnicodeStringMaxByteCount,
                                 PULONG UnicodeStringActualByteCount,
      PCCH   UTF8StringSource,
                                  ULONG  UTF8StringByteCount
    );





 


NTSTATUS
__stdcall
RtlUnicodeStringToUTF8String(
    
    
        PUTF8_STRING DestinationString,
      PCUNICODE_STRING SourceString,
      BOOLEAN AllocateDestinationString
    );

 
 

NTSTATUS
__stdcall
RtlUTF8StringToUnicodeString(
    
    
        PUNICODE_STRING DestinationString,
      PUTF8_STRING SourceString,
      BOOLEAN AllocateDestinationString
    );























































































































































































































    



    



    
    





        

    









 
 

NTSTATUS
__stdcall
RtlStringFromGUID(
      const GUID * const Guid,
      
        PUNICODE_STRING GuidString
    );


 
 

NTSTATUS
__stdcall
RtlGUIDFromString(
      PCUNICODE_STRING GuidString,
      GUID* Guid
    );



 
 

NTSTATUS
__stdcall
RtlGenerateClass5Guid(
      const GUID * const NamespaceGuid,
      PVOID Buffer,
      ULONG BufferSize,
      GUID* Guid
    );










































 

int
RtlConstantTimeEqualMemory(
      const void* v1,
      const void* v2,
    unsigned long len
    )
;






PVOID
RtlSecureZeroMemory(
      PVOID ptr,
      SIZE_T cnt
    )
;













void
__stdcall
RtlCopyMemoryNonTemporal (
     void __unaligned *Destination,
     const void __unaligned *Source,
     SIZE_T Length
   );


void
__stdcall
RtlFillMemoryNonTemporal (
     void __unaligned *Destination,
     SIZE_T Length,
     const UCHAR Value
   );










void

RtlPrefetchMemoryNonTemporal(
      PVOID Source,
      SIZE_T Length
    );






































void
__stdcall
DbgBreakPointWithStatus(
      ULONG Status
    );




































ULONG
__cdecl
DbgPrint (
        PCSTR Format,
    ...
    );





ULONG
__cdecl
DbgPrintEx (
      ULONG ComponentId,
      ULONG Level,
        PCSTR Format,
    ...
    );








ULONG
__stdcall
vDbgPrintEx(
      ULONG ComponentId,
      ULONG Level,
      PCCH Format,
      va_list arglist
    );


ULONG
__stdcall
vDbgPrintExWithPrefix (
      PCCH Prefix,
      ULONG ComponentId,
      ULONG Level,
      PCCH Format,
      va_list arglist
    );









ULONG
__cdecl
DbgPrintReturnControlC (
        PCCH Format,
    ...
    );




NTSTATUS
__stdcall
DbgQueryDebugFilterState (
      ULONG ComponentId,
      ULONG Level
    );




NTSTATUS
__stdcall
DbgSetDebugFilterState (
      ULONG ComponentId,
      ULONG Level,
      BOOLEAN State
    );



typedef
void
(*PDEBUG_PRINT_CALLBACK) (
      PSTRING Output,
      ULONG ComponentId,
      ULONG Level
    );


NTSTATUS
__stdcall
DbgSetDebugPrintCallback (
      PDEBUG_PRINT_CALLBACK DebugPrintCallback,
      BOOLEAN Enable
    );
















         
 

LARGE_INTEGER
__stdcall
RtlLargeIntegerAdd (
      LARGE_INTEGER Addend1,
      LARGE_INTEGER Addend2
    )
;





         
 

LARGE_INTEGER
__stdcall
RtlEnlargedIntegerMultiply (
      LONG Multiplicand,
      LONG Multiplier
    )
;





         
 

LARGE_INTEGER
__stdcall
RtlEnlargedUnsignedMultiply (
      ULONG Multiplicand,
      ULONG Multiplier
    )
;





         
 

ULONG
__stdcall
RtlEnlargedUnsignedDivide (
      ULARGE_INTEGER Dividend,
      ULONG Divisor,
      PULONG Remainder
    )
;






         
 

LARGE_INTEGER
__stdcall
RtlLargeIntegerNegate (
      LARGE_INTEGER Subtrahend
    )
;





         
 

LARGE_INTEGER
__stdcall
RtlLargeIntegerSubtract (
      LARGE_INTEGER Minuend,
      LARGE_INTEGER Subtrahend
    )
;







         
 

LARGE_INTEGER
__stdcall
RtlExtendedMagicDivide (
      LARGE_INTEGER Dividend,
      LARGE_INTEGER MagicDivisor,
      CCHAR ShiftCount
    )

;




























         
 

LARGE_INTEGER
__stdcall
RtlExtendedLargeIntegerDivide (
      LARGE_INTEGER Dividend,
      ULONG Divisor,
      PULONG Remainder
    )
;





         
 

LARGE_INTEGER
__stdcall
RtlExtendedIntegerMultiply (
      LARGE_INTEGER Multiplicand,
      LONG Multiplier
    )
;























































         

LARGE_INTEGER
__stdcall
RtlConvertLongToLargeInteger (
      LONG SignedInteger
    )
;





         

LARGE_INTEGER
__stdcall
RtlConvertUlongToLargeInteger (
      ULONG UnsignedInteger
    )
;





         
 

LARGE_INTEGER
__stdcall
RtlLargeIntegerShiftLeft (
      LARGE_INTEGER LargeInteger,
      CCHAR ShiftCount
    )
;

         
 

LARGE_INTEGER
__stdcall
RtlLargeIntegerShiftRight (
      LARGE_INTEGER LargeInteger,
      CCHAR ShiftCount
    )
;

         
 

LARGE_INTEGER
__stdcall
RtlLargeIntegerArithmeticShift (
      LARGE_INTEGER LargeInteger,
      CCHAR ShiftCount
    )
;






































































typedef struct _TIME_FIELDS {
    CSHORT Year;        
    CSHORT Month;       
    CSHORT Day;         
    CSHORT Hour;        
    CSHORT Minute;      
    CSHORT Second;      
    CSHORT Milliseconds;
    CSHORT Weekday;     
} TIME_FIELDS;
typedef TIME_FIELDS *PTIME_FIELDS;




void
__stdcall
RtlTimeToTimeFields (
      PLARGE_INTEGER Time,
      PTIME_FIELDS TimeFields
    );







 

BOOLEAN
__stdcall
RtlTimeFieldsToTime (
      PTIME_FIELDS TimeFields,
      PLARGE_INTEGER Time
    );













































































































































































































































































































typedef struct _RTL_BITMAP {
    ULONG SizeOfBitMap;                     
    PULONG Buffer;                          
} RTL_BITMAP;
typedef RTL_BITMAP *PRTL_BITMAP;












void
__stdcall
RtlInitializeBitMap (
      PRTL_BITMAP BitMapHeader,
        PULONG BitMapBuffer,
      ULONG SizeOfBitMap
    );









void
__stdcall
RtlClearBit (
      PRTL_BITMAP BitMapHeader,
      ULONG BitNumber
    );




void
__stdcall
RtlSetBit (
      PRTL_BITMAP BitMapHeader,
      ULONG BitNumber
    );



 

BOOLEAN
__stdcall
RtlTestBit (
      PRTL_BITMAP BitMapHeader,
      ULONG BitNumber
    );









void
__stdcall
RtlClearAllBits (
      PRTL_BITMAP BitMapHeader
    );




void
__stdcall
RtlSetAllBits (
      PRTL_BITMAP BitMapHeader
    );













 
 
 

ULONG
__stdcall
RtlFindClearBits (
      PRTL_BITMAP BitMapHeader,
      ULONG NumberToFind,
      ULONG HintIndex
    );



 
 
 

ULONG
__stdcall
RtlFindSetBits (
      PRTL_BITMAP BitMapHeader,
      ULONG NumberToFind,
      ULONG HintIndex
    );














 
 

ULONG
__stdcall
RtlFindClearBitsAndSet (
      PRTL_BITMAP BitMapHeader,
      ULONG NumberToFind,
      ULONG HintIndex
    );



 
 

ULONG
__stdcall
RtlFindSetBitsAndClear (
      PRTL_BITMAP BitMapHeader,
      ULONG NumberToFind,
      ULONG HintIndex
    );









void
__stdcall
RtlClearBits (
      PRTL_BITMAP BitMapHeader,
      ULONG StartingIndex,
      ULONG NumberToClear
    );




void
__stdcall
RtlSetBits (
      PRTL_BITMAP BitMapHeader,
      ULONG StartingIndex,
      ULONG NumberToSet
    );










typedef struct _RTL_BITMAP_RUN {

    ULONG StartingIndex;
    ULONG NumberOfBits;

} RTL_BITMAP_RUN;
typedef RTL_BITMAP_RUN *PRTL_BITMAP_RUN;



ULONG
__stdcall
RtlFindClearRuns (
      PRTL_BITMAP BitMapHeader,
      PRTL_BITMAP_RUN RunArray,
      ULONG SizeOfRunArray,
      BOOLEAN LocateLongestRuns
    );













ULONG
__stdcall
RtlFindLongestRunClear (
      PRTL_BITMAP BitMapHeader,
      PULONG StartingIndex
    );











ULONG
__stdcall
RtlFindFirstRunClear (
      PRTL_BITMAP BitMapHeader,
      PULONG StartingIndex
    );





















 

BOOLEAN
RtlCheckBit (
      PRTL_BITMAP BitMapHeader,
      ULONG BitPosition
    )

;















ULONG
__stdcall
RtlNumberOfClearBitsInRange (
      PRTL_BITMAP BitMapHeader,
      ULONG StartingIndex,
      ULONG Length
    );


ULONG
__stdcall
RtlNumberOfSetBitsInRange (
      PRTL_BITMAP BitMapHeader,
      ULONG StartingIndex,
      ULONG Length
    );





ULONG
__stdcall
RtlNumberOfClearBits (
      PRTL_BITMAP BitMapHeader
    );




ULONG
__stdcall
RtlNumberOfSetBits (
      PRTL_BITMAP BitMapHeader
    );








 

BOOLEAN
__stdcall
RtlAreBitsClear (
      PRTL_BITMAP BitMapHeader,
      ULONG StartingIndex,
      ULONG Length
    );



 

BOOLEAN
__stdcall
RtlAreBitsSet (
      PRTL_BITMAP BitMapHeader,
      ULONG StartingIndex,
      ULONG Length
    );




ULONG
__stdcall
RtlFindNextForwardRunClear (
      PRTL_BITMAP BitMapHeader,
      ULONG FromIndex,
      PULONG StartingRunIndex
    );




ULONG
__stdcall
RtlFindLastBackwardRunClear (
      PRTL_BITMAP BitMapHeader,
      ULONG FromIndex,
      PULONG StartingRunIndex
    );









 
 

CCHAR
__stdcall
RtlFindLeastSignificantBit (
      ULONGLONG Set
    );



 
 

CCHAR
__stdcall
RtlFindMostSignificantBit (
      ULONGLONG Set
    );









ULONG
__stdcall
RtlNumberOfSetBitsUlongPtr (
      ULONG_PTR Target
    );





void
__stdcall
RtlCopyBitMap (
      PRTL_BITMAP Source,
      PRTL_BITMAP Destination,
      ULONG TargetBit
    );


void
__stdcall
RtlExtractBitMap (
      PRTL_BITMAP Source,
      PRTL_BITMAP Destination,
      ULONG TargetBit,
      ULONG NumberOfBits
    );


































 

NTSTATUS
__stdcall
RtlCreateSecurityDescriptor (
      PSECURITY_DESCRIPTOR SecurityDescriptor,
      ULONG Revision
    );




 
 

BOOLEAN
__stdcall
RtlValidSecurityDescriptor (
      PSECURITY_DESCRIPTOR SecurityDescriptor
    );



 

ULONG
__stdcall
RtlLengthSecurityDescriptor (
      PSECURITY_DESCRIPTOR SecurityDescriptor
    );



 
 

BOOLEAN
__stdcall
RtlValidRelativeSecurityDescriptor (
      PSECURITY_DESCRIPTOR SecurityDescriptorInput,
      ULONG SecurityDescriptorLength,
      SECURITY_INFORMATION RequiredInformation
    );




 

NTSTATUS
__stdcall
RtlSetDaclSecurityDescriptor (
      PSECURITY_DESCRIPTOR SecurityDescriptor,
      BOOLEAN DaclPresent,
      PACL Dacl,
      BOOLEAN DaclDefaulted
    );



































  unsigned short __cdecl _byteswap_ushort(  unsigned short);
  unsigned long  __cdecl _byteswap_ulong (  unsigned long);
  unsigned __int64 __cdecl _byteswap_uint64(  unsigned __int64);







































typedef struct _OSVERSIONINFOA {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    CHAR   szCSDVersion[ 128 ];     
} OSVERSIONINFOA, *POSVERSIONINFOA, *LPOSVERSIONINFOA;

typedef struct _OSVERSIONINFOW {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    WCHAR  szCSDVersion[ 128 ];     
} OSVERSIONINFOW, *POSVERSIONINFOW, *LPOSVERSIONINFOW, RTL_OSVERSIONINFOW, *PRTL_OSVERSIONINFOW;





typedef OSVERSIONINFOA OSVERSIONINFO;
typedef POSVERSIONINFOA POSVERSIONINFO;
typedef LPOSVERSIONINFOA LPOSVERSIONINFO;


typedef struct _OSVERSIONINFOEXA {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    CHAR   szCSDVersion[ 128 ];     
    USHORT wServicePackMajor;
    USHORT wServicePackMinor;
    USHORT wSuiteMask;
    UCHAR wProductType;
    UCHAR wReserved;
} OSVERSIONINFOEXA, *POSVERSIONINFOEXA, *LPOSVERSIONINFOEXA;
typedef struct _OSVERSIONINFOEXW {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    WCHAR  szCSDVersion[ 128 ];     
    USHORT wServicePackMajor;
    USHORT wServicePackMinor;
    USHORT wSuiteMask;
    UCHAR wProductType;
    UCHAR wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW, *LPOSVERSIONINFOEXW, RTL_OSVERSIONINFOEXW, *PRTL_OSVERSIONINFOEXW;





typedef OSVERSIONINFOEXA OSVERSIONINFOEX;
typedef POSVERSIONINFOEXA POSVERSIONINFOEX;
typedef LPOSVERSIONINFOEXA LPOSVERSIONINFOEX;



































































ULONGLONG
__stdcall
VerSetConditionMask(
      ULONGLONG ConditionMask,
      ULONG TypeMask,
      UCHAR Condition
    );














 

NTSTATUS
__stdcall
RtlGetVersion(
     
    
    
        PRTL_OSVERSIONINFOW lpVersionInformation
    );

 
 

NTSTATUS
__stdcall
RtlVerifyVersionInfo(
      PRTL_OSVERSIONINFOEXW VersionInfo,
      ULONG TypeMask,
      ULONGLONG  ConditionMask
    );





typedef BOOLEAN (*PFN_RTL_IS_NTDDI_VERSION_AVAILABLE)(
      ULONG Version
    );

typedef BOOLEAN (*PFN_RTL_IS_SERVICE_PACK_VERSION_INSTALLED)(
      ULONG Version
    );

BOOLEAN
RtlIsNtDdiVersionAvailable (
      ULONG Version
    );

BOOLEAN
RtlIsServicePackVersionInstalled (
      ULONG Version
    );







































typedef enum _DPFLTR_TYPE {
    DPFLTR_SYSTEM_ID = 0,
    DPFLTR_SMSS_ID = 1,
    DPFLTR_SETUP_ID = 2,
    DPFLTR_NTFS_ID = 3,
    DPFLTR_FSTUB_ID = 4,
    DPFLTR_CRASHDUMP_ID = 5,
    DPFLTR_CDAUDIO_ID = 6,
    DPFLTR_CDROM_ID = 7,
    DPFLTR_CLASSPNP_ID = 8,
    DPFLTR_DISK_ID = 9,
    DPFLTR_REDBOOK_ID = 10,
    DPFLTR_STORPROP_ID = 11,
    DPFLTR_SCSIPORT_ID = 12,
    DPFLTR_SCSIMINIPORT_ID = 13,
    DPFLTR_CONFIG_ID = 14,
    DPFLTR_I8042PRT_ID = 15,
    DPFLTR_SERMOUSE_ID = 16,
    DPFLTR_LSERMOUS_ID = 17,
    DPFLTR_KBDHID_ID = 18,
    DPFLTR_MOUHID_ID = 19,
    DPFLTR_KBDCLASS_ID = 20,
    DPFLTR_MOUCLASS_ID = 21,
    DPFLTR_TWOTRACK_ID = 22,
    DPFLTR_WMILIB_ID = 23,
    DPFLTR_ACPI_ID = 24,
    DPFLTR_AMLI_ID = 25,
    DPFLTR_HALIA64_ID = 26,
    DPFLTR_VIDEO_ID = 27,
    DPFLTR_SVCHOST_ID = 28,
    DPFLTR_VIDEOPRT_ID = 29,
    DPFLTR_TCPIP_ID = 30,
    DPFLTR_DMSYNTH_ID = 31,
    DPFLTR_NTOSPNP_ID = 32,
    DPFLTR_FASTFAT_ID = 33,
    DPFLTR_SAMSS_ID = 34,
    DPFLTR_PNPMGR_ID = 35,
    DPFLTR_NETAPI_ID = 36,
    DPFLTR_SCSERVER_ID = 37,
    DPFLTR_SCCLIENT_ID = 38,
    DPFLTR_SERIAL_ID = 39,
    DPFLTR_SERENUM_ID = 40,
    DPFLTR_UHCD_ID = 41,
    DPFLTR_RPCPROXY_ID = 42,
    DPFLTR_AUTOCHK_ID = 43,
    DPFLTR_DCOMSS_ID = 44,
    DPFLTR_UNIMODEM_ID = 45,
    DPFLTR_SIS_ID = 46,
    DPFLTR_FLTMGR_ID = 47,
    DPFLTR_WMICORE_ID = 48,
    DPFLTR_BURNENG_ID = 49,
    DPFLTR_IMAPI_ID = 50,
    DPFLTR_SXS_ID = 51,
    DPFLTR_FUSION_ID = 52,
    DPFLTR_IDLETASK_ID = 53,
    DPFLTR_SOFTPCI_ID = 54,
    DPFLTR_TAPE_ID = 55,
    DPFLTR_MCHGR_ID = 56,
    DPFLTR_IDEP_ID = 57,
    DPFLTR_PCIIDE_ID = 58,
    DPFLTR_FLOPPY_ID = 59,
    DPFLTR_FDC_ID = 60,
    DPFLTR_TERMSRV_ID = 61,
    DPFLTR_W32TIME_ID = 62,
    DPFLTR_PREFETCHER_ID = 63,
    DPFLTR_RSFILTER_ID = 64,
    DPFLTR_FCPORT_ID = 65,
    DPFLTR_PCI_ID = 66,
    DPFLTR_DMIO_ID = 67,
    DPFLTR_DMCONFIG_ID = 68,
    DPFLTR_DMADMIN_ID = 69,
    DPFLTR_WSOCKTRANSPORT_ID = 70,
    DPFLTR_VSS_ID = 71,
    DPFLTR_PNPMEM_ID = 72,
    DPFLTR_PROCESSOR_ID = 73,
    DPFLTR_DMSERVER_ID = 74,
    DPFLTR_SR_ID = 75,
    DPFLTR_INFINIBAND_ID = 76,
    DPFLTR_IHVDRIVER_ID = 77,
    DPFLTR_IHVVIDEO_ID = 78,
    DPFLTR_IHVAUDIO_ID = 79,
    DPFLTR_IHVNETWORK_ID = 80,
    DPFLTR_IHVSTREAMING_ID = 81,
    DPFLTR_IHVBUS_ID = 82,
    DPFLTR_HPS_ID = 83,
    DPFLTR_RTLTHREADPOOL_ID = 84,
    DPFLTR_LDR_ID = 85,
    DPFLTR_TCPIP6_ID = 86,
    DPFLTR_ISAPNP_ID = 87,
    DPFLTR_SHPC_ID = 88,
    DPFLTR_STORPORT_ID = 89,
    DPFLTR_STORMINIPORT_ID = 90,
    DPFLTR_PRINTSPOOLER_ID = 91,
    DPFLTR_VSSDYNDISK_ID = 92,
    DPFLTR_VERIFIER_ID = 93,
    DPFLTR_VDS_ID = 94,
    DPFLTR_VDSBAS_ID = 95,
    DPFLTR_VDSDYN_ID = 96,
    DPFLTR_VDSDYNDR_ID = 97,
    DPFLTR_VDSLDR_ID = 98,
    DPFLTR_VDSUTIL_ID = 99,
    DPFLTR_DFRGIFC_ID = 100,
    DPFLTR_DEFAULT_ID = 101,
    DPFLTR_MM_ID = 102,
    DPFLTR_DFSC_ID = 103,
    DPFLTR_WOW64_ID = 104,
    DPFLTR_ALPC_ID = 105,
    DPFLTR_WDI_ID = 106,
    DPFLTR_PERFLIB_ID = 107,
    DPFLTR_KTM_ID = 108,
    DPFLTR_IOSTRESS_ID = 109,
    DPFLTR_HEAP_ID = 110,
    DPFLTR_WHEA_ID = 111,
    DPFLTR_USERGDI_ID = 112,
    DPFLTR_MMCSS_ID = 113,
    DPFLTR_TPM_ID = 114,
    DPFLTR_THREADORDER_ID = 115,
    DPFLTR_ENVIRON_ID = 116,
    DPFLTR_EMS_ID = 117,
    DPFLTR_WDT_ID = 118,
    DPFLTR_FVEVOL_ID = 119,
    DPFLTR_NDIS_ID = 120,
    DPFLTR_NVCTRACE_ID = 121,
    DPFLTR_LUAFV_ID = 122,
    DPFLTR_APPCOMPAT_ID = 123,
    DPFLTR_USBSTOR_ID = 124,
    DPFLTR_SBP2PORT_ID = 125,
    DPFLTR_COVERAGE_ID = 126,
    DPFLTR_CACHEMGR_ID = 127,
    DPFLTR_MOUNTMGR_ID = 128,
    DPFLTR_CFR_ID = 129,
    DPFLTR_TXF_ID = 130,
    DPFLTR_KSECDD_ID = 131,
    DPFLTR_FLTREGRESS_ID = 132,
    DPFLTR_MPIO_ID = 133,
    DPFLTR_MSDSM_ID = 134,
    DPFLTR_UDFS_ID = 135,
    DPFLTR_PSHED_ID = 136,
    DPFLTR_STORVSP_ID = 137,
    DPFLTR_LSASS_ID = 138,
    DPFLTR_SSPICLI_ID = 139,
    DPFLTR_CNG_ID = 140,
    DPFLTR_EXFAT_ID = 141,
    DPFLTR_FILETRACE_ID = 142,
    DPFLTR_XSAVE_ID = 143,
    DPFLTR_SE_ID = 144,
    DPFLTR_DRIVEEXTENDER_ID = 145,
    DPFLTR_POWER_ID = 146,
    DPFLTR_CRASHDUMPXHCI_ID = 147,
    DPFLTR_GPIO_ID = 148,
    DPFLTR_REFS_ID = 149,
    DPFLTR_WER_ID = 150,
    DPFLTR_CAPIMG_ID = 151,
    DPFLTR_VPCI_ID = 152,
    DPFLTR_STORAGECLASSMEMORY_ID = 153,
    DPFLTR_FSLIB_ID = 154,
    DPFLTR_ENDOFTABLE_ID
} DPFLTR_TYPE;







NTSTATUS
__stdcall
RtlIoEncodeMemIoResource (
      PIO_RESOURCE_DESCRIPTOR Descriptor,
      UCHAR Type,
      ULONGLONG Length,
      ULONGLONG Alignment,
      ULONGLONG MinimumAddress,
      ULONGLONG MaximumAddress
    );




NTSTATUS
__stdcall
RtlCmEncodeMemIoResource (
      PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
      UCHAR Type,
      ULONGLONG Length,
      ULONGLONG Start
    );




ULONGLONG
__stdcall
RtlIoDecodeMemIoResource (
      PIO_RESOURCE_DESCRIPTOR Descriptor,
      PULONGLONG Alignment,
      PULONGLONG MinimumAddress,
      PULONGLONG MaximumAddress
    );




ULONGLONG
__stdcall
RtlCmDecodeMemIoResource (
      PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
      PULONGLONG Start
    );




NTSTATUS
__stdcall
RtlFindClosestEncodableLength (
      ULONGLONG SourceLength,
      PULONGLONG TargetLength
    );







NTSTATUS
__stdcall
RtlIsUntrustedObject (
      HANDLE Handle,
      PVOID Object,
      PBOOLEAN UntrustedObject
    );






ULONG
__stdcall
RtlQueryValidationRunlevel (
      PCUNICODE_STRING ComponentName
    );


















































































ULONG
__stdcall
RtlCrc32(
      const void *Buffer,
      size_t Size,
      ULONG InitialCrc
    );


ULONGLONG
__stdcall
RtlCrc64(
      const void *Buffer,
      size_t Size,
      ULONGLONG InitialCrc
    );




















typedef enum _OS_DEPLOYEMENT_STATE_VALUES {
    OS_DEPLOYMENT_STANDARD = 1,
    OS_DEPLOYMENT_COMPACT
} OS_DEPLOYEMENT_STATE_VALUES;


OS_DEPLOYEMENT_STATE_VALUES
__stdcall
RtlOsDeploymentState(
      ULONG Flags    
    );













typedef enum _IMAGE_POLICY_ENTRY_TYPE {
    ImagePolicyEntryTypeNone = 0,
    ImagePolicyEntryTypeBool,
    ImagePolicyEntryTypeInt8,
    ImagePolicyEntryTypeUInt8,
    ImagePolicyEntryTypeInt16,
    ImagePolicyEntryTypeUInt16,
    ImagePolicyEntryTypeInt32,
    ImagePolicyEntryTypeUInt32,
    ImagePolicyEntryTypeInt64,
    ImagePolicyEntryTypeUInt64,
    ImagePolicyEntryTypeAnsiString,
    ImagePolicyEntryTypeUnicodeString,
    ImagePolicyEntryTypeOverride,
    ImagePolicyEntryTypeMaximum
} IMAGE_POLICY_ENTRY_TYPE;

typedef enum _IMAGE_POLICY_ID {
    ImagePolicyIdNone = 0,
    ImagePolicyIdEtw,
    ImagePolicyIdDebug,
    ImagePolicyIdCrashDump,
    ImagePolicyIdCrashDumpKey,
    ImagePolicyIdCrashDumpKeyGuid,
    ImagePolicyIdParentSd,
    ImagePolicyIdParentSdRev,
    ImagePolicyIdSvn,
    ImagePolicyIdDeviceId,
    ImagePolicyIdCapability,
    ImagePolicyIdScenarioId,
    ImagePolicyIdMaximum
} IMAGE_POLICY_ID;

typedef struct _IMAGE_POLICY_ENTRY {
    IMAGE_POLICY_ENTRY_TYPE Type;
    IMAGE_POLICY_ID PolicyId;
    union {
        const void* None;
        BOOLEAN BoolValue;
        INT8 Int8Value;
        UINT8 UInt8Value;
        INT16 Int16Value;
        UINT16 UInt16Value;
        INT32 Int32Value;
        UINT32 UInt32Value;
        INT64 Int64Value;
        UINT64 UInt64Value;
        PCSTR AnsiStringValue;
        PCWSTR UnicodeStringValue;
    } u;
} IMAGE_POLICY_ENTRY;
typedef const IMAGE_POLICY_ENTRY* PCIMAGE_POLICY_ENTRY;



typedef struct _IMAGE_POLICY_METADATA {
    UCHAR Version;
    UCHAR Reserved0[7];
    ULONGLONG ApplicationId;
    IMAGE_POLICY_ENTRY Policies[];
} IMAGE_POLICY_METADATA;
typedef const IMAGE_POLICY_METADATA* PCIMAGE_POLICY_METADATA;






































































































































































































 

SIZE_T
__stdcall
RtlCompareMemory(
      const void* Source1,
      const void* Source2,
      SIZE_T Length
    );











































typedef GUID UOW, *PUOW;
typedef GUID CRM_PROTOCOL_ID, *PCRM_PROTOCOL_ID;

















































typedef ULONG NOTIFICATION_MASK;






















































typedef struct _TRANSACTION_NOTIFICATION {
    PVOID         TransactionKey;
    ULONG         TransactionNotification;
    LARGE_INTEGER TmVirtualClock;
    ULONG         ArgumentLength;
} TRANSACTION_NOTIFICATION, *PTRANSACTION_NOTIFICATION;

typedef struct _TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT {
    GUID   EnlistmentId;
    UOW    UOW;
} TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT, *PTRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT;



typedef struct _TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT {
    GUID TmIdentity;
    ULONG Flags;
} TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT, *PTRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT;

typedef ULONG SAVEPOINT_ID, *PSAVEPOINT_ID;

typedef struct _TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT {
    SAVEPOINT_ID SavepointId;
} TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT, *PTRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT;

typedef struct _TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT {
    ULONG PropagationCookie;
    GUID  UOW;
    GUID  TmIdentity;
    ULONG BufferLength;
    
} TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT, *PTRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT;

typedef struct _TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT {
    ULONG MarshalCookie;
    GUID  UOW;
} TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT, *PTRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT;

typedef TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT TRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT, *PTRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT;







typedef struct _KCRM_MARSHAL_HEADER {
    ULONG              VersionMajor;
    ULONG              VersionMinor;
    ULONG              NumProtocols;
    ULONG              Unused;        
} KCRM_MARSHAL_HEADER, *PKCRM_MARSHAL_HEADER, * PRKCRM_MARSHAL_HEADER;

typedef struct _KCRM_TRANSACTION_BLOB {
    UOW                UOW;
    GUID               TmIdentity;
    ULONG              IsolationLevel;
    ULONG              IsolationFlags;
    ULONG              Timeout;
    WCHAR              Description[64];
} KCRM_TRANSACTION_BLOB, *PKCRM_TRANSACTION_BLOB, * PRKCRM_TRANSACTION_BLOB;

typedef struct _KCRM_PROTOCOL_BLOB {
    CRM_PROTOCOL_ID    ProtocolId;
      ULONG StaticInfoLength;
    ULONG              TransactionIdInfoLength; 
    ULONG              Unused1;        
    ULONG              Unused2;        
} KCRM_PROTOCOL_BLOB, *PKCRM_PROTOCOL_BLOB, * PRKCRM_PROTOCOL_BLOB;
























































































































































































typedef enum _TRANSACTION_OUTCOME {
    TransactionOutcomeUndetermined = 1,
    TransactionOutcomeCommitted,
    TransactionOutcomeAborted,
} TRANSACTION_OUTCOME;


typedef enum _TRANSACTION_STATE {
    TransactionStateNormal = 1,
    TransactionStateIndoubt,
    TransactionStateCommittedNotify,
} TRANSACTION_STATE;


typedef struct _TRANSACTION_BASIC_INFORMATION {
    GUID    TransactionId;
    ULONG   State;
    ULONG   Outcome;
} TRANSACTION_BASIC_INFORMATION, *PTRANSACTION_BASIC_INFORMATION;

typedef struct _TRANSACTIONMANAGER_BASIC_INFORMATION {
    GUID    TmIdentity;
    LARGE_INTEGER VirtualClock;
} TRANSACTIONMANAGER_BASIC_INFORMATION, *PTRANSACTIONMANAGER_BASIC_INFORMATION;

typedef struct _TRANSACTIONMANAGER_LOG_INFORMATION {
    GUID  LogIdentity;
} TRANSACTIONMANAGER_LOG_INFORMATION, *PTRANSACTIONMANAGER_LOG_INFORMATION;

typedef struct _TRANSACTIONMANAGER_LOGPATH_INFORMATION {
    ULONG LogPathLength;
      WCHAR LogPath[1]; 

} TRANSACTIONMANAGER_LOGPATH_INFORMATION, *PTRANSACTIONMANAGER_LOGPATH_INFORMATION;

typedef struct _TRANSACTIONMANAGER_RECOVERY_INFORMATION {
    ULONGLONG  LastRecoveredLsn;
} TRANSACTIONMANAGER_RECOVERY_INFORMATION, *PTRANSACTIONMANAGER_RECOVERY_INFORMATION;




typedef struct _TRANSACTION_PROPERTIES_INFORMATION {
    ULONG              IsolationLevel;
    ULONG              IsolationFlags;
    LARGE_INTEGER      Timeout;
    ULONG              Outcome;
    ULONG              DescriptionLength;
    WCHAR              Description[1];            

} TRANSACTION_PROPERTIES_INFORMATION, *PTRANSACTION_PROPERTIES_INFORMATION;



typedef struct _TRANSACTION_BIND_INFORMATION {
    HANDLE TmHandle;
} TRANSACTION_BIND_INFORMATION, *PTRANSACTION_BIND_INFORMATION;

typedef struct _TRANSACTION_ENLISTMENT_PAIR {
    GUID   EnlistmentId;
    GUID   ResourceManagerId;
} TRANSACTION_ENLISTMENT_PAIR, *PTRANSACTION_ENLISTMENT_PAIR;

typedef struct _TRANSACTION_ENLISTMENTS_INFORMATION {
    ULONG                       NumberOfEnlistments;
    TRANSACTION_ENLISTMENT_PAIR EnlistmentPair[1]; 
} TRANSACTION_ENLISTMENTS_INFORMATION, *PTRANSACTION_ENLISTMENTS_INFORMATION;

typedef struct _TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION {
    TRANSACTION_ENLISTMENT_PAIR SuperiorEnlistmentPair;
} TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION, *PTRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION;


typedef struct _RESOURCEMANAGER_BASIC_INFORMATION {
    GUID    ResourceManagerId;
    ULONG   DescriptionLength;
    WCHAR   Description[1];            
} RESOURCEMANAGER_BASIC_INFORMATION, *PRESOURCEMANAGER_BASIC_INFORMATION;

typedef struct _RESOURCEMANAGER_COMPLETION_INFORMATION {
    HANDLE    IoCompletionPortHandle;
    ULONG_PTR CompletionKey;
} RESOURCEMANAGER_COMPLETION_INFORMATION, *PRESOURCEMANAGER_COMPLETION_INFORMATION;

typedef enum _TRANSACTION_INFORMATION_CLASS {
    TransactionBasicInformation,
    TransactionPropertiesInformation,
    TransactionEnlistmentInformation,
    TransactionSuperiorEnlistmentInformation
} TRANSACTION_INFORMATION_CLASS;


typedef enum _TRANSACTIONMANAGER_INFORMATION_CLASS {
    TransactionManagerBasicInformation,
    TransactionManagerLogInformation,
    TransactionManagerLogPathInformation,
    TransactionManagerRecoveryInformation = 4

} TRANSACTIONMANAGER_INFORMATION_CLASS;



typedef enum _RESOURCEMANAGER_INFORMATION_CLASS {
    ResourceManagerBasicInformation,
    ResourceManagerCompletionInformation,
} RESOURCEMANAGER_INFORMATION_CLASS;


typedef struct _ENLISTMENT_BASIC_INFORMATION {
    GUID    EnlistmentId;
    GUID    TransactionId;
    GUID    ResourceManagerId;
} ENLISTMENT_BASIC_INFORMATION, *PENLISTMENT_BASIC_INFORMATION;

typedef struct _ENLISTMENT_CRM_INFORMATION {
    GUID   CrmTransactionManagerId;
    GUID   CrmResourceManagerId;
    GUID   CrmEnlistmentId;
} ENLISTMENT_CRM_INFORMATION, *PENLISTMENT_CRM_INFORMATION;



typedef enum _ENLISTMENT_INFORMATION_CLASS {
    EnlistmentBasicInformation,
    EnlistmentRecoveryInformation,
    EnlistmentCrmInformation
} ENLISTMENT_INFORMATION_CLASS;

typedef struct _TRANSACTION_LIST_ENTRY {
    UOW    UOW;
} TRANSACTION_LIST_ENTRY, *PTRANSACTION_LIST_ENTRY;

typedef struct _TRANSACTION_LIST_INFORMATION {
    ULONG   NumberOfTransactions;
    TRANSACTION_LIST_ENTRY TransactionInformation[1]; 
} TRANSACTION_LIST_INFORMATION, *PTRANSACTION_LIST_INFORMATION;






typedef enum _KTMOBJECT_TYPE {

    KTMOBJECT_TRANSACTION,
    KTMOBJECT_TRANSACTION_MANAGER,
    KTMOBJECT_RESOURCE_MANAGER,
    KTMOBJECT_ENLISTMENT,
    KTMOBJECT_INVALID

} KTMOBJECT_TYPE, *PKTMOBJECT_TYPE;









typedef struct _KTMOBJECT_CURSOR {

    
    
    

    GUID    LastQuery;

    
    
    

    ULONG   ObjectIdCount;

    
    
    

    GUID    ObjectIds[1];

} KTMOBJECT_CURSOR, *PKTMOBJECT_CURSOR;








  
  
 
NTSTATUS
__stdcall
NtCreateTransactionManager (
      PHANDLE TmHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      PUNICODE_STRING LogFileName,
      ULONG CreateOptions,
      ULONG CommitStrength
    );




  
  
 
NTSTATUS
__stdcall
NtOpenTransactionManager (
      PHANDLE TmHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      PUNICODE_STRING LogFileName,
      LPGUID TmIdentity,
      ULONG OpenOptions
    );




  
  
 
NTSTATUS
__stdcall
NtRenameTransactionManager (
      PUNICODE_STRING LogFileName,
      LPGUID ExistingTransactionManagerGuid
    );




  
  
 
NTSTATUS
__stdcall
NtRollforwardTransactionManager (
      HANDLE TransactionManagerHandle,
      PLARGE_INTEGER TmVirtualClock
    );




  
  
 
NTSTATUS
__stdcall
NtRecoverTransactionManager (
      HANDLE TransactionManagerHandle
    );




  
  
 
NTSTATUS
__stdcall
NtQueryInformationTransactionManager (
      HANDLE TransactionManagerHandle,
      TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
      PVOID TransactionManagerInformation,
      ULONG TransactionManagerInformationLength,
      PULONG ReturnLength
    );




  
  
 
NTSTATUS
__stdcall
NtSetInformationTransactionManager (
      HANDLE TmHandle,
      TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
      PVOID TransactionManagerInformation,
      ULONG TransactionManagerInformationLength
    );




  
  
 
NTSTATUS 
__stdcall
NtEnumerateTransactionObject (
      HANDLE RootObjectHandle,
      KTMOBJECT_TYPE QueryType,
      PKTMOBJECT_CURSOR ObjectCursor,
      ULONG ObjectCursorLength,
      PULONG ReturnLength
    );



typedef NTSTATUS (__stdcall * PFN_NT_CREATE_TRANSACTION)(
      PHANDLE TransactionHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      LPGUID Uow,
      HANDLE TmHandle,
      ULONG CreateOptions,
      ULONG IsolationLevel,
      ULONG IsolationFlags,
      PLARGE_INTEGER Timeout,
      PUNICODE_STRING Description
    );    



  
  
 
NTSTATUS
__stdcall
NtCreateTransaction (
      PHANDLE TransactionHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      LPGUID Uow,
      HANDLE TmHandle,
      ULONG CreateOptions,
      ULONG IsolationLevel,
      ULONG IsolationFlags,
      PLARGE_INTEGER Timeout,
      PUNICODE_STRING Description
    );



typedef NTSTATUS (__stdcall *PFN_NT_OPEN_TRANSACTION)(
      PHANDLE TransactionHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      LPGUID Uow,
      HANDLE TmHandle
    );



  
  
 
NTSTATUS
__stdcall
NtOpenTransaction (
      PHANDLE TransactionHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      LPGUID Uow,
      HANDLE TmHandle
    );



typedef NTSTATUS (__stdcall * PFN_NT_QUERY_INFORMATION_TRANSACTION)(
      HANDLE TransactionHandle,
      TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
      PVOID TransactionInformation,
      ULONG TransactionInformationLength,
      PULONG ReturnLength
    );



  
  
 
NTSTATUS
__stdcall
NtQueryInformationTransaction (
      HANDLE TransactionHandle,
      TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
      PVOID TransactionInformation,
      ULONG TransactionInformationLength,
      PULONG ReturnLength
    );



typedef NTSTATUS (__stdcall * PFN_NT_SET_INFORMATION_TRANSACTION)(
      HANDLE TransactionHandle,
      TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
      PVOID TransactionInformation,
      ULONG TransactionInformationLength
    );



  
  
 
NTSTATUS
__stdcall
NtSetInformationTransaction (
      HANDLE TransactionHandle,
      TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
      PVOID TransactionInformation,
      ULONG TransactionInformationLength
    );



typedef NTSTATUS (__stdcall * PFN_NT_COMMIT_TRANSACTION)(
      HANDLE  TransactionHandle,
      BOOLEAN Wait
    );



  
 
NTSTATUS
__stdcall
NtCommitTransaction (
      HANDLE TransactionHandle,
      BOOLEAN Wait
    );



typedef NTSTATUS (__stdcall * PFN_NT_ROLLBACK_TRANSACTION)(
      HANDLE TransactionHandle,
      BOOLEAN Wait
    );



  
 
NTSTATUS
__stdcall
NtRollbackTransaction (
      HANDLE TransactionHandle,
      BOOLEAN Wait
    );




  
  
 
NTSTATUS
__stdcall
NtCreateEnlistment (
      PHANDLE EnlistmentHandle,
      ACCESS_MASK DesiredAccess,
      HANDLE ResourceManagerHandle,
      HANDLE TransactionHandle,
      POBJECT_ATTRIBUTES ObjectAttributes,
      ULONG CreateOptions,
      NOTIFICATION_MASK NotificationMask,
      PVOID EnlistmentKey
    );




  
  
 
NTSTATUS
__stdcall
NtOpenEnlistment (
      PHANDLE EnlistmentHandle,
      ACCESS_MASK DesiredAccess,
      HANDLE ResourceManagerHandle,
      LPGUID EnlistmentGuid,
      POBJECT_ATTRIBUTES ObjectAttributes
    );




  
  
 
NTSTATUS
__stdcall
NtQueryInformationEnlistment (
      HANDLE EnlistmentHandle,
      ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
      PVOID EnlistmentInformation,
      ULONG EnlistmentInformationLength,
      PULONG ReturnLength
    );




  
  
 
NTSTATUS
__stdcall
NtSetInformationEnlistment (
      HANDLE EnlistmentHandle,
      ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
      PVOID EnlistmentInformation,
      ULONG EnlistmentInformationLength
    );




  
  
 
NTSTATUS
__stdcall
NtRecoverEnlistment (
      HANDLE EnlistmentHandle,
      PVOID EnlistmentKey
    );




  
  
 
NTSTATUS
__stdcall
NtPrePrepareEnlistment (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );




  
  
 
NTSTATUS
__stdcall
NtPrepareEnlistment (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );




  
  
 
NTSTATUS
__stdcall
NtCommitEnlistment (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );




  
 
NTSTATUS
__stdcall
NtRollbackEnlistment (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );




  
 
NTSTATUS
__stdcall 
NtPrePrepareComplete (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );




  
 
NTSTATUS
__stdcall 
NtPrepareComplete (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );




  
 
NTSTATUS
__stdcall 
NtCommitComplete (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );




  
 
NTSTATUS
__stdcall 
NtReadOnlyEnlistment (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );




  
 
NTSTATUS
__stdcall 
NtRollbackComplete (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );




  
 
NTSTATUS
__stdcall 
NtSinglePhaseReject (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );




  
  
 
NTSTATUS
__stdcall
NtCreateResourceManager (
      PHANDLE ResourceManagerHandle,
      ACCESS_MASK DesiredAccess,
      HANDLE TmHandle,
      LPGUID RmGuid,
      POBJECT_ATTRIBUTES ObjectAttributes,
      ULONG CreateOptions,
      PUNICODE_STRING Description
    );




  
  
 
NTSTATUS
__stdcall
NtOpenResourceManager (
      PHANDLE ResourceManagerHandle,
      ACCESS_MASK DesiredAccess,
      HANDLE TmHandle,
      LPGUID ResourceManagerGuid,
      POBJECT_ATTRIBUTES ObjectAttributes
    );




  
  
 
NTSTATUS
__stdcall
NtRecoverResourceManager (
      HANDLE ResourceManagerHandle
    );




  
  
 
NTSTATUS
__stdcall
NtGetNotificationResourceManager (
      HANDLE ResourceManagerHandle,
      PTRANSACTION_NOTIFICATION TransactionNotification,
      ULONG NotificationLength,
      PLARGE_INTEGER Timeout,
      PULONG ReturnLength,
      ULONG Asynchronous,
      ULONG_PTR AsynchronousContext
    );




  
  
 
NTSTATUS
__stdcall
NtQueryInformationResourceManager (
      HANDLE ResourceManagerHandle,
      RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
      PVOID ResourceManagerInformation,
      ULONG ResourceManagerInformationLength,
      PULONG ReturnLength
    );




  
  
 
NTSTATUS
__stdcall
NtSetInformationResourceManager (
      HANDLE ResourceManagerHandle,
      RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
      PVOID ResourceManagerInformation,
      ULONG ResourceManagerInformationLength
    );




  
  
 
NTSTATUS
__stdcall
NtRegisterProtocolAddressInformation(
      HANDLE ResourceManager,
      PCRM_PROTOCOL_ID ProtocolId,
      ULONG ProtocolInformationSize,
      PVOID ProtocolInformation,
      ULONG CreateOptions
    );




  
 
NTSTATUS
__stdcall
NtPropagationComplete(
      HANDLE ResourceManagerHandle,
      ULONG RequestCookie,
      ULONG BufferLength,
      PVOID Buffer
    );




  
 
NTSTATUS
__stdcall
NtPropagationFailed(
      HANDLE ResourceManagerHandle,
      ULONG RequestCookie,
      NTSTATUS PropStatus
    );
























































































extern ULONG NtGlobalFlag;
extern ULONG NtGlobalFlag2;







typedef   enum _POOL_TYPE POOL_TYPE;



typedef ULONG64 POOL_FLAGS;

typedef
 
 
PVOID
ALLOCATE_FUNCTION (
      POOL_TYPE PoolType,
      SIZE_T NumberOfBytes,
      ULONG Tag
    );
typedef ALLOCATE_FUNCTION *PALLOCATE_FUNCTION;

typedef
 
 
void
FREE_FUNCTION (
        PVOID Buffer
    );
typedef FREE_FUNCTION *PFREE_FUNCTION;

typedef struct _LOOKASIDE_LIST_EX *PLOOKASIDE_LIST_EX;

typedef
 
 
PVOID
ALLOCATE_FUNCTION_EX (
      POOL_TYPE PoolType,
      SIZE_T NumberOfBytes,
      ULONG Tag,
      PLOOKASIDE_LIST_EX Lookaside
    );
typedef ALLOCATE_FUNCTION_EX *PALLOCATE_FUNCTION_EX;

typedef
 
 
void
FREE_FUNCTION_EX (
        PVOID Buffer,
      PLOOKASIDE_LIST_EX Lookaside
    );
typedef FREE_FUNCTION_EX *PFREE_FUNCTION_EX;





































































typedef struct  _GENERAL_LOOKASIDE {
    union { SLIST_HEADER ListHead; SINGLE_LIST_ENTRY SingleListHead; } ; USHORT Depth; USHORT MaximumDepth; ULONG TotalAllocates; union { ULONG AllocateMisses; ULONG AllocateHits; } ; ULONG TotalFrees; union { ULONG FreeMisses; ULONG FreeHits; } ; POOL_TYPE Type; ULONG Tag; ULONG Size; union { PALLOCATE_FUNCTION_EX AllocateEx; PALLOCATE_FUNCTION Allocate; } ; union { PFREE_FUNCTION_EX FreeEx; PFREE_FUNCTION Free; } ; LIST_ENTRY ListEntry; ULONG LastTotalAllocates; union { ULONG LastAllocateMisses; ULONG LastAllocateHits; } ; ULONG Future[2];
} GENERAL_LOOKASIDE;

typedef GENERAL_LOOKASIDE *PGENERAL_LOOKASIDE;














typedef struct _GENERAL_LOOKASIDE_POOL {
    union { SLIST_HEADER ListHead; SINGLE_LIST_ENTRY SingleListHead; } ; USHORT Depth; USHORT MaximumDepth; ULONG TotalAllocates; union { ULONG AllocateMisses; ULONG AllocateHits; } ; ULONG TotalFrees; union { ULONG FreeMisses; ULONG FreeHits; } ; POOL_TYPE Type; ULONG Tag; ULONG Size; union { PALLOCATE_FUNCTION_EX AllocateEx; PALLOCATE_FUNCTION Allocate; } ; union { PFREE_FUNCTION_EX FreeEx; PFREE_FUNCTION Free; } ; LIST_ENTRY ListEntry; ULONG LastTotalAllocates; union { ULONG LastAllocateMisses; ULONG LastAllocateHits; } ; ULONG Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL;









typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE *)0)->TotalFrees))==((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE_POOL *)0)->TotalFrees)))?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE *)0)->Tag))==((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE_POOL *)0)->Tag)))?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE *)0)->Future))==((LONG)(LONG_PTR)&(((GENERAL_LOOKASIDE_POOL *)0)->Future)))?1:-1];











typedef CCHAR KPROCESSOR_MODE;

typedef enum _MODE {
    KernelMode,
    UserMode,
    MaximumMode
} MODE;



typedef
 
  
 
BOOLEAN
KSYNCHRONIZE_ROUTINE (
      PVOID SynchronizeContext
    );
typedef KSYNCHRONIZE_ROUTINE *PKSYNCHRONIZE_ROUTINE;

typedef struct _KAPC {                  
    UCHAR Type;                         
        UCHAR AllFlags;                 
    UCHAR Size;                         
    UCHAR SpareByte1;                   
    ULONG SpareLong0;                   
    struct _KTHREAD *Thread;            
    LIST_ENTRY ApcListEntry;            
    PVOID Reserved[3];                  
    PVOID NormalContext;                
    PVOID SystemArgument1;              
    PVOID SystemArgument2;              
    CCHAR ApcStateIndex;                
    KPROCESSOR_MODE ApcMode;            
    BOOLEAN Inserted;                   
} KAPC, *PKAPC, *PRKAPC;        













struct _KDPC;

 
 
 
 
 
typedef
void
KDEFERRED_ROUTINE (
      struct _KDPC *Dpc,
      PVOID DeferredContext,
      PVOID SystemArgument1,
      PVOID SystemArgument2
    );

typedef KDEFERRED_ROUTINE *PKDEFERRED_ROUTINE;


















































typedef enum _KDPC_IMPORTANCE {
    LowImportance,
    MediumImportance,
    HighImportance,
    MediumHighImportance
} KDPC_IMPORTANCE;

















typedef struct _KDPC {
    union {
        ULONG TargetInfoAsUlong;
        struct {
            UCHAR Type;
            UCHAR Importance;
            volatile USHORT Number;
        } ;
    } ;

    SINGLE_LIST_ENTRY DpcListEntry;
    KAFFINITY ProcessorHistory;
    PKDEFERRED_ROUTINE DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
     PVOID DpcData;
} KDPC, *PKDPC, *PRKDPC;











































































































typedef
     
  struct _MDL {
    struct _MDL *Next;
    CSHORT Size;
    CSHORT MdlFlags;

    struct _EPROCESS *Process;
    PVOID MappedSystemVa;   
    PVOID StartVa;   
    ULONG ByteCount;
    ULONG ByteOffset;
} MDL, *PMDL;

typedef   MDL *PMDLX;
























































































































typedef struct _DISPATCHER_HEADER {
    union {
        union {
            volatile LONG Lock;
            LONG LockNV;
        } ;

        struct {                            
            UCHAR Type;                     
            UCHAR Signalling;
            UCHAR Size;
            UCHAR Reserved1;
        } ;

        struct {                            
            UCHAR TimerType;
            union {
                UCHAR TimerControlFlags;
                struct {
                    UCHAR Absolute : 1;
                    UCHAR Wake : 1;
                    UCHAR EncodedTolerableDelay : 6;
                } ;
            };

            UCHAR Hand;
            union {
                UCHAR TimerMiscFlags;
                struct {



                    UCHAR Index : 6;








                    UCHAR Inserted : 1;
                    volatile UCHAR Expired : 1;
                } ;
            } ;
        } ;

        struct {                            
            UCHAR Timer2Type;
            union {
                UCHAR Timer2Flags;
                struct {
                    UCHAR Timer2Inserted : 1;
                    UCHAR Timer2Expiring : 1;
                    UCHAR Timer2CancelPending : 1;
                    UCHAR Timer2SetPending : 1;
                    UCHAR Timer2Running : 1;
                    UCHAR Timer2Disabled : 1;
                    UCHAR Timer2ReservedFlags : 2;
                } ;
            } ;

            UCHAR Timer2ComponentId;
            UCHAR Timer2RelativeId;
        } ;

        struct {                            
            UCHAR QueueType;
            union {
                UCHAR QueueControlFlags;
                struct {
                    UCHAR Abandoned : 1;
                    UCHAR DisableIncrement : 1;
                    UCHAR QueueReservedControlFlags : 6;
                } ;
            } ;

            UCHAR QueueSize;
            UCHAR QueueReserved;
        } ;

        struct {                            
            UCHAR ThreadType;
            UCHAR ThreadReserved;

            union {
                UCHAR ThreadControlFlags;
                struct {
                    UCHAR CycleProfiling : 1;
                    UCHAR CounterProfiling : 1;
                    UCHAR GroupScheduling : 1;
                    UCHAR AffinitySet : 1;
                    UCHAR Tagged : 1;
                    UCHAR EnergyProfiling: 1;
                    UCHAR SchedulerAssist: 1;



                    UCHAR ThreadReservedControlFlags : 1;







                } ;
            } ;

            union {
                UCHAR DebugActive;



                struct {
                    BOOLEAN ActiveDR7 : 1;
                    BOOLEAN Instrumented : 1;
                    BOOLEAN Minimal : 1;
                    BOOLEAN Reserved4 : 2;
                    BOOLEAN AltSyscall : 1;
                    BOOLEAN Emulation : 1;
                    BOOLEAN Reserved5 : 1;
                } ;



            } ;
        } ;

        struct {                         
            UCHAR MutantType;
            UCHAR MutantSize;
            BOOLEAN DpcActive;
            UCHAR MutantReserved;
        } ;
    } ;

    LONG SignalState;                   
    LIST_ENTRY WaitListHead;            
} DISPATCHER_HEADER, *PDISPATCHER_HEADER;






typedef struct _KEVENT {
    DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT, *PRKEVENT;









typedef struct _KGATE {
    DISPATCHER_HEADER Header;
} KGATE, *PKGATE;







typedef struct _KTIMER {
    DISPATCHER_HEADER Header;
    ULARGE_INTEGER DueTime;
    LIST_ENTRY TimerListEntry;
    struct _KDPC *Dpc;



    USHORT Processor;
    USHORT TimerType;



    ULONG Period;
} KTIMER, *PKTIMER, *PRKTIMER;






typedef enum _LOCK_OPERATION {
    IoReadAccess,
    IoWriteAccess,
    IoModifyAccess
} LOCK_OPERATION;




typedef struct _FAST_MUTEX {
    LONG Count;
    PVOID Owner;
    ULONG Contention;
    KEVENT Event;
    ULONG OldIrql;
} FAST_MUTEX, *PFAST_MUTEX, KGUARDED_MUTEX, *PKGUARDED_MUTEX;


















































































































































































































































































































































































































































































































































































































































































UCHAR
__inbyte (
      USHORT Port
    );

USHORT
__inword (
      USHORT Port
    );

ULONG
__indword (
      USHORT Port
    );

void
__outbyte (
      USHORT Port,
      UCHAR Data
    );

void
__outword (
      USHORT Port,
      USHORT Data
    );

void
__outdword (
      USHORT Port,
      ULONG Data
    );

void
__inbytestring (
      USHORT Port,
      PUCHAR Buffer,
      ULONG Count
    );

void
__inwordstring (
      USHORT Port,
      PUSHORT Buffer,
      ULONG Count
    );

void
__indwordstring (
      USHORT Port,
      PULONG Buffer,
      ULONG Count
    );

void
__outbytestring (
      USHORT Port,
      PUCHAR Buffer,
      ULONG Count
    );

void
__outwordstring (
      USHORT Port,
      PUSHORT Buffer,
      ULONG Count
    );

void
__outdwordstring (
      USHORT Port,
      PULONG Buffer,
      ULONG Count
    );














typedef ULONG PFN_COUNT;
typedef LONG64 SPFN_NUMBER, *PSPFN_NUMBER;
typedef ULONG64 PFN_NUMBER, *PPFN_NUMBER;





























 
 
ULONG64
__readcr8 (
    void
    );



 
 
void
__writecr8 (
      ULONG64 Data
    );





























UCHAR
READ_REGISTER_UCHAR (
        volatile UCHAR *Register
    )
;


USHORT
READ_REGISTER_USHORT (
        volatile USHORT *Register
    )
;


ULONG
READ_REGISTER_ULONG (
        volatile ULONG *Register
    )
;


ULONG64
READ_REGISTER_ULONG64 (
        volatile ULONG64 *Register
    )
;


void
READ_REGISTER_BUFFER_UCHAR (
        volatile UCHAR *Register,
      PUCHAR Buffer,
      ULONG Count
    )
;


void
READ_REGISTER_BUFFER_USHORT (
        volatile USHORT *Register,
      PUSHORT Buffer,
      ULONG Count
    )
;


void
READ_REGISTER_BUFFER_ULONG (
        volatile ULONG *Register,
      PULONG Buffer,
      ULONG Count
    )
;


void
READ_REGISTER_BUFFER_ULONG64 (
        volatile ULONG64 *Register,
      PULONG64 Buffer,
      ULONG Count
    )
;


void
WRITE_REGISTER_UCHAR (
        volatile UCHAR *Register,
      UCHAR Value
    )
;


void
WRITE_REGISTER_USHORT (
        volatile USHORT *Register,
      USHORT Value
    )
;


void
WRITE_REGISTER_ULONG (
        volatile ULONG *Register,
      ULONG Value
    )
;


void
WRITE_REGISTER_ULONG64 (
        volatile ULONG64 *Register,
      ULONG64 Value
    )
;


void
WRITE_REGISTER_BUFFER_UCHAR (
        volatile UCHAR *Register,
      PUCHAR Buffer,
      ULONG Count
    )
;


void
WRITE_REGISTER_BUFFER_USHORT (
        volatile USHORT *Register,
      PUSHORT Buffer,
      ULONG Count
    )
;


void
WRITE_REGISTER_BUFFER_ULONG (
        volatile ULONG *Register,
      PULONG Buffer,
      ULONG Count
    )
;


void
WRITE_REGISTER_BUFFER_ULONG64 (
        volatile ULONG64 *Register,
      PULONG64 Buffer,
      ULONG Count
    )
;






UCHAR
READ_PORT_UCHAR (
        PUCHAR Port
    )

;


USHORT
READ_PORT_USHORT (
        PUSHORT Port
    )

;


ULONG
READ_PORT_ULONG (
        PULONG Port
    )

;



void
READ_PORT_BUFFER_UCHAR (
        PUCHAR Port,
      PUCHAR Buffer,
      ULONG Count
    )

;


void
READ_PORT_BUFFER_USHORT (
        PUSHORT Port,
      PUSHORT Buffer,
      ULONG Count
    )

;


void
READ_PORT_BUFFER_ULONG (
        PULONG Port,
      PULONG Buffer,
      ULONG Count
    )

;


void
WRITE_PORT_UCHAR (
        PUCHAR Port,
      UCHAR Value
    )

;


void
WRITE_PORT_USHORT (
        PUSHORT Port,
      USHORT Value
    )

;


void
WRITE_PORT_ULONG (
        PULONG Port,
      ULONG Value
    )

;


void
WRITE_PORT_BUFFER_UCHAR (
        PUCHAR Port,
      PUCHAR Buffer,
      ULONG Count
    )

;


void
WRITE_PORT_BUFFER_USHORT (
        PUSHORT Port,
      PUSHORT Buffer,
      ULONG Count
    )

;


void
WRITE_PORT_BUFFER_ULONG (
        PULONG Port,
      PULONG Buffer,
      ULONG Count
    )

;





























void
KeFlushIoBuffers (
      PMDL Mdl,
      BOOLEAN ReadOperation,
      BOOLEAN DmaOperation
    );

















typedef struct _KFLOATING_SAVE {
    ULONG Dummy;
} KFLOATING_SAVE, *PKFLOATING_SAVE;









ULONG
KeGetCurrentProcessorIndex (
    void
    )

;








void
KeMemoryBarrier (
    void
    )

















;



































 
 



NTSTATUS
KeSaveFloatingPointState (
      PKFLOATING_SAVE FloatSave
    )
;



 
 
 


NTSTATUS
KeRestoreFloatingPointState (
      PKFLOATING_SAVE FloatSave
    )
;

































































 
 

KIRQL
KeGetCurrentIrql (
    void
    );









 

void
KeLowerIrql (
          KIRQL NewIrql
   );

 
 
 

KIRQL
KfRaiseIrql (
      KIRQL NewIrql
    );










































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































typedef enum _FIRMWARE_TYPE {
    FirmwareTypeUnknown,
    FirmwareTypeBios,
    FirmwareTypeUefi,
    FirmwareTypeMax
} FIRMWARE_TYPE, *PFIRMWARE_TYPE;



























typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP {
    RelationProcessorCore,
    RelationNumaNode,
    RelationCache,
    RelationProcessorPackage,
    RelationGroup,
    RelationProcessorDie,
    RelationNumaNodeEx,
    RelationProcessorModule,
    RelationAll = 0xffff
} LOGICAL_PROCESSOR_RELATIONSHIP;



typedef enum _PROCESSOR_CACHE_TYPE {
    CacheUnified,
    CacheInstruction,
    CacheData,
    CacheTrace
} PROCESSOR_CACHE_TYPE;



typedef struct _CACHE_DESCRIPTOR {
    UCHAR  Level;
    UCHAR  Associativity;
    USHORT LineSize;
    ULONG  Size;
    PROCESSOR_CACHE_TYPE Type;
} CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR;

typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION {
    ULONG_PTR   ProcessorMask;
    LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
    union {
        struct {
            UCHAR Flags;
        } ProcessorCore;
        struct {
            ULONG NodeNumber;
        } NumaNode;
        CACHE_DESCRIPTOR Cache;
        ULONGLONG  Reserved[2];
    } ;
} SYSTEM_LOGICAL_PROCESSOR_INFORMATION, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION;

typedef struct _PROCESSOR_RELATIONSHIP {
    UCHAR Flags;
    UCHAR EfficiencyClass;
    UCHAR Reserved[20];
    USHORT GroupCount;
      GROUP_AFFINITY GroupMask[1];
} PROCESSOR_RELATIONSHIP, *PPROCESSOR_RELATIONSHIP;

typedef struct _NUMA_NODE_RELATIONSHIP {
    ULONG NodeNumber;
    UCHAR Reserved[18];
    USHORT GroupCount;
    union {
        GROUP_AFFINITY GroupMask;
         
        GROUP_AFFINITY GroupMasks[1];
    } ;
} NUMA_NODE_RELATIONSHIP, *PNUMA_NODE_RELATIONSHIP;

typedef struct _CACHE_RELATIONSHIP {
    UCHAR Level;
    UCHAR Associativity;
    USHORT LineSize;
    ULONG CacheSize;
    PROCESSOR_CACHE_TYPE Type;
    UCHAR Reserved[18];
    USHORT GroupCount;
    union {
        GROUP_AFFINITY GroupMask;
         
        GROUP_AFFINITY GroupMasks[1];
    } ;
} CACHE_RELATIONSHIP, *PCACHE_RELATIONSHIP;

typedef struct _PROCESSOR_GROUP_INFO {
    UCHAR MaximumProcessorCount;
    UCHAR ActiveProcessorCount;
    UCHAR Reserved[38];
    KAFFINITY ActiveProcessorMask;
} PROCESSOR_GROUP_INFO, *PPROCESSOR_GROUP_INFO;

typedef struct _GROUP_RELATIONSHIP {
    USHORT MaximumGroupCount;
    USHORT ActiveGroupCount;
    UCHAR Reserved[20];
      PROCESSOR_GROUP_INFO GroupInfo[1];
} GROUP_RELATIONSHIP, *PGROUP_RELATIONSHIP;

  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX {
    LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
    ULONG Size;
    union {
        PROCESSOR_RELATIONSHIP Processor;
        NUMA_NODE_RELATIONSHIP NumaNode;
        CACHE_RELATIONSHIP Cache;
        GROUP_RELATIONSHIP Group;
    } ;
};

typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX;

typedef enum _CPU_SET_INFORMATION_TYPE {
    CpuSetInformation
} CPU_SET_INFORMATION_TYPE, *PCPU_SET_INFORMATION_TYPE;

  struct _SYSTEM_CPU_SET_INFORMATION {
    ULONG Size;
    CPU_SET_INFORMATION_TYPE Type;
    union {
        struct {
            ULONG Id;
            USHORT Group;
            UCHAR LogicalProcessorIndex;
            UCHAR CoreIndex;
            UCHAR LastLevelCacheIndex;
            UCHAR NumaNodeIndex;
            UCHAR EfficiencyClass;
            union {






                UCHAR AllFlags;
                struct {
                    UCHAR Parked : 1;
                    UCHAR Allocated : 1;
                    UCHAR AllocatedToTargetProcess : 1;
                    UCHAR RealTime : 1;
                    UCHAR ReservedFlags : 4;
                } ;
            } ;

            union {
                ULONG Reserved;
                UCHAR SchedulingClass;
            };

            ULONG64 AllocationTag;
        } CpuSet;
    } ;
};

typedef struct _SYSTEM_CPU_SET_INFORMATION SYSTEM_CPU_SET_INFORMATION, *PSYSTEM_CPU_SET_INFORMATION;




typedef struct _SYSTEM_POOL_ZEROING_INFORMATION {
    BOOLEAN PoolZeroingSupportPresent;
} SYSTEM_POOL_ZEROING_INFORMATION, *PSYSTEM_POOL_ZEROING_INFORMATION;























































typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE {
    StandardDesign,                 
    NEC98x86,                       
    EndAlternatives                 
} ALTERNATIVE_ARCHITECTURE_TYPE;





























































typedef struct _EXCEPTION_RECORD {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    ULONG NumberParameters;
    ULONG_PTR ExceptionInformation[15];
    } EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD32 {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    ULONG ExceptionRecord;
    ULONG ExceptionAddress;
    ULONG NumberParameters;
    ULONG ExceptionInformation[15];
} EXCEPTION_RECORD32, *PEXCEPTION_RECORD32;

typedef struct _EXCEPTION_RECORD64 {
    NTSTATUS ExceptionCode;
    ULONG ExceptionFlags;
    ULONG64 ExceptionRecord;
    ULONG64 ExceptionAddress;
    ULONG NumberParameters;
    ULONG __unusedAlignment;
    ULONG64 ExceptionInformation[15];
} EXCEPTION_RECORD64, *PEXCEPTION_RECORD64;





typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS;
































typedef enum _KINTERRUPT_MODE {
    LevelSensitive,
    Latched
} KINTERRUPT_MODE;



typedef enum _KINTERRUPT_POLARITY {
    InterruptPolarityUnknown,
    InterruptActiveHigh,
    InterruptRisingEdge = InterruptActiveHigh,
    InterruptActiveLow,
    InterruptFallingEdge = InterruptActiveLow,



    InterruptActiveBoth,





    InterruptActiveBothTriggerLow = InterruptActiveBoth,
    InterruptActiveBothTriggerHigh,



} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;







typedef enum _KWAIT_REASON {
    Executive,
    FreePage,
    PageIn,
    PoolAllocation,
    DelayExecution,
    Suspended,
    UserRequest,
    WrExecutive,
    WrFreePage,
    WrPageIn,
    WrPoolAllocation,
    WrDelayExecution,
    WrSuspended,
    WrUserRequest,
    WrSpare0,
    WrQueue,
    WrLpcReceive,
    WrLpcReply,
    WrVirtualMemory,
    WrPageOut,
    WrRendezvous,
    WrKeyedEvent,
    WrTerminated,
    WrProcessInSwap,
    WrCpuRateControl,
    WrCalloutStack,
    WrKernel,
    WrResource,
    WrPushLock,
    WrMutex,
    WrQuantumEnd,
    WrDispatchInt,
    WrPreempted,
    WrYieldExecution,
    WrFastMutex,
    WrGuardedMutex,
    WrRundown,
    WrAlertByThreadId,
    WrDeferredPreempt,
    WrPhysicalFault,
    WrIoRing,
    WrMdlCache,
    MaximumWaitReason
} KWAIT_REASON;



typedef struct _KWAIT_BLOCK {
    LIST_ENTRY WaitListEntry;
    UCHAR WaitType;
    volatile UCHAR BlockState;
    USHORT WaitKey;



    LONG SpareLong;



    union {
        struct _KTHREAD *Thread;
        struct _KQUEUE *NotificationQueue;
        struct _KDPC *Dpc;
    };

    PVOID Object;
    PVOID SparePtr;

} KWAIT_BLOCK, *PKWAIT_BLOCK, *PRKWAIT_BLOCK;





typedef
 
 
void
KSTART_ROUTINE (
      PVOID StartContext
    );
typedef KSTART_ROUTINE *PKSTART_ROUTINE;











typedef struct _KDEVICE_QUEUE {
    CSHORT Type;
    CSHORT Size;
    LIST_ENTRY DeviceListHead;
    KSPIN_LOCK Lock;



    union {
        BOOLEAN Busy;
        struct {
            LONG64 Reserved : 8;
            LONG64 Hint : 56;
        };
    };







} KDEVICE_QUEUE, *PKDEVICE_QUEUE, *PRKDEVICE_QUEUE;

typedef struct _KDEVICE_QUEUE_ENTRY {
    LIST_ENTRY DeviceListEntry;
    ULONG SortKey;
    BOOLEAN Inserted;
} KDEVICE_QUEUE_ENTRY, *PKDEVICE_QUEUE_ENTRY, *PRKDEVICE_QUEUE_ENTRY;






typedef
 
  
 
BOOLEAN
KSERVICE_ROUTINE (
      struct _KINTERRUPT *Interrupt,
      PVOID ServiceContext
    );

typedef KSERVICE_ROUTINE *PKSERVICE_ROUTINE;

typedef
 
 
BOOLEAN
KMESSAGE_SERVICE_ROUTINE (
      struct _KINTERRUPT *Interrupt,
      PVOID ServiceContext,
      ULONG MessageID
    );

typedef KMESSAGE_SERVICE_ROUTINE *PKMESSAGE_SERVICE_ROUTINE;





typedef struct _KMUTANT {
    DISPATCHER_HEADER Header;
    LIST_ENTRY MutantListEntry;
    struct _KTHREAD *OwnerThread;

    union {
        UCHAR MutantFlags;
        struct {
            UCHAR Abandoned : 1;
            UCHAR Spare1 : 7;
        } ;
    } ;

    UCHAR ApcDisable;
} KMUTANT, *PKMUTANT, *PRKMUTANT, KMUTEX, *PKMUTEX, *PRKMUTEX;








typedef struct _KSEMAPHORE {
    DISPATCHER_HEADER Header;
    LONG Limit;
} KSEMAPHORE, *PKSEMAPHORE, *PRKSEMAPHORE;










void
KeInitializeDpc (
        PRKDPC Dpc,
      PKDEFERRED_ROUTINE DeferredRoutine,
        PVOID DeferredContext
    );




void
KeInitializeThreadedDpc (
      PRKDPC Dpc,
      PKDEFERRED_ROUTINE DeferredRoutine,
      PVOID DeferredContext
    );




BOOLEAN
KeInsertQueueDpc (
      PRKDPC Dpc,
      PVOID SystemArgument1,
        PVOID SystemArgument2
    );



 

BOOLEAN
KeRemoveQueueDpc (
      PRKDPC Dpc
    );



 

BOOLEAN
KeRemoveQueueDpcEx (
      PRKDPC Dpc,
      BOOLEAN WaitIfActive
    );






NTSTATUS
KeInitializeCrashDumpHeader(
      ULONG DumpType,
      ULONG Flags,
      PVOID Buffer,
      ULONG BufferSize,
      PULONG BufferNeeded
    );




void
KeSetImportanceDpc (
      PRKDPC Dpc,
      KDPC_IMPORTANCE Importance
    );




void
KeSetTargetProcessorDpc (
      PRKDPC Dpc,
      CCHAR Number
    );





 

void
KeFlushQueuedDpcs (
    void
    );







 

void
KeInitializeDeviceQueue (
      PKDEVICE_QUEUE DeviceQueue
    );



 

BOOLEAN
KeInsertDeviceQueue (
      PKDEVICE_QUEUE DeviceQueue,
      PKDEVICE_QUEUE_ENTRY DeviceQueueEntry
    );



 

BOOLEAN
KeInsertByKeyDeviceQueue (
      PKDEVICE_QUEUE DeviceQueue,
      PKDEVICE_QUEUE_ENTRY DeviceQueueEntry,
      ULONG SortKey
    );



 

PKDEVICE_QUEUE_ENTRY
KeRemoveDeviceQueue (
      PKDEVICE_QUEUE DeviceQueue
    );



 

PKDEVICE_QUEUE_ENTRY
KeRemoveByKeyDeviceQueue (
      PKDEVICE_QUEUE DeviceQueue,
      ULONG SortKey
    );



 

PKDEVICE_QUEUE_ENTRY
KeRemoveByKeyDeviceQueueIfBusy (
      PKDEVICE_QUEUE DeviceQueue,
      ULONG SortKey
    );



 

BOOLEAN
KeRemoveEntryDeviceQueue (
      PKDEVICE_QUEUE DeviceQueue,
      PKDEVICE_QUEUE_ENTRY DeviceQueueEntry
    );




  

BOOLEAN
KeSynchronizeExecution (
      PKINTERRUPT Interrupt,
      PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
        PVOID SynchronizeContext
    );





  
 
  

KIRQL
KeAcquireInterruptSpinLock (
      PKINTERRUPT Interrupt
    );





  

void
KeReleaseInterruptSpinLock (
      PKINTERRUPT Interrupt,
        KIRQL OldIrql
    );









void
KeInitializeEvent (
      PRKEVENT Event,
      EVENT_TYPE Type,
      BOOLEAN State
    );

 

void
KeClearEvent (
      PRKEVENT Event
    );



 

LONG
KeReadStateEvent (
      PRKEVENT Event
    );



 

LONG
KeResetEvent (
      PRKEVENT Event
    );







LONG
KeSetEvent (
      PRKEVENT Event,
      KPRIORITY Increment,
        BOOLEAN Wait
    );








void
KeInitializeMutex (
      PRKMUTEX Mutex,
      ULONG Level
    );



 

LONG
KeReadStateMutex (
      PRKMUTEX Mutex
    );







LONG
KeReleaseMutex (
      PRKMUTEX Mutex,
      BOOLEAN Wait
    );







 

void
KeInitializeSemaphore (
      PRKSEMAPHORE Semaphore,
      LONG Count,
      LONG Limit
    );



 

LONG
KeReadStateSemaphore (
      PRKSEMAPHORE Semaphore
    );







LONG
KeReleaseSemaphore (
      PRKSEMAPHORE Semaphore,
      KPRIORITY Increment,
      LONG Adjustment,
        BOOLEAN Wait
    );




 
 

NTSTATUS
KeDelayExecutionThread (
      KPROCESSOR_MODE WaitMode,
      BOOLEAN Alertable,
      PLARGE_INTEGER Interval
    );




 

KPRIORITY
KeQueryPriorityThread (
      PKTHREAD Thread
    );



 

ULONG
KeQueryRuntimeThread (
      PKTHREAD Thread,
      PULONG UserTime
    );



 
 
 
ULONG64
KeQueryTotalCycleTimeThread (
      PKTHREAD Thread,
      PULONG64 CycleTimeStamp
    );




 

NTSTATUS
KeSetTargetProcessorDpcEx (
      PKDPC Dpc,
      PPROCESSOR_NUMBER ProcNumber
    );



 
 

void
KeRevertToUserAffinityThread (
    void
    );



 
 

void
KeSetSystemAffinityThread (
      KAFFINITY Affinity
    );



 
 

void
KeRevertToUserAffinityThreadEx (
      KAFFINITY Affinity
    );



 
 

void
KeSetSystemGroupAffinityThread (
      PGROUP_AFFINITY Affinity,
      PGROUP_AFFINITY PreviousAffinity
    );

 
 

void
KeRevertToUserGroupAffinityThread (
      PGROUP_AFFINITY PreviousAffinity
    );



 
 

KAFFINITY
KeSetSystemAffinityThreadEx (
      KAFFINITY Affinity
    );



 
 

KPRIORITY
KeSetPriorityThread (
      PKTHREAD Thread,
      KPRIORITY Priority
    );






 

void
KeEnterCriticalRegion (
    void
    );




 

void
KeLeaveCriticalRegion (
    void
    );




 

void
KeEnterGuardedRegion (
    void
    );




 

void
KeLeaveGuardedRegion (
    void
    );



 
 

BOOLEAN
KeAreApcsDisabled (
    void
    );









 

void
KeInitializeTimer (
      PKTIMER Timer
    );



 

void
KeInitializeTimerEx (
      PKTIMER Timer,
      TIMER_TYPE Type
    );



 

BOOLEAN
KeCancelTimer (
      PKTIMER
    );



 

BOOLEAN
KeReadStateTimer (
      PKTIMER Timer
    );



 

BOOLEAN
KeSetTimer (
      PKTIMER Timer,
      LARGE_INTEGER DueTime,
      PKDPC Dpc
    );



 

BOOLEAN
KeSetTimerEx (
      PKTIMER Timer,
      LARGE_INTEGER DueTime,
      LONG Period,
      PKDPC Dpc
    );



 

BOOLEAN
KeSetCoalescableTimer (
      PKTIMER Timer,
      LARGE_INTEGER DueTime,
      ULONG Period,
      ULONG TolerableDelay,
      PKDPC Dpc
    );






 



NTSTATUS
KeWaitForMultipleObjects (
      ULONG Count,
      PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
      BOOLEAN Alertable,
      PLARGE_INTEGER Timeout,
      PKWAIT_BLOCK WaitBlockArray
    );



 



NTSTATUS
KeWaitForSingleObject (
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
      BOOLEAN Alertable,
      PLARGE_INTEGER Timeout
    );






typedef
 
 
 
ULONG_PTR
KIPI_BROADCAST_WORKER (
      ULONG_PTR Argument
    );

typedef KIPI_BROADCAST_WORKER *PKIPI_BROADCAST_WORKER;


 
 

ULONG_PTR
KeIpiGenericCall (
      PKIPI_BROADCAST_WORKER BroadcastFunction,
      ULONG_PTR Context
    );















void
__stdcall
KeInitializeSpinLock (
      PKSPIN_LOCK SpinLock
    );











































 

BOOLEAN

KeTestSpinLock (
      PKSPIN_LOCK SpinLock
    );



 
 
 

BOOLEAN

KeTryToAcquireSpinLockAtDpcLevel (
      
    
    PKSPIN_LOCK SpinLock
    );












































































 

void
KeAcquireSpinLockAtDpcLevel (
      PKSPIN_LOCK SpinLock
    );





 
 
 

KIRQL
KeAcquireSpinLockRaiseToDpc (
      PKSPIN_LOCK SpinLock
    );





 

void
KeReleaseSpinLock (
      PKSPIN_LOCK SpinLock,
        KIRQL NewIrql
    );





 

void
KeReleaseSpinLockFromDpcLevel (
      PKSPIN_LOCK SpinLock
    );









 
 

KIRQL

KeAcquireSpinLockForDpc (
      PKSPIN_LOCK SpinLock
    );





 

void

KeReleaseSpinLockForDpc (
      PKSPIN_LOCK SpinLock,
        KIRQL OldIrql
    );















 
 
 

void

KeAcquireInStackQueuedSpinLock (
      PKSPIN_LOCK SpinLock,
      PKLOCK_QUEUE_HANDLE LockHandle
    );





 
 

void

KeReleaseInStackQueuedSpinLock (
      PKLOCK_QUEUE_HANDLE LockHandle
    );











 

void

KeAcquireInStackQueuedSpinLockAtDpcLevel (
      PKSPIN_LOCK SpinLock,
      PKLOCK_QUEUE_HANDLE LockHandle
    );





 

void

KeReleaseInStackQueuedSpinLockFromDpcLevel (
      PKLOCK_QUEUE_HANDLE LockHandle
    );











 
 

void

KeAcquireInStackQueuedSpinLockForDpc (
      PKSPIN_LOCK SpinLock,
      PKLOCK_QUEUE_HANDLE LockHandle
    );





 
 

void

KeReleaseInStackQueuedSpinLockForDpc (
      PKLOCK_QUEUE_HANDLE LockHandle
    );






typedef struct _KDPC_WATCHDOG_INFORMATION {
    ULONG DpcTimeLimit;
    ULONG DpcTimeCount;
    ULONG DpcWatchdogLimit;
    ULONG DpcWatchdogCount;
    ULONG Reserved;
} KDPC_WATCHDOG_INFORMATION, *PKDPC_WATCHDOG_INFORMATION;


 

NTSTATUS
KeQueryDpcWatchdogInformation (
      PKDPC_WATCHDOG_INFORMATION WatchdogInformation
    );




 
LOGICAL
KeIsExecutingDpc (
    void
    );


typedef enum _KBUGCHECK_BUFFER_DUMP_STATE {
    BufferEmpty,
    BufferInserted,
    BufferStarted,
    BufferFinished,
    BufferIncomplete
} KBUGCHECK_BUFFER_DUMP_STATE;

typedef
 
 
void
KBUGCHECK_CALLBACK_ROUTINE (
     PVOID Buffer,
     ULONG Length
    );
typedef KBUGCHECK_CALLBACK_ROUTINE *PKBUGCHECK_CALLBACK_ROUTINE;

typedef struct _KBUGCHECK_CALLBACK_RECORD {
    LIST_ENTRY Entry;
    PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine;
      PVOID Buffer;
    ULONG Length;
    PUCHAR Component;
    ULONG_PTR Checksum;
    UCHAR State;
} KBUGCHECK_CALLBACK_RECORD, *PKBUGCHECK_CALLBACK_RECORD;





 

BOOLEAN
KeDeregisterBugCheckCallback (
      PKBUGCHECK_CALLBACK_RECORD CallbackRecord
    );



 

BOOLEAN
KeRegisterBugCheckCallback (
      PKBUGCHECK_CALLBACK_RECORD CallbackRecord,
      PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine,
      PVOID Buffer,
      ULONG Length,
      PUCHAR Component
    );


typedef enum _KBUGCHECK_CALLBACK_REASON {
    KbCallbackInvalid,
    KbCallbackReserved1,
    KbCallbackSecondaryDumpData,
    KbCallbackDumpIo,
    KbCallbackAddPages,
    KbCallbackSecondaryMultiPartDumpData,
    KbCallbackRemovePages,
    KbCallbackTriageDumpData,
    KbCallbackReserved2,
} KBUGCHECK_CALLBACK_REASON;

typedef
 
 
void
KBUGCHECK_REASON_CALLBACK_ROUTINE (
      KBUGCHECK_CALLBACK_REASON Reason,
      struct _KBUGCHECK_REASON_CALLBACK_RECORD* Record,
      PVOID ReasonSpecificData,
      ULONG ReasonSpecificDataLength
    );
typedef KBUGCHECK_REASON_CALLBACK_ROUTINE *PKBUGCHECK_REASON_CALLBACK_ROUTINE;

KBUGCHECK_REASON_CALLBACK_ROUTINE BugCheckSecondaryMultiPartDumpDataCallback;

typedef struct _KBUGCHECK_REASON_CALLBACK_RECORD {
    LIST_ENTRY Entry;
    PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine;
    PUCHAR Component;
    ULONG_PTR Checksum;
    KBUGCHECK_CALLBACK_REASON Reason;
    UCHAR State;
} KBUGCHECK_REASON_CALLBACK_RECORD, *PKBUGCHECK_REASON_CALLBACK_RECORD;


typedef struct _KBUGCHECK_SECONDARY_DUMP_DATA {
     PVOID InBuffer;
     ULONG InBufferLength;
     ULONG MaximumAllowed;
     GUID Guid;
     PVOID OutBuffer;
     ULONG OutBufferLength;
} KBUGCHECK_SECONDARY_DUMP_DATA, *PKBUGCHECK_SECONDARY_DUMP_DATA;

typedef struct _KBUGCHECK_SECONDARY_DUMP_DATA_EX {
         PVOID InBuffer;
         ULONG InBufferLength;
         ULONG MaximumAllowed;
        GUID  Guid;
      PVOID OutBuffer;
      ULONG OutBufferLength;
      PVOID Context;
      ULONG Flags;         
         ULONG DumpType;      
         ULONG BugCheckCode;
         ULONG_PTR BugCheckParameter1;
         ULONG_PTR BugCheckParameter2;
         ULONG_PTR BugCheckParameter3;
         ULONG_PTR BugCheckParameter4;
} KBUGCHECK_SECONDARY_DUMP_DATA_EX, *PKBUGCHECK_SECONDARY_DUMP_DATA_EX;




typedef enum _KBUGCHECK_DUMP_IO_TYPE {
    KbDumpIoInvalid,
    KbDumpIoHeader,
    KbDumpIoBody,
    KbDumpIoSecondaryData,
    KbDumpIoComplete
} KBUGCHECK_DUMP_IO_TYPE;

typedef struct _KBUGCHECK_DUMP_IO {
     ULONG64 Offset;
     PVOID Buffer;
     ULONG BufferLength;
     KBUGCHECK_DUMP_IO_TYPE Type;
} KBUGCHECK_DUMP_IO, *PKBUGCHECK_DUMP_IO;









typedef struct _KBUGCHECK_ADD_PAGES {
      PVOID Context;      
      ULONG Flags;        
      ULONG BugCheckCode;
      ULONG_PTR Address;
      ULONG_PTR Count;
} KBUGCHECK_ADD_PAGES, *PKBUGCHECK_ADD_PAGES;









typedef struct _KBUGCHECK_REMOVE_PAGES {
      PVOID Context;      
      ULONG Flags;        
      ULONG BugCheckCode;
      ULONG_PTR Address;
      ULONG_PTR Count;
} KBUGCHECK_REMOVE_PAGES, *PKBUGCHECK_REMOVE_PAGES;





typedef struct _KADDRESS_RANGE {
      PVOID Address;
    SIZE_T Size;
} KADDRESS_RANGE, *PKADDRESS_RANGE;

typedef struct _KADDRESS_RANGE_DESCRIPTOR {
      const KADDRESS_RANGE *AddressRanges;
    SIZE_T AddressRangeCount;
} KADDRESS_RANGE_DESCRIPTOR, *PKADDRESS_RANGE_DESCRIPTOR;












typedef
 
struct _KTRIAGE_DUMP_DATA_ARRAY {
    LIST_ENTRY List;
    ULONG NumBlocksUsed;
    ULONG NumBlocksTotal;
    ULONG DataSize;
    ULONG MaxDataSize;
    ULONG ComponentNameBufferLength;
    PUCHAR ComponentName;
     
    KADDRESS_RANGE Blocks[1];
} KTRIAGE_DUMP_DATA_ARRAY, *PKTRIAGE_DUMP_DATA_ARRAY;



typedef struct _KBUGCHECK_TRIAGE_DUMP_DATA {
      PKTRIAGE_DUMP_DATA_ARRAY DataArray;
      ULONG Flags; 
      ULONG MaxVirtMemSize;
      ULONG BugCheckCode;
      ULONG_PTR BugCheckParameter1;
      ULONG_PTR BugCheckParameter2;
      ULONG_PTR BugCheckParameter3;
      ULONG_PTR BugCheckParameter4;
} KBUGCHECK_TRIAGE_DUMP_DATA, *PKBUGCHECK_TRIAGE_DUMP_DATA;

 
 
NTSTATUS
KeInitializeTriageDumpDataArray (
      PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray,
      ULONG Size
    );

 
 
NTSTATUS
KeAddTriageDumpDataBlock (
      PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray,
      PVOID Address,
      SIZE_T Size
    );


























 

BOOLEAN
KeDeregisterBugCheckReasonCallback (
      PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord
    );



 

BOOLEAN
KeRegisterBugCheckReasonCallback (
      PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
      PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
      KBUGCHECK_CALLBACK_REASON Reason,
      PUCHAR Component
    );


typedef
 
 
BOOLEAN
NMI_CALLBACK(
      PVOID Context,
      BOOLEAN Handled
    );
typedef NMI_CALLBACK *PNMI_CALLBACK;


 

PVOID
KeRegisterNmiCallback (
      PNMI_CALLBACK CallbackRoutine,
      PVOID Context
    );



 

NTSTATUS
KeDeregisterNmiCallback (
      PVOID Handle
    );





typedef enum _BOUND_CALLBACK_STATUS {
    BoundExceptionContinueSearch = 0,
    BoundExceptionHandled,
    BoundExceptionError,
    BoundExceptionMaximum
} BOUND_CALLBACK_STATUS, *PBOUND_CALLBACK_STATUS;



typedef
 
BOUND_CALLBACK_STATUS
BOUND_CALLBACK(
    void
    );
typedef BOUND_CALLBACK *PBOUND_CALLBACK;



 

PVOID
KeRegisterBoundCallback (
      PBOUND_CALLBACK CallbackRoutine
    );



 

NTSTATUS
KeDeregisterBoundCallback (
      PVOID Handle
    );






 


void
__stdcall
KeBugCheckEx(
      ULONG BugCheckCode,
      ULONG_PTR BugCheckParameter1,
      ULONG_PTR BugCheckParameter2,
      ULONG_PTR BugCheckParameter3,
      ULONG_PTR BugCheckParameter4
    );
























void
KeQuerySystemTimePrecise (
      PLARGE_INTEGER CurrentTime
    );



 
ULONG64
KeQueryInterruptTimePrecise (
      PULONG64 QpcTimeStamp
    );



 
ULONG64
KeQueryUnbiasedInterruptTimePrecise (
      PULONG64 QpcTimeStamp
    );




ULONG
KeQueryTimeIncrement (
    void
    );




ULONGLONG
KeQueryUnbiasedInterruptTime (
    void
    );




ULONG
KeGetRecommendedSharedDataAlignment (
    void
    );






KAFFINITY
KeQueryActiveProcessors (
    void
    );




ULONG
KeQueryActiveProcessorCount (
      PKAFFINITY ActiveProcessors
    );




ULONG
KeQueryActiveProcessorCountEx (
      USHORT GroupNumber
    );




ULONG
KeQueryMaximumProcessorCount (
    void
    );




ULONG
KeQueryMaximumProcessorCountEx (
      USHORT GroupNumber
    );




USHORT
KeQueryActiveGroupCount (
    void
    );




USHORT
KeQueryMaximumGroupCount (
    void
    );




KAFFINITY
KeQueryGroupAffinity (
      USHORT GroupNumber
    );




ULONG
KeGetCurrentProcessorNumberEx (
      PPROCESSOR_NUMBER ProcNumber
    );




void
KeQueryNodeActiveAffinity (
      USHORT NodeNumber,
      PGROUP_AFFINITY Affinity,
      PUSHORT Count
    );




USHORT
KeQueryNodeMaximumProcessorCount (
      USHORT NodeNumber
    );




USHORT
KeQueryHighestNodeNumber (
    void
    );




USHORT
KeGetCurrentNodeNumber (
    void
    );



 


NTSTATUS
KeQueryLogicalProcessorRelationship (
      PPROCESSOR_NUMBER ProcessorNumber,
      LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
      PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
     PULONG Length
    );


 

LOGICAL
KeShouldYieldProcessor (
    void
    );



NTSTATUS
KeQueryNodeActiveAffinity2 (
      USHORT NodeNumber,
     
    PGROUP_AFFINITY GroupAffinities,
      USHORT GroupAffinitiesCount,
      PUSHORT GroupAffinitiesRequired
    );




ULONG
KeQueryNodeActiveProcessorCount (
      USHORT NodeNumber
    );











typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
} MEMORY_CACHING_TYPE_ORIG;

typedef enum _MEMORY_CACHING_TYPE {
    MmNonCached = 0,
    MmCached = 1,
    MmWriteCombined = MmFrameBufferCached,
    MmHardwareCoherentCached,
    MmNonCachedUnordered,       
    MmUSWCCached,
    MmMaximumCacheType,
    MmNotMapped = -1
} MEMORY_CACHING_TYPE;




 
 

BOOLEAN
KeAreAllApcsDisabled (
    void
    );



 
 

void

KeInitializeGuardedMutex (
      PKGUARDED_MUTEX Mutex
    );






 
 

void

KeAcquireGuardedMutex (
      PKGUARDED_MUTEX Mutex
    );






 

void

KeReleaseGuardedMutex (
      PKGUARDED_MUTEX Mutex
    );



 
 
 
 

BOOLEAN

KeTryToAcquireGuardedMutex (
     
      PKGUARDED_MUTEX Mutex
    );





 
 

void

KeAcquireGuardedMutexUnsafe (
      PKGUARDED_MUTEX FastMutex
    );





 

void

KeReleaseGuardedMutexUnsafe (
      PKGUARDED_MUTEX FastMutex
    );







typedef enum {
    KeProcessorAddStartNotify = 0,
    KeProcessorAddCompleteNotify,
    KeProcessorAddFailureNotify
} KE_PROCESSOR_CHANGE_NOTIFY_STATE;

typedef struct _KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT {
    KE_PROCESSOR_CHANGE_NOTIFY_STATE State;
    ULONG NtNumber;
    NTSTATUS Status;



    PROCESSOR_NUMBER ProcNumber;




} KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT, *PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT;

typedef
 
 
void
PROCESSOR_CALLBACK_FUNCTION (
      PVOID CallbackContext,
      PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
      PNTSTATUS OperationStatus
    );

typedef PROCESSOR_CALLBACK_FUNCTION *PPROCESSOR_CALLBACK_FUNCTION;




 
PVOID
KeRegisterProcessorChangeCallback (
      PPROCESSOR_CALLBACK_FUNCTION CallbackFunction,
      PVOID CallbackContext,
      ULONG Flags
    );



 
void
KeDeregisterProcessorChangeCallback (
      PVOID CallbackHandle
    );





NTSTATUS
KeGetProcessorNumberFromIndex (
      ULONG ProcIndex,
      PPROCESSOR_NUMBER ProcNumber
    );

ULONG
KeGetProcessorIndexFromNumber (
      PPROCESSOR_NUMBER ProcNumber
    );


typedef struct _XSTATE_SAVE {



    struct _XSTATE_SAVE* Prev;
    struct _KTHREAD* Thread;
    UCHAR Level;
    XSTATE_CONTEXT XStateContext;



























} XSTATE_SAVE, *PXSTATE_SAVE;



 
 



NTSTATUS
__stdcall
KeSaveExtendedProcessorState (
      ULONG64 Mask,
      PXSTATE_SAVE XStateSave
    );

 
 


void
__stdcall
KeRestoreExtendedProcessorState (
      PXSTATE_SAVE XStateSave
    );




typedef struct _EXT_SET_PARAMETERS_V0 {
    ULONG Version;
    ULONG Reserved;
    LONGLONG NoWakeTolerance;
} EXT_SET_PARAMETERS, *PEXT_SET_PARAMETERS;

typedef EXT_SET_PARAMETERS KT2_SET_PARAMETERS, *PKT2_SET_PARAMETERS;



void
KeInitializeTimer2SetParameters (
      PKT2_SET_PARAMETERS Parameters
    )























;





NTSTATUS
KeConvertAuxiliaryCounterToPerformanceCounter (
      ULONG64 AuxiliaryCounterValue,
      PULONG64 PerformanceCounterValue,
      PULONG64 ConversionError
    );

NTSTATUS
KeConvertPerformanceCounterToAuxiliaryCounter (
      ULONG64 PerformanceCounterValue,
      PULONG64 AuxiliaryCounterValue,
      PULONG64 ConversionError
    );

NTSTATUS
KeQueryAuxiliaryCounterFrequency (
      PULONG64 AuxiliaryCounterFrequency
    );




typedef struct _KWAIT_CHAIN {
    PVOID Head;
} KWAIT_CHAIN, *PKWAIT_CHAIN;







extern PBOOLEAN KdDebuggerNotPresent;
extern PBOOLEAN KdDebuggerEnabled;














NTSTATUS
KdDisableDebugger(
    void
    );




NTSTATUS
KdEnableDebugger(
    void
    );














BOOLEAN
KdRefreshDebuggerNotPresent(
    void
    );


typedef enum _KD_OPTION {
    KD_OPTION_SET_BLOCK_ENABLE,
} KD_OPTION;


NTSTATUS
KdChangeOption(
      KD_OPTION Option,
      ULONG InBufferBytes ,
      PVOID InBuffer,
      ULONG OutBufferBytes ,
      PVOID OutBuffer,
      PULONG OutBufferNeeded 
    );







typedef   enum _POOL_TYPE {
    NonPagedPool,
    NonPagedPoolExecute = NonPagedPool,
    PagedPool,
    NonPagedPoolMustSucceed = NonPagedPool + 2,
    DontUseThisType,
    NonPagedPoolCacheAligned = NonPagedPool + 4,
    PagedPoolCacheAligned,
    NonPagedPoolCacheAlignedMustS = NonPagedPool + 6,
    MaxPoolType,

    
    
    
    

    NonPagedPoolBase = 0,
    NonPagedPoolBaseMustSucceed = NonPagedPoolBase + 2,
    NonPagedPoolBaseCacheAligned = NonPagedPoolBase + 4,
    NonPagedPoolBaseCacheAlignedMustS = NonPagedPoolBase + 6,

    
    
    
    

    NonPagedPoolSession = 32,
    PagedPoolSession = NonPagedPoolSession + 1,
    NonPagedPoolMustSucceedSession = PagedPoolSession + 1,
    DontUseThisTypeSession = NonPagedPoolMustSucceedSession + 1,
    NonPagedPoolCacheAlignedSession = DontUseThisTypeSession + 1,
    PagedPoolCacheAlignedSession = NonPagedPoolCacheAlignedSession + 1,
    NonPagedPoolCacheAlignedMustSSession = PagedPoolCacheAlignedSession + 1,

    NonPagedPoolNx = 512,
    NonPagedPoolNxCacheAligned = NonPagedPoolNx + 4,
    NonPagedPoolSessionNx = NonPagedPoolNx + 32,

}   POOL_TYPE;



























































































































 
 





 

PVOID
ExAllocatePool (
        POOL_TYPE PoolType,
      SIZE_T NumberOfBytes
    );







 
 





 

PVOID
ExAllocatePoolWithQuota (
        POOL_TYPE PoolType,
      SIZE_T NumberOfBytes
    );







 





 

PVOID
__stdcall
ExAllocatePoolWithTag (
        POOL_TYPE PoolType,
      SIZE_T NumberOfBytes,
      ULONG Tag
    );




























typedef   enum _EX_POOL_PRIORITY {
    LowPoolPriority,
    LowPoolPrioritySpecialPoolOverrun = 8,
    LowPoolPrioritySpecialPoolUnderrun = 9,
    NormalPoolPriority = 16,
    NormalPoolPrioritySpecialPoolOverrun = 24,
    NormalPoolPrioritySpecialPoolUnderrun = 25,
    HighPoolPriority = 32,
    HighPoolPrioritySpecialPoolOverrun = 40,
    HighPoolPrioritySpecialPoolUnderrun = 41
} EX_POOL_PRIORITY;





 





 

PVOID
__stdcall
ExAllocatePoolWithTagPriority (
        POOL_TYPE PoolType,
      SIZE_T NumberOfBytes,
      ULONG Tag,
        EX_POOL_PRIORITY Priority
    );





typedef enum POOL_EXTENDED_PARAMETER_TYPE {
    PoolExtendedParameterInvalidType = 0,
    PoolExtendedParameterPriority,
    PoolExtendedParameterSecurePool,
    PoolExtendedParameterNumaNode,
    PoolExtendedParameterMax
} POOL_EXTENDED_PARAMETER_TYPE, *PPOOL_EXTENDED_PARAMETER_TYPE;









typedef struct _POOL_EXTENDED_PARAMS_SECURE_POOL {
    HANDLE SecurePoolHandle;
    PVOID Buffer;
    ULONG_PTR Cookie;
    ULONG SecurePoolFlags;
} POOL_EXTENDED_PARAMS_SECURE_POOL;

typedef ULONG POOL_NODE_REQUIREMENT;

typedef struct _POOL_EXTENDED_PARAMETER {
    struct {
        ULONG64 Type : 8;
        ULONG64 Optional : 1;
        ULONG64 Reserved : (64 - 8 - 1);
    } ;

    union {
        ULONG64 Reserved2;
        PVOID Reserved3;
        EX_POOL_PRIORITY Priority;
        POOL_EXTENDED_PARAMS_SECURE_POOL* SecurePoolParams;
        POOL_NODE_REQUIREMENT PreferredNode;
    } ;
} POOL_EXTENDED_PARAMETER, *PPOOL_EXTENDED_PARAMETER;
typedef const POOL_EXTENDED_PARAMETER *PCPOOL_EXTENDED_PARAMETER;


typedef

ULONG64 POOL_FLAGS;


 
 
 



 

PVOID
__stdcall
ExAllocatePool2 (
      POOL_FLAGS Flags,
      SIZE_T NumberOfBytes,
      ULONG Tag
    );

 
 
 



 

PVOID
__stdcall
ExAllocatePool3 (
      POOL_FLAGS Flags,
      SIZE_T NumberOfBytes,
      ULONG Tag,
      PCPOOL_EXTENDED_PARAMETER ExtendedParameters,
      ULONG ExtendedParametersCount
    );

 

void
__stdcall
ExFreePool2 (
        PVOID P,
      ULONG Tag,
      PCPOOL_EXTENDED_PARAMETER ExtendedParameters,
      ULONG ExtendedParametersCount
    );








typedef struct _POOL_CREATE_EXTENDED_PARAMS {
    ULONG Version;
} POOL_CREATE_EXTENDED_PARAMS, *PPOOL_CREATE_EXTENDED_PARAMS;

NTSTATUS
ExCreatePool (
      ULONG Flags,
      ULONG_PTR Tag,
      POOL_CREATE_EXTENDED_PARAMS* Params,
      HANDLE* PoolHandle
    );

void
ExDestroyPool (
      HANDLE PoolHandle
    );

NTSTATUS
ExSecurePoolUpdate (
      HANDLE SecurePoolHandle,
      ULONG Tag,
      PVOID Allocation,
      ULONG_PTR Cookie,
      SIZE_T Offset,
      SIZE_T Size,
      PVOID Buffer
    );

LOGICAL
ExSecurePoolValidate (
      HANDLE SecurePoolHandle,
      ULONG Tag,
      PVOID Allocation,
      ULONG_PTR Cookie
    );











 





 

PVOID
ExAllocatePoolWithQuotaTag (
        POOL_TYPE PoolType,
      SIZE_T NumberOfBytes,
      ULONG Tag
    );













 BOOLEAN ExPoolZeroingNativelySupported = 0;







 





 
PVOID
__stdcall
ExAllocatePoolZero (
        POOL_TYPE PoolType,
      SIZE_T NumberOfBytes,
      ULONG Tag
    )
;


 





 
PVOID
__stdcall
ExAllocatePoolUninitialized (
        POOL_TYPE PoolType,
      SIZE_T NumberOfBytes,
      ULONG Tag
    )
;


 





 
PVOID
__stdcall
ExAllocatePoolQuotaZero (
        POOL_TYPE PoolType,
      SIZE_T NumberOfBytes,
      ULONG Tag
    )
;


 





 
PVOID
__stdcall
ExAllocatePoolQuotaUninitialized (
        POOL_TYPE PoolType,
      SIZE_T NumberOfBytes,
      ULONG Tag
    )
;


 





 
PVOID
__stdcall
ExAllocatePoolPriorityZero (
        POOL_TYPE PoolType,
      SIZE_T NumberOfBytes,
      ULONG Tag,
      EX_POOL_PRIORITY Priority
    )
;


 





 
PVOID
__stdcall
ExAllocatePoolPriorityUninitialized (
        POOL_TYPE PoolType,
      SIZE_T NumberOfBytes,
      ULONG Tag,
      EX_POOL_PRIORITY Priority
    )
;









 

void
__stdcall
ExFreePool (
        PVOID P
    );






 

void
ExFreePoolWithTag (
        PVOID P,
      ULONG Tag
    );












void
ExInitializeFastMutex (
      PFAST_MUTEX FastMutex
    )

















;



 


void

ExAcquireFastMutexUnsafe(
       
    PFAST_MUTEX FastMutex
    );





 


void

ExReleaseFastMutexUnsafe(
       
    PFAST_MUTEX FastMutex
    );






 
 

void

ExAcquireFastMutex (
       
    PFAST_MUTEX FastMutex
    );





 
 

void

ExReleaseFastMutex (
       
    PFAST_MUTEX FastMutex
    );





 
 
 
 

BOOLEAN

ExTryToAcquireFastMutex (
       
    PFAST_MUTEX FastMutex
    );







































LARGE_INTEGER
ExInterlockedAddLargeInteger (
      PLARGE_INTEGER Addend,
      LARGE_INTEGER Increment,
       PKSPIN_LOCK Lock
    );







ULONG

ExInterlockedAddUlong (
      PULONG Addend,
      ULONG Increment,
       PKSPIN_LOCK Lock
    );




























PLIST_ENTRY

ExInterlockedInsertHeadList (
      PLIST_ENTRY ListHead,
        PLIST_ENTRY ListEntry,
       PKSPIN_LOCK Lock
    );






PLIST_ENTRY

ExInterlockedInsertTailList (
      PLIST_ENTRY ListHead,
        PLIST_ENTRY ListEntry,
       PKSPIN_LOCK Lock
    );






PLIST_ENTRY

ExInterlockedRemoveHeadList (
      PLIST_ENTRY ListHead,
       PKSPIN_LOCK Lock
    );






PSINGLE_LIST_ENTRY

ExInterlockedPopEntryList (
      PSINGLE_LIST_ENTRY ListHead,
       PKSPIN_LOCK Lock
    );






PSINGLE_LIST_ENTRY

ExInterlockedPushEntryList (
      PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
       PKSPIN_LOCK Lock
    );























void
InitializeSListHead (
      PSLIST_HEADER SListHead
    );







































































PSLIST_ENTRY
FirstEntrySList (
      PSLIST_HEADER SListHead
    );










USHORT
ExQueryDepthSList (
      PSLIST_HEADER SListHead
    );



















































































PSLIST_ENTRY
ExpInterlockedPopEntrySList (
      PSLIST_HEADER ListHead
    );


PSLIST_ENTRY
ExpInterlockedPushEntrySList (
      PSLIST_HEADER ListHead,
        PSLIST_ENTRY ListEntry
    );


PSLIST_ENTRY
ExpInterlockedFlushSList (
      PSLIST_HEADER ListHead
    );







































































typedef struct _LOOKASIDE_LIST_EX {
    GENERAL_LOOKASIDE_POOL L;
} LOOKASIDE_LIST_EX, *PLOOKASIDE_LIST_EX;









 

NTSTATUS
ExInitializeLookasideListEx (
      PLOOKASIDE_LIST_EX Lookaside,
      PALLOCATE_FUNCTION_EX Allocate,
      PFREE_FUNCTION_EX Free,
      POOL_TYPE PoolType,
      ULONG Flags,
      SIZE_T Size,
      ULONG Tag,
      USHORT Depth
    );

 

void
ExDeleteLookasideListEx (
      PLOOKASIDE_LIST_EX Lookaside
    );

 

void
ExFlushLookasideListEx (
      PLOOKASIDE_LIST_EX Lookaside
    );



 
 
 

PVOID
ExAllocateFromLookasideListEx (
      PLOOKASIDE_LIST_EX Lookaside
    );

 

void
ExFreeToLookasideListEx (
      PLOOKASIDE_LIST_EX Lookaside,
        PVOID Entry
    );































































































typedef struct  _NPAGED_LOOKASIDE_LIST {

    GENERAL_LOOKASIDE L;







} NPAGED_LOOKASIDE_LIST, *PNPAGED_LOOKASIDE_LIST;



 

void
ExInitializeNPagedLookasideList (
      PNPAGED_LOOKASIDE_LIST Lookaside,
      PALLOCATE_FUNCTION Allocate,
      PFREE_FUNCTION Free,
      ULONG Flags,
      SIZE_T Size,
      ULONG Tag,
      USHORT Depth
    );

















































 

void
ExDeleteNPagedLookasideList (
      PNPAGED_LOOKASIDE_LIST Lookaside
    );





 
 
 
 

PVOID
ExAllocateFromNPagedLookasideList (
      PNPAGED_LOOKASIDE_LIST Lookaside
    );

 

void
ExFreeToNPagedLookasideList (
      PNPAGED_LOOKASIDE_LIST Lookaside,
        PVOID Entry
    );






















































































































typedef struct  _PAGED_LOOKASIDE_LIST {

    GENERAL_LOOKASIDE L;







} PAGED_LOOKASIDE_LIST, *PPAGED_LOOKASIDE_LIST;




 

void
ExInitializePagedLookasideList (
      PPAGED_LOOKASIDE_LIST Lookaside,
      PALLOCATE_FUNCTION Allocate,
      PFREE_FUNCTION Free,
      ULONG Flags,
      SIZE_T Size,
      ULONG Tag,
      USHORT Depth
    );





 

void
ExDeletePagedLookasideList (
      PPAGED_LOOKASIDE_LIST Lookaside
    );





 

PVOID
ExAllocateFromPagedLookasideList (
      PPAGED_LOOKASIDE_LIST Lookaside
    );






















































 

void
ExFreeToPagedLookasideList (
      PPAGED_LOOKASIDE_LIST Lookaside,
      PVOID Entry
    );




































































 
 

void
__stdcall
ProbeForRead (
       volatile void *Address,
      SIZE_T Length,
      ULONG Alignment
    );













 


void
__stdcall
ExRaiseStatus (
      NTSTATUS Status
    );











 
 

void
__stdcall
ProbeForWrite (
       volatile void *Address,
      SIZE_T Length,
      ULONG Alignment
    );








typedef   enum _WORK_QUEUE_TYPE {
    CriticalWorkQueue,
    DelayedWorkQueue,
    HyperCriticalWorkQueue,
    NormalWorkQueue,
    BackgroundWorkQueue,
    RealTimeWorkQueue,
    SuperCriticalWorkQueue,
    MaximumWorkQueue,
    CustomPriorityWorkQueue = 32
} WORK_QUEUE_TYPE;

typedef
 
 
 
void
WORKER_THREAD_ROUTINE (
      PVOID Parameter
    );

typedef WORKER_THREAD_ROUTINE *PWORKER_THREAD_ROUTINE;

typedef struct _WORK_QUEUE_ITEM {
    LIST_ENTRY List;
    PWORKER_THREAD_ROUTINE WorkerRoutine;
     PVOID Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM;

                  

void
ExInitializeWorkItem (
         PWORK_QUEUE_ITEM Item,
      PWORKER_THREAD_ROUTINE Routine,
      PVOID Context
    )
;












 
 

void
ExQueueWorkItem(
        PWORK_QUEUE_ITEM WorkItem,
      WORK_QUEUE_TYPE QueueType
    );






 
 

BOOLEAN
ExIsProcessorFeaturePresent(
      ULONG ProcessorFeature
    );








typedef ULONG_PTR ERESOURCE_THREAD;
typedef ERESOURCE_THREAD *PERESOURCE_THREAD;

typedef struct _OWNER_ENTRY {
    ERESOURCE_THREAD OwnerThread;
    union {
        struct {
            ULONG IoPriorityBoosted : 1;
            ULONG OwnerReferenced   : 1;
            ULONG IoQoSPriorityBoosted : 1;
            ULONG OwnerCount        : 29;
        };
        ULONG TableSize;
    };

} OWNER_ENTRY, *POWNER_ENTRY;

typedef struct _ERESOURCE {
    LIST_ENTRY SystemResourcesList;
    POWNER_ENTRY OwnerTable;

    
    
    
    
    
    

    SHORT ActiveCount;
    union {
        USHORT Flag;
        struct {
            UCHAR ReservedLowFlags;
            UCHAR WaiterPriority;
        };
    };

    PVOID SharedWaiters;
    PVOID ExclusiveWaiters;

    
    
    
    
    
    
    

    OWNER_ENTRY OwnerEntry;
    ULONG ActiveEntries;
    ULONG ContentionCount;
    ULONG NumberOfSharedWaiters;
    ULONG NumberOfExclusiveWaiters;



    PVOID Reserved2;



    union {
        PVOID Address;
        ULONG_PTR CreatorBackTraceIndex;
    };

    KSPIN_LOCK SpinLock;
} ERESOURCE, *PERESOURCE;












typedef struct _RESOURCE_HASH_ENTRY {
    LIST_ENTRY ListEntry;
    PVOID Address;
    ULONG ContentionCount;
    ULONG Number;
} RESOURCE_HASH_ENTRY, *PRESOURCE_HASH_ENTRY;

typedef struct _RESOURCE_PERFORMANCE_DATA {
    ULONG ActiveResourceCount;
    ULONG TotalResourceCount;
    ULONG ExclusiveAcquire;
    ULONG SharedFirstLevel;
    ULONG SharedSecondLevel;
    ULONG StarveFirstLevel;
    ULONG StarveSecondLevel;
    ULONG WaitForExclusive;
    ULONG OwnerTableExpands;
    ULONG MaximumTableExpand;
    LIST_ENTRY HashTable[64];
} RESOURCE_PERFORMANCE_DATA, *PRESOURCE_PERFORMANCE_DATA;







 

NTSTATUS
ExInitializeResourceLite (
      PERESOURCE Resource
    );





 

NTSTATUS
ExReinitializeResourceLite (
      PERESOURCE Resource
    );





 




BOOLEAN
ExAcquireResourceSharedLite (
      
    
    PERESOURCE Resource,
      BOOLEAN Wait
    );





 


PVOID
ExEnterCriticalRegionAndAcquireResourceShared (
       
    PERESOURCE Resource
    );






 




BOOLEAN
ExAcquireResourceExclusiveLite (
      
    
    PERESOURCE Resource,
        BOOLEAN Wait
    );





 


PVOID
ExEnterCriticalRegionAndAcquireResourceExclusive (
       
    PERESOURCE Resource
    );






 




BOOLEAN
ExAcquireSharedStarveExclusive(
      
    
    PERESOURCE Resource,
      BOOLEAN Wait
    );





 




BOOLEAN
ExAcquireSharedWaitForExclusive(
      
    
    PERESOURCE Resource,
      BOOLEAN Wait
    );





 


PVOID
ExEnterCriticalRegionAndAcquireSharedWaitForExclusive (
       
    PERESOURCE Resource
    );




















 

void

ExReleaseResourceLite(
      PERESOURCE Resource
    );





 


void

ExReleaseResourceAndLeaveCriticalRegion(
       
    PERESOURCE Resource
    );






 


void
ExReleaseResourceForThreadLite(
       
    PERESOURCE Resource,
      ERESOURCE_THREAD ResourceThreadId
    );





 

void
ExSetResourceOwnerPointer(
      PERESOURCE Resource,
      PVOID OwnerPointer
    );





 

void
ExSetResourceOwnerPointerEx(
      PERESOURCE Resource,
      PVOID OwnerPointer,
      ULONG Flags
    );







 

void
ExConvertExclusiveToSharedLite(
       PERESOURCE Resource
    );





 

NTSTATUS
ExDeleteResourceLite (
      PERESOURCE Resource
    );





 

ULONG
ExGetExclusiveWaiterCount (
      PERESOURCE Resource
    );





 

ULONG
ExGetSharedWaiterCount (
      PERESOURCE Resource
    );















 

BOOLEAN
ExIsResourceAcquiredExclusiveLite (
      PERESOURCE Resource
    );





 

ULONG
ExIsResourceAcquiredSharedLite (
      PERESOURCE Resource
    );


























typedef struct _EX_RUNDOWN_REF {





    union {
         ULONG_PTR Count;
         PVOID Ptr;
    };
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF;





typedef struct _EX_RUNDOWN_REF_CACHE_AWARE  *PEX_RUNDOWN_REF_CACHE_AWARE;








 

KPROCESSOR_MODE
ExGetPreviousMode(
    void
    );










 

ULONG
ExSetTimerResolution (
      ULONG DesiredTime,
      BOOLEAN SetResolution
    );










void
ExQueryTimerResolution (
      PULONG MaximumTime,
      PULONG MinimumTime,
      PULONG CurrentTime
    );










void
ExSystemTimeToLocalTime (
      PLARGE_INTEGER SystemTime,
      PLARGE_INTEGER LocalTime
    );










void
ExLocalTimeToSystemTime (
      PLARGE_INTEGER LocalTime,
      PLARGE_INTEGER SystemTime
    );




typedef struct _EX_TIMER *PEX_TIMER;

 
 
 
typedef
void
EXT_CALLBACK (
      PEX_TIMER Timer,
      PVOID Context
    );

typedef EXT_CALLBACK *PEXT_CALLBACK;

 
 
 
typedef
void
EXT_DELETE_CALLBACK (
      PVOID Context
    );

typedef EXT_DELETE_CALLBACK *PEXT_DELETE_CALLBACK;
typedef PVOID PEXT_CANCEL_PARAMETERS;
typedef struct _EXT_DELETE_PARAMETERS {
    ULONG Version;
    ULONG Reserved;
    PEXT_DELETE_CALLBACK DeleteCallback;
    PVOID DeleteContext;
} EXT_DELETE_PARAMETERS, *PEXT_DELETE_PARAMETERS;









PEX_TIMER
ExAllocateTimer (
      PEXT_CALLBACK Callback,
      PVOID CallbackContext,
      ULONG Attributes
    );


BOOLEAN
ExSetTimer (
      PEX_TIMER Timer,
      LONGLONG DueTime,
      LONGLONG Period,
      PEXT_SET_PARAMETERS Parameters
    );


BOOLEAN
ExCancelTimer (
      PEX_TIMER Timer,
      PEXT_CANCEL_PARAMETERS Parameters
    );


BOOLEAN
ExDeleteTimer (
      PEX_TIMER Timer,
      BOOLEAN Cancel,
      BOOLEAN Wait,
      PEXT_DELETE_PARAMETERS Parameters
    );


void
ExInitializeSetTimerParameters (
      PEXT_SET_PARAMETERS Parameters
    )























;


void
ExInitializeDeleteTimerParameters (
      PEXT_DELETE_PARAMETERS Parameters
    )























;









typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT;

typedef
 
 
void
CALLBACK_FUNCTION (
      PVOID CallbackContext,
      PVOID Argument1,
      PVOID Argument2
    );

typedef CALLBACK_FUNCTION *PCALLBACK_FUNCTION;




 

NTSTATUS
ExCreateCallback (
     PCALLBACK_OBJECT *CallbackObject,
      POBJECT_ATTRIBUTES ObjectAttributes,
      BOOLEAN Create,
      BOOLEAN AllowMultipleCallbacks
    );





 

PVOID
ExRegisterCallback (
      PCALLBACK_OBJECT CallbackObject,
      PCALLBACK_FUNCTION CallbackFunction,
      PVOID CallbackContext
    );





 

void
ExUnregisterCallback (
      PVOID CallbackRegistration
    );





 

void
ExNotifyCallback (
      PVOID CallbackObject,
      PVOID Argument1,
      PVOID Argument2
    );











BOOLEAN
ExVerifySuite(
        SUITE_TYPE SuiteType
    );











void

ExInitializeRundownProtection (
      PEX_RUNDOWN_REF RunRef
    );






void

ExReInitializeRundownProtection (
      PEX_RUNDOWN_REF RunRef
    );





 
 

BOOLEAN

ExAcquireRundownProtection (
      PEX_RUNDOWN_REF RunRef
    );





 
 

BOOLEAN

ExAcquireRundownProtectionEx (
      PEX_RUNDOWN_REF RunRef,
      ULONG Count
    );





 

void

ExReleaseRundownProtection (
      PEX_RUNDOWN_REF RunRef
    );





 

void

ExReleaseRundownProtectionEx (
      PEX_RUNDOWN_REF RunRef,
      ULONG Count
    );






void

ExRundownCompleted (
      PEX_RUNDOWN_REF RunRef
    );





 

void

ExWaitForRundownProtectionRelease (
      PEX_RUNDOWN_REF RunRef
    );





 
 

PEX_RUNDOWN_REF_CACHE_AWARE
ExAllocateCacheAwareRundownProtection(
        POOL_TYPE PoolType,
      ULONG PoolTag
    );





 

SIZE_T
ExSizeOfRundownProtectionCacheAware(
    void
    );





 

void
ExInitializeRundownProtectionCacheAware(
      PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware,
      SIZE_T RunRefSize
    );





 

void
ExFreeCacheAwareRundownProtection(
      PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );





 
 

BOOLEAN

ExAcquireRundownProtectionCacheAware (
      PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );






void

ExReleaseRundownProtectionCacheAware (
      PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );





 
 

BOOLEAN

ExAcquireRundownProtectionCacheAwareEx (
      PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware,
      ULONG Count
    );






void

ExReleaseRundownProtectionCacheAwareEx (
      PEX_RUNDOWN_REF_CACHE_AWARE RunRef,
      ULONG Count
    );






void

ExWaitForRundownProtectionReleaseCacheAware (
      PEX_RUNDOWN_REF_CACHE_AWARE RunRef
    );






void

ExReInitializeRundownProtectionCacheAware (
      PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );






void

ExRundownCompletedCacheAware (
      PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );
















 

void
ExInitializeRundownProtectionCacheAwareEx (
      PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware,
      ULONG Flags
    );









 

void
ExCleanupRundownProtectionCacheAware (
      PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware
    );






void
ExInitializePushLock (
      PULONG_PTR PushLock
    );



 


void

ExAcquirePushLockExclusiveEx (
       
    PULONG_PTR PushLock,
      ULONG Flags
    );

 


void

ExAcquirePushLockSharedEx (
       
    PULONG_PTR PushLock,
      ULONG Flags
    );


 


void

ExReleasePushLockExclusiveEx (
       
    PULONG_PTR PushLock,
      ULONG Flags
    );

 


void

ExReleasePushLockSharedEx (
       
    PULONG_PTR PushLock,
      ULONG Flags
    );























 

NTSTATUS
ExInitializeDeviceAts (
      struct _DEVICE_OBJECT *PhysicalDeviceObject,
      ULONG Flags
    );







typedef volatile LONG EX_SPIN_LOCK, *PEX_SPIN_LOCK;




 

void
ExAcquireSpinLockSharedAtDpcLevel (
       
    PEX_SPIN_LOCK SpinLock
    );

 
 

KIRQL
ExAcquireSpinLockShared (
       
    PEX_SPIN_LOCK SpinLock
    );

 

void
ExReleaseSpinLockSharedFromDpcLevel (
       
    PEX_SPIN_LOCK SpinLock
    );

 

void
ExReleaseSpinLockShared (
       
    PEX_SPIN_LOCK SpinLock,
        KIRQL OldIrql
    );

 
 
 

LOGICAL
ExTryConvertSharedSpinLockExclusive (
      PEX_SPIN_LOCK SpinLock
    );

 

void
ExAcquireSpinLockExclusiveAtDpcLevel (
       
    PEX_SPIN_LOCK SpinLock
    );

 
 

KIRQL
ExAcquireSpinLockExclusive (
       
    PEX_SPIN_LOCK SpinLock
    );

 

void
ExReleaseSpinLockExclusiveFromDpcLevel (
       
    PEX_SPIN_LOCK SpinLock
    );

 

void
ExReleaseSpinLockExclusive (
       
    PEX_SPIN_LOCK SpinLock,
        KIRQL OldIrql
    );





 
LOGICAL
ExTryAcquireSpinLockSharedAtDpcLevel (
    
     
    PEX_SPIN_LOCK SpinLock
    );

 
LOGICAL
ExTryAcquireSpinLockExclusiveAtDpcLevel (
    
     
    PEX_SPIN_LOCK SpinLock
    );








typedef
 
 
NTSTATUS
EX_CALLBACK_FUNCTION (
      PVOID CallbackContext,
      PVOID Argument1,
      PVOID Argument2
    );

typedef EX_CALLBACK_FUNCTION *PEX_CALLBACK_FUNCTION;




NTSTATUS
ExGetFirmwareEnvironmentVariable (
      PUNICODE_STRING VariableName,
      LPGUID VendorGuid,
      PVOID Value,
      PULONG ValueLength,
      PULONG Attributes
    );


NTSTATUS
ExSetFirmwareEnvironmentVariable (
      PUNICODE_STRING VariableName,
      LPGUID VendorGuid,
      PVOID Value,
      ULONG ValueLength,
      ULONG Attributes
    );





 

BOOLEAN
ExIsManufacturingModeEnabled (
    void
    );





 

BOOLEAN
ExIsSoftBoot (
    void
    );



 

FIRMWARE_TYPE
ExGetFirmwareType (
    void
    );




 

NTSTATUS
ExEnumerateSystemFirmwareTables(
      ULONG FirmwareTableProviderSignature,
      PVOID FirmwareTableBuffer,
      ULONG BufferLength,
      PULONG ReturnLength
    );

 

NTSTATUS
ExGetSystemFirmwareTable(
      ULONG FirmwareTableProviderSignature,
      ULONG FirmwareTableID,
      PVOID FirmwareTableBuffer,
      ULONG BufferLength,
      PULONG ReturnLength
    );











typedef enum _REG_NOTIFY_CLASS {
    RegNtDeleteKey,
    RegNtPreDeleteKey = RegNtDeleteKey,
    RegNtSetValueKey,
    RegNtPreSetValueKey = RegNtSetValueKey,
    RegNtDeleteValueKey,
    RegNtPreDeleteValueKey = RegNtDeleteValueKey,
    RegNtSetInformationKey,
    RegNtPreSetInformationKey = RegNtSetInformationKey,
    RegNtRenameKey,
    RegNtPreRenameKey = RegNtRenameKey,
    RegNtEnumerateKey,
    RegNtPreEnumerateKey = RegNtEnumerateKey,
    RegNtEnumerateValueKey,
    RegNtPreEnumerateValueKey = RegNtEnumerateValueKey,
    RegNtQueryKey,
    RegNtPreQueryKey = RegNtQueryKey,
    RegNtQueryValueKey,
    RegNtPreQueryValueKey = RegNtQueryValueKey,
    RegNtQueryMultipleValueKey,
    RegNtPreQueryMultipleValueKey = RegNtQueryMultipleValueKey,
    RegNtPreCreateKey,
    RegNtPostCreateKey,
    RegNtPreOpenKey,
    RegNtPostOpenKey,
    RegNtKeyHandleClose,
    RegNtPreKeyHandleClose = RegNtKeyHandleClose,
    
    
    
    RegNtPostDeleteKey,
    RegNtPostSetValueKey,
    RegNtPostDeleteValueKey,
    RegNtPostSetInformationKey,
    RegNtPostRenameKey,
    RegNtPostEnumerateKey,
    RegNtPostEnumerateValueKey,
    RegNtPostQueryKey,
    RegNtPostQueryValueKey,
    RegNtPostQueryMultipleValueKey,
    RegNtPostKeyHandleClose,
    RegNtPreCreateKeyEx,
    RegNtPostCreateKeyEx,
    RegNtPreOpenKeyEx,
    RegNtPostOpenKeyEx,
    
    
    
    RegNtPreFlushKey,
    RegNtPostFlushKey,
    RegNtPreLoadKey,
    RegNtPostLoadKey,
    RegNtPreUnLoadKey,
    RegNtPostUnLoadKey,
    RegNtPreQueryKeySecurity,
    RegNtPostQueryKeySecurity,
    RegNtPreSetKeySecurity,
    RegNtPostSetKeySecurity,
    
    
    
    RegNtCallbackObjectContextCleanup,
    
    
    
    RegNtPreRestoreKey,
    RegNtPostRestoreKey,
    RegNtPreSaveKey,
    RegNtPostSaveKey,
    RegNtPreReplaceKey,
    RegNtPostReplaceKey,
    
    
    
    RegNtPreQueryKeyName,
    RegNtPostQueryKeyName,
    RegNtPreSaveMergedKey,
    RegNtPostSaveMergedKey,

    MaxRegNtNotifyClass 
} REG_NOTIFY_CLASS;




typedef struct _REG_DELETE_KEY_INFORMATION {
    PVOID    Object;                      
    PVOID    CallContext;  
    PVOID    ObjectContext;
    PVOID    Reserved;     
} REG_DELETE_KEY_INFORMATION, *PREG_DELETE_KEY_INFORMATION

, REG_FLUSH_KEY_INFORMATION, *PREG_FLUSH_KEY_INFORMATION

;

typedef struct _REG_SET_VALUE_KEY_INFORMATION {
    PVOID               Object;                         
    PUNICODE_STRING     ValueName;                      
    ULONG               TitleIndex;                     
    ULONG               Type;                           
    PVOID               Data;                           
    ULONG               DataSize;                       
    PVOID               CallContext;  
    PVOID               ObjectContext;
    PVOID               Reserved;     
} REG_SET_VALUE_KEY_INFORMATION, *PREG_SET_VALUE_KEY_INFORMATION;

typedef struct _REG_DELETE_VALUE_KEY_INFORMATION {
    PVOID               Object;                         
    PUNICODE_STRING     ValueName;                      
    PVOID               CallContext;  
    PVOID               ObjectContext;
    PVOID               Reserved;     
} REG_DELETE_VALUE_KEY_INFORMATION, *PREG_DELETE_VALUE_KEY_INFORMATION;

typedef struct _REG_SET_INFORMATION_KEY_INFORMATION {
    PVOID                       Object;                 
    KEY_SET_INFORMATION_CLASS   KeySetInformationClass; 
    PVOID                       KeySetInformation;      
    ULONG                       KeySetInformationLength;
    PVOID                       CallContext;  
    PVOID                       ObjectContext;
    PVOID                       Reserved;     
} REG_SET_INFORMATION_KEY_INFORMATION, *PREG_SET_INFORMATION_KEY_INFORMATION;

typedef struct _REG_ENUMERATE_KEY_INFORMATION {
    PVOID                       Object;                 
    ULONG                       Index;                  
    KEY_INFORMATION_CLASS       KeyInformationClass;    
    PVOID                       KeyInformation;         
    ULONG                       Length;                 
    PULONG                      ResultLength;           
    PVOID                       CallContext;  
    PVOID                       ObjectContext;
    PVOID                       Reserved;     
} REG_ENUMERATE_KEY_INFORMATION, *PREG_ENUMERATE_KEY_INFORMATION;

typedef struct _REG_ENUMERATE_VALUE_KEY_INFORMATION {
    PVOID                           Object;                     
    ULONG                           Index;                      
    KEY_VALUE_INFORMATION_CLASS     KeyValueInformationClass;   
    PVOID                           KeyValueInformation;        
    ULONG                           Length;                     
    PULONG                          ResultLength;               
    PVOID                           CallContext;  
    PVOID                           ObjectContext;
    PVOID                           Reserved;     
} REG_ENUMERATE_VALUE_KEY_INFORMATION, *PREG_ENUMERATE_VALUE_KEY_INFORMATION;

typedef struct _REG_QUERY_KEY_INFORMATION {
    PVOID                       Object;                 
    KEY_INFORMATION_CLASS       KeyInformationClass;    
    PVOID                       KeyInformation;         
    ULONG                       Length;                 
    PULONG                      ResultLength;           
    PVOID                       CallContext;  
    PVOID                       ObjectContext;
    PVOID                       Reserved;     
} REG_QUERY_KEY_INFORMATION, *PREG_QUERY_KEY_INFORMATION;

typedef struct _REG_QUERY_VALUE_KEY_INFORMATION {
    PVOID                           Object;                     
    PUNICODE_STRING                 ValueName;                  
    KEY_VALUE_INFORMATION_CLASS     KeyValueInformationClass;   
    PVOID                           KeyValueInformation;        
    ULONG                           Length;                     
    PULONG                          ResultLength;               
    PVOID                           CallContext;  
    PVOID                           ObjectContext;
    PVOID                           Reserved;     
} REG_QUERY_VALUE_KEY_INFORMATION, *PREG_QUERY_VALUE_KEY_INFORMATION;

typedef struct _REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION {
    PVOID               Object;                 
    PKEY_VALUE_ENTRY    ValueEntries;           
    ULONG               EntryCount;             
    PVOID               ValueBuffer;            
    PULONG              BufferLength;           
    PULONG              RequiredBufferLength;   
    PVOID               CallContext;  
    PVOID               ObjectContext;
    PVOID               Reserved;     
} REG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION, *PREG_QUERY_MULTIPLE_VALUE_KEY_INFORMATION;

typedef struct _REG_RENAME_KEY_INFORMATION {
    PVOID            Object;    
    PUNICODE_STRING  NewName;   
    PVOID            CallContext;  
    PVOID            ObjectContext;
    PVOID            Reserved;     
} REG_RENAME_KEY_INFORMATION, *PREG_RENAME_KEY_INFORMATION;


typedef struct _REG_KEY_HANDLE_CLOSE_INFORMATION {
    PVOID               Object;         
    PVOID               CallContext;  
    PVOID               ObjectContext;
    PVOID               Reserved;     
} REG_KEY_HANDLE_CLOSE_INFORMATION, *PREG_KEY_HANDLE_CLOSE_INFORMATION;


typedef struct _REG_CREATE_KEY_INFORMATION {
    PUNICODE_STRING     CompleteName; 
    PVOID               RootObject;   
    PVOID               ObjectType;   
    ULONG               CreateOptions;
    PUNICODE_STRING     Class;        
    PVOID               SecurityDescriptor;
    PVOID               SecurityQualityOfService;
    ACCESS_MASK         DesiredAccess;
    ACCESS_MASK         GrantedAccess;
                                      
                                      
    PULONG              Disposition;  
                                      
                                      
    PVOID               *ResultObject;
                                      
                                      
    PVOID               CallContext;  
    PVOID               RootObjectContext;  
    PVOID               Transaction;  
    PVOID               Reserved;     

} REG_CREATE_KEY_INFORMATION, REG_OPEN_KEY_INFORMATION,*PREG_CREATE_KEY_INFORMATION, *PREG_OPEN_KEY_INFORMATION;

typedef struct _REG_CREATE_KEY_INFORMATION_V1 {
    PUNICODE_STRING     CompleteName; 
    PVOID               RootObject;   
    PVOID               ObjectType;   
    ULONG               Options;      
    PUNICODE_STRING     Class;        
    PVOID               SecurityDescriptor;
    PVOID               SecurityQualityOfService;
    ACCESS_MASK         DesiredAccess;
    ACCESS_MASK         GrantedAccess;
                                      
                                      
    PULONG              Disposition;  
                                      
                                      
    PVOID               *ResultObject;
                                      
                                      
    PVOID               CallContext;  
    PVOID               RootObjectContext;  
    PVOID               Transaction;  

    ULONG_PTR           Version;      
    PUNICODE_STRING     RemainingName;
    ULONG               Wow64Flags;   
    ULONG               Attributes;   
    KPROCESSOR_MODE     CheckAccessMode;  

} REG_CREATE_KEY_INFORMATION_V1, REG_OPEN_KEY_INFORMATION_V1,*PREG_CREATE_KEY_INFORMATION_V1, *PREG_OPEN_KEY_INFORMATION_V1;



typedef struct _REG_POST_OPERATION_INFORMATION {
    PVOID               Object;         
    NTSTATUS            Status;         
    PVOID               PreInformation; 
                                        
    NTSTATUS            ReturnStatus;   
                                        
    PVOID               CallContext;    
    PVOID               ObjectContext;  
    PVOID               Reserved;       
} REG_POST_OPERATION_INFORMATION,*PREG_POST_OPERATION_INFORMATION;



typedef struct _REG_PRE_CREATE_KEY_INFORMATION {
    PUNICODE_STRING     CompleteName;   
} REG_PRE_CREATE_KEY_INFORMATION, REG_PRE_OPEN_KEY_INFORMATION,*PREG_PRE_CREATE_KEY_INFORMATION, *PREG_PRE_OPEN_KEY_INFORMATION;;

typedef struct _REG_POST_CREATE_KEY_INFORMATION {
    PUNICODE_STRING     CompleteName;   
    PVOID               Object;         
    NTSTATUS            Status;         
} REG_POST_CREATE_KEY_INFORMATION,REG_POST_OPEN_KEY_INFORMATION, *PREG_POST_CREATE_KEY_INFORMATION, *PREG_POST_OPEN_KEY_INFORMATION;




typedef struct _REG_LOAD_KEY_INFORMATION {
    PVOID               Object;
    PUNICODE_STRING     KeyName;
    PUNICODE_STRING     SourceFile;
    ULONG               Flags;
    PVOID               TrustClassObject;
    PVOID               UserEvent;
    ACCESS_MASK         DesiredAccess;
    PHANDLE             RootHandle;
    PVOID               CallContext;  
    PVOID               ObjectContext;
    PVOID               Reserved;     
} REG_LOAD_KEY_INFORMATION, *PREG_LOAD_KEY_INFORMATION;

typedef struct _REG_UNLOAD_KEY_INFORMATION {
    PVOID    Object;                      
    PVOID    UserEvent;
    PVOID    CallContext;  
    PVOID    ObjectContext;
    PVOID    Reserved;     
} REG_UNLOAD_KEY_INFORMATION, *PREG_UNLOAD_KEY_INFORMATION;

typedef struct _REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION {
    PVOID   Object;
    PVOID   ObjectContext;  
    PVOID   Reserved;     
} REG_CALLBACK_CONTEXT_CLEANUP_INFORMATION, *PREG_CALLBACK_CONTEXT_CLEANUP_INFORMATION;

typedef struct _REG_QUERY_KEY_SECURITY_INFORMATION {
    PVOID                   Object;
    PSECURITY_INFORMATION   SecurityInformation;  
    PSECURITY_DESCRIPTOR    SecurityDescriptor;   
    PULONG                  Length;               
    PVOID                   CallContext;  
    PVOID                   ObjectContext;
    PVOID                   Reserved;     
} REG_QUERY_KEY_SECURITY_INFORMATION, *PREG_QUERY_KEY_SECURITY_INFORMATION;

typedef struct _REG_SET_KEY_SECURITY_INFORMATION {
    PVOID                   Object;
    PSECURITY_INFORMATION   SecurityInformation;  
    PSECURITY_DESCRIPTOR    SecurityDescriptor;   
    PVOID                   CallContext;  
    PVOID                   ObjectContext;
    PVOID                   Reserved;     
} REG_SET_KEY_SECURITY_INFORMATION, *PREG_SET_KEY_SECURITY_INFORMATION;


typedef struct _REG_RESTORE_KEY_INFORMATION {
    PVOID               Object;
    HANDLE              FileHandle;
    ULONG               Flags;
    PVOID               CallContext;  
    PVOID               ObjectContext;
    PVOID               Reserved;     
} REG_RESTORE_KEY_INFORMATION, *PREG_RESTORE_KEY_INFORMATION;

typedef struct _REG_SAVE_KEY_INFORMATION {
    PVOID               Object;
    HANDLE              FileHandle;
    ULONG               Format;
    PVOID               CallContext;  
    PVOID               ObjectContext;
    PVOID               Reserved;     
} REG_SAVE_KEY_INFORMATION, *PREG_SAVE_KEY_INFORMATION;

typedef struct _REG_REPLACE_KEY_INFORMATION {
    PVOID               Object;
    PUNICODE_STRING     OldFileName;
    PUNICODE_STRING     NewFileName;
    PVOID               CallContext;  
    PVOID               ObjectContext;
    PVOID               Reserved;     
} REG_REPLACE_KEY_INFORMATION, *PREG_REPLACE_KEY_INFORMATION;


typedef struct _REG_QUERY_KEY_NAME {
    PVOID                       Object;
    POBJECT_NAME_INFORMATION    ObjectNameInfo;
    ULONG                       Length;
    PULONG                      ReturnLength;
    PVOID                       CallContext;
    PVOID                       ObjectContext;
    PVOID                       Reserved;
} REG_QUERY_KEY_NAME, *PREG_QUERY_KEY_NAME;


 

NTSTATUS
CmRegisterCallback(      PEX_CALLBACK_FUNCTION Function,
                     PVOID                 Context,
                        PLARGE_INTEGER        Cookie
                    );

 

NTSTATUS
CmUnRegisterCallback(  LARGE_INTEGER    Cookie);




 

NTSTATUS
CmRegisterCallbackEx (           PEX_CALLBACK_FUNCTION   Function,
                                 PCUNICODE_STRING        Altitude,
                                 PVOID                   Driver, 
                             PVOID                   Context,
                                PLARGE_INTEGER          Cookie,
                           PVOID                   Reserved
                    );

 

void 
CmGetCallbackVersion (      PULONG  Major,
                            PULONG  Minor
                        );

 

NTSTATUS
CmSetCallbackObjectContext (      PVOID           Object,
                                     PLARGE_INTEGER  Cookie,
                                     PVOID           NewContext,
                                PVOID           *OldContext
                           );

 

NTSTATUS
CmCallbackGetKeyObjectID (               PLARGE_INTEGER      Cookie,
                                         PVOID               Object,
                                    PULONG_PTR          ObjectID,
                             PCUNICODE_STRING    *ObjectName
                           );

 

PVOID
CmGetBoundTransaction(   PLARGE_INTEGER  Cookie,
                         PVOID           Object );





typedef struct _REG_LOAD_KEY_INFORMATION_V2 {
    PVOID               Object;
    PUNICODE_STRING     KeyName;
    PUNICODE_STRING     SourceFile;
    ULONG               Flags;
    PVOID               TrustClassObject;
    PVOID               UserEvent;
    ACCESS_MASK         DesiredAccess;
    PHANDLE             RootHandle;
    PVOID               CallContext;
    PVOID               ObjectContext;
    ULONG_PTR           Version;
    PVOID               FileAccessToken;
} REG_LOAD_KEY_INFORMATION_V2, *PREG_LOAD_KEY_INFORMATION_V2;





 

NTSTATUS
CmCallbackGetKeyObjectIDEx (
      PLARGE_INTEGER Cookie,
      PVOID Object,
      PULONG_PTR ObjectID,
     PCUNICODE_STRING *ObjectName,
      ULONG Flags
    );

 

void
CmCallbackReleaseKeyObjectIDEx (
      PCUNICODE_STRING ObjectName
    );





typedef struct _REG_SAVE_MERGED_KEY_INFORMATION {
    PVOID               Object;
    HANDLE              FileHandle;
    PVOID               HighKeyObject;
    PVOID               LowKeyObject;
    PVOID               CallContext;  
    PVOID               ObjectContext;
    PVOID               Reserved;     
} REG_SAVE_MERGED_KEY_INFORMATION, *PREG_SAVE_MERGED_KEY_INFORMATION;



































































































































extern PBOOLEAN Mm64BitPhysicalAddress;










extern PVOID MmBadPointer;
































































































































































































































































































typedef enum _MM_SYSTEM_SIZE {
    MmSmallSystem,
    MmMediumSystem,
    MmLargeSystem
} MM_SYSTEMSIZE;



MM_SYSTEMSIZE
MmQuerySystemSize (
    void
    );





 

NTSTATUS
MmIsVerifierEnabled (
      PULONG VerifierFlags
    );




 

NTSTATUS
MmAddVerifierThunks (
      PVOID ThunkBuffer,
      ULONG ThunkBufferSize
    );



 

NTSTATUS
MmAddVerifierSpecialThunks(
      ULONG_PTR EntryRoutine,
      PVOID ThunkBuffer,
      ULONG ThunkBufferSize
    );







 

void
MmProbeAndLockSelectedPages (
      PMDL MemoryDescriptorList,
      PFILE_SEGMENT_ELEMENT SegmentArray,
      KPROCESSOR_MODE AccessMode,
      LOCK_OPERATION Operation
    );



 

void
MmProbeAndLockProcessPages (
      PMDL MemoryDescriptorList,
      PEPROCESS Process,
      KPROCESSOR_MODE AccessMode,
      LOCK_OPERATION Operation
    );



 
 

void
MmProbeAndLockPages (
      PMDL MemoryDescriptorList,
      KPROCESSOR_MODE AccessMode,
      LOCK_OPERATION Operation
    );



 

void
MmUnlockPages (
      PMDL MemoryDescriptorList
    );



 

void
MmBuildMdlForNonPagedPool (
      PMDL MemoryDescriptorList
    );




typedef struct _MM_PHYSICAL_ADDRESS_LIST {
    PHYSICAL_ADDRESS PhysicalAddress;
    SIZE_T NumberOfBytes;
} MM_PHYSICAL_ADDRESS_LIST, *PMM_PHYSICAL_ADDRESS_LIST;

 

NTSTATUS
MmAllocateMdlForIoSpace (
      PMM_PHYSICAL_ADDRESS_LIST PhysicalAddressList,
      SIZE_T NumberOfEntries,
      PMDL *NewMdl
    );

 

LOGICAL
MmAreMdlPagesCached (
       PMDL MemoryDescriptorList
     );







 

NTSTATUS
MmSetPermanentCacheAttribute (
      PHYSICAL_ADDRESS StartAddress,
      LARGE_INTEGER NumberOfBytes,
      MEMORY_CACHING_TYPE CacheType,
      ULONG Flags
    );




 
 




PVOID
MmMapLockedPages (
      PMDL MemoryDescriptorList,
       
    KPROCESSOR_MODE AccessMode
    );



typedef
void
MM_MDL_ROUTINE (
      PVOID DriverContext,
      PVOID MappedVa
    );

typedef MM_MDL_ROUTINE *PMM_MDL_ROUTINE;

 
 
 

NTSTATUS
MmMapMdl (
      PMDL MemoryDescriptorList,
      ULONG Protection,
      PMM_MDL_ROUTINE DriverRoutine,
      PVOID DriverContext
    );









NTSTATUS
MmMapMemoryDumpMdlEx (
      PVOID Va,
      PFN_NUMBER PageTotal,
      PMDL MemoryDumpMdl,
      ULONG Flags
    );





 

LOGICAL
MmIsIoSpaceActive (
      PHYSICAL_ADDRESS StartAddress,
      SIZE_T NumberOfBytes
    );



 

PVOID
__stdcall
MmGetSystemRoutineAddress (
      PUNICODE_STRING SystemRoutineName
    );


typedef
PVOID
(*PMM_GET_SYSTEM_ROUTINE_ADDRESS_EX) (
      PUNICODE_STRING ModuleName,
      PSTR FunctionName
    );















 

NTSTATUS
MmAdvanceMdl (
      PMDL Mdl,
      ULONG NumberOfBytes
    );



 
 

NTSTATUS
MmProtectMdlSystemAddress (
      PMDL MemoryDescriptorList,
      ULONG NewProtect
    );























typedef enum _MM_PAGE_PRIORITY {
    LowPagePriority,
    NormalPagePriority = 16,
    HighPagePriority = 32
} MM_PAGE_PRIORITY;












 


 
 
 

PVOID
MmMapLockedPagesSpecifyCache (
      PMDL MemoryDescriptorList,
       
            KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
      PVOID RequestedAddress,
          ULONG BugCheckOnFailure,
          ULONG Priority  
    );



















































 

void
MmUnmapLockedPages (
      PVOID BaseAddress,
      PMDL MemoryDescriptorList
    );






 
 

 PVOID
MmAllocateMappingAddressEx (
       SIZE_T NumberOfBytes,
       ULONG PoolTag,
       ULONG Flags
     );



 
 

 PVOID
MmAllocateMappingAddress (
       SIZE_T NumberOfBytes,
       ULONG PoolTag
     );



 

void
MmFreeMappingAddress (
       PVOID BaseAddress,
       ULONG PoolTag
     );



 
 
  
 
 

PVOID
MmMapLockedPagesWithReservedMapping (
         PVOID MappingAddress,
         ULONG PoolTag,
      PMDL MemoryDescriptorList,
           MEMORY_CACHING_TYPE CacheType
    );



 

void
MmUnmapReservedMapping (
       PVOID BaseAddress,
       ULONG PoolTag,
       PMDL MemoryDescriptorList
     );













 
 

PMDL
MmAllocateNodePagesForMdlEx (
      PHYSICAL_ADDRESS LowAddress,
      PHYSICAL_ADDRESS HighAddress,
      PHYSICAL_ADDRESS SkipBytes,
      SIZE_T TotalBytes,
      MEMORY_CACHING_TYPE CacheType,
      ULONG IdealNode,
      ULONG Flags
    );







typedef ULONG MM_NODE_NUMBER_ZERO_BASED;









typedef ULONG MM_NODE_NUMBER_ONE_BASED;


 
 

PMDL
MmAllocatePartitionNodePagesForMdlEx (
      PHYSICAL_ADDRESS LowAddress,
      PHYSICAL_ADDRESS HighAddress,
      PHYSICAL_ADDRESS SkipBytes,
      SIZE_T TotalBytes,
      MEMORY_CACHING_TYPE CacheType,
      MM_NODE_NUMBER_ZERO_BASED IdealNode,
      ULONG Flags,
      PVOID PartitionObject
    );



 
 

PMDL
MmAllocatePagesForMdlEx (
      PHYSICAL_ADDRESS LowAddress,
      PHYSICAL_ADDRESS HighAddress,
      PHYSICAL_ADDRESS SkipBytes,
      SIZE_T TotalBytes,
      MEMORY_CACHING_TYPE CacheType,
      ULONG Flags
    );



 
 

PMDL
MmAllocatePagesForMdl (
      PHYSICAL_ADDRESS LowAddress,
      PHYSICAL_ADDRESS HighAddress,
      PHYSICAL_ADDRESS SkipBytes,
      SIZE_T TotalBytes
    );






 

void
MmFreePagesFromMdlEx (
      PMDL MemoryDescriptorList,
      ULONG Flags
    );



 

void
MmFreePagesFromMdl (
      PMDL MemoryDescriptorList
    );



 
 

 
PVOID
MmMapIoSpace (
      PHYSICAL_ADDRESS PhysicalAddress,
      SIZE_T NumberOfBytes,
      MEMORY_CACHING_TYPE CacheType
    );



 

void
MmUnmapIoSpace (
      PVOID BaseAddress,
      SIZE_T NumberOfBytes
    );



 
 

 
PVOID
MmMapIoSpaceEx (
      PHYSICAL_ADDRESS PhysicalAddress,
      SIZE_T NumberOfBytes,
      ULONG Protect
    );




 
 

 PVOID
MmAllocateContiguousMemory (
      SIZE_T NumberOfBytes,
      PHYSICAL_ADDRESS HighestAcceptableAddress
    );



 
 

 PVOID
MmAllocateContiguousMemorySpecifyCache (
      SIZE_T NumberOfBytes,
      PHYSICAL_ADDRESS LowestAcceptableAddress,
      PHYSICAL_ADDRESS HighestAcceptableAddress,
      PHYSICAL_ADDRESS BoundaryAddressMultiple,
      MEMORY_CACHING_TYPE CacheType
    );






typedef ULONG NODE_REQUIREMENT;








 
 

 PVOID
MmAllocateContiguousMemorySpecifyCacheNode (
      SIZE_T NumberOfBytes,
      PHYSICAL_ADDRESS LowestAcceptableAddress,
      PHYSICAL_ADDRESS HighestAcceptableAddress,
      PHYSICAL_ADDRESS BoundaryAddressMultiple,
      MEMORY_CACHING_TYPE CacheType,
      NODE_REQUIREMENT PreferredNode
    );



 
 

 PVOID
MmAllocateContiguousNodeMemory (
      SIZE_T NumberOfBytes,
      PHYSICAL_ADDRESS LowestAcceptableAddress,
      PHYSICAL_ADDRESS HighestAcceptableAddress,
      PHYSICAL_ADDRESS BoundaryAddressMultiple,
      ULONG Protect,
      NODE_REQUIREMENT PreferredNode
    );






 

NTSTATUS
MmAllocateContiguousMemoryEx (
      PSIZE_T NumberOfBytes,
      PHYSICAL_ADDRESS LowestAcceptableAddress,
      PHYSICAL_ADDRESS HighestAcceptableAddress,
      PHYSICAL_ADDRESS BoundaryAddressMultiple,
      NODE_REQUIREMENT PreferredNode,
      ULONG Protect,
      PVOID PartitionObject,
      ULONG Tag,
      ULONG Flags,
      PVOID* BaseAddress
    );




 

void
MmFreeContiguousMemory (
      PVOID BaseAddress
    );



 

void
MmFreeContiguousMemorySpecifyCache (
      PVOID BaseAddress,
      SIZE_T NumberOfBytes,
      MEMORY_CACHING_TYPE CacheType
    );





SIZE_T
MmSizeOfMdl (
      PVOID Base,
      SIZE_T Length
    );



                 
 

PMDL
MmCreateMdl (
      PMDL MemoryDescriptorList,
      PVOID Base,
      SIZE_T Length
    );




typedef enum _MM_MDL_PAGE_CONTENTS_STATE {
    MmMdlPageContentsDynamic,
    MmMdlPageContentsInvariant,
    MmMdlPageContentsQuery
} MM_MDL_PAGE_CONTENTS_STATE, PMM_MDL_PAGE_CONTENTS_STATE;

 

MM_MDL_PAGE_CONTENTS_STATE
MmMdlPageContentsState (
      PMDL MemoryDescriptorList,
      MM_MDL_PAGE_CONTENTS_STATE State
    );




 
 

PVOID
MmLockPagableDataSection (
      PVOID AddressWithinSection
    );



 

void
MmResetDriverPaging (
      PVOID AddressWithinSection
    );



 

PVOID
MmPageEntireDriver (
      PVOID AddressWithinSection
    );



 

void
MmUnlockPagableImageSection (
      PVOID ImageSectionHandle
    );



 

void
MmInitializeMdl (
     
             PMDL MemoryDescriptorList,
      PVOID BaseVa,
          SIZE_T Length
    )



















;


 
 
 
 
 

PVOID
MmGetSystemAddressForMdlSafe (
      PMDL Mdl,
         ULONG Priority  
    )



























;









































 
void

MmPrepareMdlForReuse (
      PMDL MDL
    )
















;

typedef NTSTATUS (*PMM_DLL_INITIALIZE) (
      PUNICODE_STRING RegistryPath
    );

typedef NTSTATUS (*PMM_DLL_UNLOAD) (
    void
    );







struct _DRIVER_OBJECT;



LOGICAL
MmIsDriverSuspectForVerifier (
      struct _DRIVER_OBJECT *DriverObject
    );




LOGICAL
MmIsDriverVerifying (
      struct _DRIVER_OBJECT *DriverObject
    );



 

LOGICAL
MmIsDriverVerifyingByAddress (
      PVOID AddressWithinSection
    );







 
NTSTATUS
MmProtectDriverSection (
      PVOID AddressWithinSection,
      SIZE_T Size,
      ULONG Flags
    );





typedef enum _SECURITY_OPERATION_CODE {
    SetSecurityDescriptor,
    QuerySecurityDescriptor,
    DeleteSecurityDescriptor,
    AssignSecurityDescriptor
} SECURITY_OPERATION_CODE, *PSECURITY_OPERATION_CODE;









typedef struct _SECURITY_SUBJECT_CONTEXT {
    PACCESS_TOKEN ClientToken;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    PACCESS_TOKEN PrimaryToken;
    PVOID ProcessAuditId;
} SECURITY_SUBJECT_CONTEXT, *PSECURITY_SUBJECT_CONTEXT;
















typedef struct _INITIAL_PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    LUID_AND_ATTRIBUTES Privilege[3];
} INITIAL_PRIVILEGE_SET, *PINITIAL_PRIVILEGE_SET;








typedef struct _ACCESS_STATE {
   LUID OperationID;                
   BOOLEAN SecurityEvaluated;
   BOOLEAN GenerateAudit;
   BOOLEAN GenerateOnClose;
   BOOLEAN PrivilegesAllocated;
   ULONG Flags;
   ACCESS_MASK RemainingDesiredAccess;
   ACCESS_MASK PreviouslyGrantedAccess;
   ACCESS_MASK OriginalDesiredAccess;
   SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
   PSECURITY_DESCRIPTOR SecurityDescriptor; 
   PVOID AuxData;
   union {
      INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
      PRIVILEGE_SET PrivilegeSet;
      } Privileges;

   BOOLEAN AuditPrivileges;
   UNICODE_STRING ObjectName;
   UNICODE_STRING ObjectTypeName;

} ACCESS_STATE, *PACCESS_STATE;


typedef
void
NTFS_DEREF_EXPORTED_SECURITY_DESCRIPTOR(
      PVOID  Vcb,
      PSECURITY_DESCRIPTOR SecurityDescriptor);
typedef NTFS_DEREF_EXPORTED_SECURITY_DESCRIPTOR *PNTFS_DEREF_EXPORTED_SECURITY_DESCRIPTOR;





void
SeCaptureSubjectContext (
      PSECURITY_SUBJECT_CONTEXT SubjectContext
    );




void
SeLockSubjectContext(
      PSECURITY_SUBJECT_CONTEXT SubjectContext
    );




void
SeUnlockSubjectContext(
      PSECURITY_SUBJECT_CONTEXT SubjectContext
    );




void
SeReleaseSubjectContext (
      PSECURITY_SUBJECT_CONTEXT SubjectContext
    );




 

NTSTATUS
SeAssignSecurity (
      PSECURITY_DESCRIPTOR ParentDescriptor,
      PSECURITY_DESCRIPTOR ExplicitDescriptor,
      PSECURITY_DESCRIPTOR *NewDescriptor,
      BOOLEAN IsDirectoryObject,
      PSECURITY_SUBJECT_CONTEXT SubjectContext,
      PGENERIC_MAPPING GenericMapping,
      POOL_TYPE PoolType
    );




ULONG
SeComputeAutoInheritByObjectType(
      PVOID ObjectType,
      PSECURITY_DESCRIPTOR SecurityDescriptor,
      PSECURITY_DESCRIPTOR ParentSecurityDescriptor
    );




NTSTATUS
SeAssignSecurityEx (
      PSECURITY_DESCRIPTOR ParentDescriptor,
      PSECURITY_DESCRIPTOR ExplicitDescriptor,
      PSECURITY_DESCRIPTOR *NewDescriptor,
      GUID *ObjectType,
      BOOLEAN IsDirectoryObject,
      ULONG AutoInheritFlags,
      PSECURITY_SUBJECT_CONTEXT SubjectContext,
      PGENERIC_MAPPING GenericMapping,
      POOL_TYPE PoolType
    );



 

NTSTATUS
SeDeassignSecurity (
      PSECURITY_DESCRIPTOR *SecurityDescriptor
    );




ULONG
SeObjectCreateSaclAccessBits(
      PSECURITY_DESCRIPTOR SecurityDescriptor
    );

 

BOOLEAN
SeAccessCheck (
      PSECURITY_DESCRIPTOR SecurityDescriptor,
      PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
      BOOLEAN SubjectContextLocked,
      ACCESS_MASK DesiredAccess,
      ACCESS_MASK PreviouslyGrantedAccess,
     PPRIVILEGE_SET *Privileges,
      PGENERIC_MAPPING GenericMapping,
      KPROCESSOR_MODE AccessMode,
      PACCESS_MASK GrantedAccess,
      PNTSTATUS AccessStatus
    );


















NTSTATUS
SeSetAuditParameter(
      PSE_ADT_PARAMETER_ARRAY AuditParameters,
      SE_ADT_PARAMETER_TYPE Type,
      ULONG Index,
      PVOID Data
    );



NTSTATUS
SeReportSecurityEvent(
      ULONG Flags,
      PUNICODE_STRING SourceName,
      PSID UserSid,
      PSE_ADT_PARAMETER_ARRAY AuditParameters
    );




 

BOOLEAN
SeValidSecurityDescriptor(
      ULONG Length,
      PSECURITY_DESCRIPTOR SecurityDescriptor
    );







typedef enum _SE_IMAGE_TYPE
{
  SeImageTypeElamDriver = 0,
  SeImageTypeDriver,
  SeImageTypePlatformSecureFile,
  SeImageTypeDynamicCodeFile,
  SeImageTypeMax
} SE_IMAGE_TYPE, *PSE_IMAGE_TYPE;

typedef struct _BDCB_IMAGE_INFORMATION *PBDCB_IMAGE_INFORMATION;

typedef
 
 
void
SE_IMAGE_VERIFICATION_CALLBACK_FUNCTION (
      PVOID CallbackContext,
      SE_IMAGE_TYPE ImageType,
      PBDCB_IMAGE_INFORMATION ImageInformation
    );

typedef SE_IMAGE_VERIFICATION_CALLBACK_FUNCTION *PSE_IMAGE_VERIFICATION_CALLBACK_FUNCTION;

typedef enum _SE_IMAGE_VERIFICATION_CALLBACK_TYPE {
    SeImageVerificationCallbackInformational = 0
} SE_IMAGE_VERIFICATION_CALLBACK_TYPE, *PSE_IMAGE_VERIFICATION_CALLBACK_TYPE;

typedef PVOID SE_IMAGE_VERIFICATION_CALLBACK_TOKEN, *PSE_IMAGE_VERIFICATION_CALLBACK_TOKEN;



 

NTSTATUS
SeRegisterImageVerificationCallback(
      SE_IMAGE_TYPE ImageType,
      SE_IMAGE_VERIFICATION_CALLBACK_TYPE CallbackType,
      PSE_IMAGE_VERIFICATION_CALLBACK_FUNCTION CallbackFunction,
      PVOID CallbackContext,
      SE_IMAGE_VERIFICATION_CALLBACK_TOKEN Token,
      PVOID* CallbackHandle
    );


 

void
SeUnregisterImageVerificationCallback (
      PVOID CallbackHandle
    );







 

PETHREAD
PsGetCurrentThread (
    void
    )

















;





 

 
NTSTATUS
PsCreateSystemThread(
      PHANDLE ThreadHandle,
      ULONG DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
       HANDLE ProcessHandle,
      PCLIENT_ID ClientId,
      PKSTART_ROUTINE StartRoutine,
       PVOID StartContext
    );



 

NTSTATUS
PsTerminateSystemThread(
      NTSTATUS ExitStatus
    );



NTSTATUS
PsWrapApcWow64Thread (
      PVOID *ApcContext,
      PVOID *ApcRoutine);




 
 

BOOLEAN
PsGetVersion(
      PULONG MajorVersion,
      PULONG MinorVersion,
      PULONG BuildNumber,
      PUNICODE_STRING CSDVersion
    );



 
ULONG64
PsQueryTotalCycleTimeProcess (
      PEPROCESS Process,
      PULONG64 CycleTimeStamp
    );




typedef struct _AFFINITY_TOKEN *PAFFINITY_TOKEN;

 
 

NTSTATUS
PsAllocateAffinityToken (
     PAFFINITY_TOKEN *AffinityToken
    );

 
 

void
PsFreeAffinityToken (
      PAFFINITY_TOKEN AffinityToken
    );

 
 

NTSTATUS
PsSetSystemMultipleGroupAffinityThread (
      PGROUP_AFFINITY GroupAffinities,
      USHORT GroupCount,
      PAFFINITY_TOKEN AffinityToken
    );

 
 

void
PsRevertToUserMultipleGroupAffinityThread (
      PAFFINITY_TOKEN AffinityToken
    );











































































































































































typedef enum _CREATE_FILE_TYPE {
    CreateFileTypeNone,
    CreateFileTypeNamedPipe,
    CreateFileTypeMailslot
} CREATE_FILE_TYPE;








typedef struct _NAMED_PIPE_CREATE_PARAMETERS {
    ULONG NamedPipeType;
    ULONG ReadMode;
    ULONG CompletionMode;
    ULONG MaximumInstances;
    ULONG InboundQuota;
    ULONG OutboundQuota;
    LARGE_INTEGER DefaultTimeout;
    BOOLEAN TimeoutSpecified;
} NAMED_PIPE_CREATE_PARAMETERS, *PNAMED_PIPE_CREATE_PARAMETERS;








typedef struct _MAILSLOT_CREATE_PARAMETERS {
    ULONG MailslotQuota;
    ULONG MaximumMessageSize;
    LARGE_INTEGER ReadTimeout;
    BOOLEAN TimeoutSpecified;
} MAILSLOT_CREATE_PARAMETERS, *PMAILSLOT_CREATE_PARAMETERS;










struct _DEVICE_DESCRIPTION;
struct _DEVICE_OBJECT;
struct _DMA_ADAPTER;
struct _DRIVER_OBJECT;
struct _DRIVE_LAYOUT_INFORMATION;
struct _DISK_PARTITION;

struct _FILE_OBJECT;











struct  _IRP;
struct _SCSI_REQUEST_BLOCK;
struct _SCATTER_GATHER_LIST;





 
 
 
 
typedef
void
IO_DPC_ROUTINE (
      PKDPC Dpc,
      struct _DEVICE_OBJECT *DeviceObject,
      struct _IRP *Irp,
      PVOID Context
    );

typedef IO_DPC_ROUTINE *PIO_DPC_ROUTINE;





 
 
typedef
void
IO_TIMER_ROUTINE (
      struct _DEVICE_OBJECT *DeviceObject,
      PVOID Context
    );

typedef IO_TIMER_ROUTINE *PIO_TIMER_ROUTINE;





 
 
 
typedef
NTSTATUS
DRIVER_INITIALIZE (
      struct _DRIVER_OBJECT *DriverObject,
      PUNICODE_STRING RegistryPath
    );

typedef DRIVER_INITIALIZE *PDRIVER_INITIALIZE;






 


 
 
typedef
void
DRIVER_CANCEL (
      struct _DEVICE_OBJECT *DeviceObject,
        struct _IRP *Irp
    );

typedef DRIVER_CANCEL *PDRIVER_CANCEL;








 
 
 
typedef
NTSTATUS
DRIVER_DISPATCH (
      struct _DEVICE_OBJECT *DeviceObject,
      struct _IRP *Irp
    );

typedef DRIVER_DISPATCH *PDRIVER_DISPATCH;




typedef DRIVER_DISPATCH DRIVER_DISPATCH_RAISED;









 
 
 
typedef
NTSTATUS
DRIVER_DISPATCH_PAGED (
      struct _DEVICE_OBJECT *DeviceObject,
      struct _IRP *Irp
    );

typedef DRIVER_DISPATCH_PAGED *PDRIVER_DISPATCH_PAGED;





 
 
 
 
typedef
void
DRIVER_STARTIO (
      struct _DEVICE_OBJECT *DeviceObject,
      struct _IRP *Irp
    );

typedef DRIVER_STARTIO *PDRIVER_STARTIO;




 
 
 
typedef
void
DRIVER_UNLOAD (
      struct _DRIVER_OBJECT *DriverObject
    );

typedef DRIVER_UNLOAD *PDRIVER_UNLOAD;





 
 
 

typedef
NTSTATUS
DRIVER_ADD_DEVICE (
      struct _DRIVER_OBJECT *DriverObject,
      struct _DEVICE_OBJECT *PhysicalDeviceObject
    );

typedef DRIVER_ADD_DEVICE *PDRIVER_ADD_DEVICE;








 
 
 
typedef
BOOLEAN
FAST_IO_CHECK_IF_POSSIBLE (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER FileOffset,
      ULONG Length,
      BOOLEAN Wait,
      ULONG LockKey,
      BOOLEAN CheckForReadOperation,
     
    
    
    PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_CHECK_IF_POSSIBLE *PFAST_IO_CHECK_IF_POSSIBLE;

 
 
typedef
BOOLEAN
FAST_IO_READ (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER FileOffset,
      ULONG Length,
      BOOLEAN Wait,
      ULONG LockKey,
      PVOID Buffer,
      PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_READ *PFAST_IO_READ;

 
 
typedef
BOOLEAN
FAST_IO_WRITE (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER FileOffset,
      ULONG Length,
      BOOLEAN Wait,
      ULONG LockKey,
      PVOID Buffer,
      PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_WRITE *PFAST_IO_WRITE;





 
 
 
typedef
BOOLEAN
FAST_IO_QUERY_BASIC_INFO (
      struct _FILE_OBJECT *FileObject,
      BOOLEAN Wait,
      PFILE_BASIC_INFORMATION Buffer,
      PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_QUERY_BASIC_INFO *PFAST_IO_QUERY_BASIC_INFO;

 
 
 
typedef
BOOLEAN
FAST_IO_QUERY_STANDARD_INFO (
      struct _FILE_OBJECT *FileObject,
      BOOLEAN Wait,
      PFILE_STANDARD_INFORMATION Buffer,
      PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_QUERY_STANDARD_INFO *PFAST_IO_QUERY_STANDARD_INFO;





 
 
typedef
BOOLEAN
FAST_IO_LOCK (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER FileOffset,
      PLARGE_INTEGER Length,
      PEPROCESS ProcessId,
      ULONG Key,
      BOOLEAN FailImmediately,
      BOOLEAN ExclusiveLock,
      PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_LOCK *PFAST_IO_LOCK;

 
 
typedef
BOOLEAN
FAST_IO_UNLOCK_SINGLE (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER FileOffset,
      PLARGE_INTEGER Length,
      PEPROCESS ProcessId,
      ULONG Key,
      PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_UNLOCK_SINGLE *PFAST_IO_UNLOCK_SINGLE;

 
 
typedef
BOOLEAN
FAST_IO_UNLOCK_ALL (
      struct _FILE_OBJECT *FileObject,
      PEPROCESS ProcessId,
      PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_UNLOCK_ALL *PFAST_IO_UNLOCK_ALL;

 
 
typedef
BOOLEAN
FAST_IO_UNLOCK_ALL_BY_KEY (
      struct _FILE_OBJECT *FileObject,
      PVOID ProcessId,
      ULONG Key,
      PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_UNLOCK_ALL_BY_KEY *PFAST_IO_UNLOCK_ALL_BY_KEY;





 
 
typedef
BOOLEAN
FAST_IO_DEVICE_CONTROL (
      struct _FILE_OBJECT *FileObject,
      BOOLEAN Wait,
      PVOID InputBuffer,
      ULONG InputBufferLength,
      PVOID OutputBuffer,
      ULONG OutputBufferLength,
      ULONG IoControlCode,
      PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_DEVICE_CONTROL *PFAST_IO_DEVICE_CONTROL;







 
 
typedef
void
FAST_IO_ACQUIRE_FILE (
      struct _FILE_OBJECT *FileObject
    );

typedef FAST_IO_ACQUIRE_FILE *PFAST_IO_ACQUIRE_FILE;

 
 
typedef
void
FAST_IO_RELEASE_FILE (
      struct _FILE_OBJECT *FileObject
    );

typedef FAST_IO_RELEASE_FILE *PFAST_IO_RELEASE_FILE;







 
 
typedef
void
FAST_IO_DETACH_DEVICE (
      struct _DEVICE_OBJECT *SourceDevice,
      struct _DEVICE_OBJECT *TargetDevice
    );

typedef FAST_IO_DETACH_DEVICE *PFAST_IO_DETACH_DEVICE;








 
 
 
typedef
BOOLEAN
FAST_IO_QUERY_NETWORK_OPEN_INFO (
      struct _FILE_OBJECT *FileObject,
      BOOLEAN Wait,
      struct _FILE_NETWORK_OPEN_INFORMATION *Buffer,
      struct _IO_STATUS_BLOCK *IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_QUERY_NETWORK_OPEN_INFO *PFAST_IO_QUERY_NETWORK_OPEN_INFO;





 
 
typedef
BOOLEAN
FAST_IO_MDL_READ (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER FileOffset,
      ULONG Length,
      ULONG LockKey,
      PMDL *MdlChain,
      PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_MDL_READ *PFAST_IO_MDL_READ;

 
 
typedef
BOOLEAN
FAST_IO_MDL_READ_COMPLETE (
      struct _FILE_OBJECT *FileObject,
      PMDL MdlChain,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_MDL_READ_COMPLETE *PFAST_IO_MDL_READ_COMPLETE;

 
 
typedef
BOOLEAN
FAST_IO_PREPARE_MDL_WRITE (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER FileOffset,
      ULONG Length,
      ULONG LockKey,
      PMDL *MdlChain,
      PIO_STATUS_BLOCK IoStatus,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_PREPARE_MDL_WRITE *PFAST_IO_PREPARE_MDL_WRITE;

 
 
typedef
BOOLEAN
FAST_IO_MDL_WRITE_COMPLETE (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER FileOffset,
      PMDL MdlChain,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_MDL_WRITE_COMPLETE *PFAST_IO_MDL_WRITE_COMPLETE;






 
 
typedef
NTSTATUS
FAST_IO_ACQUIRE_FOR_MOD_WRITE (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER EndingOffset,
      struct _ERESOURCE **ResourceToRelease,
      struct _DEVICE_OBJECT *DeviceObject
             );

typedef FAST_IO_ACQUIRE_FOR_MOD_WRITE *PFAST_IO_ACQUIRE_FOR_MOD_WRITE;

 
 
typedef
NTSTATUS
FAST_IO_RELEASE_FOR_MOD_WRITE (
      struct _FILE_OBJECT *FileObject,
      struct _ERESOURCE *ResourceToRelease,
      struct _DEVICE_OBJECT *DeviceObject
             );

typedef FAST_IO_RELEASE_FOR_MOD_WRITE *PFAST_IO_RELEASE_FOR_MOD_WRITE;






 
 
typedef
NTSTATUS
FAST_IO_ACQUIRE_FOR_CCFLUSH (
      struct _FILE_OBJECT *FileObject,
      struct _DEVICE_OBJECT *DeviceObject
             );

typedef FAST_IO_ACQUIRE_FOR_CCFLUSH *PFAST_IO_ACQUIRE_FOR_CCFLUSH;

 
 
typedef
NTSTATUS
FAST_IO_RELEASE_FOR_CCFLUSH (
      struct _FILE_OBJECT *FileObject,
      struct _DEVICE_OBJECT *DeviceObject
             );

typedef FAST_IO_RELEASE_FOR_CCFLUSH *PFAST_IO_RELEASE_FOR_CCFLUSH;

 
 
typedef
BOOLEAN
FAST_IO_READ_COMPRESSED (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER FileOffset,
      ULONG Length,
      ULONG LockKey,
      PVOID Buffer,
      PMDL *MdlChain,
      PIO_STATUS_BLOCK IoStatus,
      struct _COMPRESSED_DATA_INFO *CompressedDataInfo,
      ULONG CompressedDataInfoLength,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_READ_COMPRESSED *PFAST_IO_READ_COMPRESSED;

 
 
typedef
BOOLEAN
FAST_IO_WRITE_COMPRESSED (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER FileOffset,
      ULONG Length,
      ULONG LockKey,
      PVOID Buffer,
      PMDL *MdlChain,
      PIO_STATUS_BLOCK IoStatus,
      struct _COMPRESSED_DATA_INFO *CompressedDataInfo,
      ULONG CompressedDataInfoLength,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_WRITE_COMPRESSED *PFAST_IO_WRITE_COMPRESSED;

 
 
typedef
BOOLEAN
FAST_IO_MDL_READ_COMPLETE_COMPRESSED (
      struct _FILE_OBJECT *FileObject,
      PMDL MdlChain,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_MDL_READ_COMPLETE_COMPRESSED *PFAST_IO_MDL_READ_COMPLETE_COMPRESSED;

 
 
typedef
BOOLEAN
FAST_IO_MDL_WRITE_COMPLETE_COMPRESSED (
      struct _FILE_OBJECT *FileObject,
      PLARGE_INTEGER FileOffset,
      PMDL MdlChain,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_MDL_WRITE_COMPLETE_COMPRESSED *PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED;

 
 
typedef
BOOLEAN
FAST_IO_QUERY_OPEN (
      struct _IRP *Irp,
      PFILE_NETWORK_OPEN_INFORMATION NetworkInformation,
      struct _DEVICE_OBJECT *DeviceObject
    );

typedef FAST_IO_QUERY_OPEN *PFAST_IO_QUERY_OPEN;







typedef struct _FAST_IO_DISPATCH {
    ULONG SizeOfFastIoDispatch;
    PFAST_IO_CHECK_IF_POSSIBLE FastIoCheckIfPossible;
    PFAST_IO_READ FastIoRead;
    PFAST_IO_WRITE FastIoWrite;
    PFAST_IO_QUERY_BASIC_INFO FastIoQueryBasicInfo;
    PFAST_IO_QUERY_STANDARD_INFO FastIoQueryStandardInfo;
    PFAST_IO_LOCK FastIoLock;
    PFAST_IO_UNLOCK_SINGLE FastIoUnlockSingle;
    PFAST_IO_UNLOCK_ALL FastIoUnlockAll;
    PFAST_IO_UNLOCK_ALL_BY_KEY FastIoUnlockAllByKey;
    PFAST_IO_DEVICE_CONTROL FastIoDeviceControl;
    PFAST_IO_ACQUIRE_FILE AcquireFileForNtCreateSection;
    PFAST_IO_RELEASE_FILE ReleaseFileForNtCreateSection;
    PFAST_IO_DETACH_DEVICE FastIoDetachDevice;
    PFAST_IO_QUERY_NETWORK_OPEN_INFO FastIoQueryNetworkOpenInfo;
    PFAST_IO_ACQUIRE_FOR_MOD_WRITE AcquireForModWrite;
    PFAST_IO_MDL_READ MdlRead;
    PFAST_IO_MDL_READ_COMPLETE MdlReadComplete;
    PFAST_IO_PREPARE_MDL_WRITE PrepareMdlWrite;
    PFAST_IO_MDL_WRITE_COMPLETE MdlWriteComplete;
    PFAST_IO_READ_COMPRESSED FastIoReadCompressed;
    PFAST_IO_WRITE_COMPRESSED FastIoWriteCompressed;
    PFAST_IO_MDL_READ_COMPLETE_COMPRESSED MdlReadCompleteCompressed;
    PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED MdlWriteCompleteCompressed;
    PFAST_IO_QUERY_OPEN FastIoQueryOpen;
    PFAST_IO_RELEASE_FOR_MOD_WRITE ReleaseForModWrite;
    PFAST_IO_ACQUIRE_FOR_CCFLUSH AcquireForCcFlush;
    PFAST_IO_RELEASE_FOR_CCFLUSH ReleaseForCcFlush;
} FAST_IO_DISPATCH, *PFAST_IO_DISPATCH;






typedef enum _IO_ALLOCATION_ACTION {
    KeepObject = 1,
    DeallocateObject,
    DeallocateObjectKeepRegisters
} IO_ALLOCATION_ACTION, *PIO_ALLOCATION_ACTION;





typedef
 
 
IO_ALLOCATION_ACTION
DRIVER_CONTROL (
      struct _DEVICE_OBJECT *DeviceObject,
      struct _IRP *Irp,
      PVOID MapRegisterBase,
      PVOID Context
    );
typedef DRIVER_CONTROL *PDRIVER_CONTROL;







typedef struct _IO_SECURITY_CONTEXT {
    PSECURITY_QUALITY_OF_SERVICE SecurityQos;
    PACCESS_STATE AccessState;
    ACCESS_MASK DesiredAccess;
    ULONG FullCreateOptions;
} IO_SECURITY_CONTEXT, *PIO_SECURITY_CONTEXT;





































typedef struct _VPB {
    CSHORT Type;
    CSHORT Size;
    USHORT Flags;
    USHORT VolumeLabelLength;   
    struct _DEVICE_OBJECT *DeviceObject;
    struct _DEVICE_OBJECT *RealDevice;
    ULONG SerialNumber;
    ULONG ReferenceCount;
    WCHAR VolumeLabel[(32 * sizeof(WCHAR)) / sizeof(WCHAR)];
} VPB, *PVPB;



























typedef struct _DMA_ADAPTER *PADAPTER_OBJECT;



















typedef struct _WAIT_CONTEXT_BLOCK {
    union {
        KDEVICE_QUEUE_ENTRY WaitQueueEntry;
        struct {
            LIST_ENTRY DmaWaitEntry;
            ULONG NumberOfChannels;
            ULONG SyncCallback : 1;
            ULONG DmaContext : 1;
            ULONG ZeroMapRegisters : 1;
            ULONG Reserved : 9;
            ULONG NumberOfRemapPages : 20;
        };
    };
    PDRIVER_CONTROL DeviceRoutine;
    PVOID DeviceContext;
    ULONG NumberOfMapRegisters;
    PVOID DeviceObject;
    PVOID CurrentIrp;
    PKDPC BufferChainingDpc;
} WAIT_CONTEXT_BLOCK, *PWAIT_CONTEXT_BLOCK;



























typedef struct  _DEVICE_OBJECT {
    CSHORT Type;
    USHORT Size;
    LONG ReferenceCount;
    struct _DRIVER_OBJECT *DriverObject;
    struct _DEVICE_OBJECT *NextDevice;
    struct _DEVICE_OBJECT *AttachedDevice;
    struct _IRP *CurrentIrp;
    PIO_TIMER Timer;
    ULONG Flags;                                
    ULONG Characteristics;                      
     PVPB Vpb;
    PVOID DeviceExtension;
    ULONG DeviceType;
    CCHAR StackSize;
    union {
        LIST_ENTRY ListEntry;
        WAIT_CONTEXT_BLOCK Wcb;
    } Queue;
    ULONG AlignmentRequirement;
    KDEVICE_QUEUE DeviceQueue;
    KDPC Dpc;

    
    
    
    

    ULONG ActiveThreadCount;
    PSECURITY_DESCRIPTOR SecurityDescriptor;
    KEVENT DeviceLock;

    USHORT SectorSize;
    USHORT Spare1;

    struct _DEVOBJ_EXTENSION  *DeviceObjectExtension;
    PVOID  Reserved;

} DEVICE_OBJECT;

typedef struct _DEVICE_OBJECT *PDEVICE_OBJECT; 





struct  _DEVICE_OBJECT_POWER_EXTENSION;


typedef struct _DEVOBJ_EXTENSION {

    CSHORT          Type;
    USHORT          Size;

    PDEVICE_OBJECT  DeviceObject;               

    
    
    

    ULONG           PowerFlags;                             
    struct          _DEVICE_OBJECT_POWER_EXTENSION  *Dope;  
    ULONG ExtensionFlags;                                   
    PVOID           DeviceNode;                             
    PDEVICE_OBJECT  AttachedTo;                             
     LONG StartIoCount;                           
    LONG           StartIoKey;                              
    ULONG          StartIoFlags;                            
    PVPB           Vpb;                                     
    PVOID DependencyNode;                                   
    PVOID InterruptContext;                                 
     LONG InterruptCount;                         

     PVOID VerifierContext;

} DEVOBJ_EXTENSION, *PDEVOBJ_EXTENSION;









typedef struct _DRIVER_EXTENSION {

    
    
    

    struct _DRIVER_OBJECT *DriverObject;

    
    
    
    
    

    PDRIVER_ADD_DEVICE AddDevice;

    
    
    
    

    ULONG Count;

    
    
    
    

    UNICODE_STRING ServiceKeyName;

    
    
    


} DRIVER_EXTENSION, *PDRIVER_EXTENSION;


typedef struct _DRIVER_OBJECT {
    CSHORT Type;
    CSHORT Size;

    
    
    
    
    

    PDEVICE_OBJECT DeviceObject;
    ULONG Flags;

    
    
    
    
    

    PVOID DriverStart;
    ULONG DriverSize;
    PVOID DriverSection;
    PDRIVER_EXTENSION DriverExtension;

    
    
    
    

    UNICODE_STRING DriverName;

    
    
    
    

    PUNICODE_STRING HardwareDatabase;

    
    
    
    
    
    
    
    

    PFAST_IO_DISPATCH FastIoDispatch;

    
    
    
    
    

    PDRIVER_INITIALIZE DriverInit;
    PDRIVER_STARTIO DriverStartIo;
    PDRIVER_UNLOAD DriverUnload;
    PDRIVER_DISPATCH MajorFunction[0x1b + 1];

} DRIVER_OBJECT;
typedef struct _DRIVER_OBJECT *PDRIVER_OBJECT; 








typedef struct _SECTION_OBJECT_POINTERS {
    PVOID DataSectionObject;
    PVOID SharedCacheMap;
    PVOID ImageSectionObject;
} SECTION_OBJECT_POINTERS;
typedef SECTION_OBJECT_POINTERS *PSECTION_OBJECT_POINTERS;





typedef struct _IO_COMPLETION_CONTEXT {
    PVOID Port;
    PVOID Key;

    
    
    
    
    
    
    
    
    
    

    LONG_PTR UsageCount;
} IO_COMPLETION_CONTEXT, *PIO_COMPLETION_CONTEXT;





















































typedef struct _FILE_OBJECT {
    CSHORT Type;
    CSHORT Size;
    PDEVICE_OBJECT DeviceObject;
    PVPB Vpb;
    PVOID FsContext;
    PVOID FsContext2;
    PSECTION_OBJECT_POINTERS SectionObjectPointer;
    PVOID PrivateCacheMap;
    NTSTATUS FinalStatus;
    struct _FILE_OBJECT *RelatedFileObject;
    BOOLEAN LockOperation;
    BOOLEAN DeletePending;
    BOOLEAN ReadAccess;
    BOOLEAN WriteAccess;
    BOOLEAN DeleteAccess;
    BOOLEAN SharedRead;
    BOOLEAN SharedWrite;
    BOOLEAN SharedDelete;
    ULONG Flags;
    UNICODE_STRING FileName;
    LARGE_INTEGER CurrentByteOffset;
     ULONG Waiters;
     ULONG Busy;
    PVOID LastLock;
    KEVENT Lock;
    KEVENT Event;
     PIO_COMPLETION_CONTEXT CompletionContext;
    KSPIN_LOCK IrpListLock;
    LIST_ENTRY IrpList;
     PVOID FileObjectExtension;
} FILE_OBJECT;
typedef struct _FILE_OBJECT *PFILE_OBJECT; 








































typedef struct  _IRP {
    CSHORT Type;
    USHORT Size;


    
    
    

    
    
    
    

    PMDL MdlAddress;

    
    
    

    ULONG Flags;

    
    
    
    
    
    
    
    
    
    
    
    
    

    union {
        struct _IRP *MasterIrp;
         LONG IrpCount;
        PVOID SystemBuffer;
    } AssociatedIrp;

    
    
    
    

    LIST_ENTRY ThreadListEntry;

    
    
    

    IO_STATUS_BLOCK IoStatus;

    
    
    

    KPROCESSOR_MODE RequestorMode;

    
    
    
    

    BOOLEAN PendingReturned;

    
    
    

    CHAR StackCount;
    CHAR CurrentLocation;

    
    
    

    BOOLEAN Cancel;

    
    
    

    KIRQL CancelIrql;

    
    
    
    

    CCHAR ApcEnvironment;

    
    
    

    UCHAR AllocationFlags;

    
    
    

    union {
        PIO_STATUS_BLOCK UserIosb;

        
        
        
        
        

        PVOID IoRingContext;
    };

    PKEVENT UserEvent;
    union {
        struct {
            union {
                PIO_APC_ROUTINE UserApcRoutine;
                PVOID IssuingProcess;
            };
            union {
                PVOID UserApcContext;

                
                
                
                
                
                
                
                
                

                struct _IORING_OBJECT* IoRing;
            };
        } AsynchronousParameters;
        LARGE_INTEGER AllocationSize;
    } Overlay;

    
    
    
    

     PDRIVER_CANCEL CancelRoutine;

    
    
    
    
    
    
    

    PVOID UserBuffer;

    
    
    
    
    
    
    
    
    

    union {

        struct {

            union {

                
                
                
                

                KDEVICE_QUEUE_ENTRY DeviceQueueEntry;

                struct {

                    
                    
                    
                    
                    

                    PVOID DriverContext[4];

                } ;

            } ;

            
            
            

            PETHREAD Thread;

            
            
            
            
            

            PCHAR AuxiliaryBuffer;

            
            
            
            
            

            struct {

                
                
                
                

                LIST_ENTRY ListEntry;

                union {

                    
                    
                    
                    
                    
                    

                    struct _IO_STACK_LOCATION *CurrentStackLocation;

                    
                    
                    

                    ULONG PacketType;
                };
            };

            
            
            
            
            

            PFILE_OBJECT OriginalFileObject;

        } Overlay;

        
        
        
        
        
        
        

        KAPC Apc;

        
        
        
        

        PVOID CompletionKey;

    } Tail;

} IRP;

typedef IRP *PIRP;






 
 
 
typedef
NTSTATUS
IO_COMPLETION_ROUTINE (
      PDEVICE_OBJECT DeviceObject,
      PIRP Irp,
      PVOID Context
    );

typedef IO_COMPLETION_ROUTINE *PIO_COMPLETION_ROUTINE;
































































































































































































typedef enum _DEVICE_RELATION_TYPE {
    BusRelations,
    EjectionRelations,
    PowerRelations,
    RemovalRelations,
    TargetDeviceRelation,
    SingleBusRelations,
    TransportRelations
} DEVICE_RELATION_TYPE, *PDEVICE_RELATION_TYPE;

typedef struct _DEVICE_RELATIONS {
    ULONG Count;
      PDEVICE_OBJECT Objects[1];  
} DEVICE_RELATIONS, *PDEVICE_RELATIONS;
















typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
    DeviceUsageTypeUndefined,
    DeviceUsageTypePaging,
    DeviceUsageTypeHibernation,
    DeviceUsageTypeDumpFile,
    DeviceUsageTypeBoot,
    DeviceUsageTypePostDisplay,
    DeviceUsageTypeGuestAssigned
} DEVICE_USAGE_NOTIFICATION_TYPE;







typedef struct _INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    
} INTERFACE, *PINTERFACE;



typedef   struct _DEVICE_CAPABILITIES {
      USHORT Size;
    USHORT Version;  
    ULONG DeviceD1:1;
    ULONG DeviceD2:1;
    ULONG LockSupported:1;
    ULONG EjectSupported:1; 
    ULONG Removable:1;
    ULONG DockDevice:1;
    ULONG UniqueID:1;
    ULONG SilentInstall:1;
    ULONG RawDeviceOK:1;
    ULONG SurpriseRemovalOK:1;
    ULONG WakeFromD0:1;
    ULONG WakeFromD1:1;
    ULONG WakeFromD2:1;
    ULONG WakeFromD3:1;
    ULONG HardwareDisabled:1;
    ULONG NonDynamic:1;
    ULONG WarmEjectSupported:1;
    ULONG NoDisplayInUI:1;


    ULONG Reserved1:1; 
    ULONG WakeFromInterrupt:1;
    ULONG SecureDevice:1;
    ULONG ChildOfVgaEnabledBridge:1;
    ULONG DecodeIoOnBoot:1;


    ULONG Reserved:9; 

    ULONG Address;
    ULONG UINumber;

    DEVICE_POWER_STATE DeviceState[7];
      SYSTEM_POWER_STATE SystemWake;
      DEVICE_POWER_STATE DeviceWake;
    ULONG D1Latency;
    ULONG D2Latency;
    ULONG D3Latency;
} DEVICE_CAPABILITIES, *PDEVICE_CAPABILITIES;

typedef struct _POWER_SEQUENCE {
    ULONG SequenceD1;
    ULONG SequenceD2;
    ULONG SequenceD3;
} POWER_SEQUENCE, *PPOWER_SEQUENCE;

typedef enum {
    BusQueryDeviceID = 0,       
    BusQueryHardwareIDs = 1,    
    BusQueryCompatibleIDs = 2,  
    BusQueryInstanceID = 3,     
    BusQueryDeviceSerialNumber = 4,   
    BusQueryContainerID = 5     
} BUS_QUERY_ID_TYPE, *PBUS_QUERY_ID_TYPE;

typedef ULONG PNP_DEVICE_STATE, *PPNP_DEVICE_STATE;











typedef enum {
    DeviceTextDescription = 0,            
    DeviceTextLocationInformation = 1     
} DEVICE_TEXT_TYPE, *PDEVICE_TEXT_TYPE;























typedef struct _IO_STACK_LOCATION {
    UCHAR MajorFunction;
    UCHAR MinorFunction;
    UCHAR Flags;
    UCHAR Control;

    
    
    
    
    

    union {

        
        
        

        struct {
            PIO_SECURITY_CONTEXT SecurityContext;
            ULONG Options;
            USHORT  FileAttributes;
            USHORT ShareAccess;
            ULONG  EaLength;
        } Create;

        
        
        
        
        
        
        
        

        struct {
            PIO_SECURITY_CONTEXT SecurityContext;
            ULONG Options;
            USHORT  Reserved;
            USHORT ShareAccess;
            PNAMED_PIPE_CREATE_PARAMETERS Parameters;
        } CreatePipe;

        
        
        
        
        
        
        
        

        struct {
            PIO_SECURITY_CONTEXT SecurityContext;
            ULONG Options;
            USHORT  Reserved;
            USHORT ShareAccess;
            PMAILSLOT_CREATE_PARAMETERS Parameters;
        } CreateMailslot;

        
        
        

        struct {
            ULONG Length;
            ULONG  Key;

            ULONG Flags;

            LARGE_INTEGER ByteOffset;
        } Read;

        
        
        

        struct {
            ULONG Length;
            ULONG  Key;

            ULONG Flags;

            LARGE_INTEGER ByteOffset;
        } Write;

        
        
        

        struct {
            ULONG Length;
            PUNICODE_STRING FileName;
            FILE_INFORMATION_CLASS FileInformationClass;
            ULONG  FileIndex;
        } QueryDirectory;

        
        
        

        struct {
            ULONG Length;
            ULONG  CompletionFilter;
        } NotifyDirectory;

        
        
        
        
        
        

        struct {
            ULONG Length;
            ULONG  CompletionFilter;
            DIRECTORY_NOTIFY_INFORMATION_CLASS  DirectoryNotifyInformationClass;
        } NotifyDirectoryEx;

        
        
        

        struct {
            ULONG Length;
            FILE_INFORMATION_CLASS  FileInformationClass;
        } QueryFile;

        
        
        

        struct {
            ULONG Length;
            FILE_INFORMATION_CLASS  FileInformationClass;
            PFILE_OBJECT FileObject;
            union {
                struct {
                    BOOLEAN ReplaceIfExists;
                    BOOLEAN AdvanceOnly;
                };
                ULONG ClusterCount;
                HANDLE DeleteHandle;
            };
        } SetFile;



        
        
        

        struct {
            ULONG Length;
            PVOID EaList;
            ULONG EaListLength;
            ULONG  EaIndex;
        } QueryEa;

        
        
        

        struct {
            ULONG Length;
        } SetEa;



        
        
        

        struct {
            ULONG Length;
            FS_INFORMATION_CLASS  FsInformationClass;
        } QueryVolume;



        
        
        

        struct {
            ULONG Length;
            FS_INFORMATION_CLASS  FsInformationClass;
        } SetVolume;

        
        
        
        
        
        

        struct {
            ULONG OutputBufferLength;
            ULONG  InputBufferLength;
            ULONG  FsControlCode;
            PVOID Type3InputBuffer;
        } FileSystemControl;
        
        
        

        struct {
            PLARGE_INTEGER Length;
            ULONG  Key;
            LARGE_INTEGER ByteOffset;
        } LockControl;

        
        
        
        
        



        
        
        
        
        



        
        
        
        
        
        

        struct {
            ULONG OutputBufferLength;
            ULONG  InputBufferLength;
            ULONG  IoControlCode;
            PVOID Type3InputBuffer;
        } DeviceIoControl;

        
        
        

        struct {
            SECURITY_INFORMATION SecurityInformation;
            ULONG  Length;
        } QuerySecurity;

        
        
        

        struct {
            SECURITY_INFORMATION SecurityInformation;
            PSECURITY_DESCRIPTOR SecurityDescriptor;
        } SetSecurity;

        
        
        
        
        

        struct {
            PVPB Vpb;
            PDEVICE_OBJECT DeviceObject;
            ULONG OutputBufferLength;
        } MountVolume;

        
        
        

        struct {
            PVPB Vpb;
            PDEVICE_OBJECT DeviceObject;
        } VerifyVolume;

        
        
        

        struct {
            struct _SCSI_REQUEST_BLOCK *Srb;
        } Scsi;



        
        
        

        struct {
            ULONG Length;
            PSID StartSid;
            PFILE_GET_QUOTA_INFORMATION SidList;
            ULONG SidListLength;
        } QueryQuota;

        
        
        

        struct {
            ULONG Length;
        } SetQuota;



        
        
        

        struct {
            DEVICE_RELATION_TYPE Type;
        } QueryDeviceRelations;

        
        
        

        struct {
            const GUID *InterfaceType;
            USHORT Size;
            USHORT Version;
            PINTERFACE Interface;
            PVOID InterfaceSpecificData;
        } QueryInterface;

        
        
        

        struct {
            PDEVICE_CAPABILITIES Capabilities;
        } DeviceCapabilities;

        
        
        

        struct {
            PIO_RESOURCE_REQUIREMENTS_LIST IoResourceRequirementList;
        } FilterResourceRequirements;

        
        
        

        struct {
            ULONG WhichSpace;
            PVOID Buffer;
            ULONG Offset;
            ULONG  Length;
        } ReadWriteConfig;

        
        
        

        struct {
            BOOLEAN Lock;
        } SetLock;

        
        
        

        struct {
            BUS_QUERY_ID_TYPE IdType;
        } QueryId;

        
        
        

        struct {
            DEVICE_TEXT_TYPE DeviceTextType;
            LCID  LocaleId;
        } QueryDeviceText;

        
        
        

        struct {
            BOOLEAN InPath;
            BOOLEAN Reserved[3];
            DEVICE_USAGE_NOTIFICATION_TYPE  Type;
        } UsageNotification;

        
        
        

        struct {
            SYSTEM_POWER_STATE PowerState;
        } WaitWake;

        
        
        

        struct {
            PPOWER_SEQUENCE PowerSequence;
        } PowerSequence;

        
        
        


        struct {
            union {
                ULONG SystemContext;
                SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
            };
            POWER_STATE_TYPE  Type;
            POWER_STATE  State;
            POWER_ACTION  ShutdownType;
        } Power;









        
        
        

        struct {
            PCM_RESOURCE_LIST AllocatedResources;
            PCM_RESOURCE_LIST AllocatedResourcesTranslated;
        } StartDevice;

        
        
        
        
        

        
        
        

        struct {
            ULONG_PTR ProviderId;
            PVOID DataPath;
            ULONG BufferSize;
            PVOID Buffer;
        } WMI;

        
        
        

        struct {
            PVOID Argument1;
            PVOID Argument2;
            PVOID Argument3;
            PVOID Argument4;
        } Others;

    } Parameters;

    
    
    
    

    PDEVICE_OBJECT DeviceObject;

    
    
    
    

    PFILE_OBJECT FileObject;

    
    
    
    

    PIO_COMPLETION_ROUTINE CompletionRoutine;

    
    
    
    

    PVOID Context;

} IO_STACK_LOCATION, *PIO_STACK_LOCATION;













typedef struct _SHARE_ACCESS {
    ULONG OpenCount;
    ULONG Readers;
    ULONG Writers;
    ULONG Deleters;
    ULONG SharedRead;
    ULONG SharedWrite;
    ULONG SharedDelete;
} SHARE_ACCESS, *PSHARE_ACCESS;









typedef struct _LINK_SHARE_ACCESS {

    ULONG OpenCount;
    ULONG Deleters;
    ULONG SharedDelete;
} LINK_SHARE_ACCESS, *PLINK_SHARE_ACCESS;








 
 

void
IoAcquireCancelSpinLock(
       PKIRQL Irql
    );




 
 

NTSTATUS
IoAllocateDriverObjectExtension(
       PDRIVER_OBJECT DriverObject,
       PVOID ClientIdentificationAddress,
       ULONG DriverObjectExtensionSize,
    
     
    
    PVOID *DriverObjectExtension
    );



 

PVOID
IoAllocateErrorLogEntry(
      PVOID IoObject,
      UCHAR EntrySize
    );



 
 

PIRP
IoAllocateIrp(
      CCHAR StackSize,
      BOOLEAN ChargeQuota
    );



 
 

PIRP
IoAllocateIrpEx(
      PDEVICE_OBJECT DeviceObject,
      CCHAR StackSize,
      BOOLEAN ChargeQuota
    );







 

PMDL
IoAllocateMdl(
        PVOID VirtualAddress,
      ULONG Length,
      BOOLEAN SecondaryBuffer,
      BOOLEAN ChargeQuota,
      PIRP Irp
    );


typedef enum _IO_PAGING_PRIORITY {
    IoPagingPriorityInvalid,        
    IoPagingPriorityNormal,         
    IoPagingPriorityHigh,           
    IoPagingPriorityReserved1,      
    IoPagingPriorityReserved2       
} IO_PAGING_PRIORITY;


 
 

NTSTATUS
IoAttachDevice(
      
    PDEVICE_OBJECT SourceDevice,
       PUNICODE_STRING TargetDevice,
      PDEVICE_OBJECT *AttachedDevice
    );




 
 

PDEVICE_OBJECT
IoAttachDeviceToDeviceStack(
      
    PDEVICE_OBJECT SourceDevice,
      PDEVICE_OBJECT TargetDevice
    );



 
 
 

PIRP
IoBuildAsynchronousFsdRequest(
      ULONG MajorFunction,
      PDEVICE_OBJECT DeviceObject,
      PVOID Buffer,
      ULONG Length,
      PLARGE_INTEGER StartingOffset,
      PIO_STATUS_BLOCK IoStatusBlock
    );



 
 
 

PIRP
IoBuildDeviceIoControlRequest(
       ULONG IoControlCode,
       PDEVICE_OBJECT DeviceObject,
       PVOID InputBuffer,
       ULONG InputBufferLength,
      PVOID OutputBuffer,
      ULONG OutputBufferLength,
      BOOLEAN InternalDeviceIoControl,
      PKEVENT Event,
      PIO_STATUS_BLOCK IoStatusBlock
    );



 

void
IoBuildPartialMdl(
      PMDL SourceMdl,
      PMDL TargetMdl,
      PVOID VirtualAddress,
      ULONG Length
    );


typedef struct _BOOTDISK_INFORMATION {
    LONGLONG BootPartitionOffset;
    LONGLONG SystemPartitionOffset;
    ULONG BootDeviceSignature;
    ULONG SystemDeviceSignature;
} BOOTDISK_INFORMATION, *PBOOTDISK_INFORMATION;




typedef struct _BOOTDISK_INFORMATION_EX {
    LONGLONG BootPartitionOffset;
    LONGLONG SystemPartitionOffset;
    ULONG BootDeviceSignature;
    ULONG SystemDeviceSignature;
    GUID BootDeviceGuid;
    GUID SystemDeviceGuid;
    BOOLEAN BootDeviceIsGpt;
    BOOLEAN SystemDeviceIsGpt;
} BOOTDISK_INFORMATION_EX, *PBOOTDISK_INFORMATION_EX;


typedef struct _LOADER_PARTITION_INFORMATION_EX {
    ULONG PartitionStyle;
    ULONG PartitionNumber;
    union {
        ULONG Signature;
        GUID DeviceId;
    };
    ULONG Flags;
} LOADER_PARTITION_INFORMATION_EX, *PLOADER_PARTITION_INFORMATION_EX;

typedef struct _BOOTDISK_INFORMATION_LITE {
    ULONG NumberEntries;
    LOADER_PARTITION_INFORMATION_EX Entries[1];
} BOOTDISK_INFORMATION_LITE, *PBOOTDISK_INFORMATION_LITE;

















NTSTATUS
IoGetBootDiskInformation(
      PBOOTDISK_INFORMATION BootDiskInformation,
      ULONG Size
    );




NTSTATUS
IoGetBootDiskInformationLite(
     PBOOTDISK_INFORMATION_LITE *BootDiskInformation
    );








 
 
 

PIRP
IoBuildSynchronousFsdRequest(
       ULONG MajorFunction,
       PDEVICE_OBJECT DeviceObject,
    PVOID Buffer,
      ULONG Length,
      PLARGE_INTEGER StartingOffset,
       PKEVENT Event,
      PIO_STATUS_BLOCK IoStatusBlock
    );




 
 

NTSTATUS

IofCallDriver(
      PDEVICE_OBJECT DeviceObject,
        PIRP Irp
    );







 

BOOLEAN
IoCancelIrp(
      PIRP Irp
    );




 

NTSTATUS
IoCheckShareAccess(
      ACCESS_MASK DesiredAccess,
      ULONG DesiredShareAccess,
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess,
      BOOLEAN Update
    );




NTSTATUS
IoCheckShareAccessEx(
      ACCESS_MASK DesiredAccess,
      ULONG DesiredShareAccess,
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess,
      BOOLEAN Update,
      PBOOLEAN WritePermission
    );




NTSTATUS
IoCheckLinkShareAccess(
      ACCESS_MASK DesiredAccess,
      ULONG DesiredShareAccess,
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess,
      PLINK_SHARE_ACCESS LinkShareAccess,
      ULONG IoShareAccessFlags
    );






























































typedef enum _IO_COMPLETION_ROUTINE_RESULT {

    ContinueCompletion = ((NTSTATUS)0x00000000L),
    StopCompletion = ((NTSTATUS)0xC0000016L)

} IO_COMPLETION_ROUTINE_RESULT, *PIO_COMPLETION_ROUTINE_RESULT;



 

void

IofCompleteRequest(
      PIRP Irp,
      CCHAR PriorityBoost
    );






 

NTSTATUS
IoConnectInterrupt(
      PKINTERRUPT *InterruptObject,
       PKSERVICE_ROUTINE ServiceRoutine,
      PVOID ServiceContext,
      PKSPIN_LOCK SpinLock,
       ULONG Vector,
       KIRQL Irql,
       KIRQL SynchronizeIrql,
       KINTERRUPT_MODE InterruptMode,
       BOOLEAN ShareVector,
       KAFFINITY ProcessorEnableMask,
       BOOLEAN FloatingSave
    );






typedef struct _IO_INTERRUPT_MESSAGE_INFO_ENTRY {

    
    
    
    

    PHYSICAL_ADDRESS MessageAddress;

    
    
    
    

    KAFFINITY TargetProcessorSet;

    
    
    
    

    PKINTERRUPT InterruptObject;

    
    
    
    

    ULONG MessageData;

    
    
    
    
    
    
    

    ULONG Vector;
    KIRQL Irql;
    KINTERRUPT_MODE Mode;
    KINTERRUPT_POLARITY Polarity;

} IO_INTERRUPT_MESSAGE_INFO_ENTRY, *PIO_INTERRUPT_MESSAGE_INFO_ENTRY;





typedef struct _IO_INTERRUPT_MESSAGE_INFO {

    
    
    
    
    
    
    
    
    
    
    
    
    

    KIRQL UnifiedIrql;

    
    
    
    

    ULONG MessageCount;

    
    
    
    
    
    

    IO_INTERRUPT_MESSAGE_INFO_ENTRY MessageInfo[1];

} IO_INTERRUPT_MESSAGE_INFO, *PIO_INTERRUPT_MESSAGE_INFO;






typedef struct _IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS {

    
    
    
    
    
    

      PDEVICE_OBJECT PhysicalDeviceObject;

    
    
    
    
    

      PKINTERRUPT *InterruptObject;

    
    
    
    

      PKSERVICE_ROUTINE ServiceRoutine;

    
    
    
    

      PVOID ServiceContext;

    
    
    
    
    
    
    
    
    
    

      PKSPIN_LOCK SpinLock;

    
    
    
    
    
    
    
    
    
    

      KIRQL SynchronizeIrql;

    
    
    
    

      BOOLEAN FloatingSave;

    
    
    
    
    
    

      BOOLEAN ShareVector;

    
    
    
    
    
    

      ULONG Vector;

    
    
    
    
    

      KIRQL Irql;

    
    
    
    
    
    
    

      KINTERRUPT_MODE InterruptMode;

    
    
    
    
    
    

      KAFFINITY ProcessorEnableMask;

    
    
    
    
    
    
    
    

      USHORT Group;

} IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS,
  *PIO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS;






typedef struct _IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS {

    
    
    
    
    
    
    

      PDEVICE_OBJECT PhysicalDeviceObject;

    
    
    
    
    

      PKINTERRUPT *InterruptObject;

    
    
    
    

      PKSERVICE_ROUTINE ServiceRoutine;

    
    
    
    

      PVOID ServiceContext;

    
    
    
    
    
    
    
    
    
    

      PKSPIN_LOCK SpinLock;

    
    
    
    
    
    
    
    
    
    
    
    
    
    

      KIRQL SynchronizeIrql;

    
    
    
    

      BOOLEAN FloatingSave;

} IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS,
  *PIO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS;






typedef struct _IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS {

    
    
    
    
    
    
    

      PDEVICE_OBJECT PhysicalDeviceObject;

    
    
    
    
    
    
    
    
    
    

    union {
          PVOID *Generic;
          PIO_INTERRUPT_MESSAGE_INFO *InterruptMessageTable;
          PKINTERRUPT *InterruptObject;
    } ConnectionContext;

    
    
    
    
    

      PKMESSAGE_SERVICE_ROUTINE MessageServiceRoutine;

    
    
    
    

      PVOID ServiceContext;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

      PKSPIN_LOCK SpinLock;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

      KIRQL SynchronizeIrql;

    
    
    
    

      BOOLEAN FloatingSave;

    
    
    
    
    
    
    
    
    
    
    
    
    
    

      PKSERVICE_ROUTINE FallBackServiceRoutine;

} IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS,
  *PIO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS;

















typedef struct _IO_CONNECT_INTERRUPT_PARAMETERS {

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

      ULONG Version;

    
    
    
    

    union {
        IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS FullySpecified;
        IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS LineBased;
        IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS MessageBased;
    };

} IO_CONNECT_INTERRUPT_PARAMETERS, *PIO_CONNECT_INTERRUPT_PARAMETERS;



NTSTATUS
IoConnectInterruptEx (
      PIO_CONNECT_INTERRUPT_PARAMETERS Parameters
    );




 
 

NTSTATUS
IoCreateDevice(
       PDRIVER_OBJECT DriverObject,
       ULONG DeviceExtensionSize,
      PUNICODE_STRING DeviceName,
       ULONG DeviceType,
       ULONG DeviceCharacteristics,
       BOOLEAN Exclusive,
    
    
    PDEVICE_OBJECT *DeviceObject
    );






 
 

BOOLEAN
IoIsWdmVersionAvailable(
     UCHAR MajorVersion,
      
    UCHAR MinorVersion
    );



 

NTSTATUS
IoCreateFile(
      PHANDLE FileHandle,
       ACCESS_MASK DesiredAccess,
       POBJECT_ATTRIBUTES ObjectAttributes,
      PIO_STATUS_BLOCK IoStatusBlock,
      PLARGE_INTEGER AllocationSize,
       ULONG FileAttributes,
       ULONG ShareAccess,
       ULONG Disposition,
       ULONG CreateOptions,
      PVOID EaBuffer,
       ULONG EaLength,
       CREATE_FILE_TYPE CreateFileType,
      PVOID InternalParameters,
       ULONG Options
    );




 

PKEVENT
IoCreateNotificationEvent(
       PUNICODE_STRING EventName,
      PHANDLE EventHandle
    );



 

NTSTATUS
IoCreateSymbolicLink(
      PUNICODE_STRING SymbolicLinkName,
      PUNICODE_STRING DeviceName
    );



 

PKEVENT
IoCreateSynchronizationEvent(
       PUNICODE_STRING EventName,
      PHANDLE EventHandle
    );



 

NTSTATUS
IoCreateUnprotectedSymbolicLink(
      PUNICODE_STRING SymbolicLinkName,
      PUNICODE_STRING DeviceName
    );




 

void
IoDeleteDevice (
        PDEVICE_OBJECT DeviceObject
    );



 

NTSTATUS
IoDeleteSymbolicLink(
      PUNICODE_STRING SymbolicLinkName
    );



 

void
IoDetachDevice(
      PDEVICE_OBJECT TargetDevice
    );



 

void
IoDisconnectInterrupt(
      PKINTERRUPT InterruptObject
    );






typedef struct _IO_DISCONNECT_INTERRUPT_PARAMETERS {

    
    
    
    
    
    

      ULONG Version;

    
    
    
    
    
    
    
    
    
    

    union {
          PVOID Generic;
          PKINTERRUPT InterruptObject;
          PIO_INTERRUPT_MESSAGE_INFO InterruptMessageTable;
    } ConnectionContext;

} IO_DISCONNECT_INTERRUPT_PARAMETERS, *PIO_DISCONNECT_INTERRUPT_PARAMETERS;



void
IoDisconnectInterruptEx (
      PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters
    );






typedef struct _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS {

    
    
    
    
    
    

      ULONG Version;

    
    
    
    
    
    
    
    
    
    

    union {
          PVOID Generic;
          PKINTERRUPT InterruptObject;
          PIO_INTERRUPT_MESSAGE_INFO InterruptMessageTable;
    } ConnectionContext;

} IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS,
  *PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS;



void
IoReportInterruptActive (
      PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS Parameters
    );

void
IoReportInterruptInactive (
      PIO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS Parameters
    );




NTSTATUS
IoGetAffinityInterrupt (
      PKINTERRUPT InterruptObject,
      PGROUP_AFFINITY GroupAffinity
    );




 

void
IoFreeIrp(
        PIRP Irp
    );



 

void
IoFreeMdl(
    PMDL Mdl
    );



                
                                 
PDEVICE_OBJECT                              
IoGetAttachedDeviceReference(               
      PDEVICE_OBJECT DeviceObject        
    );                                      

                                            


 
PIO_STACK_LOCATION
IoGetCurrentIrpStackLocation(
      PIRP Irp
)

















;



 
 

PVOID
IoGetDriverObjectExtension(
      PDRIVER_OBJECT DriverObject,
      PVOID ClientIdentificationAddress
    );



 

PEPROCESS
IoGetCurrentProcess(
    void
    );



 

NTSTATUS
IoGetDeviceObjectPointer(
       PUNICODE_STRING ObjectName,
       ACCESS_MASK DesiredAccess,
      PFILE_OBJECT *FileObject,
      PDEVICE_OBJECT *DeviceObject
    );



 
 

struct _DMA_ADAPTER *
IoGetDmaAdapter(
      PDEVICE_OBJECT PhysicalDeviceObject,           
      struct _DEVICE_DESCRIPTION *DeviceDescription,
      
    PULONG NumberOfMapRegisters
    );




typedef struct _DMA_IOMMU_INTERFACE DMA_IOMMU_INTERFACE, *PDMA_IOMMU_INTERFACE;

 
 

NTSTATUS
IoGetIommuInterface (
      ULONG Version,
      PDMA_IOMMU_INTERFACE InterfaceOut
    );





typedef struct _DMA_IOMMU_INTERFACE_EX DMA_IOMMU_INTERFACE_EX, *PDMA_IOMMU_INTERFACE_EX;

 
 

NTSTATUS
IoGetIommuInterfaceEx (
      ULONG Version,
      ULONGLONG Flags,
      PDMA_IOMMU_INTERFACE_EX InterfaceOut
    );





BOOLEAN
IoForwardIrpSynchronously(
      PDEVICE_OBJECT DeviceObject,
      PIRP Irp
    );







NTSTATUS
IoSynchronousCallDriver(
      PDEVICE_OBJECT DeviceObject,
      PIRP Irp
    );




































 

PVOID
IoGetInitialStack(
    void
    );


 

void
IoGetStackLimits (
      PULONG_PTR LowLimit,
      PULONG_PTR HighLimit
    );


LOGICAL
IoWithinStackLimits(
      ULONG_PTR RegionStart,
      SIZE_T RegionSize
    );









 

ULONG_PTR
IoGetRemainingStackSize (
    void
    )
;


 
PIO_STACK_LOCATION
IoGetNextIrpStackLocation(
      PIRP Irp
    )















;



PDEVICE_OBJECT
IoGetRelatedDeviceObject(
      PFILE_OBJECT FileObject
    );





PIRP
IoGetTopLevelIrp(
    void
    );




void

IoInitializeDpcRequest(
      PDEVICE_OBJECT DeviceObject,
      PIO_DPC_ROUTINE DpcRoutine
    )





















;


void

IoInitializeThreadedDpcRequest(
      PDEVICE_OBJECT DeviceObject,
      PIO_DPC_ROUTINE DpcRoutine
    )























;



 

void
IoInitializeIrp(
      PIRP Irp,
      USHORT PacketSize,
      CCHAR StackSize
    );



 

void
IoCleanupIrp(
      PIRP Irp
    );



 

void
IoInitializeIrpEx(
      PIRP Irp,
      PDEVICE_OBJECT DeviceObject,
      USHORT PacketSize,
      CCHAR StackSize
    );




 

NTSTATUS
IoInitializeTimer(
      PDEVICE_OBJECT DeviceObject,
      PIO_TIMER_ROUTINE TimerRoutine,
        PVOID Context
    );





 

void
IoReuseIrp(
      PIRP Irp,
      NTSTATUS Iostatus
    );






































void
IoMarkIrpPending(
      PIRP Irp
)

















;




 

NTSTATUS
IoRegisterShutdownNotification(
      PDEVICE_OBJECT DeviceObject
    );



 

NTSTATUS
IoRegisterLastChanceShutdownNotification(
      PDEVICE_OBJECT DeviceObject
    );





 
 

void
IoReleaseCancelSpinLock(
          KIRQL Irql
    );




 

void
IoRemoveShareAccess(
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess
    );




void
IoRemoveLinkShareAccess(
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess,
      PLINK_SHARE_ACCESS LinkShareAccess
    );




void
IoRemoveLinkShareAccessEx(
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess,
      PLINK_SHARE_ACCESS LinkShareAccess,
      ULONG IoShareAccessFlags
    );






void
IoRequestDpc(
       PDEVICE_OBJECT DeviceObject,
      PIRP Irp,
        PVOID Context
    )























;




 
 

PDRIVER_CANCEL
IoSetCancelRoutine(
       PIRP Irp,
      PDRIVER_CANCEL CancelRoutine
    )



















;


 

void
IoSetCompletionRoutine(
      PIRP Irp,
      PIO_COMPLETION_ROUTINE CompletionRoutine,
        PVOID Context,
      BOOLEAN InvokeOnSuccess,
      BOOLEAN InvokeOnError,
      BOOLEAN InvokeOnCancel
    )
































;


 

 
NTSTATUS
IoSetCompletionRoutineEx(
      PDEVICE_OBJECT DeviceObject,
      PIRP Irp,
      PIO_COMPLETION_ROUTINE CompletionRoutine,
      PVOID Context,
      BOOLEAN InvokeOnSuccess,
      BOOLEAN InvokeOnError,
      BOOLEAN InvokeOnCancel
    );




void
IoSetNextIrpStackLocation (
     PIRP Irp
    )
















;


void
IoCopyCurrentIrpStackLocationToNext(
      PIRP Irp
)






















;


void
IoSkipCurrentIrpStackLocation (
      PIRP Irp
)



















;



void
IoSetShareAccess(
       ACCESS_MASK DesiredAccess,
       ULONG DesiredShareAccess,
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess
    );




void
IoSetShareAccessEx(
       ACCESS_MASK DesiredAccess,
       ULONG DesiredShareAccess,
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess,
      PBOOLEAN WritePermission
    );




void
IoSetLinkShareAccess(
      ACCESS_MASK DesiredAccess,
      ULONG DesiredShareAccess,
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess,
      PLINK_SHARE_ACCESS LinkShareAccess,
      ULONG IoShareAccessFlags
    );







void
IoSetTopLevelIrp(
      PIRP Irp
    );





typedef struct _IO_REMOVE_LOCK_TRACKING_BLOCK * PIO_REMOVE_LOCK_TRACKING_BLOCK;

typedef struct _IO_REMOVE_LOCK_COMMON_BLOCK {
    BOOLEAN     Removed;
    BOOLEAN     Reserved [3];
     LONG        IoCount;
    KEVENT      RemoveEvent;

} IO_REMOVE_LOCK_COMMON_BLOCK;

typedef struct _IO_REMOVE_LOCK_DBG_BLOCK {
    LONG        Signature;
    ULONG       HighWatermark;
    LONGLONG    MaxLockedTicks;
    LONG        AllocateTag;
    LIST_ENTRY  LockList;
    KSPIN_LOCK  Spin;
     LONG        LowMemoryCount;
    ULONG       Reserved1[4];
    PVOID       Reserved2;
    PIO_REMOVE_LOCK_TRACKING_BLOCK Blocks;
} IO_REMOVE_LOCK_DBG_BLOCK;

typedef struct _IO_REMOVE_LOCK {
    IO_REMOVE_LOCK_COMMON_BLOCK Common;

    IO_REMOVE_LOCK_DBG_BLOCK Dbg;

} IO_REMOVE_LOCK, *PIO_REMOVE_LOCK;





 

void
__stdcall
IoInitializeRemoveLockEx(
      PIO_REMOVE_LOCK Lock,
      ULONG  AllocateTag, 
      ULONG  MaxLockedMinutes, 
      ULONG  HighWatermark, 
      ULONG  RemlockSize 
    );



















 

NTSTATUS
__stdcall
IoAcquireRemoveLockEx (
      PIO_REMOVE_LOCK RemoveLock,
      PVOID          Tag, 
      PCSTR              File,
      ULONG              Line,
      ULONG              RemlockSize 
    );










































void
__stdcall
IoReleaseRemoveLockEx(
      PIO_REMOVE_LOCK RemoveLock,
      PVOID          Tag, 
      ULONG              RemlockSize 
    );































 

void
__stdcall
IoReleaseRemoveLockAndWaitEx(
      PIO_REMOVE_LOCK RemoveLock,
      PVOID       Tag,
      ULONG           RemlockSize 
    );
















































   

USHORT
IoSizeOfIrpEx(
      PDEVICE_OBJECT DeviceObject,
      CCHAR StackSize
    );



   

void
IoStartNextPacket(
      PDEVICE_OBJECT DeviceObject,
      BOOLEAN Cancelable
    );



 

void
IoStartNextPacketByKey(
      PDEVICE_OBJECT DeviceObject,
      BOOLEAN Cancelable,
      ULONG Key
    );




 

void
IoStartPacket(
      PDEVICE_OBJECT DeviceObject,
      PIRP Irp,
      PULONG Key,
      PDRIVER_CANCEL CancelFunction
    );



void
IoSetStartIoAttributes(
      PDEVICE_OBJECT DeviceObject,
      BOOLEAN DeferredStartIo,
      BOOLEAN NonCancelable
    );




 

void
IoStartTimer(
      PDEVICE_OBJECT DeviceObject
    );





 

void
IoStopTimer(
      PDEVICE_OBJECT DeviceObject
    );





 

void
IoUnregisterShutdownNotification(
      PDEVICE_OBJECT DeviceObject
    );



 

void
IoUpdateShareAccess(
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess
    );




void
IoUpdateLinkShareAccess(
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess,
      PLINK_SHARE_ACCESS LinkShareAccess
    );




void
IoUpdateLinkShareAccessEx(
      PFILE_OBJECT FileObject,
      PSHARE_ACCESS ShareAccess,
      PLINK_SHARE_ACCESS LinkShareAccess,
      ULONG IoShareAccessFlags
    );



                    
                                     
void                                            
IoWriteErrorLogEntry(                           
      PVOID ElEntry                          
    );                                          




 
 
 
NTSTATUS
IoCreateSystemThread(
      PVOID IoObject,
      PHANDLE ThreadHandle,
      ULONG DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      HANDLE ProcessHandle,
      PCLIENT_ID ClientId,
      PKSTART_ROUTINE StartRoutine,
      PVOID StartContext
    );



typedef struct _IO_WORKITEM *PIO_WORKITEM;

 
 
 
typedef
void
IO_WORKITEM_ROUTINE (
      PDEVICE_OBJECT DeviceObject,
      PVOID Context
    );

typedef IO_WORKITEM_ROUTINE *PIO_WORKITEM_ROUTINE;



 
 
 

PIO_WORKITEM
IoAllocateWorkItem(
      PDEVICE_OBJECT DeviceObject
    );

 

void
IoFreeWorkItem(
        PIO_WORKITEM IoWorkItem
    );

 

void
IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
      PIO_WORKITEM_ROUTINE WorkerRoutine,
      WORK_QUEUE_TYPE QueueType,
        PVOID Context
    );



 
 
 
typedef
void
IO_WORKITEM_ROUTINE_EX (
      PVOID IoObject,
      PVOID Context,
      PIO_WORKITEM IoWorkItem
    );

typedef IO_WORKITEM_ROUTINE_EX *PIO_WORKITEM_ROUTINE_EX;



 
void
IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
      PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
      WORK_QUEUE_TYPE QueueType,
        PVOID Context
    );

ULONG
IoSizeofWorkItem(
    void
    );

void
IoInitializeWorkItem(
      PVOID IoObject,
      PIO_WORKITEM IoWorkItem
    );

void
IoUninitializeWorkItem(
      PIO_WORKITEM IoWorkItem
    );





 
BOOLEAN
IoTryQueueWorkItem(
       PIO_WORKITEM IoWorkItem,
      PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
      WORK_QUEUE_TYPE QueueType,
        PVOID Context
    );





 

NTSTATUS
IoWMIRegistrationControl(
      PDEVICE_OBJECT DeviceObject,
      ULONG Action
);




















 

NTSTATUS
IoWMIAllocateInstanceIds(
      LPCGUID Guid,
      ULONG InstanceCount,
      ULONG *FirstInstanceId
    );




NTSTATUS
IoWMISuggestInstanceName(
      PDEVICE_OBJECT PhysicalDeviceObject,
      PUNICODE_STRING SymbolicLinkName,
      BOOLEAN CombineNames,
      PUNICODE_STRING SuggestedInstanceName
    );



 
 
 

NTSTATUS
IoWMIWriteEvent(
       PVOID WnodeEventItem
    );




ULONG
IoWMIDeviceObjectToProviderId(
      PDEVICE_OBJECT DeviceObject
    );






NTSTATUS
IoWMIOpenBlock (
      LPCGUID Guid,
      ULONG DesiredAccess,
      PVOID *DataBlockObject
    );




NTSTATUS
IoWMIQueryAllData (
      PVOID DataBlockObject,
      PULONG InOutBufferSize,
       PVOID OutBuffer
    );




NTSTATUS
IoWMIQueryAllDataMultiple (
      PVOID *DataBlockObjectList,
      ULONG ObjectCount,
      PULONG InOutBufferSize,
       PVOID OutBuffer
    );




NTSTATUS
IoWMIQuerySingleInstance (
      PVOID DataBlockObject,
      PUNICODE_STRING InstanceName,
      PULONG InOutBufferSize,
       PVOID OutBuffer
    );




NTSTATUS
IoWMIQuerySingleInstanceMultiple (
      PVOID *DataBlockObjectList,
      PUNICODE_STRING InstanceNames,
      ULONG ObjectCount,
      PULONG InOutBufferSize,
       PVOID OutBuffer
    );




NTSTATUS
IoWMISetSingleInstance(
      PVOID DataBlockObject,
      PUNICODE_STRING InstanceName,
      ULONG Version,
      ULONG ValueBufferSize,
      PVOID ValueBuffer
    );




NTSTATUS
IoWMISetSingleItem(
      PVOID DataBlockObject,
      PUNICODE_STRING InstanceName,
      ULONG DataItemId,
      ULONG Version,
      ULONG ValueBufferSize,
      PVOID ValueBuffer
    );




NTSTATUS
IoWMIExecuteMethod(
      PVOID DataBlockObject,
      PUNICODE_STRING InstanceName,
      ULONG MethodId,
      ULONG InBufferSize,
      PULONG OutBufferSize,
      PUCHAR InOutBuffer
    );


typedef
 
 
void FWMI_NOTIFICATION_CALLBACK (
    PVOID Wnode,
    PVOID Context
    );
typedef FWMI_NOTIFICATION_CALLBACK *WMI_NOTIFICATION_CALLBACK;



NTSTATUS
IoWMISetNotificationCallback(
      PVOID Object,
      WMI_NOTIFICATION_CALLBACK Callback,
      PVOID Context
    );




NTSTATUS
IoWMIHandleToInstanceName(
      PVOID DataBlockObject,
      HANDLE FileHandle,
      PUNICODE_STRING InstanceName
    );




NTSTATUS
IoWMIDeviceObjectToInstanceName(
      PVOID DataBlockObject,
      PDEVICE_OBJECT DeviceObject,
      PUNICODE_STRING InstanceName
    );



 

BOOLEAN
IoIs32bitProcess(
      PIRP Irp
    );


 

BOOLEAN
IoIsInitiator32bitProcess(
      PIRP Irp
    );





void
IoFreeErrorLogEntry(
      PVOID ElEntry
    );















































typedef struct _IO_CSQ IO_CSQ, *PIO_CSQ;










typedef struct _IO_CSQ_IRP_CONTEXT {
    ULONG   Type;
    PIRP    Irp;
    PIO_CSQ Csq;
} IO_CSQ_IRP_CONTEXT, *PIO_CSQ_IRP_CONTEXT;





typedef void
IO_CSQ_INSERT_IRP (
      struct _IO_CSQ    *Csq,
      PIRP              Irp
    );

typedef IO_CSQ_INSERT_IRP *PIO_CSQ_INSERT_IRP;

typedef NTSTATUS
IO_CSQ_INSERT_IRP_EX (
      struct _IO_CSQ    *Csq,
      PIRP              Irp,
      PVOID             InsertContext
    );

typedef IO_CSQ_INSERT_IRP_EX *PIO_CSQ_INSERT_IRP_EX;

typedef void
IO_CSQ_REMOVE_IRP (
      PIO_CSQ Csq,
      PIRP    Irp
    );

typedef IO_CSQ_REMOVE_IRP *PIO_CSQ_REMOVE_IRP;









typedef PIRP
IO_CSQ_PEEK_NEXT_IRP (
      PIO_CSQ Csq,
      PIRP    Irp,
      PVOID   PeekContext
    );

typedef IO_CSQ_PEEK_NEXT_IRP *PIO_CSQ_PEEK_NEXT_IRP;





typedef void
IO_CSQ_ACQUIRE_LOCK (
       PIO_CSQ Csq,
       PKIRQL  Irql
     );

typedef IO_CSQ_ACQUIRE_LOCK *PIO_CSQ_ACQUIRE_LOCK;

typedef void
IO_CSQ_RELEASE_LOCK (
       PIO_CSQ Csq,
       KIRQL   Irql
     );

typedef IO_CSQ_RELEASE_LOCK *PIO_CSQ_RELEASE_LOCK;






typedef void
IO_CSQ_COMPLETE_CANCELED_IRP (
      PIO_CSQ    Csq,
      PIRP       Irp
    );

typedef IO_CSQ_COMPLETE_CANCELED_IRP *PIO_CSQ_COMPLETE_CANCELED_IRP;








typedef struct _IO_CSQ {
    ULONG                            Type;
    PIO_CSQ_INSERT_IRP               CsqInsertIrp;
    PIO_CSQ_REMOVE_IRP               CsqRemoveIrp;
    PIO_CSQ_PEEK_NEXT_IRP            CsqPeekNextIrp;
    PIO_CSQ_ACQUIRE_LOCK             CsqAcquireLock;
    PIO_CSQ_RELEASE_LOCK             CsqReleaseLock;
    PIO_CSQ_COMPLETE_CANCELED_IRP    CsqCompleteCanceledIrp;
    PVOID                            ReservePointer;    
} IO_CSQ, *PIO_CSQ;







NTSTATUS
IoCsqInitialize(
      PIO_CSQ                       Csq,
      PIO_CSQ_INSERT_IRP             CsqInsertIrp,
      PIO_CSQ_REMOVE_IRP             CsqRemoveIrp,
      PIO_CSQ_PEEK_NEXT_IRP          CsqPeekNextIrp,
      PIO_CSQ_ACQUIRE_LOCK           CsqAcquireLock,
      PIO_CSQ_RELEASE_LOCK           CsqReleaseLock,
      PIO_CSQ_COMPLETE_CANCELED_IRP  CsqCompleteCanceledIrp
    );




NTSTATUS
IoCsqInitializeEx(
      PIO_CSQ                       Csq,
      PIO_CSQ_INSERT_IRP_EX          CsqInsertIrp,
      PIO_CSQ_REMOVE_IRP             CsqRemoveIrp,
      PIO_CSQ_PEEK_NEXT_IRP          CsqPeekNextIrp,
      PIO_CSQ_ACQUIRE_LOCK           CsqAcquireLock,
      PIO_CSQ_RELEASE_LOCK           CsqReleaseLock,
      PIO_CSQ_COMPLETE_CANCELED_IRP  CsqCompleteCanceledIrp
    );








void
IoCsqInsertIrp(
      PIO_CSQ               Csq,
      PIRP                  Irp,
      PIO_CSQ_IRP_CONTEXT Context
    );




NTSTATUS
IoCsqInsertIrpEx(
      PIO_CSQ               Csq,
      PIRP              Irp,
      PIO_CSQ_IRP_CONTEXT Context,
      PVOID                InsertContext
    );








PIRP
IoCsqRemoveNextIrp(
       PIO_CSQ Csq,
      PVOID   PeekContext
    );










PIRP
IoCsqRemoveIrp(
      PIO_CSQ             Csq,
      PIO_CSQ_IRP_CONTEXT Context
    );







NTSTATUS
IoValidateDeviceIoControlAccess(
      PIRP   Irp,
      ULONG  RequiredAccess
    );




IO_PRIORITY_HINT
IoGetIoPriorityHint(
      PIRP Irp
    );



NTSTATUS
IoSetIoPriorityHint(
      PIRP               Irp,
      IO_PRIORITY_HINT   PriorityHint
    );



NTSTATUS
IoAllocateSfioStreamIdentifier(
       PFILE_OBJECT  FileObject,
       ULONG         Length,
       PVOID         Signature,
      PVOID         *StreamIdentifier
    );



PVOID
IoGetSfioStreamIdentifier(
      PFILE_OBJECT   FileObject,
      PVOID          Signature
    );



NTSTATUS
IoFreeSfioStreamIdentifier(
      PFILE_OBJECT   FileObject,
      PVOID          Signature
    );




NTSTATUS
IoGetIoAttributionHandle (
      PIRP Irp,
      PVOID* IoAttributionHandle
    );



typedef struct _IO_ATTRIBUTION_INFORMATION {

    ULONG Version;

    union {
        struct {
            ULONG MajorCode : 8;
            ULONG IoStart : 1;
            ULONG QueueOnly : 1;
            ULONG IoFailed : 1;
            ULONG VirtualDevice : 1;
            ULONG Spare : 20;
        };

        ULONG AllFlags;
    } Flags;

    ULONG Length;

    
    
    

    ULONGLONG ServiceStartTime;
    ULONGLONG CurrentTime;

} IO_ATTRIBUTION_INFORMATION, *PIO_ATTRIBUTION_INFORMATION;

NTSTATUS
IoRecordIoAttribution (
      PVOID OpaqueHandle,
      IO_ATTRIBUTION_INFORMATION* AttributionInformation
    );






NTSTATUS
IoSetIoAttributionIrp (
      PIRP Irp,
      PVOID AttributionSource,
      ULONG Flags
    );



typedef enum _IO_ACCESS_TYPE {

    
    
    
    
    ReadAccess,

    
    
    
    
    WriteAccess,

    
    
    
    
    ModifyAccess

} IO_ACCESS_TYPE;

typedef enum _IO_ACCESS_MODE {

    
    
    
    
    SequentialAccess,

    
    
    
    
    RandomAccess

} IO_ACCESS_MODE;

typedef enum _IO_CONTAINER_NOTIFICATION_CLASS {
    IoSessionStateNotification, 
    IoMaxContainerNotificationClass
} IO_CONTAINER_NOTIFICATION_CLASS;

typedef struct _IO_SESSION_STATE_NOTIFICATION {
    ULONG Size;
    ULONG Flags;
    PVOID IoObject;
    ULONG EventMask;
    PVOID Context;
} IO_SESSION_STATE_NOTIFICATION, *PIO_SESSION_STATE_NOTIFICATION;

typedef enum _IO_CONTAINER_INFORMATION_CLASS {
    IoSessionStateInformation, 
    IoMaxContainerInformationClass
} IO_CONTAINER_INFORMATION_CLASS;

typedef struct _IO_SESSION_STATE_INFORMATION {
    ULONG SessionId;
    IO_SESSION_STATE SessionState;
    BOOLEAN LocalSession;
} IO_SESSION_STATE_INFORMATION, *PIO_SESSION_STATE_INFORMATION;


NTSTATUS
IoGetContainerInformation (
      IO_CONTAINER_INFORMATION_CLASS InformationClass,
      PVOID ContainerObject,
      PVOID Buffer,
      ULONG BufferLength
    );




typedef NTSTATUS (*PIO_CONTAINER_NOTIFICATION_FUNCTION)(void);

typedef
NTSTATUS
IO_SESSION_NOTIFICATION_FUNCTION (
      PVOID SessionObject,
      PVOID IoObject,
      ULONG Event,
      PVOID Context,
      PVOID NotificationPayload,
      ULONG PayloadLength
    );

typedef IO_SESSION_NOTIFICATION_FUNCTION *PIO_SESSION_NOTIFICATION_FUNCTION;



NTSTATUS
IoRegisterContainerNotification(
      IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
      PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
      PVOID NotificationInformation,
      ULONG NotificationInformationLength,
      PVOID CallbackRegistration
    );



void
IoUnregisterContainerNotification(
      PVOID CallbackRegistration
    );





 
 

NTSTATUS
IoReserveKsrPersistentMemory (
      PDRIVER_OBJECT DriverObject,
      PDEVICE_OBJECT PhysicalDeviceObject,
      SIZE_T Size,
      ULONG Flags,
      PVOID * DataHandle
    );

 
 

NTSTATUS
IoFreeKsrPersistentMemory (
      PVOID DataHandle
    );

 
 

NTSTATUS
IoQueryKsrPersistentMemorySize (
      PDRIVER_OBJECT DriverObject,
      PDEVICE_OBJECT PhysicalDeviceObject,
      PSIZE_T BufferSize
    );

 
 

NTSTATUS
IoAcquireKsrPersistentMemory (
      PDRIVER_OBJECT DriverObject,
      PDEVICE_OBJECT PhysicalDeviceObject,
      PVOID Buffer,
      PSIZE_T Size
    );

 
 

NTSTATUS
IoWriteKsrPersistentMemory (
      PVOID DataHandle,
      PVOID Buffer,
      SIZE_T Size
    );





typedef
NTSTATUS
(IO_PERSISTED_MEMORY_ENUMERATION_CALLBACK) (
      PDRIVER_OBJECT DriverObject,
      PDEVICE_OBJECT PhysicalDeviceObject,
      PUNICODE_STRING PhysicalDeviceId,
      PUSHORT DataTag,
      PULONG DataVersion,
      PVOID Context
    );

typedef IO_PERSISTED_MEMORY_ENUMERATION_CALLBACK*
         PIO_PERSISTED_MEMORY_ENUMERATION_CALLBACK;

 
 

NTSTATUS
IoEnumerateKsrPersistentMemoryEx (
      PDRIVER_OBJECT DriverObject,
      PDEVICE_OBJECT PhysicalDeviceObject,
      PUNICODE_STRING PhysicalDeviceId,
      PIO_PERSISTED_MEMORY_ENUMERATION_CALLBACK Callback,
      PVOID CallbackContext
    );

 
 

NTSTATUS
IoReserveKsrPersistentMemoryEx (
      PDRIVER_OBJECT DriverObject,
      PDEVICE_OBJECT PhysicalDeviceObject,
      PUNICODE_STRING PhysicalDeviceId,
      PUSHORT DataTag,
      ULONG DataVersion,
      SIZE_T Size,
      ULONG Flags,
      PVOID * DataHandle
    );

 
 

NTSTATUS
IoQueryKsrPersistentMemorySizeEx (
      PDRIVER_OBJECT DriverObject,
      PDEVICE_OBJECT PhysicalDeviceObject,
      PUNICODE_STRING PhysicalDeviceId,
      PUSHORT DataTag,
      PULONG DataVersion,
      PSIZE_T BufferSize
    );

 
 

NTSTATUS
IoAcquireKsrPersistentMemoryEx (
      PDRIVER_OBJECT DriverObject,
      PDEVICE_OBJECT PhysicalDeviceObject,
      PUNICODE_STRING PhysicalDeviceId,
      PUSHORT DataTag,
      PULONG DataVersion,
      PVOID Buffer,
      PSIZE_T Size
    );















typedef ULONG64 TRACEHANDLE, *PTRACEHANDLE;






































typedef struct _ETW_TRACE_SESSION_SETTINGS {
    ULONG Version;
    ULONG BufferSize;
    ULONG MinimumBuffers;
    ULONG MaximumBuffers;
    ULONG LoggerMode;
    ULONG FlushTimer;
    ULONG FlushThreshold;
    ULONG ClockType;
} ETW_TRACE_SESSION_SETTINGS, *PETW_TRACE_SESSION_SETTINGS;

typedef enum _TRACE_INFORMATION_CLASS {
    TraceIdClass,
    TraceHandleClass,
    TraceEnableFlagsClass,
    TraceEnableLevelClass,
    GlobalLoggerHandleClass,
    EventLoggerHandleClass,
    AllLoggerHandlesClass,
    TraceHandleByNameClass,
    LoggerEventsLostClass,
    TraceSessionSettingsClass,
    LoggerEventsLoggedClass,
    DiskIoNotifyRoutinesClass,
    TraceInformationClassReserved1,
    FltIoNotifyRoutinesClass,
    TraceInformationClassReserved2,
    WdfNotifyRoutinesClass,
    MaxTraceInformationClass
} TRACE_INFORMATION_CLASS;



 
NTSTATUS
WmiQueryTraceInformation (
      TRACE_INFORMATION_CLASS TraceInformationClass,
      PVOID TraceInformation,
      ULONG TraceInformationLength,
      PULONG RequiredLength,
      PVOID Buffer
    );





















































  
    
  
























































































































typedef ULONGLONG REGHANDLE, *PREGHANDLE;





typedef struct _EVENT_DATA_DESCRIPTOR {

    ULONGLONG       Ptr;   
    ULONG           Size;  
    union {
        ULONG       Reserved; 
        struct {
            UCHAR   Type;     
            UCHAR   Reserved1;
            USHORT  Reserved2;
        } ;
    } ;

} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR;











typedef struct _EVENT_DESCRIPTOR {

    USHORT Id; 














    UCHAR Version; 





    UCHAR Channel; 




















    UCHAR Level; 










    UCHAR Opcode; 




























    USHORT      Task; 






    ULONGLONG   Keyword; 























} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR;

typedef const EVENT_DESCRIPTOR *PCEVENT_DESCRIPTOR;






typedef struct _EVENT_FILTER_DESCRIPTOR {

    ULONGLONG   Ptr;  
    ULONG       Size; 
    ULONG       Type; 

} EVENT_FILTER_DESCRIPTOR, *PEVENT_FILTER_DESCRIPTOR;





typedef struct _EVENT_FILTER_HEADER {

    USHORT     Id;
    UCHAR      Version;
    UCHAR      Reserved[5];
    ULONGLONG  InstanceId;
    ULONG      Size;
    ULONG      NextOffset;

} EVENT_FILTER_HEADER, *PEVENT_FILTER_HEADER;





typedef struct _EVENT_FILTER_EVENT_ID {
    BOOLEAN FilterIn;
    UCHAR Reserved;
    USHORT Count;
    USHORT Events[1];
} EVENT_FILTER_EVENT_ID, *PEVENT_FILTER_EVENT_ID;

















typedef struct _EVENT_FILTER_EVENT_NAME {
    ULONGLONG MatchAnyKeyword;
    ULONGLONG MatchAllKeyword;
    UCHAR Level;
    BOOLEAN FilterIn;
    USHORT NameCount;
    UCHAR Names[1]; 
} EVENT_FILTER_EVENT_NAME, *PEVENT_FILTER_EVENT_NAME;













typedef struct _EVENT_FILTER_LEVEL_KW {
    ULONGLONG MatchAnyKeyword;
    ULONGLONG MatchAllKeyword;
    UCHAR Level;
    BOOLEAN FilterIn;
} EVENT_FILTER_LEVEL_KW, *PEVENT_FILTER_LEVEL_KW;







typedef enum _EVENT_INFO_CLASS {
    EventProviderBinaryTrackInfo, 





    EventProviderSetReserved1, 

    EventProviderSetTraits, 







    EventProviderUseDescriptorType, 



    MaxEventInfo
} EVENT_INFO_CLASS;












































































































































































































































































































































































void
EventDataDescCreate(
      PEVENT_DATA_DESCRIPTOR EventDataDescriptor,
      const void* DataPtr,
      ULONG DataSize
    )
;









void
EventDescCreate(
      PEVENT_DESCRIPTOR EventDescriptor,
      USHORT Id,
      UCHAR Version,
      UCHAR Channel,
      UCHAR Level,
      USHORT Task,
      UCHAR Opcode,
      ULONGLONG Keyword
    )
;





void
EventDescZero(
      PEVENT_DESCRIPTOR EventDescriptor
    )
;






USHORT
EventDescGetId(
      PCEVENT_DESCRIPTOR EventDescriptor
    )
;


UCHAR
EventDescGetVersion(
      PCEVENT_DESCRIPTOR EventDescriptor
    )
;


USHORT
EventDescGetTask(
      PCEVENT_DESCRIPTOR EventDescriptor
    )
;


UCHAR
EventDescGetOpcode(
      PCEVENT_DESCRIPTOR EventDescriptor
    )
;


UCHAR
EventDescGetChannel(
      PCEVENT_DESCRIPTOR EventDescriptor
    )
;


UCHAR
EventDescGetLevel(
      PCEVENT_DESCRIPTOR EventDescriptor
    )
;


ULONGLONG
EventDescGetKeyword(
      PCEVENT_DESCRIPTOR EventDescriptor
    )
;






PEVENT_DESCRIPTOR
EventDescSetId(
      PEVENT_DESCRIPTOR EventDescriptor,
      USHORT Id
    )
;


PEVENT_DESCRIPTOR
EventDescSetVersion(
      PEVENT_DESCRIPTOR EventDescriptor,
      UCHAR Version
    )
;


PEVENT_DESCRIPTOR
EventDescSetTask(
      PEVENT_DESCRIPTOR EventDescriptor,
      USHORT Task
    )
;


PEVENT_DESCRIPTOR
EventDescSetOpcode(
      PEVENT_DESCRIPTOR EventDescriptor,
      UCHAR Opcode
    )
;


PEVENT_DESCRIPTOR
EventDescSetLevel(
      PEVENT_DESCRIPTOR EventDescriptor,
      UCHAR  Level
    )
;


PEVENT_DESCRIPTOR
EventDescSetChannel(
      PEVENT_DESCRIPTOR EventDescriptor,
      UCHAR Channel
    )
;


PEVENT_DESCRIPTOR
EventDescSetKeyword(
      PEVENT_DESCRIPTOR EventDescriptor,
      ULONGLONG Keyword
    )
;



PEVENT_DESCRIPTOR
EventDescOrKeyword(
      PEVENT_DESCRIPTOR EventDescriptor,
      ULONGLONG Keyword
    )
;























typedef
 
 
void
__stdcall
ETWENABLECALLBACK (
      LPCGUID SourceId,
      ULONG ControlCode,
      UCHAR Level,
      ULONGLONG MatchAnyKeyword,
      ULONGLONG MatchAllKeyword,
      PEVENT_FILTER_DESCRIPTOR FilterData,
      PVOID CallbackContext
    );

typedef ETWENABLECALLBACK *PETWENABLECALLBACK;







 
NTSTATUS
EtwRegister (
      LPCGUID ProviderId,
      PETWENABLECALLBACK EnableCallback,
      PVOID CallbackContext,
      PREGHANDLE RegHandle
    );




 
NTSTATUS
EtwUnregister (
      REGHANDLE RegHandle
    );




 
NTSTATUS
EtwSetInformation(
      REGHANDLE RegHandle,
      EVENT_INFO_CLASS InformationClass,
      PVOID EventInformation,
      ULONG InformationLength
    );








 
BOOLEAN
EtwEventEnabled (
      REGHANDLE RegHandle,
      PCEVENT_DESCRIPTOR EventDescriptor
    );




 
BOOLEAN
EtwProviderEnabled (
      REGHANDLE RegHandle,
      UCHAR Level,
      ULONGLONG Keyword
    );









NTSTATUS
EtwActivityIdControl (
      ULONG ControlCode,
      LPGUID ActivityId
    );








 
NTSTATUS
EtwWrite (
      REGHANDLE RegHandle,
      PCEVENT_DESCRIPTOR EventDescriptor,
      LPCGUID ActivityId,
      ULONG UserDataCount,
      PEVENT_DATA_DESCRIPTOR  UserData
    );




 
NTSTATUS
EtwWriteTransfer (
      REGHANDLE RegHandle,
      PCEVENT_DESCRIPTOR EventDescriptor,
      LPCGUID ActivityId,
      LPCGUID RelatedActivityId,
      ULONG UserDataCount,
      PEVENT_DATA_DESCRIPTOR UserData
    );




 
NTSTATUS
EtwWriteString (
      REGHANDLE RegHandle,
      UCHAR Level,
      ULONGLONG Keyword,
      LPCGUID ActivityId,
      PCWSTR String
    );




 
NTSTATUS
EtwWriteEx (
      REGHANDLE RegHandle,
      PCEVENT_DESCRIPTOR EventDescriptor,
      ULONG64 Filter,
      ULONG Flags,
      LPCGUID ActivityId,
      LPCGUID RelatedActivityId,
      ULONG UserDataCount,
      PEVENT_DATA_DESCRIPTOR UserData
    );




 
NTSTATUS
SeEtwWriteKMCveEvent (
      PCUNICODE_STRING CveId,
      PCUNICODE_STRING AdditionalDetails
    );


















typedef enum {
    DevicePropertyDeviceDescription = 0x0 | 0,
    DevicePropertyHardwareID = 0x1 | 0,
    DevicePropertyCompatibleIDs = 0x2 | 0,
    DevicePropertyBootConfiguration = 0x3,
    DevicePropertyBootConfigurationTranslated = 0x4,
    DevicePropertyClassName = 0x5 | 0,
    DevicePropertyClassGuid = 0x6 | 0,
    DevicePropertyDriverKeyName = 0x7 | 0,
    DevicePropertyManufacturer = 0x8 | 0,
    DevicePropertyFriendlyName = 0x9 | 0,
    DevicePropertyLocationInformation = 0xa | 0,
    DevicePropertyPhysicalDeviceObjectName = 0xb | 0,
    DevicePropertyBusTypeGuid = 0xc | 0,
    DevicePropertyLegacyBusType = 0xd,
    DevicePropertyBusNumber = 0xe,
    DevicePropertyEnumeratorName = 0xf | 0,
    DevicePropertyAddress = 0x10,
    DevicePropertyUINumber = 0x11,
    DevicePropertyInstallState = 0x12,
    DevicePropertyRemovalPolicy = 0x13,
    DevicePropertyResourceRequirements = 0x14,
    DevicePropertyAllocatedResources = 0x15,
    DevicePropertyContainerID = 0x16 | 0
} DEVICE_REGISTRY_PROPERTY;



typedef
 
 
 
BOOLEAN TRANSLATE_BUS_ADDRESS(
      PVOID Context,
      PHYSICAL_ADDRESS BusAddress,
      ULONG Length,
      PULONG AddressSpace,
      PPHYSICAL_ADDRESS TranslatedAddress
    );
typedef TRANSLATE_BUS_ADDRESS *PTRANSLATE_BUS_ADDRESS;

typedef
 
 
struct _DMA_ADAPTER *GET_DMA_ADAPTER(
      PVOID Context,
      struct _DEVICE_DESCRIPTION *DeviceDescriptor,
      PULONG NumberOfMapRegisters
    );
typedef GET_DMA_ADAPTER *PGET_DMA_ADAPTER;

typedef
 
 
ULONG GET_SET_DEVICE_DATA (
      PVOID Context,
      ULONG DataType,
      PVOID Buffer,
      ULONG Offset,
      ULONG Length
    );
typedef GET_SET_DEVICE_DATA *PGET_SET_DEVICE_DATA;

typedef enum _DEVICE_INSTALL_STATE {
    InstallStateInstalled,
    InstallStateNeedsReinstall,
    InstallStateFailedInstall,
    InstallStateFinishInstall
} DEVICE_INSTALL_STATE, *PDEVICE_INSTALL_STATE;








typedef struct _PNP_BUS_INFORMATION {
    GUID BusTypeGuid;
    INTERFACE_TYPE LegacyBusType;
    ULONG BusNumber;
} PNP_BUS_INFORMATION, *PPNP_BUS_INFORMATION;











typedef struct _LEGACY_BUS_INFORMATION {
    GUID BusTypeGuid;
    INTERFACE_TYPE LegacyBusType;
    ULONG BusNumber;
} LEGACY_BUS_INFORMATION, *PLEGACY_BUS_INFORMATION;




typedef enum _DEVICE_REMOVAL_POLICY {

    RemovalPolicyExpectNoRemoval = 1,
    RemovalPolicyExpectOrderlyRemoval = 2,
    RemovalPolicyExpectSurpriseRemoval = 3

} DEVICE_REMOVAL_POLICY, *PDEVICE_REMOVAL_POLICY;

typedef struct _BUS_INTERFACE_STANDARD {
    
    
    
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    
    
    
    PTRANSLATE_BUS_ADDRESS TranslateBusAddress;
    PGET_DMA_ADAPTER GetDmaAdapter;
    PGET_SET_DEVICE_DATA SetBusData;
    PGET_SET_DEVICE_DATA GetBusData;

} BUS_INTERFACE_STANDARD, *PBUS_INTERFACE_STANDARD;

typedef
 
 
 
ULONG GET_VIRTUAL_DEVICE_DATA (
                      PVOID Context,
                         USHORT VirtualFunction,
         PVOID Buffer,
                         ULONG Offset,
                         ULONG Length
    );
typedef GET_VIRTUAL_DEVICE_DATA *PGET_VIRTUAL_DEVICE_DATA;

typedef
 
 
 
ULONG SET_VIRTUAL_DEVICE_DATA (
                  PVOID Context,
                     USHORT VirtualFunction,
      PVOID Buffer,
                     ULONG Offset,
                     ULONG Length
    );
typedef SET_VIRTUAL_DEVICE_DATA *PSET_VIRTUAL_DEVICE_DATA;

typedef
 
 
 
NTSTATUS GET_VIRTUAL_DEVICE_LOCATION (
          PVOID Context,
             USHORT VirtualFunction,
            PUINT16 SegmentNumber,
            PUINT8 BusNumber,
            PUINT8 FunctionNumber
    );
typedef GET_VIRTUAL_DEVICE_LOCATION *PGET_VIRTUAL_DEVICE_LOCATION;

typedef
 
 
 
void GET_VIRTUAL_DEVICE_RESOURCES (
          PVOID   Context,
            PUINT8  CapturedBusNumbers
    );
typedef GET_VIRTUAL_DEVICE_RESOURCES *PGET_VIRTUAL_DEVICE_RESOURCES;

typedef
 
 
 
NTSTATUS ENABLE_VIRTUALIZATION (
          PVOID   Context,
             UINT16  NumVFs,
             BOOLEAN EnableVfMigration,
             BOOLEAN EnableMigrationInterrupt,
             BOOLEAN EnableVirtualization
    );
typedef ENABLE_VIRTUALIZATION *PENABLE_VIRTUALIZATION;


typedef
 
 
NTSTATUS
GET_VIRTUAL_FUNCTION_PROBED_BARS(
              PVOID  Context,
      PULONG BaseRegisterValues
    ) ;
typedef GET_VIRTUAL_FUNCTION_PROBED_BARS *PGET_VIRTUAL_FUNCTION_PROBED_BARS;


typedef struct _PCI_VIRTUALIZATION_INTERFACE {
    
    
    
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    
    
    
    PSET_VIRTUAL_DEVICE_DATA SetVirtualFunctionData;
    PGET_VIRTUAL_DEVICE_DATA GetVirtualFunctionData;

    PGET_VIRTUAL_DEVICE_LOCATION    GetLocation;
    PGET_VIRTUAL_DEVICE_RESOURCES   GetResources;

    PENABLE_VIRTUALIZATION EnableVirtualization;

    PGET_VIRTUAL_FUNCTION_PROBED_BARS GetVirtualFunctionProbedBars;

} PCI_VIRTUALIZATION_INTERFACE, *PPCI_VIRTUALIZATION_INTERFACE;







typedef enum _PCI_ACS_BIT {

    PciAcsReserved = 0,
    PciAcsBitEnable,
    PciAcsBitDisable,
    PciAcsBitDontCare

} PCI_ACS_BIT, *PPCI_ACS_BIT;

typedef
 
 
 
NTSTATUS PCI_SET_ACS (
          PVOID   Context,
             PCI_ACS_BIT EnableSourceValidation,
             PCI_ACS_BIT EnableTranslationBlocking,
             PCI_ACS_BIT EnableP2PRequestRedirect,
             PCI_ACS_BIT EnableCompletionRedirect,
             PCI_ACS_BIT EnableUpstreamForwarding,
             PCI_ACS_BIT EnableEgressControl,
             PCI_ACS_BIT EnableDirectTranslatedP2P
    );

typedef PCI_SET_ACS *PPCI_SET_ACS;

typedef struct _PCI_SECURITY_INTERFACE {

    
    
    

    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    
    
    

    PPCI_SET_ACS    SetAccessControlServices;

} PCI_SECURITY_INTERFACE, *PPCI_SECURITY_INTERFACE;











typedef
 
 
 
NTSTATUS
PCI_SET_ACS2 (
      PVOID Context,
      ULONG ScenariosToModify,
      ULONG ScenarioState
    );
typedef PCI_SET_ACS2 *PPCI_SET_ACS2;

typedef struct _PCI_SECURITY_INTERFACE2 {

    
    
    

    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    
    
    

    ULONG Flags;
    ULONG SupportedScenarios;
    PPCI_SET_ACS2 SetAccessControlServices;

} PCI_SECURITY_INTERFACE2, *PPCI_SECURITY_INTERFACE2;








typedef
 
 
 
NTSTATUS PCI_SET_ATS (
      PVOID Context,
      BOOLEAN EnableAts
    );

typedef PCI_SET_ATS *PPCI_SET_ATS;

typedef struct _PCI_ATS_INTERFACE {

    
    
    

    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    
    
    

    PPCI_SET_ATS    SetAddressTranslationServices;

    UCHAR InvalidateQueueDepth;
} PCI_ATS_INTERFACE, *PPCI_ATS_INTERFACE;



typedef
void
(*PREENUMERATE_SELF)(
      PVOID Context
    );

typedef struct _REENUMERATE_SELF_INTERFACE_STANDARD {
    
    
    
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    
    
    
    PREENUMERATE_SELF SurpriseRemoveAndReenumerateSelf;
} REENUMERATE_SELF_INTERFACE_STANDARD, *PREENUMERATE_SELF_INTERFACE_STANDARD;





typedef
void
(*PQUERYEXTENDEDADDRESS)(
      PVOID Context,
      PULONG64 ExtendedAddress
    );

typedef struct _PNP_EXTENDED_ADDRESS_INTERFACE {

    
    
    

    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    
    
    

    PQUERYEXTENDEDADDRESS QueryExtendedAddress;
} PNP_EXTENDED_ADDRESS_INTERFACE, *PPNP_EXTENDED_ADDRESS_INTERFACE;









typedef
 
 
void
SET_D3COLD_SUPPORT (
      PVOID Context,
      BOOLEAN D3ColdSupport
    );

typedef SET_D3COLD_SUPPORT *PSET_D3COLD_SUPPORT;

typedef enum _DEVICE_WAKE_DEPTH {
    DeviceWakeDepthNotWakeable    = 0,
    DeviceWakeDepthD0,
    DeviceWakeDepthD1,
    DeviceWakeDepthD2,
    DeviceWakeDepthD3hot,
    DeviceWakeDepthD3cold,
    DeviceWakeDepthMaximum
} DEVICE_WAKE_DEPTH, *PDEVICE_WAKE_DEPTH;


DEVICE_POWER_STATE
MapWakeDepthToDstate(
      DEVICE_WAKE_DEPTH WakeDepth
    )
;

typedef
 
 
NTSTATUS
GET_IDLE_WAKE_INFO (
      PVOID Context,
      SYSTEM_POWER_STATE SystemPowerState,
      PDEVICE_WAKE_DEPTH DeepestWakeableDstate
    );

typedef GET_IDLE_WAKE_INFO *PGET_IDLE_WAKE_INFO;

typedef
 
 
NTSTATUS
GET_D3COLD_CAPABILITY (
      PVOID Context,
      PBOOLEAN D3ColdSupported
    );

typedef GET_D3COLD_CAPABILITY *PGET_D3COLD_CAPABILITY;

typedef enum _D3COLD_LAST_TRANSITION_STATUS {
    LastDStateTransitionStatusUnknown = 0,
    LastDStateTransitionD3hot,
    LastDStateTransitionD3cold
} D3COLD_LAST_TRANSITION_STATUS, *PD3COLD_LAST_TRANSITION_STATUS;

typedef
 
 
void
GET_D3COLD_LAST_TRANSITION_STATUS (
      PVOID Context,
      PD3COLD_LAST_TRANSITION_STATUS LastTransitionStatus
    );

typedef GET_D3COLD_LAST_TRANSITION_STATUS *PGET_D3COLD_LAST_TRANSITION_STATUS;

typedef struct _D3COLD_SUPPORT_INTERFACE {

    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PSET_D3COLD_SUPPORT                 SetD3ColdSupport;
    PGET_IDLE_WAKE_INFO                 GetIdleWakeInfo;
    PGET_D3COLD_CAPABILITY              GetD3ColdCapability;
    PGET_D3COLD_CAPABILITY              GetBusDriverD3ColdSupport;
    PGET_D3COLD_LAST_TRANSITION_STATUS  GetLastTransitionStatus;

} D3COLD_SUPPORT_INTERFACE, *PD3COLD_SUPPORT_INTERFACE;

typedef
 
 
void
D3COLD_REQUEST_CORE_POWER_RAIL (
      PVOID Context,
      BOOLEAN CorePowerRailNeeded
    );

typedef D3COLD_REQUEST_CORE_POWER_RAIL *PD3COLD_REQUEST_CORE_POWER_RAIL;

typedef
 
 
NTSTATUS
D3COLD_REQUEST_AUX_POWER (
      PVOID Context,
      ULONG AuxPowerInMilliWatts,
      PULONG RetryInSeconds
    );

typedef D3COLD_REQUEST_AUX_POWER *PD3COLD_REQUEST_AUX_POWER;

typedef
 
 
NTSTATUS
D3COLD_REQUEST_PERST_DELAY (
      PVOID Context,
      ULONG DelayInMicroSeconds
    );

typedef D3COLD_REQUEST_PERST_DELAY *PD3COLD_REQUEST_PERST_DELAY;

typedef struct _D3COLD_AUX_POWER_AND_TIMING_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PD3COLD_REQUEST_CORE_POWER_RAIL     RequestCorePowerRail;
    PD3COLD_REQUEST_AUX_POWER           RequestAuxPower;
    PD3COLD_REQUEST_PERST_DELAY         RequestPerstDelay;
} D3COLD_AUX_POWER_AND_TIMING_INTERFACE, *PD3COLD_AUX_POWER_AND_TIMING_INTERFACE;

typedef
 
 
void
FPGA_BUS_SCAN (
      PVOID Context
    );

typedef FPGA_BUS_SCAN *PFPGA_BUS_SCAN;

typedef
 
 
NTSTATUS
FPGA_CONTROL_LINK (
      PVOID Context,
      BOOLEAN Enable
    );

typedef FPGA_CONTROL_LINK *PFPGA_CONTROL_LINK;

typedef
 
 
NTSTATUS
FPGA_CONTROL_CONFIG_SPACE (
      PVOID Context,
      BOOLEAN Enable
    );

typedef FPGA_CONTROL_CONFIG_SPACE *PFPGA_CONTROL_CONFIG_SPACE;

typedef
 
 
NTSTATUS
FPGA_CONTROL_ERROR_REPORTING (
      PVOID Context,
      ULONG UncorrectableMask,
      ULONG CorrectableMask,
      BOOLEAN DisableErrorReporting
    );

typedef FPGA_CONTROL_ERROR_REPORTING *PFPGA_CONTROL_ERROR_REPORTING;

typedef struct _FPGA_CONTROL_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PFPGA_BUS_SCAN                      BusScan;
    PFPGA_CONTROL_LINK                  ControlLink;
    PFPGA_CONTROL_CONFIG_SPACE          ControlConfigSpace;
    PFPGA_CONTROL_ERROR_REPORTING       ControlErrorReporting;
} FPGA_CONTROL_INTERFACE, *PFPGA_CONTROL_INTERFACE;

typedef
 
 
NTSTATUS
PTM_DEVICE_QUERY_GRANULARITY (
      PVOID Context,
      PUCHAR Granularity
    );

typedef PTM_DEVICE_QUERY_GRANULARITY *PPTM_DEVICE_QUERY_GRANULARITY;

typedef
 
 
NTSTATUS
PTM_DEVICE_QUERY_TIME_SOURCE (
      PVOID Context,
      PULONG TimeSource
    );

typedef PTM_DEVICE_QUERY_TIME_SOURCE *PPTM_DEVICE_QUERY_TIME_SOURCE;

typedef
 
 
NTSTATUS
PTM_DEVICE_ENABLE (
      PVOID Context
    );

typedef PTM_DEVICE_ENABLE *PPTM_DEVICE_ENABLE;

typedef
 
 
NTSTATUS
PTM_DEVICE_DISABLE (
      PVOID Context
    );

typedef PTM_DEVICE_DISABLE *PPTM_DEVICE_DISABLE;

typedef struct _PTM_CONTROL_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PPTM_DEVICE_QUERY_GRANULARITY    QueryGranularity;
    PPTM_DEVICE_QUERY_TIME_SOURCE    QueryTimeSource;
    PPTM_DEVICE_ENABLE               Enable;
    PPTM_DEVICE_DISABLE              Disable;
} PTM_CONTROL_INTERFACE, *PPTM_CONTROL_INTERFACE;



typedef
 
 
NTSTATUS
GET_UPDATED_BUS_RESOURCE (
      PVOID Context,
      PCM_RESOURCE_LIST *UpdatedResourceList,
      PCM_RESOURCE_LIST *UpdatedTranslatedResourceList
    );

typedef GET_UPDATED_BUS_RESOURCE *PGET_UPDATED_BUS_RESOURCE;

typedef struct _BUS_RESOURCE_UPDATE_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PGET_UPDATED_BUS_RESOURCE              GetUpdatedBusResource;
} BUS_RESOURCE_UPDATE_INTERFACE, *PBUS_RESOURCE_UPDATE_INTERFACE;

typedef enum _NPEM_CONTROL_STANDARD_CONTROL_BIT {
    InitiateReset = 1,
    OkControl,
    LocateControl,
    FailControl,
    RebuildControl,
    PFAControl,
    HotSpareControl,
    InACriticalArrayControl,
    InAFailedArrayControl,
    InvalidDeviceTypeControl,
    DisabledControl,
} NPEM_CONTROL_STANDARD_CONTROL_BIT, *PNPEM_CONTROL_STANDARD_CONTROL_BIT;

typedef union _NPEM_CAPABILITY_STANDARD {
    struct {
        ULONG Capable:1;
        ULONG ResetCapable:1;
        ULONG OkCapable:1;
        ULONG LocateCapable:1;
        ULONG FailCapable:1;
        ULONG RebuildCapable:1;
        ULONG PFACapable:1;
        ULONG HotSpareCapable:1;
        ULONG InACriticalArrayCapable:1;
        ULONG InAFailedArrayCapable:1;
        ULONG InvalidDeviceTypeCapable:1;
        ULONG DisabledCapable:1;
        ULONG Rsvd:20;
    } ;

    ULONG AsULONG;
} NPEM_CAPABILITY_STANDARD, *PNPEM_CAPABILITY_STANDARD;

typedef
 
 
NTSTATUS
NPEM_CONTROL_ENABLE_DISABLE (
      PVOID Context,
      BOOLEAN EnableNpem
    );

typedef NPEM_CONTROL_ENABLE_DISABLE *PNPEM_CONTROL_ENABLE_DISABLE;

typedef
 
 
NTSTATUS
NPEM_CONTROL_QUERY_STANDARD_CAPABILITIES (
      PVOID Context,
      PNPEM_CAPABILITY_STANDARD StandardCapabilities
    );

typedef NPEM_CONTROL_QUERY_STANDARD_CAPABILITIES *PNPEM_CONTROL_QUERY_STANDARD_CAPABILITIES;

typedef
 
 
NTSTATUS
NPEM_CONTROL_SET_STANDARD_CONTROL (
      PVOID Context,
      NPEM_CONTROL_STANDARD_CONTROL_BIT StandardControl,
      BOOLEAN Set
    );

typedef NPEM_CONTROL_SET_STANDARD_CONTROL *PNPEM_CONTROL_SET_STANDARD_CONTROL;

typedef
 
 
ULONG
NPEM_CONTROL_QUERY_CONTROL (
      PVOID Context
    );

typedef NPEM_CONTROL_QUERY_CONTROL *PNPEM_CONTROL_QUERY_CONTROL;







typedef struct _NPEM_CONTROL_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PNPEM_CONTROL_ENABLE_DISABLE                         SetNpemSupportState;
    PNPEM_CONTROL_QUERY_STANDARD_CAPABILITIES            QueryStandardCapabilities;
    PNPEM_CONTROL_SET_STANDARD_CONTROL                   SetStandardControl;
    PNPEM_CONTROL_QUERY_CONTROL                          QueryNpemControl;
} NPEM_CONTROL_INTERFACE, *PNPEM_CONTROL_INTERFACE;





typedef BOOLEAN (* PGPE_SERVICE_ROUTINE) (
                            PVOID,
                            PVOID);

typedef
 
 
NTSTATUS (* PGPE_CONNECT_VECTOR) (
                            PDEVICE_OBJECT,
                            ULONG,
                            KINTERRUPT_MODE,
                            BOOLEAN,
                            PGPE_SERVICE_ROUTINE,
                            PVOID,
                            PVOID);

typedef
 
 
NTSTATUS (* PGPE_DISCONNECT_VECTOR) (
                            PVOID);

typedef
 
 
NTSTATUS (* PGPE_ENABLE_EVENT) (
                            PDEVICE_OBJECT,
                            PVOID);

typedef
 
 
NTSTATUS (* PGPE_DISABLE_EVENT) (
                            PDEVICE_OBJECT,
                            PVOID);

typedef
 
 
NTSTATUS (* PGPE_CLEAR_STATUS) (
                            PDEVICE_OBJECT,
                            PVOID);

typedef
void (* PDEVICE_NOTIFY_CALLBACK) (
                            PVOID,
                            ULONG);

typedef
 
 
NTSTATUS (* PREGISTER_FOR_DEVICE_NOTIFICATIONS) (
                            PDEVICE_OBJECT,
                            PDEVICE_NOTIFY_CALLBACK,
                            PVOID);

typedef
 
void (* PUNREGISTER_FOR_DEVICE_NOTIFICATIONS) (
                            PDEVICE_OBJECT,
                            PDEVICE_NOTIFY_CALLBACK);

typedef struct _ACPI_INTERFACE_STANDARD {
    
    
    
    USHORT                  Size;
    USHORT                  Version;
    PVOID                   Context;
    PINTERFACE_REFERENCE    InterfaceReference;
    PINTERFACE_DEREFERENCE  InterfaceDereference;
    
    
    
    PGPE_CONNECT_VECTOR                     GpeConnectVector;
    PGPE_DISCONNECT_VECTOR                  GpeDisconnectVector;
    PGPE_ENABLE_EVENT                       GpeEnableEvent;
    PGPE_DISABLE_EVENT                      GpeDisableEvent;
    PGPE_CLEAR_STATUS                       GpeClearStatus;
    PREGISTER_FOR_DEVICE_NOTIFICATIONS      RegisterForDeviceNotifications;
    PUNREGISTER_FOR_DEVICE_NOTIFICATIONS    UnregisterForDeviceNotifications;

} ACPI_INTERFACE_STANDARD, *PACPI_INTERFACE_STANDARD;







typedef
BOOLEAN
(*PGPE_SERVICE_ROUTINE2) (
    PVOID   ObjectContext,
    PVOID   ServiceContext
    );

typedef
 
 
NTSTATUS
(*PGPE_CONNECT_VECTOR2) (
    PVOID           Context,
    ULONG           GpeNumber,
    KINTERRUPT_MODE Mode,
    BOOLEAN         Shareable,
    PGPE_SERVICE_ROUTINE    ServiceRoutine,
    PVOID           ServiceContext,
    PVOID           *ObjectContext
    );

typedef
 
 
NTSTATUS
(*PGPE_DISCONNECT_VECTOR2) (
    PVOID   Context,
    PVOID   ObjectContext
    );

typedef
 
 
NTSTATUS
(*PGPE_ENABLE_EVENT2) (
    PVOID   Context,
    PVOID   ObjectContext
    );

typedef
 
 
NTSTATUS
(*PGPE_DISABLE_EVENT2) (
    PVOID   Context,
    PVOID   ObjectContext
    );

typedef
 
 
NTSTATUS
(*PGPE_CLEAR_STATUS2) (
    PVOID   Context,
    PVOID   ObjectContext
    );

typedef
 
void
(*PDEVICE_NOTIFY_CALLBACK2) (
    PVOID   NotificationContext,
    ULONG   NotifyCode
    );

typedef
 
 
NTSTATUS
(*PREGISTER_FOR_DEVICE_NOTIFICATIONS2) (
    PVOID   Context,
    PDEVICE_NOTIFY_CALLBACK2    NotificationHandler,
    PVOID   NotificationContext
    );

typedef
 
void
(*PUNREGISTER_FOR_DEVICE_NOTIFICATIONS2) (
    PVOID   Context
    );

typedef struct {
    
    
    
    USHORT                  Size;
    USHORT                  Version;
    PVOID                   Context;
    PINTERFACE_REFERENCE    InterfaceReference;
    PINTERFACE_DEREFERENCE  InterfaceDereference;
    
    
    
    PGPE_CONNECT_VECTOR2                    GpeConnectVector;
    PGPE_DISCONNECT_VECTOR2                 GpeDisconnectVector;
    PGPE_ENABLE_EVENT2                      GpeEnableEvent;
    PGPE_DISABLE_EVENT2                     GpeDisableEvent;
    PGPE_CLEAR_STATUS2                      GpeClearStatus;
    PREGISTER_FOR_DEVICE_NOTIFICATIONS2     RegisterForDeviceNotifications;
    PUNREGISTER_FOR_DEVICE_NOTIFICATIONS2   UnregisterForDeviceNotifications;

} ACPI_INTERFACE_STANDARD2, *PACPI_INTERFACE_STANDARD2;



 

void
IoInvalidateDeviceRelations(
      PDEVICE_OBJECT DeviceObject,
      DEVICE_RELATION_TYPE Type
    );



 

void
IoRequestDeviceEject(
      PDEVICE_OBJECT PhysicalDeviceObject
    );


typedef void (*PIO_DEVICE_EJECT_CALLBACK)(
      NTSTATUS Status,
      PVOID Context
    );


 
 

NTSTATUS
IoRequestDeviceEjectEx(
      PDEVICE_OBJECT PhysicalDeviceObject,
      PIO_DEVICE_EJECT_CALLBACK Callback,
      PVOID Context,
      PDRIVER_OBJECT DriverObject
    );




 



NTSTATUS
IoGetDeviceProperty(
      PDEVICE_OBJECT DeviceObject,
      DEVICE_REGISTRY_PROPERTY DeviceProperty,
      ULONG BufferLength,
      PVOID PropertyBuffer,
        PULONG ResultLength
    );














 
 

NTSTATUS
IoOpenDeviceRegistryKey(
      PDEVICE_OBJECT DeviceObject,
      ULONG DevInstKeyType,
      ACCESS_MASK DesiredAccess,
      PHANDLE DeviceRegKey
    );



 
 

NTSTATUS
__stdcall
IoRegisterDeviceInterface(
      PDEVICE_OBJECT PhysicalDeviceObject,
      const GUID *InterfaceClassGuid,
      PUNICODE_STRING ReferenceString,
      
    PUNICODE_STRING SymbolicLinkName
    );



 
 

NTSTATUS
IoOpenDeviceInterfaceRegistryKey(
      PUNICODE_STRING SymbolicLinkName,
      ACCESS_MASK DesiredAccess,
      PHANDLE DeviceInterfaceRegKey
    );



 
 

NTSTATUS
IoSetDeviceInterfaceState(
      PUNICODE_STRING SymbolicLinkName,
      BOOLEAN Enable
    );



 
 

NTSTATUS
__stdcall
IoGetDeviceInterfaces(
      const GUID *InterfaceClassGuid,
      PDEVICE_OBJECT PhysicalDeviceObject,
      ULONG Flags,
    
    
    PZZWSTR *SymbolicLinkList
    );





 
 

NTSTATUS
__stdcall
IoGetDeviceInterfaceAlias(
      PUNICODE_STRING SymbolicLinkName,
      const GUID *AliasInterfaceClassGuid,
     
    
    PUNICODE_STRING AliasSymbolicLinkName
    );






typedef enum _IO_NOTIFICATION_EVENT_CATEGORY {
    EventCategoryReserved,
    EventCategoryHardwareProfileChange,
    EventCategoryDeviceInterfaceChange,
    EventCategoryTargetDeviceChange,
    EventCategoryKernelSoftRestart,
} IO_NOTIFICATION_EVENT_CATEGORY;








typedef
 
 
NTSTATUS
DRIVER_NOTIFICATION_CALLBACK_ROUTINE (
      PVOID NotificationStructure,
      PVOID Context
);
typedef DRIVER_NOTIFICATION_CALLBACK_ROUTINE
    *PDRIVER_NOTIFICATION_CALLBACK_ROUTINE;



 
 

NTSTATUS
IoRegisterPlugPlayNotification(
      IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
      ULONG EventCategoryFlags,
      PVOID EventCategoryData,
      PDRIVER_OBJECT DriverObject,
      PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Context,
    
    
    PVOID *NotificationEntry
    );



 

NTSTATUS
IoUnregisterPlugPlayNotification(
        PVOID NotificationEntry
    );



 

NTSTATUS
IoUnregisterPlugPlayNotificationEx(
        PVOID NotificationEntry
    );



 

NTSTATUS
IoReportTargetDeviceChange(
      PDEVICE_OBJECT PhysicalDeviceObject,
      PVOID NotificationStructure  
    );


typedef
 
 
void
DEVICE_CHANGE_COMPLETE_CALLBACK(
      PVOID Context
    );
typedef DEVICE_CHANGE_COMPLETE_CALLBACK *PDEVICE_CHANGE_COMPLETE_CALLBACK;


 

void
IoInvalidateDeviceState(
      PDEVICE_OBJECT PhysicalDeviceObject
    );











 

NTSTATUS
IoReportTargetDeviceChangeAsynchronous(
      PDEVICE_OBJECT PhysicalDeviceObject,
      PVOID NotificationStructure,  
      PDEVICE_CHANGE_COMPLETE_CALLBACK Callback,
      PVOID Context
    );



typedef enum _DRIVER_DIRECTORY_TYPE {
    DriverDirectoryImage = 0,
    DriverDirectoryData,

    DriverDirectorySharedData,

} DRIVER_DIRECTORY_TYPE, *PDRIVER_DIRECTORY_TYPE;

 
 

NTSTATUS
IoGetDriverDirectory(
      PDRIVER_OBJECT DriverObject,
      DRIVER_DIRECTORY_TYPE DirectoryType,
      ULONG Flags,
      PHANDLE DriverDirectoryHandle
    );



typedef enum _DEVICE_DIRECTORY_TYPE {
    DeviceDirectoryData = 0,
} DEVICE_DIRECTORY_TYPE, *PDEVICE_DIRECTORY_TYPE;

 
 

NTSTATUS
IoGetDeviceDirectory(
      PDEVICE_OBJECT PhysicalDeviceObject,
      DEVICE_DIRECTORY_TYPE DirectoryType,
      ULONG Flags,
      PVOID Reserved,
      PHANDLE DeviceDirectoryHandle
    );



typedef enum _DRIVER_REGKEY_TYPE {
    DriverRegKeyParameters = 0,
    DriverRegKeyPersistentState,

    DriverRegKeySharedPersistentState,

} DRIVER_REGKEY_TYPE, *PDRIVER_REGKEY_TYPE;

 
 

NTSTATUS
IoOpenDriverRegistryKey(
      PDRIVER_OBJECT DriverObject,
      DRIVER_REGKEY_TYPE RegKeyType,
      ACCESS_MASK DesiredAccess,
      ULONG Flags,
      PHANDLE DriverRegKey
    );







typedef struct _PLUGPLAY_NOTIFICATION_HEADER {
    USHORT Version; 
    USHORT Size;    
    GUID Event;
    
    
    
} PLUGPLAY_NOTIFICATION_HEADER, *PPLUGPLAY_NOTIFICATION_HEADER;





typedef struct _HWPROFILE_CHANGE_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    
    
    
} HWPROFILE_CHANGE_NOTIFICATION, *PHWPROFILE_CHANGE_NOTIFICATION;






typedef struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    
    
    
    GUID InterfaceClassGuid;
    PUNICODE_STRING SymbolicLinkName;
} DEVICE_INTERFACE_CHANGE_NOTIFICATION, *PDEVICE_INTERFACE_CHANGE_NOTIFICATION;










typedef struct _TARGET_DEVICE_REMOVAL_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    
    
    
    PFILE_OBJECT FileObject;
} TARGET_DEVICE_REMOVAL_NOTIFICATION, *PTARGET_DEVICE_REMOVAL_NOTIFICATION;





typedef struct _KERNEL_SOFT_RESTART_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    
    
    
} KERNEL_SOFT_RESTART_NOTIFICATION, *PKERNEL_SOFT_RESTART_NOTIFICATION;













typedef struct _TARGET_DEVICE_CUSTOM_NOTIFICATION {
    USHORT Version;
    USHORT Size;
    GUID Event;
    
    
    
    PFILE_OBJECT FileObject;    
                                
                                
                                
                                
                                
                                
    LONG NameBufferOffset;      
                                
                                
    UCHAR CustomDataBuffer[1];  
                                
                                
                                
                                
} TARGET_DEVICE_CUSTOM_NOTIFICATION, *PTARGET_DEVICE_CUSTOM_NOTIFICATION;









































typedef ULONG DEVPROPTYPE, *PDEVPROPTYPE;


























































typedef CHAR DEVPROP_BOOLEAN, *PDEVPROP_BOOLEAN;











typedef GUID  DEVPROPGUID, *PDEVPROPGUID;
typedef ULONG DEVPROPID,   *PDEVPROPID;

typedef struct _DEVPROPKEY {
    DEVPROPGUID fmtid;
    DEVPROPID   pid;
} DEVPROPKEY, *PDEVPROPKEY;























typedef



enum _DEVPROPSTORE {
    DEVPROP_STORE_SYSTEM,
    DEVPROP_STORE_USER
} DEVPROPSTORE, *PDEVPROPSTORE;







typedef struct _DEVPROPCOMPKEY {
    DEVPROPKEY Key;
    DEVPROPSTORE Store;



    PCWSTR LocaleName;

} DEVPROPCOMPKEY, *PDEVPROPCOMPKEY;





















typedef struct _DEVPROPERTY {
    DEVPROPCOMPKEY CompKey;
    DEVPROPTYPE Type;
    ULONG BufferSize;



     PVOID Buffer;

} DEVPROPERTY, *PDEVPROPERTY;


































 
 

NTSTATUS
IoSetDevicePropertyData (
      PDEVICE_OBJECT     Pdo,
      const DEVPROPKEY   *PropertyKey,
      LCID               Lcid,
      ULONG              Flags,
      DEVPROPTYPE        Type,
      ULONG              Size,
     
         PVOID              Data
    );



 
 

NTSTATUS
IoGetDevicePropertyData (
      PDEVICE_OBJECT     Pdo,
      const DEVPROPKEY   *PropertyKey,
      LCID               Lcid,
      ULONG        Flags,
      ULONG              Size,
     
          PVOID             Data,
      PULONG            RequiredSize,
      PDEVPROPTYPE      Type
    );



 
 

NTSTATUS
IoSetDeviceInterfacePropertyData (
      PUNICODE_STRING    SymbolicLinkName,
      const DEVPROPKEY   *PropertyKey,
      LCID               Lcid,
      ULONG              Flags,
      DEVPROPTYPE        Type,
      ULONG              Size,
     
         PVOID              Data
    );



 
 

NTSTATUS
IoGetDeviceInterfacePropertyData (
      PUNICODE_STRING    SymbolicLinkName,
      const DEVPROPKEY   *PropertyKey,
      LCID               Lcid,
      ULONG        Flags,
      ULONG              Size,
     
          PVOID             Data,
      PULONG            RequiredSize,
      PDEVPROPTYPE      Type
    );



 
 

NTSTATUS
IoGetDeviceNumaNode (
      PDEVICE_OBJECT Pdo,
      PUSHORT NodeNumber
    );




 
 

NTSTATUS
__stdcall
IoReplacePartitionUnit (
      PDEVICE_OBJECT TargetPdo,
      PDEVICE_OBJECT SparePdo,
      ULONG Flags
    );







typedef struct _PNP_REPLACE_DRIVER_INTERFACE *PPNP_REPLACE_DRIVER_INTERFACE;

typedef
 
NTSTATUS
(*PREPLACE_DRIVER_INIT) (
      PPNP_REPLACE_DRIVER_INTERFACE Interface,
      PVOID Unused
    );







typedef
 
NTSTATUS
(*PREPLACE_MAP_MEMORY) (
         PHYSICAL_ADDRESS    TargetPhysicalAddress,
         PHYSICAL_ADDRESS    SparePhysicalAddress,
      PLARGE_INTEGER      NumberOfBytes,
     PVOID *TargetAddress,
     PVOID *SpareAddress
    );

typedef struct _PNP_REPLACE_MEMORY_LIST {

    ULONG AllocatedCount;
    ULONG Count;
    ULONGLONG TotalLength;
    struct {
        PHYSICAL_ADDRESS Address;
        ULONGLONG Length;
    } Ranges[1];

} PNP_REPLACE_MEMORY_LIST, *PPNP_REPLACE_MEMORY_LIST;

typedef struct _PNP_REPLACE_PROCESSOR_LIST {

    PKAFFINITY Affinity;
    ULONG GroupCount;
    ULONG AllocatedCount;
    ULONG Count;
    ULONG ApicIds[1];

} PNP_REPLACE_PROCESSOR_LIST, *PPNP_REPLACE_PROCESSOR_LIST;

typedef struct _PNP_REPLACE_PROCESSOR_LIST_V1 {

    KAFFINITY AffinityMask;
    ULONG AllocatedCount;
    ULONG Count;
    ULONG ApicIds[1];

} PNP_REPLACE_PROCESSOR_LIST_V1, *PPNP_REPLACE_PROCESSOR_LIST_V1;



typedef struct _PNP_REPLACE_PARAMETERS {

    ULONG Size;
    ULONG Version;

    ULONG64 Target;
    ULONG64 Spare;
    PPNP_REPLACE_PROCESSOR_LIST TargetProcessors;
    PPNP_REPLACE_PROCESSOR_LIST SpareProcessors;
    PPNP_REPLACE_MEMORY_LIST TargetMemory;
    PPNP_REPLACE_MEMORY_LIST SpareMemory;

    PREPLACE_MAP_MEMORY MapMemory;

} PNP_REPLACE_PARAMETERS, *PPNP_REPLACE_PARAMETERS;





typedef
void
(*PREPLACE_UNLOAD) (
    void
    );

typedef
 
NTSTATUS
(*PREPLACE_BEGIN) (
      PPNP_REPLACE_PARAMETERS Parameters,
     PVOID *Context
);

typedef
 
NTSTATUS
(*PREPLACE_END) (
      PVOID Context
    );

typedef
 
NTSTATUS
(*PREPLACE_MIRROR_PHYSICAL_MEMORY) (
      PVOID Context,
      PHYSICAL_ADDRESS PhysicalAddress,
      LARGE_INTEGER ByteCount
    );

typedef
 
NTSTATUS
(*PREPLACE_SET_PROCESSOR_ID) (
      PVOID Context,
      ULONG ApicId,
      BOOLEAN Target
    );

typedef
 
NTSTATUS
(*PREPLACE_SWAP) (
      PVOID Context
    );

typedef
 
NTSTATUS
(*PREPLACE_INITIATE_HARDWARE_MIRROR) (
      PVOID Context
    );

typedef
 
NTSTATUS
(*PREPLACE_MIRROR_PLATFORM_MEMORY) (
      PVOID Context
    );

typedef
 
NTSTATUS
(*PREPLACE_GET_MEMORY_DESTINATION) (
      PVOID Context,
      PHYSICAL_ADDRESS SourceAddress,
      PPHYSICAL_ADDRESS DestinationAddress
    );

typedef
  NTSTATUS
(*PREPLACE_ENABLE_DISABLE_HARDWARE_QUIESCE) (
      PVOID Context,
      BOOLEAN Enable
    );















typedef struct _PNP_REPLACE_DRIVER_INTERFACE {

    ULONG Size;
    ULONG Version;

    ULONG Flags;
    PREPLACE_UNLOAD Unload;
    PREPLACE_BEGIN BeginReplace;
    PREPLACE_END EndReplace;
    PREPLACE_MIRROR_PHYSICAL_MEMORY MirrorPhysicalMemory;
    PREPLACE_SET_PROCESSOR_ID SetProcessorId;
    PREPLACE_SWAP Swap;
    PREPLACE_INITIATE_HARDWARE_MIRROR InitiateHardwareMirror;
    PREPLACE_MIRROR_PLATFORM_MEMORY MirrorPlatformMemory;
    PREPLACE_GET_MEMORY_DESTINATION GetMemoryDestination;
    PREPLACE_ENABLE_DISABLE_HARDWARE_QUIESCE EnableDisableHardwareQuiesce;

} PNP_REPLACE_DRIVER_INTERFACE, *PPNP_REPLACE_DRIVER_INTERFACE;








typedef
NTSTATUS
(*PCRASHDUMP_POWER_ON)(
      PVOID Context
    );

typedef struct _CRASHDUMP_FUNCTIONS_INTERFACE {

    
    
    

    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    
    
    

    PCRASHDUMP_POWER_ON PowerOn;

} CRASHDUMP_FUNCTIONS_INTERFACE, *PCRASHDUMP_FUNCTIONS_INTERFACE;
















typedef enum _DEVICE_RESET_TYPE
{
    FunctionLevelDeviceReset,
    PlatformLevelDeviceReset
} DEVICE_RESET_TYPE;





typedef union _DEVICE_BUS_SPECIFIC_RESET_TYPE {
    struct {
        ULONGLONG FunctionLevelDeviceReset:1;
        ULONGLONG PlatformLevelDeviceReset:1;
        ULONGLONG SecondaryBusReset:1;
        ULONGLONG Reserved:61;
    } Pci;

    struct {
        ULONGLONG FunctionLevelDeviceReset:1;
        ULONGLONG PlatformLevelDeviceReset:1;
        ULONGLONG Reserved:62;
    } Acpi;
    ULONGLONG AsULONGLONG;
} DEVICE_BUS_SPECIFIC_RESET_TYPE, *PDEVICE_BUS_SPECIFIC_RESET_TYPE;

typedef
void
(DEVICE_RESET_COMPLETION)(
      NTSTATUS Status,
      PVOID Context
    );

typedef DEVICE_RESET_COMPLETION *PDEVICE_RESET_COMPLETION;

typedef struct _FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS {
    ULONG Size;
    PDEVICE_RESET_COMPLETION DeviceResetCompletion;
    PVOID CompletionContext;
} FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS, *PFUNCTION_LEVEL_DEVICE_RESET_PARAMETERS;

typedef
 
 
 
NTSTATUS
DEVICE_RESET_HANDLER(
      PVOID InterfaceContext,
      DEVICE_RESET_TYPE ResetType,
      ULONG Flags,
      PVOID ResetParameters
    );

typedef DEVICE_RESET_HANDLER *PDEVICE_RESET_HANDLER;



typedef struct _DEVICE_BUS_SPECIFIC_RESET_INFO {

    
    
    
    GUID BusTypeGuid;
    DEVICE_BUS_SPECIFIC_RESET_TYPE ResetTypeSupported;

} DEVICE_BUS_SPECIFIC_RESET_INFO, *PDEVICE_BUS_SPECIFIC_RESET_INFO;

typedef
 
 
 
NTSTATUS
DEVICE_QUERY_BUS_SPECIFIC_RESET_HANDLER(
      PVOID InterfaceContext,
      PULONG ResetInfoCount,
      PDEVICE_BUS_SPECIFIC_RESET_INFO ResetInfoSupported
);

typedef DEVICE_QUERY_BUS_SPECIFIC_RESET_HANDLER *PDEVICE_QUERY_BUS_SPECIFIC_RESET_HANDLER;

typedef union _BUS_SPECIFIC_RESET_FLAGS {
    struct {
        ULONGLONG KeepStackReset:1;
        ULONGLONG Reserved:63;
    } u;
    ULONGLONG AsUlonglong;
} BUS_SPECIFIC_RESET_FLAGS, *PBUS_SPECIFIC_RESET_FLAGS;

typedef char __C_ASSERT__[(sizeof(BUS_SPECIFIC_RESET_FLAGS) == sizeof(ULONGLONG))?1:-1];

typedef
 
 
 
NTSTATUS
DEVICE_BUS_SPECIFIC_RESET_HANDLER(
      PVOID InterfaceContext,
      const GUID *BusType,
      DEVICE_BUS_SPECIFIC_RESET_TYPE ResetTypeSelected,
      PBUS_SPECIFIC_RESET_FLAGS Flags,
      PVOID ResetParameters
);

typedef DEVICE_BUS_SPECIFIC_RESET_HANDLER *PDEVICE_BUS_SPECIFIC_RESET_HANDLER;

typedef union _DEVICE_RESET_STATUS_FLAGS {
    struct {
        ULONGLONG KeepStackReset:1;
        ULONGLONG RecoveringFromBusError:1;
        ULONGLONG Reserved:62;
    } u;
    ULONGLONG AsUlonglong;
} DEVICE_RESET_STATUS_FLAGS, *PDEVICE_RESET_STATUS_FLAGS;

typedef char __C_ASSERT__[(sizeof(DEVICE_RESET_STATUS_FLAGS) == sizeof(ULONGLONG))?1:-1];

typedef
 
 
 
NTSTATUS
GET_DEVICE_RESET_STATUS(
      PVOID InterfaceContext,
      PBOOLEAN IsResetting,
      PDEVICE_BUS_SPECIFIC_RESET_TYPE ResetTypeSelected,
      PDEVICE_RESET_STATUS_FLAGS Flags
);

typedef GET_DEVICE_RESET_STATUS *PGET_DEVICE_RESET_STATUS;



typedef struct _DEVICE_RESET_INTERFACE_STANDARD {

    
    
    

    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    
    
    

    PDEVICE_RESET_HANDLER DeviceReset;
    ULONG SupportedResetTypes;
    PVOID Reserved;



    
    
    

    PDEVICE_QUERY_BUS_SPECIFIC_RESET_HANDLER QueryBusSpecificResetInfo;
    PDEVICE_BUS_SPECIFIC_RESET_HANDLER DeviceBusSpecificReset;

    
    
    

    PGET_DEVICE_RESET_STATUS GetDeviceResetStatus;



} DEVICE_RESET_INTERFACE_STANDARD, *PDEVICE_RESET_INTERFACE_STANDARD;







typedef
 
 
 
PEPROCESS
SECURE_DRIVER_PROCESS_REFERENCE (
      PVOID InterfaceContext
    );

typedef SECURE_DRIVER_PROCESS_REFERENCE *PSECURE_DRIVER_PROCESS_REFERENCE;

typedef
 
 
 
void
SECURE_DRIVER_PROCESS_DEREFERENCE (
      PVOID InterfaceContext,
      PEPROCESS Process
    );

typedef SECURE_DRIVER_PROCESS_DEREFERENCE *PSECURE_DRIVER_PROCESS_DEREFERENCE;

typedef struct _SECURE_DRIVER_INTERFACE {
    INTERFACE InterfaceHeader;
    PSECURE_DRIVER_PROCESS_REFERENCE ProcessReference;
    PSECURE_DRIVER_PROCESS_DEREFERENCE ProcessDereference;
    ULONG Reserved;
} SECURE_DRIVER_INTERFACE, *PSECURE_DRIVER_INTERFACE;







typedef
 
 
 
ULONGLONG
GET_SDEV_IDENTIFIER (
      PVOID InterfaceContext
    );

typedef GET_SDEV_IDENTIFIER *PGET_SDEV_IDENTIFIER;

typedef struct _SDEV_IDENTIFIER_INTERFACE {
    INTERFACE InterfaceHeader;
    PGET_SDEV_IDENTIFIER GetIdentifier;
} SDEV_IDENTIFIER_INTERFACE, *PSDEV_IDENTIFIER_INTERFACE;






typedef struct _DEVICE_DESCRIPTION {
    ULONG Version;
    BOOLEAN Master;
    BOOLEAN ScatterGather;
    BOOLEAN DemandMode;
    BOOLEAN AutoInitialize;
    BOOLEAN Dma32BitAddresses;
    BOOLEAN IgnoreCount;
    BOOLEAN Reserved1;
    BOOLEAN Dma64BitAddresses;
    ULONG BusNumber; 
    ULONG DmaChannel;
    INTERFACE_TYPE  InterfaceType;
    DMA_WIDTH DmaWidth;
    DMA_SPEED DmaSpeed;
    ULONG MaximumLength;
    ULONG DmaPort;

    ULONG DmaAddressWidth;
    ULONG DmaControllerInstance;
    ULONG DmaRequestLine;
    PHYSICAL_ADDRESS DeviceAddress;

} DEVICE_DESCRIPTION, *PDEVICE_DESCRIPTION;

















typedef struct _DMA_ADAPTER_INFO_V1 {
    ULONG ReadDmaCounterAvailable;
    ULONG ScatterGatherLimit;
    ULONG DmaAddressWidth;
    ULONG Flags;
    ULONG MinimumTransferUnit;
} DMA_ADAPTER_INFO_V1, *PDMA_ADAPTER_INFO_V1;

typedef struct _DMA_ADAPTER_INFO_CRASHDUMP {
    DEVICE_DESCRIPTION DeviceDescription;
    SIZE_T DeviceIdSize;
    PVOID DeviceId;
} DMA_ADAPTER_INFO_CRASHDUMP, *PDMA_ADAPTER_INFO_CRASHDUMP;

typedef struct _DMA_ADAPTER_INFO {
    ULONG Version;
    union {
        DMA_ADAPTER_INFO_V1 V1;
        DMA_ADAPTER_INFO_CRASHDUMP Crashdump;
    };
} DMA_ADAPTER_INFO, *PDMA_ADAPTER_INFO;















typedef struct _DMA_TRANSFER_INFO_V1 {
    ULONG MapRegisterCount;
    ULONG ScatterGatherElementCount;
    ULONG ScatterGatherListSize;
} DMA_TRANSFER_INFO_V1, *PDMA_TRANSFER_INFO_V1;

typedef struct _DMA_TRANSFER_INFO_V2 {
    ULONG MapRegisterCount;
    ULONG ScatterGatherElementCount;
    ULONG ScatterGatherListSize;
    ULONG LogicalPageCount;
} DMA_TRANSFER_INFO_V2, *PDMA_TRANSFER_INFO_V2;

typedef struct _DMA_TRANSFER_INFO {
    ULONG Version;
    union {
        DMA_TRANSFER_INFO_V1 V1;
        DMA_TRANSFER_INFO_V2 V2;
    };
} DMA_TRANSFER_INFO, *PDMA_TRANSFER_INFO;



























                                                


void
KeFlushWriteBuffer (
    void
    );













LARGE_INTEGER
KeQueryPerformanceCounter (
     PLARGE_INTEGER PerformanceFrequency
   );











void
KeStallExecutionProcessor (
      ULONG MicroSeconds
    );












typedef
NTSTATUS
PROCESSOR_HALT_ROUTINE (
      PVOID Context
    );

typedef PROCESSOR_HALT_ROUTINE *PPROCESSOR_HALT_ROUTINE;


typedef struct _IOMMU_DMA_DEVICE IOMMU_DMA_DEVICE, *PIOMMU_DMA_DEVICE;


typedef struct _SCATTER_GATHER_ELEMENT {
    PHYSICAL_ADDRESS Address;
    ULONG Length;
    ULONG_PTR Reserved;
} SCATTER_GATHER_ELEMENT, *PSCATTER_GATHER_ELEMENT;





typedef struct _SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG_PTR Reserved;
    SCATTER_GATHER_ELEMENT Elements[];
} SCATTER_GATHER_LIST, *PSCATTER_GATHER_LIST;














typedef struct _DMA_OPERATIONS *PDMA_OPERATIONS;



typedef struct _DMA_ADAPTER {
    USHORT Version;
    USHORT Size;
    PDMA_OPERATIONS DmaOperations;
    
} DMA_ADAPTER, *PDMA_ADAPTER;

typedef enum {
    DmaComplete,
    DmaAborted,
    DmaError,
    DmaCancelled
} DMA_COMPLETION_STATUS;



typedef enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE {
    CommonBufferConfigTypeLogicalAddressLimits,
    CommonBufferConfigTypeSubSection,
    CommonBufferConfigTypeHardwareAccessPermissions,
    CommonBufferConfigTypeMax,
} DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE,
  *PDMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE;

typedef enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE {
    CommonBufferHardwareAccessReadOnly,
    CommonBufferHardwareAccessWriteOnly,
    CommonBufferHardwareAccessReadWrite,
    CommonBufferHardwareAccessMax,
} DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE,
  *PDMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE;

typedef struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION {
    DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE ConfigType;
    union {
        struct {
            PHYSICAL_ADDRESS MinimumAddress;
            PHYSICAL_ADDRESS MaximumAddress;
        } LogicalAddressLimits;

        struct {
            ULONGLONG Offset;
            ULONG Length;
        } SubSection;

        DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE HardwareAccessType;
        ULONGLONG Reserved[4];
    };
} DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION,
  *PDMA_COMMON_BUFFER_EXTENDED_CONFIGURATION;





typedef void (*PPUT_DMA_ADAPTER)(
    PDMA_ADAPTER DmaAdapter
    );

typedef PVOID (*PALLOCATE_COMMON_BUFFER)(
      PDMA_ADAPTER DmaAdapter,
      ULONG Length,
      PPHYSICAL_ADDRESS LogicalAddress,
      BOOLEAN CacheEnabled
    );

typedef void (*PFREE_COMMON_BUFFER)(
      PDMA_ADAPTER DmaAdapter,
      ULONG Length,
      PHYSICAL_ADDRESS LogicalAddress,
      PVOID VirtualAddress,
      BOOLEAN CacheEnabled
    );

typedef NTSTATUS (*PALLOCATE_ADAPTER_CHANNEL)(
      PDMA_ADAPTER DmaAdapter,
      PDEVICE_OBJECT DeviceObject,
      ULONG NumberOfMapRegisters,
      PDRIVER_CONTROL ExecutionRoutine,
      PVOID Context
    );

typedef BOOLEAN (*PFLUSH_ADAPTER_BUFFERS)(
      PDMA_ADAPTER DmaAdapter,
      PMDL Mdl,
      PVOID MapRegisterBase,
      PVOID CurrentVa,
      ULONG Length,
      BOOLEAN WriteToDevice
    );

typedef void (*PFREE_ADAPTER_CHANNEL)(
      PDMA_ADAPTER DmaAdapter
    );

typedef void (*PFREE_ADAPTER_OBJECT)(
      PDMA_ADAPTER DmaAdapter,
      IO_ALLOCATION_ACTION AllocationAction
    );

typedef void (*PFREE_MAP_REGISTERS)(
      PDMA_ADAPTER DmaAdapter,
    PVOID MapRegisterBase,
    ULONG NumberOfMapRegisters
    );

typedef PHYSICAL_ADDRESS (*PMAP_TRANSFER)(
      PDMA_ADAPTER DmaAdapter,
      PMDL Mdl,
      PVOID MapRegisterBase,
      PVOID CurrentVa,
      PULONG Length,
      BOOLEAN WriteToDevice
    );

typedef ULONG (*PGET_DMA_ALIGNMENT)(
      PDMA_ADAPTER DmaAdapter
    );

typedef ULONG (*PREAD_DMA_COUNTER)(
      PDMA_ADAPTER DmaAdapter
    );

typedef
 
 
void
DRIVER_LIST_CONTROL(
      struct _DEVICE_OBJECT *DeviceObject,
      struct _IRP *Irp,
      PSCATTER_GATHER_LIST ScatterGather,
      PVOID Context
    );
typedef DRIVER_LIST_CONTROL *PDRIVER_LIST_CONTROL;

typedef NTSTATUS
(*PGET_SCATTER_GATHER_LIST)(
      PDMA_ADAPTER DmaAdapter,
      PDEVICE_OBJECT DeviceObject,
      PMDL Mdl,
      PVOID CurrentVa,
      ULONG Length,
      PDRIVER_LIST_CONTROL ExecutionRoutine,
      PVOID Context,
      BOOLEAN WriteToDevice
    );

typedef void
(*PPUT_SCATTER_GATHER_LIST)(
      PDMA_ADAPTER DmaAdapter,
      PSCATTER_GATHER_LIST ScatterGather,
      BOOLEAN WriteToDevice
    );

typedef NTSTATUS
(*PCALCULATE_SCATTER_GATHER_LIST_SIZE)(
       PDMA_ADAPTER DmaAdapter,
        PMDL Mdl,
       PVOID CurrentVa,
       ULONG Length,
       PULONG  ScatterGatherListSize,
        PULONG pNumberOfMapRegisters
     );

typedef NTSTATUS
(*PBUILD_SCATTER_GATHER_LIST)(
       PDMA_ADAPTER DmaAdapter,
       PDEVICE_OBJECT DeviceObject,
       PMDL Mdl,
       PVOID CurrentVa,
       ULONG Length,
       PDRIVER_LIST_CONTROL ExecutionRoutine,
       PVOID Context,
       BOOLEAN WriteToDevice,
       PVOID   ScatterGatherBuffer,
       ULONG   ScatterGatherLength
     );

typedef NTSTATUS
(*PBUILD_MDL_FROM_SCATTER_GATHER_LIST)(
      PDMA_ADAPTER DmaAdapter,
      PSCATTER_GATHER_LIST ScatterGather,
      PMDL OriginalMdl,
      PMDL *TargetMdl
    );

typedef NTSTATUS
(*PGET_DMA_ADAPTER_INFO)(
      PDMA_ADAPTER DmaAdapter,
      PDMA_ADAPTER_INFO AdapterInfo
    );

typedef NTSTATUS
(*PGET_DMA_TRANSFER_INFO)(
      PDMA_ADAPTER DmaAdapter,
      PMDL Mdl,
      ULONGLONG Offset,
      ULONG Length,
      BOOLEAN WriteOnly,
      PDMA_TRANSFER_INFO TransferInfo
    );

typedef NTSTATUS
(*PCONFIGURE_ADAPTER_CHANNEL)(
      PDMA_ADAPTER DmaAdapter,
      ULONG FunctionNumber,
      PVOID Context
    );

typedef NTSTATUS
(*PINITIALIZE_DMA_TRANSFER_CONTEXT)(
      PDMA_ADAPTER DmaAdapter,
      PVOID DmaTransferContext
    );

typedef PVOID
(*PALLOCATE_COMMON_BUFFER_EX)(
      PDMA_ADAPTER DmaAdapter,
      PPHYSICAL_ADDRESS MaximumAddress,
      ULONG Length,
      PPHYSICAL_ADDRESS LogicalAddress,
      BOOLEAN CacheEnabled,
      NODE_REQUIREMENT PreferredNode
    );

typedef NTSTATUS
(*PALLOCATE_ADAPTER_CHANNEL_EX)(
      PDMA_ADAPTER DmaAdapter,
      PDEVICE_OBJECT DeviceObject,
      PVOID DmaTransferContext,
      ULONG NumberOfMapRegisters,
      ULONG Flags,
      PDRIVER_CONTROL ExecutionRoutine,
      PVOID ExecutionContext,
      PVOID *MapRegisterBase
    );

typedef void
 
 
 
DMA_COMPLETION_ROUTINE(
      PDMA_ADAPTER DmaAdapter,
      PDEVICE_OBJECT DeviceObject,
      PVOID CompletionContext,
      DMA_COMPLETION_STATUS Status
    );
typedef DMA_COMPLETION_ROUTINE *PDMA_COMPLETION_ROUTINE;

typedef NTSTATUS
(*PMAP_TRANSFER_EX)(
      PDMA_ADAPTER DmaAdapter,
      PMDL Mdl,
      PVOID MapRegisterBase,
      ULONGLONG Offset,
      ULONG DeviceOffset,
      PULONG Length,
      BOOLEAN WriteToDevice,
      PSCATTER_GATHER_LIST ScatterGatherBuffer,
      ULONG ScatterGatherBufferLength,
      PDMA_COMPLETION_ROUTINE DmaCompletionRoutine,
      PVOID CompletionContext
    );

typedef BOOLEAN
(*PCANCEL_ADAPTER_CHANNEL)(
      PDMA_ADAPTER DmaAdapter,
      PDEVICE_OBJECT DeviceObject,
      PVOID DmaTransferContext
    );

typedef NTSTATUS
(*PCANCEL_MAPPED_TRANSFER)(
      PDMA_ADAPTER DmaAdapter,
      PVOID DmaTransferContext
    );

typedef NTSTATUS
(*PFLUSH_ADAPTER_BUFFERS_EX)(
      PDMA_ADAPTER DmaAdapter,
      PMDL Mdl,
      PVOID MapRegisterBase,
      ULONGLONG Offset,
      ULONG Length,
      BOOLEAN WriteToDevice
    );

typedef NTSTATUS
(*PGET_SCATTER_GATHER_LIST_EX)(
      PDMA_ADAPTER DmaAdapter,
      PDEVICE_OBJECT DeviceObject,
      PVOID DmaTransferContext,
      PMDL Mdl,
      ULONGLONG Offset,
      ULONG Length,
      ULONG Flags,
      PDRIVER_LIST_CONTROL ExecutionRoutine,
      PVOID Context,
      BOOLEAN WriteToDevice,
      PDMA_COMPLETION_ROUTINE DmaCompletionRoutine,
      PVOID CompletionContext,
      PSCATTER_GATHER_LIST *ScatterGatherList
    );

typedef NTSTATUS
(*PBUILD_SCATTER_GATHER_LIST_EX)(
      PDMA_ADAPTER DmaAdapter,
      PDEVICE_OBJECT DeviceObject,
      PVOID DmaTransferContext,
      PMDL Mdl,
      ULONGLONG Offset,
      ULONG Length,
      ULONG Flags,
      PDRIVER_LIST_CONTROL ExecutionRoutine,
      PVOID Context,
      BOOLEAN WriteToDevice,
      PVOID ScatterGatherBuffer,
      ULONG ScatterGatherLength,
      PDMA_COMPLETION_ROUTINE DmaCompletionRoutine,
      PVOID CompletionContext,
      PVOID ScatterGatherList
    );

typedef NTSTATUS
(*PALLOCATE_DOMAIN_COMMON_BUFFER)(
      PDMA_ADAPTER DmaAdapter,
      HANDLE DomainHandle,
      PPHYSICAL_ADDRESS MaximumAddress,
      ULONG Length,
      ULONG Flags,
      MEMORY_CACHING_TYPE *CacheType,
      NODE_REQUIREMENT PreferredNode,
      PPHYSICAL_ADDRESS LogicalAddress,
      PVOID *VirtualAddress
    );

typedef PVOID
(*PALLOCATE_COMMON_BUFFER_WITH_BOUNDS)(
      PDMA_ADAPTER DmaAdapter,
      PPHYSICAL_ADDRESS MinimumAddress,
      PPHYSICAL_ADDRESS MaximumAddress,
      ULONG Length,
      ULONG Flags,
      MEMORY_CACHING_TYPE *CacheType,
      NODE_REQUIREMENT PreferredNode,
      PPHYSICAL_ADDRESS LogicalAddress
    );

typedef struct _DMA_COMMON_BUFFER_VECTOR DMA_COMMON_BUFFER_VECTOR,
                                         *PDMA_COMMON_BUFFER_VECTOR;

typedef NTSTATUS
(*PALLOCATE_COMMON_BUFFER_VECTOR)(
      PDMA_ADAPTER DmaAdapter,
      PHYSICAL_ADDRESS LowAddress,
      PHYSICAL_ADDRESS HighAddress,
      MEMORY_CACHING_TYPE CacheType,
      NODE_REQUIREMENT IdealNode,
      ULONG Flags,
      ULONG NumberOfElements,
      ULONGLONG SizeOfElements,
      PDMA_COMMON_BUFFER_VECTOR *VectorOut
    );

typedef void
(*PGET_COMMON_BUFFER_FROM_VECTOR_BY_INDEX)(
      PDMA_ADAPTER DmaAdapter,
      PDMA_COMMON_BUFFER_VECTOR Vector,
      ULONG Index,
      PVOID *VirtualAddressOut,
      PPHYSICAL_ADDRESS LogicalAddressOut
    );

typedef void
(*PFREE_COMMON_BUFFER_FROM_VECTOR)(
      PDMA_ADAPTER DmaAdapter,
      PDMA_COMMON_BUFFER_VECTOR Vector,
      ULONG Index
    );

typedef void
(*PFREE_COMMON_BUFFER_VECTOR)(
      PDMA_ADAPTER DmaAdapter,
      PDMA_COMMON_BUFFER_VECTOR Vector
    );



typedef NTSTATUS
(*PCREATE_COMMON_BUFFER_FROM_MDL)(
      PDMA_ADAPTER DmaAdapter,
      PMDL Mdl,
      PDMA_COMMON_BUFFER_EXTENDED_CONFIGURATION ExtendedConfigs,
      ULONG ExtendedConfigsCount,
      PPHYSICAL_ADDRESS LogicalAddress
    );









typedef NTSTATUS
(*PFLUSH_DMA_BUFFER)(
      PDMA_ADAPTER DmaAdapter,
      PMDL Mdl,
      BOOLEAN ReadOperation
);

typedef NTSTATUS
(*PJOIN_DMA_DOMAIN)(
      PDMA_ADAPTER DmaAdapter,
      HANDLE DomainHandle
);

typedef NTSTATUS
(*PLEAVE_DMA_DOMAIN)(
      PDMA_ADAPTER DmaAdapter
);

typedef HANDLE
(*PGET_DMA_DOMAIN)(
      PDMA_ADAPTER DmaAdapter
);



typedef struct _DMA_OPERATIONS {
    ULONG Size;
    PPUT_DMA_ADAPTER PutDmaAdapter;
    PALLOCATE_COMMON_BUFFER AllocateCommonBuffer;
    PFREE_COMMON_BUFFER FreeCommonBuffer;
    PALLOCATE_ADAPTER_CHANNEL AllocateAdapterChannel;
    PFLUSH_ADAPTER_BUFFERS FlushAdapterBuffers;
    PFREE_ADAPTER_CHANNEL FreeAdapterChannel;
    PFREE_MAP_REGISTERS FreeMapRegisters;
    PMAP_TRANSFER MapTransfer;
    PGET_DMA_ALIGNMENT GetDmaAlignment;
    PREAD_DMA_COUNTER ReadDmaCounter;
    PGET_SCATTER_GATHER_LIST GetScatterGatherList;
    PPUT_SCATTER_GATHER_LIST PutScatterGatherList;
    PCALCULATE_SCATTER_GATHER_LIST_SIZE CalculateScatterGatherList;
    PBUILD_SCATTER_GATHER_LIST BuildScatterGatherList;
    PBUILD_MDL_FROM_SCATTER_GATHER_LIST BuildMdlFromScatterGatherList;
    PGET_DMA_ADAPTER_INFO GetDmaAdapterInfo;
    PGET_DMA_TRANSFER_INFO GetDmaTransferInfo;
    PINITIALIZE_DMA_TRANSFER_CONTEXT InitializeDmaTransferContext;
    PALLOCATE_COMMON_BUFFER_EX AllocateCommonBufferEx;
    PALLOCATE_ADAPTER_CHANNEL_EX AllocateAdapterChannelEx;
    PCONFIGURE_ADAPTER_CHANNEL ConfigureAdapterChannel;
    PCANCEL_ADAPTER_CHANNEL CancelAdapterChannel;
    PMAP_TRANSFER_EX MapTransferEx;
    PGET_SCATTER_GATHER_LIST_EX GetScatterGatherListEx;
    PBUILD_SCATTER_GATHER_LIST_EX BuildScatterGatherListEx;
    PFLUSH_ADAPTER_BUFFERS_EX FlushAdapterBuffersEx;
    PFREE_ADAPTER_OBJECT FreeAdapterObject;
    PCANCEL_MAPPED_TRANSFER CancelMappedTransfer;
    PALLOCATE_DOMAIN_COMMON_BUFFER AllocateDomainCommonBuffer;
    PFLUSH_DMA_BUFFER FlushDmaBuffer;
    PJOIN_DMA_DOMAIN JoinDmaDomain;
    PLEAVE_DMA_DOMAIN LeaveDmaDomain;
    PGET_DMA_DOMAIN GetDmaDomain;
    PALLOCATE_COMMON_BUFFER_WITH_BOUNDS AllocateCommonBufferWithBounds;
    PALLOCATE_COMMON_BUFFER_VECTOR AllocateCommonBufferVector;
    PGET_COMMON_BUFFER_FROM_VECTOR_BY_INDEX GetCommonBufferFromVectorByIndex;
    PFREE_COMMON_BUFFER_FROM_VECTOR FreeCommonBufferFromVector;
    PFREE_COMMON_BUFFER_VECTOR FreeCommonBufferVector;



    PCREATE_COMMON_BUFFER_FROM_MDL CreateCommonBufferFromMdl;



} DMA_OPERATIONS;





                 
 

PVOID
HalAllocateCommonBuffer(
      PDMA_ADAPTER DmaAdapter,
      ULONG Length,
      PPHYSICAL_ADDRESS LogicalAddress,
      BOOLEAN CacheEnabled
    );

                 
 

void
HalFreeCommonBuffer(
      PDMA_ADAPTER DmaAdapter,
      ULONG Length,
      PHYSICAL_ADDRESS LogicalAddress,
      PVOID VirtualAddress,
      BOOLEAN CacheEnabled
    );

                 
 
 
 

NTSTATUS
IoAllocateAdapterChannel(
      PDMA_ADAPTER DmaAdapter,
      PDEVICE_OBJECT DeviceObject,
      ULONG NumberOfMapRegisters,
      PDRIVER_CONTROL ExecutionRoutine,
      PVOID Context
    );

                 
 

BOOLEAN
IoFlushAdapterBuffers(
      PDMA_ADAPTER DmaAdapter,
      PMDL Mdl,
      PVOID MapRegisterBase,
      PVOID CurrentVa,
      ULONG Length,
      BOOLEAN WriteToDevice
    );

                 
 

void
IoFreeAdapterChannel(
      PDMA_ADAPTER DmaAdapter
    );

                 
 

void
IoFreeMapRegisters(
      PDMA_ADAPTER DmaAdapter,
      PVOID MapRegisterBase,
      ULONG NumberOfMapRegisters
    );


                 
 

PHYSICAL_ADDRESS
IoMapTransfer(
      PDMA_ADAPTER DmaAdapter,
      PMDL Mdl,
      PVOID MapRegisterBase,
      PVOID CurrentVa,
      PULONG Length,
      BOOLEAN WriteToDevice
    );

                 

ULONG
HalGetDmaAlignment(
      PDMA_ADAPTER DmaAdapter
    )
;

                 
 

ULONG
HalReadDmaCounter(
      PDMA_ADAPTER DmaAdapter
    )
;


















typedef struct _IOMMU_DMA_DOMAIN IOMMU_DMA_DOMAIN, * PIOMMU_DMA_DOMAIN;



typedef struct _IOMMU_DMA_PASID_DEVICE IOMMU_DMA_PASID_DEVICE,
               *PIOMMU_DMA_PASID_DEVICE;







typedef enum _FAULT_INFORMATION_ARCH {
    FaultInformationInvalid,
    FaultInformationArm64,
    FaultInformationX64
} FAULT_INFORMATION_ARCH, *PFAULT_INFORMATION_ARCH;

typedef enum _FAULT_INFORMATION_ARM64_TYPE {
    UnsupportedUpstreamTransaction,
    AddressSizeFault,
    TlbMatchConflict,
    ExternalFault,
    PermissionFault,
    AccessFlagFault,
    TranslationFault,
    MaxFaultType
} FAULT_INFORMATION_ARM64_TYPE, *PFAULT_INFORMATION_ARM64_TYPE;

typedef enum _FAULT_INFORMATION_ARM64_TYPE FAULT_INFORMATION_X64_TYPE,
                                      *PFAULT_INFORMATION_X64_TYPE;

typedef struct _FAULT_INFORMATION_X64_FLAGS {
    ULONG FaultAddressValid : 1;
    ULONG Reserved : 31;
} FAULT_INFORMATION_X64_FLAGS, *PFAULT_INFORMATION_X64_FLAGS;

typedef struct _FAULT_INFORMATION_ARM64_FLAGS {
    ULONG WriteNotRead : 1;
    ULONG InstructionNotData : 1;
    ULONG Privileged : 1;
    ULONG FaultAddressValid : 1;
    ULONG Reserved : 28;
} FAULT_INFORMATION_ARM64_FLAGS, *PFAULT_INFORMATION_ARM64_FLAGS;

typedef struct _FAULT_INFORMATION_X64 {
    PVOID DomainHandle;
    PVOID FaultAddress;
    FAULT_INFORMATION_X64_FLAGS Flags;
    FAULT_INFORMATION_X64_TYPE Type;
    ULONG64 IommuBaseAddress;
    ULONG PciSegment;
} FAULT_INFORMATION_X64, *PFAULT_INFORMATION_X64;

typedef struct _FAULT_INFORMATION_ARM64 {
    PVOID DomainHandle;
    PVOID FaultAddress;
    PDEVICE_OBJECT PhysicalDeviceObject;
    ULONG InputMappingId;
    FAULT_INFORMATION_ARM64_FLAGS Flags;
    FAULT_INFORMATION_ARM64_TYPE Type;
    ULONG64 IommuBaseAddress;
} FAULT_INFORMATION_ARM64, *PFAULT_INFORMATION_ARM64;

typedef struct _FAULT_INFORMATION {
    FAULT_INFORMATION_ARCH Type;
    BOOLEAN IsStage1;
    union {
        FAULT_INFORMATION_ARM64 Arm64;
        FAULT_INFORMATION_X64 X64;
    };
} FAULT_INFORMATION, *PFAULT_INFORMATION;





typedef enum _DOMAIN_CONFIGURATION_ARCH {
    DomainConfigurationArm64,
    DomainConfigurationX64,
    DomainConfigurationInvalid,
} DOMAIN_CONFIGURATION_ARCH, *PDOMAIN_CONFIGURATION_ARCH;

typedef struct _DOMAIN_CONFIGURATION_ARM64 {
    PHYSICAL_ADDRESS Ttbr0;
    PHYSICAL_ADDRESS Ttbr1;
    ULONG Mair0;
    ULONG Mair1;
    UCHAR InputSize0;
    UCHAR InputSize1;
    BOOLEAN CoherentTableWalks;
    BOOLEAN TranslationEnabled;
} DOMAIN_CONFIGURATION_ARM64, *PDOMAIN_CONFIGURATION_ARM64;

typedef struct _DOMAIN_CONFIGURATION_X64 {
    PHYSICAL_ADDRESS FirstLevelPageTableRoot;
    BOOLEAN TranslationEnabled;
} DOMAIN_CONFIGURATION_X64, *PDOMAIN_CONFIGURATION_X64;


typedef struct _DOMAIN_CONFIGURATION {
    DOMAIN_CONFIGURATION_ARCH Type;
    union {
        DOMAIN_CONFIGURATION_ARM64 Arm64;
        DOMAIN_CONFIGURATION_X64 X64;
    };
} DOMAIN_CONFIGURATION, *PDOMAIN_CONFIGURATION;





typedef void IOMMU_DEVICE_FAULT_HANDLER(
    PVOID Context,
    PFAULT_INFORMATION FaultInformation
    );

typedef IOMMU_DEVICE_FAULT_HANDLER *PIOMMU_DEVICE_FAULT_HANDLER;

typedef struct _DEVICE_FAULT_CONFIGURATION {

    
    
    
    

    PIOMMU_DEVICE_FAULT_HANDLER FaultHandler;

    
    
    

    PVOID FaultContext;
} DEVICE_FAULT_CONFIGURATION, *PDEVICE_FAULT_CONFIGURATION;



typedef ULONGLONG IOMMU_DMA_LOGICAL_ADDRESS, *PIOMMU_DMA_LOGICAL_ADDRESS;























typedef enum _IOMMU_DMA_DOMAIN_TYPE {
    DomainTypeTranslate,
    DomainTypePassThrough,
    DomainTypeUnmanaged,
    DomainTypeTranslateS1,
    DomainTypeMax,
} IOMMU_DMA_DOMAIN_TYPE, *PIOMMU_DMA_DOMAIN_TYPE;

typedef union _IOMMU_DMA_DOMAIN_CREATION_FLAGS {
    struct {
        ULONGLONG Reserved : 64;
    };

    ULONGLONG AsUlonglong;
} IOMMU_DMA_DOMAIN_CREATION_FLAGS, *PIOMMU_DMA_DOMAIN_CREATION_FLAGS;

typedef enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE {
    IommuDeviceCreationConfigTypeNone,
    IommuDeviceCreationConfigTypeAcpi,
    IommuDeviceCreationConfigTypeDeviceId,



    IommuDeviceCreationConfigTypePasid,



    IommuDeviceCreationConfigTypeMax
} IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE,
  *PIOMMU_DEVICE_CREATION_CONFIGURATION_TYPE;

typedef struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI {
    UINT32 InputMappingBase;
    UINT32 MappingsCount;
} IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI,
  *PIOMMU_DEVICE_CREATION_CONFIGURATION_ACPI;

















typedef enum _IOMMU_PASID_CONFIGURATION_TYPE {
    PasidConfigTypeDefaultPasidOnly,
    PasidConfigTypePasidTaggedDma,
    PasidConfigTypeMax,
} IOMMU_PASID_CONFIGURATION_TYPE, *PIOMMU_PASID_CONFIGURATION_TYPE;

typedef struct _IOMMU_DEVICE_CREATION_CONFIGURATION_PASID {

    
    
    

    IOMMU_PASID_CONFIGURATION_TYPE ConfigType;

    
    
    
    

    BOOLEAN SuppressPasidFaults;
} IOMMU_DEVICE_CREATION_CONFIGURATION_PASID,
  *PIOMMU_DEVICE_CREATION_CONFIGURATION_PASID;



typedef struct _IOMMU_DEVICE_CREATION_CONFIGURATION {
    LIST_ENTRY NextConfiguration;
    IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE ConfigType;
    union {
        IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI Acpi;
        PVOID DeviceId;



        IOMMU_DEVICE_CREATION_CONFIGURATION_PASID Pasid;



    };
} IOMMU_DEVICE_CREATION_CONFIGURATION, *PIOMMU_DEVICE_CREATION_CONFIGURATION;





typedef enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE {
    MapPhysicalAddressTypeMdl,
    MapPhysicalAddressTypeContiguousRange,
    MapPhysicalAddressTypePfn,
    MapPhysicalAddressTypeMax,
} IOMMU_MAP_PHYSICAL_ADDRESS_TYPE, *PIOMMU_MAP_PHYSICAL_ADDRESS_TYPE;

typedef struct _IOMMU_MAP_PHYSICAL_ADDRESS {
    IOMMU_MAP_PHYSICAL_ADDRESS_TYPE MapType;
    union {
        struct {
            PMDL Mdl;
        } Mdl;

        struct {
            PHYSICAL_ADDRESS Base;
            SIZE_T Size;
        } ContiguousRange;

        struct {
            PPFN_NUMBER PageFrame;
            SIZE_T NumberOfPages;
        } PfnArray;
    };
} IOMMU_MAP_PHYSICAL_ADDRESS, *PIOMMU_MAP_PHYSICAL_ADDRESS;

typedef struct _IOMMU_DMA_RESERVED_REGION {
    struct _IOMMU_DMA_RESERVED_REGION *RegionNext;
    IOMMU_DMA_LOGICAL_ADDRESS Base;
    SIZE_T NumberOfPages;
    BOOLEAN ShouldMap;
} IOMMU_DMA_RESERVED_REGION, *PIOMMU_DMA_RESERVED_REGION;
















typedef enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE {
    IommuDmaLogicalAllocatorNone,
    IommuDmaLogicalAllocatorBuddy,

    
    
    

    IommuDmaLogicalAllocatorMax
} IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE, *PIOMMU_DMA_LOGICAL_ALLOCATOR_TYPE;

typedef struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG {
    IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE LogicalAllocatorType;

    
    
    

    union {
        struct {
            ULONG AddressWidth;
        } BuddyAllocatorConfig;
    };
} IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG, *PIOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG;

typedef struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN {
    IOMMU_DMA_LOGICAL_ADDRESS LogicalAddressBase;
    SIZE_T Size;
} IOMMU_DMA_LOGICAL_ADDRESS_TOKEN, *PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN;

typedef struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT {
    PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN OwningToken;
    SIZE_T Offset;
    SIZE_T Size;
} IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT,
  *PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT;





typedef union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS {
    struct {
        ULONG AvailableDomainTypes : 1;
        ULONG Reserved : 31;
    } ;

    ULONG AsULONG;
} IOMMU_INTERFACE_STATE_CHANGE_FIELDS, *PIOMMU_INTERFACE_STATE_CHANGE_FIELDS;

typedef struct _IOMMU_INTERFACE_STATE_CHANGE {
    IOMMU_INTERFACE_STATE_CHANGE_FIELDS PresentFields;
    ULONG AvailableDomainTypes;
} IOMMU_INTERFACE_STATE_CHANGE, *PIOMMU_INTERFACE_STATE_CHANGE;

typedef
 
 
 
void
IOMMU_INTERFACE_STATE_CHANGE_CALLBACK (
      PIOMMU_INTERFACE_STATE_CHANGE StateChange,
      PVOID Context
    );




















typedef IOMMU_INTERFACE_STATE_CHANGE_CALLBACK
        *PIOMMU_INTERFACE_STATE_CHANGE_CALLBACK;





typedef struct _IOMMU_DMA_DEVICE_INFORMATION {
    BOOLEAN DefaultPasidEnabled;
    BOOLEAN PasidTaggedDmaEnabled;
    BOOLEAN PasidFaultsSuppressed;
} IOMMU_DMA_DEVICE_INFORMATION, *PIOMMU_DMA_DEVICE_INFORMATION;











typedef
 
 
NTSTATUS
IOMMU_DOMAIN_CREATE (
      BOOLEAN OsManagedPageTable,
      PIOMMU_DMA_DOMAIN *DomainOut
    );




























typedef IOMMU_DOMAIN_CREATE *PIOMMU_DOMAIN_CREATE;

typedef
 
 
NTSTATUS
IOMMU_DOMAIN_DELETE (
      PIOMMU_DMA_DOMAIN Domain
    );


















typedef IOMMU_DOMAIN_DELETE *PIOMMU_DOMAIN_DELETE;

typedef
 
 
NTSTATUS
IOMMU_DOMAIN_ATTACH_DEVICE (
      PIOMMU_DMA_DOMAIN Domain,
      PDEVICE_OBJECT PhysicalDeviceObject,
      ULONG InputMappingIdBase,
      ULONG MappingCount
    );


































typedef IOMMU_DOMAIN_ATTACH_DEVICE *PIOMMU_DOMAIN_ATTACH_DEVICE;

typedef
 
 
NTSTATUS
IOMMU_DOMAIN_DETACH_DEVICE (
      PIOMMU_DMA_DOMAIN Domain,
      PDEVICE_OBJECT PhysicalDeviceObject,
      ULONG InputMappingId
    );


































typedef IOMMU_DOMAIN_DETACH_DEVICE *PIOMMU_DOMAIN_DETACH_DEVICE;

typedef  
NTSTATUS
IOMMU_SET_DEVICE_FAULT_REPORTING (
      PDEVICE_OBJECT PhysicalDeviceObject,
      ULONG InputMappingIdBase,
      BOOLEAN Enable,
      PDEVICE_FAULT_CONFIGURATION FaultConfig
    );






























typedef IOMMU_SET_DEVICE_FAULT_REPORTING *PIOMMU_SET_DEVICE_FAULT_REPORTING;

typedef  
NTSTATUS
IOMMU_DOMAIN_CONFIGURE (
      PIOMMU_DMA_DOMAIN Domain,
      PDOMAIN_CONFIGURATION Configuration
    );




















typedef IOMMU_DOMAIN_CONFIGURE *PIOMMU_DOMAIN_CONFIGURE;

typedef  
 
NTSTATUS
IOMMU_FLUSH_DOMAIN (
      PIOMMU_DMA_DOMAIN Domain
    );

















typedef IOMMU_FLUSH_DOMAIN *PIOMMU_FLUSH_DOMAIN;

typedef  
NTSTATUS
IOMMU_FLUSH_DOMAIN_VA_LIST (
      PIOMMU_DMA_DOMAIN Domain,
      BOOLEAN LastLevel,
      ULONG Number,
      PVOID VaList
    );

























typedef IOMMU_FLUSH_DOMAIN_VA_LIST *PIOMMU_FLUSH_DOMAIN_VA_LIST;

typedef struct _INPUT_MAPPING_ELEMENT {
    ULONG InputMappingId;
} INPUT_MAPPING_ELEMENT, *PINPUT_MAPPING_ELEMENT;

typedef  
NTSTATUS
IOMMU_QUERY_INPUT_MAPPINGS (
      PDEVICE_OBJECT PhysicalDeviceObject,
      PINPUT_MAPPING_ELEMENT Buffer,
      ULONG BufferLength,
      PULONG ReturnLength
    );

































typedef IOMMU_QUERY_INPUT_MAPPINGS *PIOMMU_QUERY_INPUT_MAPPINGS;

typedef
 
 
NTSTATUS
IOMMU_MAP_LOGICAL_RANGE (
      PIOMMU_DMA_DOMAIN Domain,
      ULONG Permissions,
      PMDL Mdl,
      ULONGLONG LogicalAddress
    );


































typedef IOMMU_MAP_LOGICAL_RANGE *PIOMMU_MAP_LOGICAL_RANGE;

typedef
 
 
NTSTATUS
IOMMU_UNMAP_LOGICAL_RANGE (
      PIOMMU_DMA_DOMAIN Domain,
      ULONGLONG LogicalAddress,
      ULONGLONG NumberOfPages
    );




























typedef IOMMU_UNMAP_LOGICAL_RANGE *PIOMMU_UNMAP_LOGICAL_RANGE;

typedef
 
 
NTSTATUS
IOMMU_MAP_IDENTITY_RANGE (
      PIOMMU_DMA_DOMAIN Domain,
      ULONG Permissions,
      PMDL Mdl
    );




























typedef IOMMU_MAP_IDENTITY_RANGE *PIOMMU_MAP_IDENTITY_RANGE;

typedef
 
 
NTSTATUS
IOMMU_UNMAP_IDENTITY_RANGE (
      PIOMMU_DMA_DOMAIN Domain,
      PMDL Mdl
    );

























typedef IOMMU_UNMAP_IDENTITY_RANGE *PIOMMU_UNMAP_IDENTITY_RANGE;



typedef
 
 
NTSTATUS
IOMMU_DOMAIN_CREATE_EX (
      IOMMU_DMA_DOMAIN_TYPE DomainType,
      IOMMU_DMA_DOMAIN_CREATION_FLAGS Flags,
      PIOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG LogicalAllocatorConfig,
      PIOMMU_DMA_RESERVED_REGION ReservedRegions,
      PIOMMU_DMA_DOMAIN *DomainOut
    );



































typedef IOMMU_DOMAIN_CREATE_EX *PIOMMU_DOMAIN_CREATE_EX;

typedef
 
 
NTSTATUS
IOMMU_DOMAIN_ATTACH_DEVICE_EX (
      PIOMMU_DMA_DOMAIN Domain,
      PIOMMU_DMA_DEVICE DmaDevice
    );





























typedef IOMMU_DOMAIN_ATTACH_DEVICE_EX *PIOMMU_DOMAIN_ATTACH_DEVICE_EX;

typedef
 
 
NTSTATUS
IOMMU_DOMAIN_DETACH_DEVICE_EX (
      PIOMMU_DMA_DEVICE DmaDevice
    );
























typedef IOMMU_DOMAIN_DETACH_DEVICE_EX *PIOMMU_DOMAIN_DETACH_DEVICE_EX;

typedef
 
 
NTSTATUS
IOMMU_MAP_LOGICAL_RANGE_EX (
      PIOMMU_DMA_DOMAIN Domain,
      ULONG Permissions,
      PIOMMU_MAP_PHYSICAL_ADDRESS PhysicalAddressToMap,
      PIOMMU_DMA_LOGICAL_ADDRESS ExplicitLogicalAddress,
      PIOMMU_DMA_LOGICAL_ADDRESS MinLogicalAddress,
      PIOMMU_DMA_LOGICAL_ADDRESS MaxLogicalAddress,
      PIOMMU_DMA_LOGICAL_ADDRESS LogicalAddressOut
    );




























































typedef IOMMU_MAP_LOGICAL_RANGE_EX *PIOMMU_MAP_LOGICAL_RANGE_EX;

typedef
 
 
NTSTATUS
IOMMU_MAP_IDENTITY_RANGE_EX (
      PIOMMU_DMA_DOMAIN Domain,
      ULONG Permissions,
      PIOMMU_MAP_PHYSICAL_ADDRESS PhysicalAddressToMap
    );







































typedef IOMMU_MAP_IDENTITY_RANGE_EX *PIOMMU_MAP_IDENTITY_RANGE_EX;

typedef
 
 
NTSTATUS
IOMMU_UNMAP_IDENTITY_RANGE_EX (
      PIOMMU_DMA_DOMAIN Domain,
      PIOMMU_MAP_PHYSICAL_ADDRESS MappedPhysicalAddress
    );

































typedef IOMMU_UNMAP_IDENTITY_RANGE_EX *PIOMMU_UNMAP_IDENTITY_RANGE_EX;

typedef
 
 
void
IOMMU_DEVICE_QUERY_DOMAIN_TYPES (
      PIOMMU_DMA_DEVICE DmaDevice,
      PULONG AvailableDomains
    );























typedef IOMMU_DEVICE_QUERY_DOMAIN_TYPES *PIOMMU_DEVICE_QUERY_DOMAIN_TYPES;

typedef
 
 
NTSTATUS
IOMMU_REGISTER_INTERFACE_STATE_CHANGE_CALLBACK (
      PIOMMU_INTERFACE_STATE_CHANGE_CALLBACK StateChangeCallback,
      PVOID Context,
      PIOMMU_DMA_DEVICE DmaDevice,
      PIOMMU_INTERFACE_STATE_CHANGE_FIELDS StateFields
    );












































typedef IOMMU_REGISTER_INTERFACE_STATE_CHANGE_CALLBACK
        *PIOMMU_REGISTER_INTERFACE_STATE_CHANGE_CALLBACK;

typedef
 
 
NTSTATUS
IOMMU_UNREGISTER_INTERFACE_STATE_CHANGE_CALLBACK (
      PIOMMU_INTERFACE_STATE_CHANGE_CALLBACK StateChangeCallback,
      PIOMMU_DMA_DEVICE DmaDevice
    );






















typedef IOMMU_UNREGISTER_INTERFACE_STATE_CHANGE_CALLBACK
        *PIOMMU_UNREGISTER_INTERFACE_STATE_CHANGE_CALLBACK;

typedef  
NTSTATUS
IOMMU_RESERVE_LOGICAL_ADDRESS_RANGE (
      PIOMMU_DMA_DOMAIN Domain,
      SIZE_T Size,
      PIOMMU_DMA_LOGICAL_ADDRESS ExplicitLogicalAddress,
      PIOMMU_DMA_LOGICAL_ADDRESS MinLogicalAddress,
      PIOMMU_DMA_LOGICAL_ADDRESS MaxLogicalAddress,
      PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN *LogicalAddressToken
    );

























































typedef IOMMU_RESERVE_LOGICAL_ADDRESS_RANGE *PIOMMU_RESERVE_LOGICAL_ADDRESS_RANGE;

typedef  
NTSTATUS
IOMMU_FREE_RESERVED_LOGICAL_ADDRESS_RANGE (
      PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN LogicalAddressToken
    );























typedef IOMMU_FREE_RESERVED_LOGICAL_ADDRESS_RANGE *PIOMMU_FREE_RESERVED_LOGICAL_ADDRESS_RANGE;

typedef  
NTSTATUS
IOMMU_MAP_RESERVED_LOGICAL_RANGE (
      PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN LogicalAddressToken,
      SIZE_T Offset,
      ULONG Permissions,
      PIOMMU_MAP_PHYSICAL_ADDRESS PhysicalAddressToMap,
      PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT MappedSegment
    );



































typedef IOMMU_MAP_RESERVED_LOGICAL_RANGE *PIOMMU_MAP_RESERVED_LOGICAL_RANGE;

typedef  
NTSTATUS
IOMMU_UNMAP_RESERVED_LOGICAL_RANGE (
      PIOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT MappedSegment
    );























typedef IOMMU_UNMAP_RESERVED_LOGICAL_RANGE *PIOMMU_UNMAP_RESERVED_LOGICAL_RANGE;

typedef
 
 
NTSTATUS
IOMMU_DEVICE_CREATE (
      PDEVICE_OBJECT DeviceObject,
      PIOMMU_DEVICE_CREATION_CONFIGURATION DeviceConfig,
      PIOMMU_DMA_DEVICE *DmaDeviceOut
    );









































typedef IOMMU_DEVICE_CREATE *PIOMMU_DEVICE_CREATE;

typedef
 
 
NTSTATUS
IOMMU_DEVICE_DELETE (
      PIOMMU_DMA_DEVICE DmaDevice
    );




















typedef IOMMU_DEVICE_DELETE *PIOMMU_DEVICE_DELETE;

typedef  
NTSTATUS
IOMMU_SET_DEVICE_FAULT_REPORTING_EX (
      PIOMMU_DMA_DEVICE DmaDevice,
      ULONG InputMappingIdBase,
      BOOLEAN Enable,
      PDEVICE_FAULT_CONFIGURATION FaultConfig
    );






























typedef IOMMU_SET_DEVICE_FAULT_REPORTING_EX
        *PIOMMU_SET_DEVICE_FAULT_REPORTING_EX;





typedef
 
 
NTSTATUS
IOMMU_PASID_DEVICE_CREATE (
      PIOMMU_DMA_DEVICE DmaDevice,
      PIOMMU_DMA_PASID_DEVICE *PasidDeviceOut,
      PULONG AsidOut
    );
































typedef IOMMU_PASID_DEVICE_CREATE *PIOMMU_PASID_DEVICE_CREATE;

typedef
 
 
NTSTATUS
IOMMU_PASID_DEVICE_DELETE (
      PIOMMU_DMA_PASID_DEVICE PasidDevice
    );




















typedef IOMMU_PASID_DEVICE_DELETE *PIOMMU_PASID_DEVICE_DELETE;

typedef
 
 
NTSTATUS
IOMMU_DOMAIN_ATTACH_PASID_DEVICE (
      PIOMMU_DMA_DOMAIN Domain,
      PIOMMU_DMA_PASID_DEVICE PasidDevice
    );





































typedef IOMMU_DOMAIN_ATTACH_PASID_DEVICE *PIOMMU_DOMAIN_ATTACH_PASID_DEVICE;

typedef
 
 
NTSTATUS
IOMMU_DOMAIN_DETACH_PASID_DEVICE (
      PIOMMU_DMA_PASID_DEVICE PasidDevice
    );




























typedef IOMMU_DOMAIN_DETACH_PASID_DEVICE *PIOMMU_DOMAIN_DETACH_PASID_DEVICE;

typedef
 
 
NTSTATUS
IOMMU_DEVICE_QUERY_INFORMATION (
      PIOMMU_DMA_DEVICE DmaDevice,
      ULONG Size,
      PULONG BytesWritten,
      PIOMMU_DMA_DEVICE_INFORMATION Buffer
    );



























typedef IOMMU_DEVICE_QUERY_INFORMATION *PIOMMU_DEVICE_QUERY_INFORMATION;






typedef struct _DMA_IOMMU_INTERFACE {
    ULONG Version;
    PIOMMU_DOMAIN_CREATE CreateDomain;
    PIOMMU_DOMAIN_DELETE DeleteDomain;
    PIOMMU_DOMAIN_ATTACH_DEVICE AttachDevice;
    PIOMMU_DOMAIN_DETACH_DEVICE DetachDevice;
    PIOMMU_FLUSH_DOMAIN FlushDomain;
    PIOMMU_FLUSH_DOMAIN_VA_LIST FlushDomainByVaList;
    PIOMMU_QUERY_INPUT_MAPPINGS QueryInputMappings;
    PIOMMU_MAP_LOGICAL_RANGE MapLogicalRange;
    PIOMMU_UNMAP_LOGICAL_RANGE UnmapLogicalRange;
    PIOMMU_MAP_IDENTITY_RANGE MapIdentityRange;
    PIOMMU_UNMAP_IDENTITY_RANGE UnmapIdentityRange;
    PIOMMU_SET_DEVICE_FAULT_REPORTING SetDeviceFaultReporting;
    PIOMMU_DOMAIN_CONFIGURE ConfigureDomain;
} DMA_IOMMU_INTERFACE, *PDMA_IOMMU_INTERFACE;






















typedef struct _DMA_IOMMU_INTERFACE_V1 {
    PIOMMU_DOMAIN_CREATE CreateDomain;
    PIOMMU_DOMAIN_DELETE DeleteDomain;
    PIOMMU_DOMAIN_ATTACH_DEVICE AttachDevice;
    PIOMMU_DOMAIN_DETACH_DEVICE DetachDevice;
    PIOMMU_FLUSH_DOMAIN FlushDomain;
    PIOMMU_FLUSH_DOMAIN_VA_LIST FlushDomainByVaList;
    PIOMMU_QUERY_INPUT_MAPPINGS QueryInputMappings;
    PIOMMU_MAP_LOGICAL_RANGE MapLogicalRange;
    PIOMMU_UNMAP_LOGICAL_RANGE UnmapLogicalRange;
    PIOMMU_MAP_IDENTITY_RANGE MapIdentityRange;
    PIOMMU_UNMAP_IDENTITY_RANGE UnmapIdentityRange;
    PIOMMU_SET_DEVICE_FAULT_REPORTING SetDeviceFaultReporting;
    PIOMMU_DOMAIN_CONFIGURE ConfigureDomain;
} DMA_IOMMU_INTERFACE_V1, *PDMA_IOMMU_INTERFACE_V1;

typedef struct _DMA_IOMMU_INTERFACE_V2 {
    PIOMMU_DOMAIN_CREATE_EX CreateDomainEx;
    PIOMMU_DOMAIN_DELETE DeleteDomain;
    PIOMMU_DOMAIN_ATTACH_DEVICE_EX AttachDeviceEx;
    PIOMMU_DOMAIN_DETACH_DEVICE_EX DetachDeviceEx;
    PIOMMU_FLUSH_DOMAIN FlushDomain;
    PIOMMU_FLUSH_DOMAIN_VA_LIST FlushDomainByVaList;
    PIOMMU_QUERY_INPUT_MAPPINGS QueryInputMappings;
    PIOMMU_MAP_LOGICAL_RANGE_EX MapLogicalRangeEx;
    PIOMMU_UNMAP_LOGICAL_RANGE UnmapLogicalRange;
    PIOMMU_MAP_IDENTITY_RANGE_EX MapIdentityRangeEx;
    PIOMMU_UNMAP_IDENTITY_RANGE_EX UnmapIdentityRangeEx;
    PIOMMU_SET_DEVICE_FAULT_REPORTING_EX SetDeviceFaultReportingEx;
    PIOMMU_DOMAIN_CONFIGURE ConfigureDomain;
    PIOMMU_DEVICE_QUERY_DOMAIN_TYPES QueryAvailableDomainTypes;
    PIOMMU_REGISTER_INTERFACE_STATE_CHANGE_CALLBACK
        RegisterInterfaceStateChangeCallback;

    PIOMMU_UNREGISTER_INTERFACE_STATE_CHANGE_CALLBACK
        UnregisterInterfaceStateChangeCallback;

    PIOMMU_RESERVE_LOGICAL_ADDRESS_RANGE ReserveLogicalAddressRange;
    PIOMMU_FREE_RESERVED_LOGICAL_ADDRESS_RANGE FreeReservedLogicalAddressRange;
    PIOMMU_MAP_RESERVED_LOGICAL_RANGE MapReservedLogicalRange;
    PIOMMU_UNMAP_RESERVED_LOGICAL_RANGE UnmapReservedLogicalRange;
    PIOMMU_DEVICE_CREATE CreateDevice;
    PIOMMU_DEVICE_DELETE DeleteDevice;
} DMA_IOMMU_INTERFACE_V2, *PDMA_IOMMU_INTERFACE_V2;



typedef struct _DMA_IOMMU_INTERFACE_V3 {
    PIOMMU_DOMAIN_CREATE_EX CreateDomainEx;
    PIOMMU_DOMAIN_DELETE DeleteDomain;
    PIOMMU_DOMAIN_ATTACH_DEVICE_EX AttachDeviceEx;
    PIOMMU_DOMAIN_DETACH_DEVICE_EX DetachDeviceEx;
    PIOMMU_FLUSH_DOMAIN FlushDomain;
    PIOMMU_FLUSH_DOMAIN_VA_LIST FlushDomainByVaList;
    PIOMMU_QUERY_INPUT_MAPPINGS QueryInputMappings;
    PIOMMU_MAP_LOGICAL_RANGE_EX MapLogicalRangeEx;
    PIOMMU_UNMAP_LOGICAL_RANGE UnmapLogicalRange;
    PIOMMU_MAP_IDENTITY_RANGE_EX MapIdentityRangeEx;
    PIOMMU_UNMAP_IDENTITY_RANGE_EX UnmapIdentityRangeEx;
    PIOMMU_SET_DEVICE_FAULT_REPORTING_EX SetDeviceFaultReportingEx;
    PIOMMU_DOMAIN_CONFIGURE ConfigureDomain;
    PIOMMU_DEVICE_QUERY_DOMAIN_TYPES QueryAvailableDomainTypes;
    PIOMMU_REGISTER_INTERFACE_STATE_CHANGE_CALLBACK
        RegisterInterfaceStateChangeCallback;

    PIOMMU_UNREGISTER_INTERFACE_STATE_CHANGE_CALLBACK
        UnregisterInterfaceStateChangeCallback;

    PIOMMU_RESERVE_LOGICAL_ADDRESS_RANGE ReserveLogicalAddressRange;
    PIOMMU_FREE_RESERVED_LOGICAL_ADDRESS_RANGE FreeReservedLogicalAddressRange;
    PIOMMU_MAP_RESERVED_LOGICAL_RANGE MapReservedLogicalRange;
    PIOMMU_UNMAP_RESERVED_LOGICAL_RANGE UnmapReservedLogicalRange;
    PIOMMU_DEVICE_CREATE CreateDevice;
    PIOMMU_DEVICE_DELETE DeleteDevice;
    PIOMMU_PASID_DEVICE_CREATE CreatePasidDevice;
    PIOMMU_PASID_DEVICE_DELETE DeletePasidDevice;
    PIOMMU_DOMAIN_ATTACH_PASID_DEVICE AttachPasidDevice;
    PIOMMU_DOMAIN_DETACH_PASID_DEVICE DetachPasidDevice;
    PIOMMU_DEVICE_QUERY_INFORMATION QueryDeviceInfo;
} DMA_IOMMU_INTERFACE_V3, *PDMA_IOMMU_INTERFACE_V3;



typedef struct _DMA_IOMMU_INTERFACE_EX {
    SIZE_T Size;
    ULONG Version;
    union {
        DMA_IOMMU_INTERFACE_V1 V1;
        DMA_IOMMU_INTERFACE_V2 V2;



        DMA_IOMMU_INTERFACE_V3 V3;



    };
} DMA_IOMMU_INTERFACE_EX, *PDMA_IOMMU_INTERFACE_EX;
















typedef char __C_ASSERT__[((((LONG)(LONG_PTR)&(((DMA_IOMMU_INTERFACE_EX *)0)->V1)) + sizeof(DMA_IOMMU_INTERFACE_V1)) == 0x78)?1:-1];
typedef char __C_ASSERT__[((((LONG)(LONG_PTR)&(((DMA_IOMMU_INTERFACE_EX *)0)->V2)) + sizeof(DMA_IOMMU_INTERFACE_V2)) == 0xc0)?1:-1];










typedef char __C_ASSERT__[((((LONG)(LONG_PTR)&(((DMA_IOMMU_INTERFACE_EX *)0)->V3)) + sizeof(DMA_IOMMU_INTERFACE_V3)) == 0xe8)?1:-1];









void
PoSetHiberRange (
      PVOID MemoryMap,
      ULONG     Flags,
      PVOID     Address,
      ULONG_PTR Length,
      ULONG     Tag
    );











 

void
PoSetSystemState (
      EXECUTION_STATE Flags
    );




 

PVOID
PoRegisterSystemState (
      PVOID StateHandle,
      EXECUTION_STATE Flags
    );



 

NTSTATUS
PoCreatePowerRequest (
     PVOID *PowerRequest,
      PDEVICE_OBJECT DeviceObject,
      PCOUNTED_REASON_CONTEXT Context
    );



 

NTSTATUS
PoSetPowerRequest (
      PVOID PowerRequest,
      POWER_REQUEST_TYPE Type
    );



 

NTSTATUS
PoClearPowerRequest (
      PVOID PowerRequest,
      POWER_REQUEST_TYPE Type
    );



 

void
PoDeletePowerRequest (
      PVOID PowerRequest
    );



typedef
 
 
 
void
REQUEST_POWER_COMPLETE (
      PDEVICE_OBJECT DeviceObject,
      UCHAR MinorFunction,
      POWER_STATE PowerState,
      PVOID Context,
      PIO_STATUS_BLOCK IoStatus
    );

typedef REQUEST_POWER_COMPLETE *PREQUEST_POWER_COMPLETE;


 

NTSTATUS
PoRequestPowerIrp (
      PDEVICE_OBJECT DeviceObject,
      UCHAR MinorFunction,
      POWER_STATE PowerState,
      PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
     PIRP *Irp
    );



 

void
PoSetSystemWake (
      PIRP Irp
    );



 

void
PoSetSystemWakeDevice(
       PDEVICE_OBJECT DeviceObject
    );



 

BOOLEAN
PoGetSystemWake (
      PIRP Irp
    );




 

void
PoUnregisterSystemState (
      PVOID StateHandle
    );




 

POWER_STATE
PoSetPowerState (
      PDEVICE_OBJECT DeviceObject,
      POWER_STATE_TYPE Type,
      POWER_STATE State
    );



 

NTSTATUS
PoCallDriver (
      PDEVICE_OBJECT DeviceObject,
        PIRP Irp
    );



 

void
PoStartNextPowerIrp(
      PIRP Irp
    );



 

PULONG
PoRegisterDeviceForIdleDetection (
      PDEVICE_OBJECT DeviceObject,
      ULONG ConservationIdleTime,
      ULONG PerformanceIdleTime,
      DEVICE_POWER_STATE State
    );







void
PoSetDeviceBusyEx (
      PULONG IdlePointer
    );




void
PoStartDeviceBusy (
      PULONG IdlePointer
    );




void
PoEndDeviceBusy (
      PULONG IdlePointer
    );



 

BOOLEAN
PoQueryWatchdogTime (
      PDEVICE_OBJECT Pdo,
      PULONG SecondsRemaining
    );


typedef
 
 
NTSTATUS
POWER_SETTING_CALLBACK (
      LPCGUID SettingGuid,
      PVOID Value,
      ULONG ValueLength,
      PVOID Context
);

typedef POWER_SETTING_CALLBACK *PPOWER_SETTING_CALLBACK;



 

NTSTATUS
PoRegisterPowerSettingCallback (
      PDEVICE_OBJECT DeviceObject,
      LPCGUID SettingGuid,
      PPOWER_SETTING_CALLBACK Callback,
      PVOID Context,
     PVOID *Handle
    );



 

NTSTATUS
PoUnregisterPowerSettingCallback (
      PVOID Handle
    );
























struct POHANDLE__{int unused;}; typedef struct POHANDLE__ *POHANDLE;

typedef
 
 
void
PO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK (
      PVOID Context,
      ULONG Component
    );

typedef PO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK
    *PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK;

typedef
 
 
void
PO_FX_COMPONENT_IDLE_CONDITION_CALLBACK (
      PVOID Context,
      ULONG Component
    );

typedef PO_FX_COMPONENT_IDLE_CONDITION_CALLBACK
    *PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK;

typedef
 
 
void
PO_FX_COMPONENT_IDLE_STATE_CALLBACK (
      PVOID Context,
      ULONG Component,
      ULONG State
    );

typedef PO_FX_COMPONENT_IDLE_STATE_CALLBACK
    *PPO_FX_COMPONENT_IDLE_STATE_CALLBACK;

typedef
 
 
void
PO_FX_DEVICE_POWER_REQUIRED_CALLBACK (
      PVOID Context
    );

typedef PO_FX_DEVICE_POWER_REQUIRED_CALLBACK
    *PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK;

typedef
 
 
void
PO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK (
      PVOID Context
    );

typedef PO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK
    *PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK;

typedef
 
 
NTSTATUS
PO_FX_POWER_CONTROL_CALLBACK (
      PVOID DeviceContext,
      LPCGUID PowerControlCode,
      PVOID InBuffer,
      SIZE_T InBufferSize,
      PVOID OutBuffer,
      SIZE_T OutBufferSize,
      PSIZE_T BytesReturned
    );

typedef PO_FX_POWER_CONTROL_CALLBACK *PPO_FX_POWER_CONTROL_CALLBACK;

typedef
 
 
void
PO_FX_COMPONENT_CRITICAL_TRANSITION_CALLBACK (
      PVOID Context,
      ULONG Component,
      BOOLEAN Active
    );

typedef PO_FX_COMPONENT_CRITICAL_TRANSITION_CALLBACK
    *PPO_FX_COMPONENT_CRITICAL_TRANSITION_CALLBACK;

typedef struct _PO_FX_COMPONENT_IDLE_STATE {
    ULONGLONG TransitionLatency;
    ULONGLONG ResidencyRequirement;
    ULONG NominalPower;
} PO_FX_COMPONENT_IDLE_STATE, *PPO_FX_COMPONENT_IDLE_STATE;

typedef struct _PO_FX_COMPONENT_V1 {
    GUID Id;
    ULONG IdleStateCount;
    ULONG DeepestWakeableIdleState;
      PPO_FX_COMPONENT_IDLE_STATE IdleStates;
} PO_FX_COMPONENT_V1, *PPO_FX_COMPONENT_V1;

typedef struct _PO_FX_DEVICE_V1 {
    ULONG Version;
    ULONG ComponentCount;
    PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
    PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK ComponentIdleConditionCallback;
    PPO_FX_COMPONENT_IDLE_STATE_CALLBACK ComponentIdleStateCallback;
    PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK DevicePowerRequiredCallback;
    PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK DevicePowerNotRequiredCallback;
    PPO_FX_POWER_CONTROL_CALLBACK PowerControlCallback;
    PVOID DeviceContext;
      PO_FX_COMPONENT_V1 Components[1];
} PO_FX_DEVICE_V1, *PPO_FX_DEVICE_V1;




typedef struct _PO_FX_COMPONENT_V2 {
    GUID Id;
    ULONGLONG Flags;
    ULONG DeepestWakeableIdleState;
    ULONG IdleStateCount;
      PPO_FX_COMPONENT_IDLE_STATE IdleStates;
    ULONG ProviderCount;
      PULONG Providers;
} PO_FX_COMPONENT_V2, *PPO_FX_COMPONENT_V2;

typedef struct _PO_FX_DEVICE_V2 {
    ULONG Version;
    ULONGLONG Flags;
    PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
    PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK ComponentIdleConditionCallback;
    PPO_FX_COMPONENT_IDLE_STATE_CALLBACK ComponentIdleStateCallback;
    PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK DevicePowerRequiredCallback;
    PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK DevicePowerNotRequiredCallback;
    PPO_FX_POWER_CONTROL_CALLBACK PowerControlCallback;
    PVOID DeviceContext;
    ULONG ComponentCount;
      PO_FX_COMPONENT_V2 Components[1];
} PO_FX_DEVICE_V2, *PPO_FX_DEVICE_V2;











































typedef
 
 
 
void
PO_FX_DIRECTED_POWER_UP_CALLBACK (
      PVOID Context,
      ULONG Flags
    );

typedef PO_FX_DIRECTED_POWER_UP_CALLBACK *PPO_FX_DIRECTED_POWER_UP_CALLBACK;

typedef
 
 
 
void
PO_FX_DIRECTED_POWER_DOWN_CALLBACK (
      PVOID Context,
      ULONG Flags
    );

typedef PO_FX_DIRECTED_POWER_DOWN_CALLBACK *PPO_FX_DIRECTED_POWER_DOWN_CALLBACK;

typedef struct _PO_FX_DEVICE_V3 {
    ULONG Version;
    ULONGLONG Flags;
    PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
    PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK ComponentIdleConditionCallback;
    PPO_FX_COMPONENT_IDLE_STATE_CALLBACK ComponentIdleStateCallback;
    PPO_FX_DEVICE_POWER_REQUIRED_CALLBACK DevicePowerRequiredCallback;
    PPO_FX_DEVICE_POWER_NOT_REQUIRED_CALLBACK DevicePowerNotRequiredCallback;
    PPO_FX_POWER_CONTROL_CALLBACK PowerControlCallback;
    PPO_FX_DIRECTED_POWER_UP_CALLBACK DirectedPowerUpCallback;
    PPO_FX_DIRECTED_POWER_DOWN_CALLBACK DirectedPowerDownCallback;
    ULONG DirectedFxTimeoutInSeconds;
    PVOID DeviceContext;
    ULONG ComponentCount;
      PO_FX_COMPONENT_V2 Components[1];
} PO_FX_DEVICE_V3, *PPO_FX_DEVICE_V3;


typedef PO_FX_COMPONENT_V1 PO_FX_COMPONENT, *PPO_FX_COMPONENT;
typedef PO_FX_DEVICE_V1 PO_FX_DEVICE, *PPO_FX_DEVICE;










typedef enum _PO_FX_PERF_STATE_UNIT {
    PoFxPerfStateUnitOther,
    PoFxPerfStateUnitFrequency,
    PoFxPerfStateUnitBandwidth,
    PoFxPerfStateUnitMaximum
} PO_FX_PERF_STATE_UNIT, *PPO_FX_PERF_STATE_UNIT;

typedef enum _PO_FX_PERF_STATE_TYPE {
    PoFxPerfStateTypeDiscrete,
    PoFxPerfStateTypeRange,
    PoFxPerfStateTypeMaximum
} PO_FX_PERF_STATE_TYPE, *PPO_FX_PERF_STATE_TYPE;

typedef struct _PO_FX_PERF_STATE {
    ULONGLONG Value;
    PVOID Context;
} PO_FX_PERF_STATE, *PPO_FX_PERF_STATE;

typedef struct _PO_FX_COMPONENT_PERF_SET {
    UNICODE_STRING Name;
    ULONGLONG Flags;
    PO_FX_PERF_STATE_UNIT Unit;
    PO_FX_PERF_STATE_TYPE Type;
    union {
        struct {
            ULONG Count;
              PPO_FX_PERF_STATE States;
        } Discrete;
        struct {
            ULONGLONG Minimum;
            ULONGLONG Maximum;
        } Range;
    };
} PO_FX_COMPONENT_PERF_SET, *PPO_FX_COMPONENT_PERF_SET;

typedef struct _PO_FX_COMPONENT_PERF_INFO {
    ULONG PerfStateSetsCount;
    PO_FX_COMPONENT_PERF_SET PerfStateSets[1];
} PO_FX_COMPONENT_PERF_INFO, *PPO_FX_COMPONENT_PERF_INFO;

typedef struct _PO_FX_PERF_STATE_CHANGE {
    ULONG Set;
    union {
        ULONG StateIndex;
        ULONGLONG StateValue;
    };
} PO_FX_PERF_STATE_CHANGE, *PPO_FX_PERF_STATE_CHANGE;
















 

NTSTATUS
PoFxRegisterDevice (
      PDEVICE_OBJECT Pdo,
      PPO_FX_DEVICE Device,
      POHANDLE *Handle
    );



 

void
PoFxStartDevicePowerManagement (
      POHANDLE Handle
    );



 

void
PoFxUnregisterDevice (
      POHANDLE Handle
    );



 

NTSTATUS
PoFxRegisterCrashdumpDevice (
      POHANDLE Handle
    );



 

NTSTATUS
PoFxPowerOnCrashdumpDevice(
      POHANDLE Handle,
      PVOID Context
    );



 

void
PoFxActivateComponent (
      POHANDLE Handle,
      ULONG Component,
      ULONG Flags
    );



 

void
PoFxCompleteDevicePowerNotRequired (
      POHANDLE Handle
    );



 

void
PoFxCompleteIdleCondition (
      POHANDLE Handle,
      ULONG Component
    );



 

void
PoFxCompleteIdleState (
      POHANDLE Handle,
      ULONG Component
    );



 

void
PoFxIdleComponent (
      POHANDLE Handle,
      ULONG Component,
      ULONG Flags
    );



 

void
PoFxSetComponentLatency (
      POHANDLE Handle,
      ULONG Component,
      ULONGLONG Latency
    );



 

void
PoFxSetComponentResidency (
      POHANDLE Handle,
      ULONG Component,
      ULONGLONG Residency
    );



 

void
PoFxSetComponentWake (
      POHANDLE Handle,
      ULONG Component,
      BOOLEAN WakeHint
    );



 

void
PoFxSetDeviceIdleTimeout (
      POHANDLE Handle,
      ULONGLONG IdleTimeout
    );



 

void
PoFxReportDevicePoweredOn (
      POHANDLE Handle
    );



 

NTSTATUS
PoFxPowerControl (
      POHANDLE Handle,
      LPCGUID PowerControlCode,
      PVOID InBuffer,
      SIZE_T InBufferSize,
      PVOID OutBuffer,
      SIZE_T OutBufferSize,
      PSIZE_T BytesReturned
    );



 

void
PoFxNotifySurprisePowerOn(
        PDEVICE_OBJECT Pdo
     );



typedef
 
void
PO_FX_COMPONENT_PERF_STATE_CALLBACK(
      PVOID Context,
      ULONG Component,
      BOOLEAN Succeeded,
      PVOID RequestContext
    );

typedef PO_FX_COMPONENT_PERF_STATE_CALLBACK
    *PPO_FX_COMPONENT_PERF_STATE_CALLBACK;

 

NTSTATUS
PoFxRegisterComponentPerfStates (
      POHANDLE Handle,
      ULONG Component,
      ULONGLONG Flags,
      PPO_FX_COMPONENT_PERF_STATE_CALLBACK ComponentPerfStateCallback,
      PPO_FX_COMPONENT_PERF_INFO InputStateInfo,
      PPO_FX_COMPONENT_PERF_INFO* OutputStateInfo
    );

 

void
PoFxIssueComponentPerfStateChange (
      POHANDLE Handle,
      ULONG Flags,
      ULONG Component,
      PPO_FX_PERF_STATE_CHANGE PerfChange,
      PVOID Context
    );

 

void
PoFxIssueComponentPerfStateChangeMultiple (
      POHANDLE Handle,
      ULONG Flags,
      ULONG Component,
      ULONG PerfChangesCount,
      PO_FX_PERF_STATE_CHANGE PerfChanges[],
      PVOID Context
    );

 

NTSTATUS
PoFxQueryCurrentComponentPerfState (
      POHANDLE Handle,
      ULONG Flags,
      ULONG Component,
      ULONG SetIndex,
      PULONGLONG CurrentPerf
    );

 

NTSTATUS
PoFxSetTargetDripsDevicePowerState(
      POHANDLE Handle,
      DEVICE_POWER_STATE TargetState
    );




 

void
PoFxCompleteDirectedPowerDown (
      POHANDLE Handle
    );



 

NTSTATUS
PoCreateThermalRequest (
     PVOID *ThermalRequest,
      PDEVICE_OBJECT TargetDeviceObject,
      PDEVICE_OBJECT PolicyDeviceObject,
      PCOUNTED_REASON_CONTEXT Context,
      ULONG Flags
    );


typedef enum _PO_THERMAL_REQUEST_TYPE {
    PoThermalRequestPassive,
    PoThermalRequestActive,
} PO_THERMAL_REQUEST_TYPE, *PPO_THERMAL_REQUEST_TYPE;


 

BOOLEAN
PoGetThermalRequestSupport (
      PVOID ThermalRequest,
      PO_THERMAL_REQUEST_TYPE Type
    );



 

NTSTATUS
PoSetThermalPassiveCooling (
      PVOID ThermalRequest,
      UCHAR Throttle
    );



 

NTSTATUS
PoSetThermalActiveCooling (
      PVOID ThermalRequest,
      BOOLEAN Engaged
    );



 

void
PoDeleteThermalRequest (
      PVOID ThermalRequest
    );



typedef
 
 
void
PO_FX_DRIPS_WATCHDOG_CALLBACK (
      PVOID Context,
      PDEVICE_OBJECT PhysicalDeviceObject,
      ULONG UniqueId
);

typedef PO_FX_DRIPS_WATCHDOG_CALLBACK
    *PPO_FX_DRIPS_WATCHDOG_CALLBACK;

 

void
PoFxRegisterDripsWatchdogCallback (
      POHANDLE Handle,
      PPO_FX_DRIPS_WATCHDOG_CALLBACK Callback,
      BOOLEAN IncludeChildDevices,
      PDRIVER_OBJECT MatchingDriverObject
    );







typedef struct _OBJECT_HANDLE_INFORMATION {
    ULONG HandleAttributes;
    ACCESS_MASK GrantedAccess;
} OBJECT_HANDLE_INFORMATION, *POBJECT_HANDLE_INFORMATION;



 

NTSTATUS
ObReferenceObjectByHandle(
      HANDLE Handle,
      ACCESS_MASK DesiredAccess,
      POBJECT_TYPE ObjectType,
      KPROCESSOR_MODE AccessMode,
      PVOID *Object,
      POBJECT_HANDLE_INFORMATION HandleInformation
    );



 

NTSTATUS
ObReferenceObjectByHandleWithTag(
      HANDLE Handle,
      ACCESS_MASK DesiredAccess,
      POBJECT_TYPE ObjectType,
      KPROCESSOR_MODE AccessMode,
      ULONG Tag,
      PVOID *Object,
      POBJECT_HANDLE_INFORMATION HandleInformation
    );





BOOLEAN

ObReferenceObjectSafe (
      PVOID Object
    );


BOOLEAN

ObReferenceObjectSafeWithTag (
      PVOID Object,
      ULONG Tag
    );






NTSTATUS
ObCloseHandle (
        HANDLE Handle,
      KPROCESSOR_MODE PreviousMode
    );


























 

LONG_PTR

ObfReferenceObject(
      PVOID Object
    );



 

LONG_PTR

ObfReferenceObjectWithTag(
      PVOID Object,
      ULONG Tag
    );



 

NTSTATUS
ObReferenceObjectByPointer(
      PVOID Object,
      ACCESS_MASK DesiredAccess,
      POBJECT_TYPE ObjectType,
      KPROCESSOR_MODE AccessMode
    );



 

NTSTATUS
ObReferenceObjectByPointerWithTag(
      PVOID Object,
      ACCESS_MASK DesiredAccess,
      POBJECT_TYPE ObjectType,
      KPROCESSOR_MODE AccessMode,
      ULONG Tag
    );



 

LONG_PTR

ObfDereferenceObject(
      PVOID Object
    );



 

LONG_PTR

ObfDereferenceObjectWithTag(
      PVOID Object,
      ULONG Tag
    );




void
ObDereferenceObjectDeferDelete(
      PVOID Object
    );




void
ObDereferenceObjectDeferDeleteWithTag(
      PVOID Object,
      ULONG Tag
    );




 

NTSTATUS
ObGetObjectSecurity(
      PVOID Object,
      PSECURITY_DESCRIPTOR *SecurityDescriptor,
      PBOOLEAN MemoryAllocated
    );



 

void
ObReleaseObjectSecurity(
      PSECURITY_DESCRIPTOR SecurityDescriptor,
      BOOLEAN MemoryAllocated
    );













typedef ULONG OB_OPERATION;




typedef struct _OB_PRE_CREATE_HANDLE_INFORMATION {
      ACCESS_MASK         DesiredAccess;
      ACCESS_MASK            OriginalDesiredAccess;
} OB_PRE_CREATE_HANDLE_INFORMATION, *POB_PRE_CREATE_HANDLE_INFORMATION;

typedef struct _OB_PRE_DUPLICATE_HANDLE_INFORMATION {
      ACCESS_MASK         DesiredAccess;
      ACCESS_MASK            OriginalDesiredAccess;
      PVOID                  SourceProcess;
      PVOID                  TargetProcess;
} OB_PRE_DUPLICATE_HANDLE_INFORMATION, * POB_PRE_DUPLICATE_HANDLE_INFORMATION;

typedef union _OB_PRE_OPERATION_PARAMETERS {
      OB_PRE_CREATE_HANDLE_INFORMATION        CreateHandleInformation;
      OB_PRE_DUPLICATE_HANDLE_INFORMATION     DuplicateHandleInformation;
} OB_PRE_OPERATION_PARAMETERS, *POB_PRE_OPERATION_PARAMETERS;

typedef struct _OB_PRE_OPERATION_INFORMATION {
      OB_OPERATION           Operation;
    union {
          ULONG Flags;
        struct {
              ULONG KernelHandle:1;
              ULONG Reserved:31;
        };
    };
      PVOID                         Object;
      POBJECT_TYPE                  ObjectType;
      PVOID                        CallContext;
      POB_PRE_OPERATION_PARAMETERS  Parameters;
} OB_PRE_OPERATION_INFORMATION, *POB_PRE_OPERATION_INFORMATION;

typedef struct _OB_POST_CREATE_HANDLE_INFORMATION {
      ACCESS_MASK            GrantedAccess;
} OB_POST_CREATE_HANDLE_INFORMATION, *POB_POST_CREATE_HANDLE_INFORMATION;

typedef struct _OB_POST_DUPLICATE_HANDLE_INFORMATION {
      ACCESS_MASK            GrantedAccess;
} OB_POST_DUPLICATE_HANDLE_INFORMATION, * POB_POST_DUPLICATE_HANDLE_INFORMATION;

typedef union _OB_POST_OPERATION_PARAMETERS {
      OB_POST_CREATE_HANDLE_INFORMATION       CreateHandleInformation;
      OB_POST_DUPLICATE_HANDLE_INFORMATION    DuplicateHandleInformation;
} OB_POST_OPERATION_PARAMETERS, *POB_POST_OPERATION_PARAMETERS;

typedef struct _OB_POST_OPERATION_INFORMATION {
      OB_OPERATION  Operation;
    union {
          ULONG Flags;
        struct {
              ULONG KernelHandle:1;
              ULONG Reserved:31;
        };
    };
      PVOID                          Object;
      POBJECT_TYPE                   ObjectType;
      PVOID                          CallContext;
      NTSTATUS                       ReturnStatus;
      POB_POST_OPERATION_PARAMETERS  Parameters;
} OB_POST_OPERATION_INFORMATION,*POB_POST_OPERATION_INFORMATION;

typedef enum _OB_PREOP_CALLBACK_STATUS {
    OB_PREOP_SUCCESS
} OB_PREOP_CALLBACK_STATUS, *POB_PREOP_CALLBACK_STATUS;

typedef OB_PREOP_CALLBACK_STATUS
(*POB_PRE_OPERATION_CALLBACK) (
      PVOID RegistrationContext,
      POB_PRE_OPERATION_INFORMATION OperationInformation
    );

typedef void
(*POB_POST_OPERATION_CALLBACK) (
      PVOID RegistrationContext,
      POB_POST_OPERATION_INFORMATION OperationInformation
    );

typedef struct _OB_OPERATION_REGISTRATION {
      POBJECT_TYPE                *ObjectType;
      OB_OPERATION                Operations;
      POB_PRE_OPERATION_CALLBACK  PreOperation;
      POB_POST_OPERATION_CALLBACK PostOperation;
} OB_OPERATION_REGISTRATION, *POB_OPERATION_REGISTRATION;

typedef struct _OB_CALLBACK_REGISTRATION {
      USHORT                     Version;
      USHORT                     OperationRegistrationCount;
      UNICODE_STRING             Altitude;
      PVOID                      RegistrationContext;
      OB_OPERATION_REGISTRATION  *OperationRegistration;
} OB_CALLBACK_REGISTRATION, *POB_CALLBACK_REGISTRATION;



NTSTATUS
ObRegisterCallbacks (
      POB_CALLBACK_REGISTRATION CallbackRegistration,
     PVOID *RegistrationHandle
    );


void
ObUnRegisterCallbacks (
      PVOID RegistrationHandle
    );



USHORT
ObGetFilterVersion (
    void
    );





























typedef struct _PCI_SEGMENT_BUS_NUMBER {
    union {
        struct {
            ULONG   BusNumber:8;
            ULONG   SegmentNumber:16;
            ULONG   Reserved:8;
        } bits;
        ULONG   AsULONG;
    } u;
} PCI_SEGMENT_BUS_NUMBER, *PPCI_SEGMENT_BUS_NUMBER;

typedef struct _PCI_SLOT_NUMBER {
    union {
        struct {
            ULONG   DeviceNumber:5;
            ULONG   FunctionNumber:3;
            ULONG   Reserved:24;
        } bits;
        ULONG   AsULONG;
    } u;
} PCI_SLOT_NUMBER, *PPCI_SLOT_NUMBER;





typedef struct _PCI_COMMON_HEADER {
    USHORT  VendorID;                   
    USHORT  DeviceID;                   
    USHORT  Command;                    
    USHORT  Status;
    UCHAR   RevisionID;                 
    UCHAR   ProgIf;                     
    UCHAR   SubClass;                   
    UCHAR   BaseClass;                  
    UCHAR   CacheLineSize;              
    UCHAR   LatencyTimer;               
    UCHAR   HeaderType;                 
    UCHAR   BIST;                       

    union {
        struct _PCI_HEADER_TYPE_0 {
            ULONG   BaseAddresses[6];
            ULONG   CIS;
            USHORT  SubVendorID;
            USHORT  SubSystemID;
            ULONG   ROMBaseAddress;
            UCHAR   CapabilitiesPtr;
            UCHAR   Reserved1[3];
            ULONG   Reserved2;
            UCHAR   InterruptLine;      
            UCHAR   InterruptPin;       
            UCHAR   MinimumGrant;       
            UCHAR   MaximumLatency;     
        } type0;



        
        
        

        struct _PCI_HEADER_TYPE_1 {
            ULONG   BaseAddresses[2];
            UCHAR   PrimaryBus;
            UCHAR   SecondaryBus;
            UCHAR   SubordinateBus;
            UCHAR   SecondaryLatency;
            UCHAR   IOBase;
            UCHAR   IOLimit;
            USHORT  SecondaryStatus;
            USHORT  MemoryBase;
            USHORT  MemoryLimit;
            USHORT  PrefetchBase;
            USHORT  PrefetchLimit;
            ULONG   PrefetchBaseUpper32;
            ULONG   PrefetchLimitUpper32;
            USHORT  IOBaseUpper16;
            USHORT  IOLimitUpper16;
            UCHAR   CapabilitiesPtr;
            UCHAR   Reserved1[3];
            ULONG   ROMBaseAddress;
            UCHAR   InterruptLine;
            UCHAR   InterruptPin;
            USHORT  BridgeControl;
        } type1;

        
        
        

        struct _PCI_HEADER_TYPE_2 {
            ULONG   SocketRegistersBaseAddress;
            UCHAR   CapabilitiesPtr;
            UCHAR   Reserved;
            USHORT  SecondaryStatus;
            UCHAR   PrimaryBus;
            UCHAR   SecondaryBus;
            UCHAR   SubordinateBus;
            UCHAR   SecondaryLatency;
            struct  {
                ULONG   Base;
                ULONG   Limit;
            }       Range[5-1];
            UCHAR   InterruptLine;
            UCHAR   InterruptPin;
            USHORT  BridgeControl;
        } type2;



    } u;

} PCI_COMMON_HEADER, *PPCI_COMMON_HEADER;











typedef struct _PCI_COMMON_CONFIG {
    PCI_COMMON_HEADER ;
    UCHAR   DeviceSpecific[192];
} PCI_COMMON_CONFIG, *PPCI_COMMON_CONFIG;



















































































































typedef struct _PCI_CAPABILITIES_HEADER {
    UCHAR   CapabilityID;
    UCHAR   Next;
} PCI_CAPABILITIES_HEADER, *PPCI_CAPABILITIES_HEADER;







typedef struct _PCI_PMC {
    UCHAR       Version:3;
    UCHAR       PMEClock:1;
    UCHAR       Rsvd1:1;
    UCHAR       DeviceSpecificInitialization:1;
    UCHAR       Rsvd2:2;
    struct _PM_SUPPORT {
        UCHAR   Rsvd2:1;
        UCHAR   D1:1;
        UCHAR   D2:1;
        UCHAR   PMED0:1;
        UCHAR   PMED1:1;
        UCHAR   PMED2:1;
        UCHAR   PMED3Hot:1;
        UCHAR   PMED3Cold:1;
    } Support;
} PCI_PMC, *PPCI_PMC;

typedef struct _PCI_PMCSR {
    USHORT      PowerState:2;
    USHORT      Rsvd1:1;
    USHORT      NoSoftReset:1;
    USHORT      Rsvd2:4;
    USHORT      PMEEnable:1;
    USHORT      DataSelect:4;
    USHORT      DataScale:2;
    USHORT      PMEStatus:1;
} PCI_PMCSR, *PPCI_PMCSR;


typedef struct _PCI_PMCSR_BSE {
    UCHAR       Rsvd1:6;
    UCHAR       D3HotSupportsStopClock:1;       
    UCHAR       BusPowerClockControlEnabled:1;  
} PCI_PMCSR_BSE, *PPCI_PMCSR_BSE;


typedef struct _PCI_PM_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;

    
    
    

    union {
        PCI_PMC         Capabilities;
        USHORT          AsUSHORT;
    } PMC;

    
    
    

    union {
        PCI_PMCSR       ControlStatus;
        USHORT          AsUSHORT;
    } PMCSR;

    
    
    

    union {
        PCI_PMCSR_BSE   BridgeSupport;
        UCHAR           AsUCHAR;
    } PMCSR_BSE;

    
    
    
    

    UCHAR   Data;

} PCI_PM_CAPABILITY, *PPCI_PM_CAPABILITY;








typedef struct {

    PCI_CAPABILITIES_HEADER Header;

    union {
        struct {
            USHORT  DataParityErrorRecoveryEnable:1;
            USHORT  EnableRelaxedOrdering:1;
            USHORT  MaxMemoryReadByteCount:2;
            USHORT  MaxOutstandingSplitTransactions:3;
            USHORT  Reserved:9;
        } bits;
        USHORT  AsUSHORT;
    } Command;

    union {
        struct {
            ULONG   FunctionNumber:3;
            ULONG   DeviceNumber:5;
            ULONG   BusNumber:8;
            ULONG   Device64Bit:1;
            ULONG   Capable133MHz:1;
            ULONG   SplitCompletionDiscarded:1;
            ULONG   UnexpectedSplitCompletion:1;
            ULONG   DeviceComplexity:1;
            ULONG   DesignedMaxMemoryReadByteCount:2;
            ULONG   DesignedMaxOutstandingSplitTransactions:3;
            ULONG   DesignedMaxCumulativeReadSize:3;
            ULONG   ReceivedSplitCompletionErrorMessage:1;
            ULONG   CapablePCIX266:1;
            ULONG   CapablePCIX533:1;
        } bits;
        ULONG   AsULONG;
    } Status;
} PCI_X_CAPABILITY, *PPCI_X_CAPABILITY;
















































typedef struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER {

    USHORT CapabilityID;
    USHORT Version:4;
    USHORT Next:12;

} PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER, *PPCI_EXPRESS_ENHANCED_CAPABILITY_HEADER;





typedef struct _PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    USHORT VsecId;
    USHORT VsecRev:4;
    USHORT VsecLength:12;

} PCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY, *PPCI_EXPRESS_VENDOR_SPECIFIC_CAPABILITY;





typedef struct _PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    ULONG LowSerialNumber;
    ULONG HighSerialNumber;

} PCI_EXPRESS_SERIAL_NUMBER_CAPABILITY, *PPCI_EXPRESS_SERIAL_NUMBER_CAPABILITY;





typedef struct _PCI_EXPRESS_ARI_CAPABILITY_REGISTER {

    USHORT MfvcFunctionGroupsCapability:1;
    USHORT AcsFunctionGroupsCapability:1;
    USHORT Reserved:6;
    USHORT NextFunctionNumber:8;

} PCI_EXPRESS_ARI_CAPABILITY_REGISTER, *PPCI_EXPRESS_ARI_CAPABILITY_REGISTER;

typedef struct _PCI_EXPRESS_ARI_CONTROL_REGISTER {

    USHORT MfvcFunctionGroupsEnable:1;
    USHORT AcsFunctionGroupsEnable:1;
    USHORT Reserved1:2;
    USHORT FunctionGroup:3;
    USHORT Reserved2:9;

} PCI_EXPRESS_ARI_CONTROL_REGISTER, *PPCI_EXPRESS_ARI_CONTROL_REGISTER;

typedef struct _PCI_EXPRESS_ARI_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_ARI_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_ARI_CONTROL_REGISTER Control;

} PCI_EXPRESS_ARI_CAPABILITY, *PPCI_EXPRESS_ARI_CAPABILITY;





typedef union _VIRTUAL_CHANNEL_CAPABILITIES1 {
    struct {
        ULONG ExtendedVCCount:3;
        ULONG RsvdP1:1;
        ULONG LowPriorityExtendedVCCount:3;
        ULONG RsvdP2:1;
        ULONG ReferenceClock:2;
        ULONG PortArbitrationTableEntrySize:2;
        ULONG RsvdP3:20;
    };
    ULONG AsULONG;
} VIRTUAL_CHANNEL_CAPABILITIES1, *PVIRTUAL_CHANNEL_CAPABILITIES1;

typedef union _VIRTUAL_CHANNEL_CAPABILITIES2 {
    struct {
        ULONG VCArbitrationCapability:8;
        ULONG RsvdP:16;
        ULONG VCArbitrationTableOffset:8;
    };
    ULONG AsULONG;
} VIRTUAL_CHANNEL_CAPABILITIES2, *PVIRTUAL_CHANNEL_CAPABILITIES2;

typedef union _VIRTUAL_CHANNEL_CONTROL {
    struct {
        USHORT  LoadVCArbitrationTable:1;
        USHORT  VCArbitrationSelect:3;
        USHORT  RsvdP:12;
    };
    USHORT AsUSHORT;
} VIRTUAL_CHANNEL_CONTROL, *PVIRTUAL_CHANNEL_CONTROL;

typedef union _VIRTUAL_CHANNEL_STATUS {
    struct {
        USHORT  VCArbitrationTableStatus:1;
        USHORT  RsvdZ:15;
    };
    USHORT AsUSHORT;
} VIRTUAL_CHANNEL_STATUS, *PVIRTUAL_CHANNEL_STATUS;

typedef union _VIRTUAL_RESOURCE_CAPABILITY {
    struct {
        ULONG   PortArbitrationCapability:8;
        ULONG   RsvdP1:6;
        ULONG   Undefined:1;
        ULONG   RejectSnoopTransactions:1;
        ULONG   MaximumTimeSlots:7;
        ULONG   RsvdP2:1;
        ULONG   PortArbitrationTableOffset:8;
    };
    ULONG AsULONG;
} VIRTUAL_RESOURCE_CAPABILITY, *PVIRTUAL_RESOURCE_CAPABILITY;

typedef union _VIRTUAL_RESOURCE_CONTROL {
    struct {
        ULONG   TcVcMap:8;
        ULONG   RsvdP1:8;
        ULONG   LoadPortArbitrationTable:1;
        ULONG   PortArbitrationSelect:3;
        ULONG   RsvdP2:4;
        ULONG   VcID:3;
        ULONG   RsvdP3:4;
        ULONG   VcEnable:1;
    };
    ULONG AsULONG;
} VIRTUAL_RESOURCE_CONTROL, *PVIRTUAL_RESOURCE_CONTROL;

typedef union _VIRTUAL_RESOURCE_STATUS {
    struct {
        USHORT  PortArbitrationTableStatus:1;
        USHORT  VcNegotiationPending:1;
        USHORT  RsvdZ:14;
    };
    USHORT AsUSHORT;
} VIRTUAL_RESOURCE_STATUS, *PVIRTUAL_RESOURCE_STATUS;

typedef struct _VIRTUAL_RESOURCE {
    VIRTUAL_RESOURCE_CAPABILITY     Capability;
    VIRTUAL_RESOURCE_CONTROL        Control;
    USHORT                          RsvdP;
    VIRTUAL_RESOURCE_STATUS         Status;
} VIRTUAL_RESOURCE, *PVIRTUAL_RESOURCE;

typedef struct _PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    VIRTUAL_CHANNEL_CAPABILITIES1   Capabilities1;
    VIRTUAL_CHANNEL_CAPABILITIES2   Capabilities2;
    VIRTUAL_CHANNEL_CONTROL         Control;
    VIRTUAL_CHANNEL_STATUS          Status;
    VIRTUAL_RESOURCE                Resource[8];

} PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY, *PPCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY;





typedef struct _PCI_EXPRESS_ATS_CAPABILITY_REGISTER {

    USHORT InvalidateQueueDepth:5;
    USHORT PageAlignedRequest:1;
    USHORT GlobalInvalidateSupported:1;
    USHORT RelaxedOrderingSupported:1;
    USHORT Reserved:8;

} PCI_EXPRESS_ATS_CAPABILITY_REGISTER, *PPCI_EXPRESS_ATS_CAPABILITY_REGISTER;

typedef union _PCI_EXPRESS_ATS_CONTROL_REGISTER {
    struct {
        USHORT SmallestTransactionUnit:5;
        USHORT Reserved:10;
        USHORT Enable:1;
    };

    USHORT AsUSHORT;

} PCI_EXPRESS_ATS_CONTROL_REGISTER, *PPCI_EXPRESS_ATS_CONTROL_REGISTER;

typedef struct _PCI_EXPRESS_ATS_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_ATS_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_ATS_CONTROL_REGISTER Control;

} PCI_EXPRESS_ATS_CAPABILITY, *PPCI_EXPRESS_ATS_CAPABILITY;





typedef union _PCI_EXPRESS_PASID_CAPABILITY_REGISTER {
    struct {
        USHORT Rsvd:1;
        USHORT ExecutePermissionSupported:1;
        USHORT PrivilegedModeSupported:1;
        USHORT Rsvd2:5;
        USHORT MaxPASIDWidth:5;
        USHORT Rsvd3:3;
    } ;

    USHORT AsUSHORT;
} PCI_EXPRESS_PASID_CAPABILITY_REGISTER, *PPCI_EXPRESS_PASID_CAPABILITY_REGISTER;

typedef union _PCI_EXPRESS_PASID_CONTROL_REGISTER {
    struct {
        USHORT PASIDEnable:1;
        USHORT ExecutePermissionEnable:1;
        USHORT PrivilegedModeEnable:1;
        USHORT Rsvd:13;
    } ;

    USHORT AsUSHORT;
} PCI_EXPRESS_PASID_CONTROL_REGISTER, *PPCI_EXPRESS_PASID_CONTROL_REGISTER;

typedef struct _PCI_EXPRESS_PASID_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_PASID_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_PASID_CONTROL_REGISTER Control;
} PCI_EXPRESS_PASID_CAPABILITY, *PPCI_EXPRESS_PASID_CAPABILITY;





typedef union _PCI_EXPRESS_PRI_STATUS_REGISTER {
    struct {
        USHORT ResponseFailure:1;
        USHORT UnexpectedPageRequestGroupIndex:1;
        USHORT Rsvd:6;
        USHORT Stopped:1;
        USHORT Rsvd2:6;
        USHORT PrgResponsePasidRequired:1;
    } ;

    USHORT AsUSHORT;
} PCI_EXPRESS_PRI_STATUS_REGISTER, *PPCI_EXPRESS_PRI_STATUS_REGISTER;

typedef union _PCI_EXPRESS_PRI_CONTROL_REGISTER {
    struct {
        USHORT Enable:1;
        USHORT Reset:1;
        USHORT Rsvd:14;
    } ;

    USHORT AsUSHORT;
} PCI_EXPRESS_PRI_CONTROL_REGISTER, *PPCI_EXPRESS_PRI_CONTROL_REGISTER;

typedef struct _PCI_EXPRESS_PRI_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_PRI_CONTROL_REGISTER Control;
    PCI_EXPRESS_PRI_STATUS_REGISTER Status;
    ULONG PRCapacity;
    ULONG PRAllocation;
} PCI_EXPRESS_PRI_CAPABILITY, *PPCI_EXPRESS_PRI_CAPABILITY;





typedef union _PCI_EXPRESS_PTM_CAPABILITY_REGISTER {

    struct {
        ULONG RequesterCapable:1;
        ULONG ResponderCapable:1;
        ULONG RootCapable:1;
        ULONG Rsvd:5;
        ULONG LocalGranularity:8;
        ULONG Rsvd2:16;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_PTM_CAPABILITY_REGISTER, *PPCI_EXPRESS_PTM_CAPABILITY_REGISTER;

typedef union _PCI_EXPRESS_PTM_CONTROL_REGISTER {

    struct {
        ULONG Enable:1;
        ULONG RootSelect:1;
        ULONG Rsvd:6;
        ULONG EffectiveGranularity:8;
        ULONG Rsvd2:16;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_PTM_CONTROL_REGISTER, *PPCI_EXPRESS_PTM_CONTROL_REGISTER;

typedef struct _PCI_EXPRESS_PTM_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER  Header;
    PCI_EXPRESS_PTM_CAPABILITY_REGISTER     PtmCapability;
    PCI_EXPRESS_PTM_CONTROL_REGISTER        PtmControl;

} PCI_EXPRESS_PTM_CAPABILITY, *PPCI_EXPRESS_PTM_CAPABILITY;





typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS {

    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS;

typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK {

    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_MASK;

typedef union _PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY {

    struct {
        ULONG Undefined:1;
        ULONG Reserved1:3;
        ULONG DataLinkProtocolError:1;
        ULONG SurpriseDownError:1;
        ULONG Reserved2:6;
        ULONG PoisonedTLP:1;
        ULONG FlowControlProtocolError:1;
        ULONG CompletionTimeout:1;
        ULONG CompleterAbort:1;
        ULONG UnexpectedCompletion:1;
        ULONG ReceiverOverflow:1;
        ULONG MalformedTLP:1;
        ULONG ECRCError:1;
        ULONG UnsupportedRequestError:1;
        ULONG AcsViolation:1;
        ULONG UncorrectableInternalError:1;
        ULONG MCBlockedTlp:1;
        ULONG AtomicOpEgressBlocked:1;
        ULONG TlpPrefixBlocked:1;
        ULONG Reserved3:6;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY, *PPCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY;

typedef union _PCI_EXPRESS_CORRECTABLE_ERROR_STATUS {

    struct {
        ULONG ReceiverError:1;
        ULONG Reserved1:5;
        ULONG BadTLP:1;
        ULONG BadDLLP:1;
        ULONG ReplayNumRollover:1;
        ULONG Reserved2:3;
        ULONG ReplayTimerTimeout:1;
        ULONG AdvisoryNonFatalError:1;
        ULONG CorrectedInternalError:1;
        ULONG HeaderLogOverflow:1;
        ULONG Reserved3:16;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_CORRECTABLE_ERROR_STATUS, *PPCI_CORRECTABLE_ERROR_STATUS;

typedef union _PCI_EXPRESS_CORRECTABLE_ERROR_MASK {

    struct {
        ULONG ReceiverError:1;
        ULONG Reserved1:5;
        ULONG BadTLP:1;
        ULONG BadDLLP:1;
        ULONG ReplayNumRollover:1;
        ULONG Reserved2:3;
        ULONG ReplayTimerTimeout:1;
        ULONG AdvisoryNonFatalError:1;
        ULONG CorrectedInternalError:1;
        ULONG HeaderLogOverflow:1;
        ULONG Reserved3:16;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_CORRECTABLE_ERROR_MASK, *PPCI_CORRECTABLE_ERROR_MASK;

typedef union _PCI_EXPRESS_AER_CAPABILITIES {

    struct {
        ULONG FirstErrorPointer:5;
        ULONG ECRCGenerationCapable:1;
        ULONG ECRCGenerationEnable:1;
        ULONG ECRCCheckCapable:1;
        ULONG ECRCCheckEnable:1;
        ULONG MultipleHeaderRecordingCapable:1;
        ULONG MultipleHeaderRecordingEnable:1;
        ULONG TlpPrefixLogPresent:1;
        ULONG Reserved:20;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_AER_CAPABILITIES, *PPCI_EXPRESS_AER_CAPABILITIES;

typedef union _PCI_EXPRESS_ROOT_ERROR_COMMAND {

    struct {
        ULONG CorrectableErrorReportingEnable:1;
        ULONG NonFatalErrorReportingEnable:1;
        ULONG FatalErrorReportingEnable:1;
        ULONG Reserved:29;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_ROOT_ERROR_COMMAND, *PPCI_EXPRESS_ROOT_ERROR_COMMAND;

typedef union _PCI_EXPRESS_ROOT_ERROR_STATUS {

    struct {
        ULONG CorrectableErrorReceived:1;
        ULONG MultipleCorrectableErrorsReceived:1;
        ULONG UncorrectableErrorReceived:1;
        ULONG MultipleUncorrectableErrorsReceived:1;
        ULONG FirstUncorrectableFatal:1;
        ULONG NonFatalErrorMessagesReceived:1;
        ULONG FatalErrorMessagesReceived:1;
        ULONG Reserved:20;
        ULONG AdvancedErrorInterruptMessageNumber:5;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_ROOT_ERROR_STATUS, *PPCI_EXPRESS_ROOT_ERROR_STATUS;

typedef union _PCI_EXPRESS_ERROR_SOURCE_ID {

    struct {
        USHORT CorrectableSourceIdFun:3;
        USHORT CorrectableSourceIdDev:5;
        USHORT CorrectableSourceIdBus:8;
        USHORT UncorrectableSourceIdFun:3;
        USHORT UncorrectableSourceIdDev:5;
        USHORT UncorrectableSourceIdBus:8;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_ERROR_SOURCE_ID, *PPCI_EXPRESS_ERROR_SOURCE_ID;

typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS {

    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS;

typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK {

    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK;

typedef union _PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY {

    struct {
        ULONG TargetAbortOnSplitCompletion:1;
        ULONG MasterAbortOnSplitCompletion:1;
        ULONG ReceivedTargetAbort:1;
        ULONG ReceivedMasterAbort:1;
        ULONG RsvdZ:1;
        ULONG UnexpectedSplitCompletionError:1;
        ULONG UncorrectableSplitCompletion:1;
        ULONG UncorrectableDataError:1;
        ULONG UncorrectableAttributeError:1;
        ULONG UncorrectableAddressError:1;
        ULONG DelayedTransactionDiscardTimerExpired:1;
        ULONG PERRAsserted:1;
        ULONG SERRAsserted:1;
        ULONG InternalBridgeError:1;
        ULONG Reserved:18;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY,
  *PPCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY;

typedef union _PCI_EXPRESS_SEC_AER_CAPABILITIES {

    struct {
        ULONG SecondaryUncorrectableFirstErrorPtr:5;
        ULONG Reserved:27;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_SEC_AER_CAPABILITIES, *PPCI_EXPRESS_SEC_AER_CAPABILITIES;














typedef struct _PCI_EXPRESS_AER_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS SecUncorrectableErrorStatus;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK SecUncorrectableErrorMask;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY SecUncorrectableErrorSeverity;
    PCI_EXPRESS_SEC_AER_CAPABILITIES SecCapabilitiesAndControl;
    ULONG SecHeaderLog[4];

} PCI_EXPRESS_AER_CAPABILITY, *PPCI_EXPRESS_AER_CAPABILITY;





typedef struct _PCI_EXPRESS_ROOTPORT_AER_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_ROOT_ERROR_COMMAND RootErrorCommand;
    PCI_EXPRESS_ROOT_ERROR_STATUS RootErrorStatus;
    PCI_EXPRESS_ERROR_SOURCE_ID ErrorSourceId;

} PCI_EXPRESS_ROOTPORT_AER_CAPABILITY, *PPCI_EXPRESS_ROOTPORT_AER_CAPABILITY;





typedef struct _PCI_EXPRESS_BRIDGE_AER_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_UNCORRECTABLE_ERROR_STATUS UncorrectableErrorStatus;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_MASK UncorrectableErrorMask;
    PCI_EXPRESS_UNCORRECTABLE_ERROR_SEVERITY UncorrectableErrorSeverity;
    PCI_EXPRESS_CORRECTABLE_ERROR_STATUS CorrectableErrorStatus;
    PCI_EXPRESS_CORRECTABLE_ERROR_MASK CorrectableErrorMask;
    PCI_EXPRESS_AER_CAPABILITIES CapabilitiesAndControl;
    ULONG HeaderLog[4];
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_STATUS SecUncorrectableErrorStatus;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_MASK SecUncorrectableErrorMask;
    PCI_EXPRESS_SEC_UNCORRECTABLE_ERROR_SEVERITY SecUncorrectableErrorSeverity;
    PCI_EXPRESS_SEC_AER_CAPABILITIES SecCapabilitiesAndControl;
    ULONG SecHeaderLog[4];

} PCI_EXPRESS_BRIDGE_AER_CAPABILITY, *PPCI_EXPRESS_BRIDGE_AER_CAPABILITY;




typedef union _PCI_EXPRESS_ACS_CAPABILITY_REGISTER {

    struct {
        USHORT SourceValidation:1;
        USHORT TranslationBlocking:1;
        USHORT RequestRedirect:1;
        USHORT CompletionRedirect:1;
        USHORT UpstreamForwarding:1;
        USHORT EgressControl:1;
        USHORT DirectTranslation:1;
        USHORT EnhancedCapability:1;
        USHORT EgressControlVectorSize:8;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_ACS_CAPABILITY_REGISTER, *PPCI_EXPRESS_ACS_CAPABILITY_REGISTER;





typedef union _PCI_EXPRESS_ACS_CONTROL {

    struct {
        USHORT SourceValidation:1;
        USHORT TranslationBlocking:1;
        USHORT RequestRedirect:1;
        USHORT CompletionRedirect:1;
        USHORT UpstreamForwarding:1;
        USHORT EgressControl:1;
        USHORT DirectTranslation:1;
        USHORT IoBlocking:1;
        USHORT DspMemoryControl:2;
        USHORT UspMemoryControl:2;
        USHORT UnclaimedRedirect:1;
        USHORT Reserved:3;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_ACS_CONTROL, *PPCI_EXPRESS_ACS_CONTROL;

typedef struct _PCI_EXPRESS_ACS_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER  Header;

    PCI_EXPRESS_ACS_CAPABILITY_REGISTER      Capability;
    PCI_EXPRESS_ACS_CONTROL                 Control;

    ULONG                                   EgressControl[1];
} PCI_EXPRESS_ACS_CAPABILITY, *PPCI_EXPRESS_ACS_CAPABILITY ;





typedef union _PCI_EXPRESS_SRIOV_CAPS {

    struct {
        ULONG VFMigrationCapable:1;
        ULONG Reserved1:20;
        ULONG VFMigrationInterruptNumber:11;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_SRIOV_CAPS, *PPCI_EXPRESS_SRIOV_CAPS;

typedef union _PCI_EXPRESS_SRIOV_CONTROL {

    struct {
        USHORT VFEnable:1;
        USHORT VFMigrationEnable:1;
        USHORT VFMigrationInterruptEnable:1;
        USHORT VFMemorySpaceEnable:1;
        USHORT ARICapableHierarchy:1;
        USHORT Reserved1:11;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_SRIOV_CONTROL, *PPCI_EXPRESS_SRIOV_CONTROL;

typedef union _PCI_EXPRESS_SRIOV_STATUS {

    struct {
        USHORT VFMigrationStatus:1;
        USHORT Reserved1:15;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_SRIOV_STATUS, *PPCI_EXPRESS_SRIOV_STATUS;

typedef union _PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY {

    struct {
        ULONG VFMigrationStateBIR:3;
        ULONG VFMigrationStateOffset:29;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY, *PPCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY;

typedef struct _PCI_EXPRESS_SRIOV_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER  Header;

    PCI_EXPRESS_SRIOV_CAPS                  SRIOVCapabilities;
    PCI_EXPRESS_SRIOV_CONTROL               SRIOVControl;
    PCI_EXPRESS_SRIOV_STATUS                SRIOVStatus;
    USHORT                                  InitialVFs;
    USHORT                                  TotalVFs;
    USHORT                                  NumVFs;
    UCHAR                                   FunctionDependencyLink;
    UCHAR                                   RsvdP1;
    USHORT                                  FirstVFOffset;
    USHORT                                  VFStride;
    USHORT                                  RsvdP2;
    USHORT                                  VFDeviceId;
    ULONG                                   SupportedPageSizes;
    ULONG                                   SystemPageSize;
    ULONG                                   BaseAddresses[6];
    PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY VFMigrationStateArrayOffset;

} PCI_EXPRESS_SRIOV_CAPABILITY, *PPCI_EXPRESS_SRIOV_CAPABILITY;

























































































































































































































































typedef struct _PCI_DEVICE_PRESENCE_PARAMETERS {

    ULONG Size;
    ULONG Flags;

    USHORT VendorID;
    USHORT DeviceID;
    UCHAR RevisionID;
    USHORT SubVendorID;
    USHORT SubSystemID;
    UCHAR BaseClass;
    UCHAR SubClass;
    UCHAR ProgIf;

} PCI_DEVICE_PRESENCE_PARAMETERS, *PPCI_DEVICE_PRESENCE_PARAMETERS;

 
 
typedef
BOOLEAN
PCI_IS_DEVICE_PRESENT (
      USHORT VendorID,
      USHORT DeviceID,
      UCHAR RevisionID,
      USHORT SubVendorID,
      USHORT SubSystemID,
      ULONG Flags
);

typedef PCI_IS_DEVICE_PRESENT *PPCI_IS_DEVICE_PRESENT;

 
 
typedef
BOOLEAN
PCI_IS_DEVICE_PRESENT_EX (
      PVOID Context,
      PPCI_DEVICE_PRESENCE_PARAMETERS Parameters
    );

typedef PCI_IS_DEVICE_PRESENT_EX *PPCI_IS_DEVICE_PRESENT_EX;

typedef struct _PCI_DEVICE_PRESENT_INTERFACE {
    
    
    
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    
    
    
    PPCI_IS_DEVICE_PRESENT IsDevicePresent;

    PPCI_IS_DEVICE_PRESENT_EX IsDevicePresentEx;

} PCI_DEVICE_PRESENT_INTERFACE, *PPCI_DEVICE_PRESENT_INTERFACE;







 
 
typedef
NTSTATUS
PCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE (
      PVOID Context
    );

typedef PCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE *PPCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE;

 
 
typedef
NTSTATUS
PCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE (
      PVOID Context
    );

typedef PCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE *PPCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE;

typedef struct _PCI_EXPRESS_LINK_QUIESCENT_INTERFACE {

    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PPCI_EXPRESS_ENTER_LINK_QUIESCENT_MODE PciExpressEnterLinkQuiescentMode;
    PPCI_EXPRESS_EXIT_LINK_QUIESCENT_MODE PciExpressExitLinkQuiescentMode;

} PCI_EXPRESS_LINK_QUIESCENT_INTERFACE, *PPCI_EXPRESS_LINK_QUIESCENT_INTERFACE;







typedef
ULONG
(*PPCI_EXPRESS_ROOT_PORT_READ_CONFIG_SPACE) (
      PVOID Context,
      PVOID Buffer,
      ULONG Offset,
      ULONG Length
    );

typedef
ULONG
(*PPCI_EXPRESS_ROOT_PORT_WRITE_CONFIG_SPACE) (
      PVOID Context,
      PVOID Buffer,
      ULONG Offset,
      ULONG Length
    );

typedef struct _PCI_EXPRESS_ROOT_PORT_INTERFACE {

    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PPCI_EXPRESS_ROOT_PORT_READ_CONFIG_SPACE ReadConfigSpace;
    PPCI_EXPRESS_ROOT_PORT_WRITE_CONFIG_SPACE WriteConfigSpace;

} PCI_EXPRESS_ROOT_PORT_INTERFACE, *PPCI_EXPRESS_ROOT_PORT_INTERFACE;







 
typedef
NTSTATUS
PCI_MSIX_SET_ENTRY (
      PVOID Context,
      ULONG TableEntry,
      ULONG MessageNumber
    );

typedef PCI_MSIX_SET_ENTRY *PPCI_MSIX_SET_ENTRY;

 
typedef
NTSTATUS
PCI_MSIX_MASKUNMASK_ENTRY (
      PVOID Context,
      ULONG TableEntry
    );

typedef PCI_MSIX_MASKUNMASK_ENTRY *PPCI_MSIX_MASKUNMASK_ENTRY;

 
typedef
NTSTATUS
PCI_MSIX_GET_ENTRY (
      PVOID Context,
      ULONG TableEntry,
      PULONG MessageNumber,
      PBOOLEAN Masked
    );

typedef PCI_MSIX_GET_ENTRY *PPCI_MSIX_GET_ENTRY;

 
typedef
NTSTATUS
PCI_MSIX_GET_TABLE_SIZE (
      PVOID Context,
      PULONG TableSize
    );

typedef PCI_MSIX_GET_TABLE_SIZE *PPCI_MSIX_GET_TABLE_SIZE;

typedef struct _PCI_MSIX_TABLE_CONFIG_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    PPCI_MSIX_SET_ENTRY SetTableEntry;
    PPCI_MSIX_MASKUNMASK_ENTRY MaskTableEntry;
    PPCI_MSIX_MASKUNMASK_ENTRY UnmaskTableEntry;
    PPCI_MSIX_GET_ENTRY GetTableEntry;
    PPCI_MSIX_GET_TABLE_SIZE GetTableSize;
} PCI_MSIX_TABLE_CONFIG_INTERFACE, *PPCI_MSIX_TABLE_CONFIG_INTERFACE;






 

NTSTATUS
__stdcall
ZwCreateFile(
      PHANDLE FileHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      PIO_STATUS_BLOCK IoStatusBlock,
      PLARGE_INTEGER AllocationSize,
      ULONG FileAttributes,
      ULONG ShareAccess,
      ULONG CreateDisposition,
      ULONG CreateOptions,
      PVOID EaBuffer,
      ULONG EaLength
    );




 

NTSTATUS
__stdcall
ZwOpenFile(
      PHANDLE FileHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      PIO_STATUS_BLOCK IoStatusBlock,
      ULONG ShareAccess,
      ULONG OpenOptions
    );



 

NTSTATUS
__stdcall
ZwLoadDriver(
      PUNICODE_STRING DriverServiceName
    );



 

NTSTATUS
__stdcall
ZwUnloadDriver(
      PUNICODE_STRING DriverServiceName
    );




 

NTSTATUS
__stdcall
ZwQueryInformationFile(
      HANDLE FileHandle,
      PIO_STATUS_BLOCK IoStatusBlock,
      PVOID FileInformation,
      ULONG Length,
      FILE_INFORMATION_CLASS FileInformationClass
    );




 

NTSTATUS
__stdcall
ZwSetInformationFile(
      HANDLE FileHandle,
      PIO_STATUS_BLOCK IoStatusBlock,
      PVOID FileInformation,
      ULONG Length,
      FILE_INFORMATION_CLASS FileInformationClass
    );




 

NTSTATUS
__stdcall
ZwReadFile(
      HANDLE FileHandle,
      HANDLE Event,
      PIO_APC_ROUTINE ApcRoutine,
      PVOID ApcContext,
      PIO_STATUS_BLOCK IoStatusBlock,
      PVOID Buffer,
      ULONG Length,
      PLARGE_INTEGER ByteOffset,
      PULONG Key
    );




 

NTSTATUS
__stdcall
ZwWriteFile(
      HANDLE FileHandle,
      HANDLE Event,
      PIO_APC_ROUTINE ApcRoutine,
      PVOID ApcContext,
      PIO_STATUS_BLOCK IoStatusBlock,
      PVOID Buffer,
      ULONG Length,
      PLARGE_INTEGER ByteOffset,
      PULONG Key
    );




 

NTSTATUS
__stdcall
ZwClose(
      HANDLE Handle
    );



 

NTSTATUS
__stdcall
ZwCreateDirectoryObject(
      PHANDLE DirectoryHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes
    );



 

NTSTATUS
__stdcall
ZwMakeTemporaryObject(
      HANDLE Handle
    );




 

NTSTATUS
__stdcall
ZwCreateSection (
      PHANDLE SectionHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      PLARGE_INTEGER MaximumSize,
      ULONG SectionPageProtection,
      ULONG AllocationAttributes,
      HANDLE FileHandle
    );




 

NTSTATUS
__stdcall
ZwOpenSection(
      PHANDLE SectionHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes
    );




 
 
 

NTSTATUS
__stdcall
ZwMapViewOfSection(
      HANDLE SectionHandle,
      HANDLE ProcessHandle,
     PVOID *BaseAddress,
      ULONG_PTR ZeroBits,
      SIZE_T CommitSize,
      PLARGE_INTEGER SectionOffset,
      PSIZE_T ViewSize,
      SECTION_INHERIT InheritDisposition,
      ULONG AllocationType,
      ULONG Win32Protect
    );




 

NTSTATUS
__stdcall
ZwUnmapViewOfSection(
      HANDLE ProcessHandle,
      PVOID BaseAddress
    );




 

NTSTATUS
__stdcall
ZwCreateKey(
      PHANDLE KeyHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      ULONG TitleIndex,
      PUNICODE_STRING Class,
      ULONG CreateOptions,
      PULONG Disposition
    );



 

NTSTATUS
ZwCreateKeyTransacted(
      PHANDLE KeyHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      ULONG TitleIndex,
      PUNICODE_STRING Class,
      ULONG CreateOptions,
      HANDLE TransactionHandle,
      PULONG Disposition
    );



 
 
 
NTSTATUS
__stdcall
ZwCreateRegistryTransaction (
      PHANDLE TransactionHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      ULONG CreateOptions
    );



 
 
 
NTSTATUS
__stdcall
NtOpenRegistryTransaction (
      PHANDLE TransactionHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes
    );



 
 
NTSTATUS
__stdcall
ZwCommitRegistryTransaction (
      HANDLE TransactionHandle,
      ULONG Flags
    );



 
 
NTSTATUS
__stdcall
NtRollbackRegistryTransaction (
      HANDLE TransactionHandle,
      ULONG Flags
    );




 

NTSTATUS
__stdcall
ZwOpenKey(
      PHANDLE KeyHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes
    );



 

NTSTATUS
__stdcall
ZwOpenKeyEx(
      PHANDLE KeyHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      ULONG OpenOptions
    );





 

NTSTATUS
__stdcall
ZwOpenKeyTransacted(
      PHANDLE KeyHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      HANDLE TransactionHandle
    );




 

NTSTATUS
__stdcall
ZwOpenKeyTransactedEx(
      PHANDLE KeyHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      ULONG OpenOptions,
      HANDLE TransactionHandle
    );






 

NTSTATUS
__stdcall
ZwDeleteKey(
      HANDLE KeyHandle
    );



 

NTSTATUS
__stdcall
ZwDeleteValueKey(
      HANDLE KeyHandle,
      PUNICODE_STRING ValueName
    );



 


 


NTSTATUS
__stdcall
ZwEnumerateKey(
      HANDLE KeyHandle,
      ULONG Index,
      KEY_INFORMATION_CLASS KeyInformationClass,
      PVOID KeyInformation,
      ULONG Length,
      PULONG ResultLength
    );



 


 


NTSTATUS
__stdcall
ZwEnumerateValueKey(
      HANDLE KeyHandle,
      ULONG Index,
      KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
      PVOID KeyValueInformation,
      ULONG Length,
      PULONG ResultLength
    );



 

NTSTATUS
__stdcall
ZwFlushKey(
      HANDLE KeyHandle
    );



 


 


NTSTATUS
__stdcall
ZwQueryKey(
      HANDLE KeyHandle,
      KEY_INFORMATION_CLASS KeyInformationClass,
      PVOID KeyInformation,
      ULONG Length,
      PULONG ResultLength
    );



 


 


NTSTATUS
__stdcall
ZwQueryValueKey(
      HANDLE KeyHandle,
      PUNICODE_STRING ValueName,
      KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
      PVOID KeyValueInformation,
      ULONG Length,
      PULONG ResultLength
    );




 

NTSTATUS
__stdcall
ZwRenameKey(
      HANDLE           KeyHandle,
      PUNICODE_STRING  NewName
    );


 

NTSTATUS
__stdcall
ZwSaveKey (
      HANDLE KeyHandle,
      HANDLE FileHandle
    );


 

NTSTATUS
__stdcall
ZwSaveKeyEx (
      HANDLE KeyHandle,
      HANDLE FileHandle,
      ULONG  Format
    );


 

NTSTATUS
__stdcall
ZwRestoreKey (
      HANDLE KeyHandle,
      HANDLE FileHandle,
      ULONG Flags
    );

 

NTSTATUS
__stdcall
ZwSetInformationKey (
      HANDLE KeyHandle,
       
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
      PVOID KeySetInformation,
      ULONG KeySetInformationLength
    );





 

NTSTATUS
__stdcall
ZwSetValueKey(
      HANDLE KeyHandle,
      PUNICODE_STRING ValueName,
      ULONG TitleIndex,
      ULONG Type,
      PVOID Data,
      ULONG DataSize
    );



 

NTSTATUS
__stdcall
ZwOpenSymbolicLinkObject(
      PHANDLE LinkHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes
    );



 

NTSTATUS
__stdcall
ZwQuerySymbolicLinkObject(
      HANDLE LinkHandle,
      PUNICODE_STRING LinkTarget,
      PULONG ReturnedLength
    );



 

NTSTATUS
__stdcall
ZwCreateTransactionManager (
      PHANDLE TmHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      PUNICODE_STRING LogFileName,
      ULONG CreateOptions,
      ULONG CommitStrength
    );



 

NTSTATUS
__stdcall
ZwOpenTransactionManager (
      PHANDLE TmHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      PUNICODE_STRING LogFileName,
      LPGUID TmIdentity,
      ULONG OpenOptions
    );




 

NTSTATUS
__stdcall
ZwRollforwardTransactionManager (
      HANDLE TransactionManagerHandle,
      PLARGE_INTEGER TmVirtualClock
    );



 

NTSTATUS
__stdcall
ZwRecoverTransactionManager (
      HANDLE TransactionManagerHandle
    );



 

NTSTATUS
__stdcall
ZwQueryInformationTransactionManager (
      HANDLE TransactionManagerHandle,
      TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
      PVOID TransactionManagerInformation,
      ULONG TransactionManagerInformationLength,
      PULONG ReturnLength
    );



 

NTSTATUS
__stdcall
ZwSetInformationTransactionManager (
      HANDLE TmHandle,
      TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
      PVOID TransactionManagerInformation,
      ULONG TransactionManagerInformationLength
    );



 

NTSTATUS
__stdcall
ZwEnumerateTransactionObject (
      HANDLE            RootObjectHandle,
          KTMOBJECT_TYPE    QueryType,
      PKTMOBJECT_CURSOR ObjectCursor,
          ULONG             ObjectCursorLength,
         PULONG            ReturnLength
    );



 

NTSTATUS
__stdcall
ZwCreateTransaction (
      PHANDLE TransactionHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      LPGUID Uow,
      HANDLE TmHandle,
      ULONG CreateOptions,
      ULONG IsolationLevel,
      ULONG IsolationFlags,
      PLARGE_INTEGER Timeout,
      PUNICODE_STRING Description
    );



 

NTSTATUS
__stdcall
ZwOpenTransaction (
      PHANDLE TransactionHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      LPGUID Uow,
      HANDLE TmHandle
    );



 

NTSTATUS
__stdcall
ZwQueryInformationTransaction (
      HANDLE TransactionHandle,
      TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
      PVOID TransactionInformation,
      ULONG TransactionInformationLength,
      PULONG ReturnLength
    );



 

NTSTATUS
__stdcall
ZwSetInformationTransaction (
      HANDLE TransactionHandle,
      TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
      PVOID TransactionInformation,
      ULONG TransactionInformationLength
    );



 

NTSTATUS
__stdcall
ZwCommitTransaction (
      HANDLE  TransactionHandle,
      BOOLEAN Wait
    );



 

NTSTATUS
__stdcall
ZwRollbackTransaction (
      HANDLE  TransactionHandle,
      BOOLEAN Wait
    );



 

NTSTATUS
__stdcall
ZwCreateResourceManager (
      PHANDLE ResourceManagerHandle,
      ACCESS_MASK DesiredAccess,
      HANDLE TmHandle,
      LPGUID ResourceManagerGuid,
      POBJECT_ATTRIBUTES ObjectAttributes,
      ULONG CreateOptions,
      PUNICODE_STRING Description
    );



 

NTSTATUS
__stdcall
ZwOpenResourceManager (
      PHANDLE ResourceManagerHandle,
      ACCESS_MASK DesiredAccess,
      HANDLE TmHandle,
      LPGUID ResourceManagerGuid,
      POBJECT_ATTRIBUTES ObjectAttributes
    );



 

NTSTATUS
__stdcall
ZwRecoverResourceManager (
      HANDLE ResourceManagerHandle
    );



 

NTSTATUS
__stdcall
ZwGetNotificationResourceManager (
      HANDLE             ResourceManagerHandle,
      PTRANSACTION_NOTIFICATION TransactionNotification,
      ULONG              NotificationLength,
      PLARGE_INTEGER         Timeout,
      PULONG                    ReturnLength,
      ULONG                          Asynchronous,
      ULONG_PTR                  AsynchronousContext
    );



 

NTSTATUS
__stdcall
ZwQueryInformationResourceManager (
      HANDLE ResourceManagerHandle,
      RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
      PVOID ResourceManagerInformation,
      ULONG ResourceManagerInformationLength,
      PULONG ReturnLength
    );



 

NTSTATUS
__stdcall
ZwSetInformationResourceManager (
      HANDLE ResourceManagerHandle,
      RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
      PVOID ResourceManagerInformation,
      ULONG ResourceManagerInformationLength
    );



 

NTSTATUS
__stdcall
ZwCreateEnlistment (
      PHANDLE EnlistmentHandle,
      ACCESS_MASK DesiredAccess,
      HANDLE ResourceManagerHandle,
      HANDLE TransactionHandle,
      POBJECT_ATTRIBUTES ObjectAttributes,
      ULONG CreateOptions,
      NOTIFICATION_MASK NotificationMask,
      PVOID EnlistmentKey
    );



 

NTSTATUS
__stdcall
ZwOpenEnlistment (
      PHANDLE EnlistmentHandle,
      ACCESS_MASK DesiredAccess,
      HANDLE RmHandle,
      LPGUID EnlistmentGuid,
      POBJECT_ATTRIBUTES ObjectAttributes
    );



 

NTSTATUS
__stdcall
ZwQueryInformationEnlistment (
      HANDLE EnlistmentHandle,
      ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
      PVOID EnlistmentInformation,
      ULONG EnlistmentInformationLength,
      PULONG ReturnLength
    );



 

NTSTATUS
__stdcall
ZwSetInformationEnlistment (
      HANDLE EnlistmentHandle,
      ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
      PVOID EnlistmentInformation,
      ULONG EnlistmentInformationLength
    );



 

NTSTATUS
__stdcall
ZwRecoverEnlistment (
      HANDLE EnlistmentHandle,
      PVOID EnlistmentKey
    );



 

NTSTATUS
__stdcall
ZwPrePrepareEnlistment (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );



 

NTSTATUS
__stdcall
ZwPrepareEnlistment (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );



 

NTSTATUS
__stdcall
ZwCommitEnlistment (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );



 

NTSTATUS
__stdcall
ZwRollbackEnlistment (
      HANDLE EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );



 

NTSTATUS
__stdcall
ZwPrePrepareComplete (
      HANDLE            EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );



 

NTSTATUS
__stdcall
ZwPrepareComplete (
      HANDLE            EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );



 

NTSTATUS
__stdcall
ZwCommitComplete (
      HANDLE            EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );



 

NTSTATUS
__stdcall
ZwReadOnlyEnlistment (
      HANDLE            EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );




NTSTATUS
__stdcall
ZwRollbackComplete (
      HANDLE            EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );



 

NTSTATUS
__stdcall
ZwSinglePhaseReject (
      HANDLE            EnlistmentHandle,
      PLARGE_INTEGER TmVirtualClock
    );



 

NTSTATUS
__stdcall
ZwOpenEvent (
      PHANDLE EventHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes
    );



 

NTSTATUS
__stdcall
ZwQueryInformationByName (
      POBJECT_ATTRIBUTES ObjectAttributes,
      PIO_STATUS_BLOCK IoStatusBlock,
      PVOID FileInformation,
      ULONG Length,
      FILE_INFORMATION_CLASS FileInformationClass
    );



 

NTSTATUS
__stdcall
ZwQueryFullAttributesFile(
      POBJECT_ATTRIBUTES ObjectAttributes,
      PFILE_NETWORK_OPEN_INFORMATION FileInformation
    );































































    












typedef ULONG                       CLFS_CONTAINER_ID;
typedef CLFS_CONTAINER_ID           *PCLFS_CONTAINER_ID;
typedef CLFS_CONTAINER_ID           **PPCLFS_CONTAINER_ID;















typedef struct _CLS_LSN
{

    ULONGLONG               Internal;

} CLS_LSN, *PCLS_LSN, **PPCLS_LSN;











typedef CLS_LSN CLFS_LSN;
typedef CLFS_LSN *PCLFS_LSN, **PPCLFS_LSN;









extern  const CLFS_LSN CLFS_LSN_INVALID;
extern  const CLFS_LSN CLFS_LSN_NULL;


















































































typedef UCHAR CLS_RECORD_TYPE, *PCLS_RECORD_TYPE, **PPCLS_RECORD_TYPE;
typedef CLS_RECORD_TYPE CLFS_RECORD_TYPE, *PCLFS_RECORD_TYPE, **PPCLFS_RECORD_TYPE;










typedef enum _CLS_CONTEXT_MODE
{
    ClsContextNone = 0x00,
    ClsContextUndoNext,
    ClsContextPrevious,
    ClsContextForward

} CLS_CONTEXT_MODE, *PCLS_CONTEXT_MODE, **PPCLS_CONTEXT_MODE;







typedef enum _CLFS_CONTEXT_MODE
{
    ClfsContextNone = 0x00,
    ClfsContextUndoNext,
    ClfsContextPrevious,
    ClfsContextForward

} CLFS_CONTEXT_MODE, *PCLFS_CONTEXT_MODE, **PPCLFS_CONTEXT_MODE;












typedef struct _CLFS_NODE_ID
{
    ULONG   cType;                                      
    ULONG   cbNode;                                     

} CLFS_NODE_ID, *PCLFS_NODE_ID;











typedef struct _CLS_WRITE_ENTRY
{
    PVOID Buffer;
    ULONG ByteLength;
} CLS_WRITE_ENTRY, *PCLS_WRITE_ENTRY, **PPCLS_WRITE_ENTRY;







typedef CLS_WRITE_ENTRY CLFS_WRITE_ENTRY;
typedef CLFS_WRITE_ENTRY *PCLFS_WRITE_ENTRY, **PPCLFS_WRITE_ENTRY;









typedef GUID CLFS_LOG_ID;










typedef struct _CLS_INFORMATION
{
    LONGLONG TotalAvailable;                            
    LONGLONG CurrentAvailable;                          
    LONGLONG TotalReservation;                       
    ULONGLONG BaseFileSize;                             
    ULONGLONG ContainerSize;                            
    ULONG TotalContainers;                              
    ULONG FreeContainers;                               
    ULONG TotalClients;                                 
    ULONG Attributes;                                   
    ULONG FlushThreshold;                               
    ULONG SectorSize;                                   
    CLS_LSN MinArchiveTailLsn;                          
    CLS_LSN BaseLsn;                                    
    CLS_LSN LastFlushedLsn;                             
    CLS_LSN LastLsn;                                    
    CLS_LSN RestartLsn;                                 
    GUID Identity;                                      
} CLS_INFORMATION, *PCLS_INFORMATION, *PPCLS_INFORMATION;







typedef CLS_INFORMATION CLFS_INFORMATION;
typedef CLFS_INFORMATION *PCLFS_INFORMATION, *PPCLFS_INFORMATION;




































typedef struct _CLFS_LOG_NAME_INFORMATION
{

    USHORT NameLengthInBytes;
    WCHAR  Name[1];

} CLFS_LOG_NAME_INFORMATION, *PCLFS_LOG_NAME_INFORMATION, **PPCLFS_LOG_NAME_INFORMATION;










typedef struct _CLFS_STREAM_ID_INFORMATION
{

    UCHAR StreamIdentifier;

} CLFS_STREAM_ID_INFORMATION, *PCLFS_STREAM_ID_INFORMATION, **PPCLFS_STREAM_ID_INFORMATION;









typedef struct _CLFS_PHYSICAL_LSN_INFORMATION
{
    UCHAR          StreamIdentifier;
    CLFS_LSN       VirtualLsn;
    CLFS_LSN       PhysicalLsn;

} CLFS_PHYSICAL_LSN_INFORMATION, *PCLFS_PHYSICAL_LSN_INFORMATION;











typedef UINT32 CLS_CONTAINER_STATE, *PCLS_CONTAINER_STATE, *PPCLS_CONTAINER_STATE;
typedef CLS_CONTAINER_STATE  CLFS_CONTAINER_STATE, *PCLFS_CONTAINER_STATE, *PPCLFS_CONTAINER_STATE;






































































typedef struct _CLS_CONTAINER_INFORMATION
{
    ULONG FileAttributes;                    
    ULONGLONG CreationTime;                  
    ULONGLONG LastAccessTime;                
    ULONGLONG LastWriteTime;                 
    LONGLONG ContainerSize;                  
    ULONG FileNameActualLength;              
    ULONG FileNameLength;                    
    WCHAR FileName [(256)];
    CLFS_CONTAINER_STATE State;              
    CLFS_CONTAINER_ID PhysicalContainerId;   
    CLFS_CONTAINER_ID LogicalContainerId;    

} CLS_CONTAINER_INFORMATION, *PCLS_CONTAINER_INFORMATION, **PPCLS_CONTAINER_INFORMATION;





typedef CLS_CONTAINER_INFORMATION CLFS_CONTAINER_INFORMATION;
typedef CLFS_CONTAINER_INFORMATION *PCLFS_CONTAINER_INFORMATION, **PPCLFS_CONTAINER_INFORMATION;











typedef enum _CLS_LOG_INFORMATION_CLASS
{

    ClfsLogBasicInformation = 0x00,         
    ClfsLogBasicInformationPhysical,        
    ClfsLogPhysicalNameInformation,         
    ClfsLogStreamIdentifierInformation,     

    ClfsLogSystemMarkingInformation,        
    ClfsLogPhysicalLsnInformation           


} CLS_LOG_INFORMATION_CLASS, *PCLS_LOG_INFORMATION_CLASS, **PPCLS_LOG_INFORMATION_CLASS;





typedef CLS_LOG_INFORMATION_CLASS CLFS_LOG_INFORMATION_CLASS;
typedef CLFS_LOG_INFORMATION_CLASS *PCLFS_LOG_INFORMATION_CLASS, **PPCLFS_LOG_INFORMATION_CLASS;









typedef enum _CLS_IOSTATS_CLASS
{
    ClsIoStatsDefault = 0x0000,
    ClsIoStatsMax     = 0xFFFF

} CLS_IOSTATS_CLASS, *PCLS_IOSTATS_CLASS, **PPCLS_IOSTATS_CLASS;










typedef enum _CLFS_IOSTATS_CLASS
{
    ClfsIoStatsDefault = 0x0000,
    ClfsIoStatsMax     = 0xFFFF

} CLFS_IOSTATS_CLASS, *PCLFS_IOSTATS_CLASS, **PPCLFS_IOSTATS_CLASS;












typedef struct _CLS_IO_STATISTICS_HEADER
{
    UCHAR                ubMajorVersion;     
    UCHAR                ubMinorVersion;     
    CLFS_IOSTATS_CLASS  eStatsClass;        
    USHORT              cbLength;           
    ULONG               coffData;           

} CLS_IO_STATISTICS_HEADER, *PCLS_IO_STATISTICS_HEADER, **PPCLS_IO_STATISTICS_HEADER;





typedef CLS_IO_STATISTICS_HEADER CLFS_IO_STATISTICS_HEADER;
typedef CLFS_IO_STATISTICS_HEADER *PCLFS_IO_STATISTICS_HEADER, **PPCLFS_IO_STATISTICS_HEADER;




typedef struct _CLS_IO_STATISTICS
{
    CLS_IO_STATISTICS_HEADER hdrIoStats;    
    ULONGLONG cFlush;                       
    ULONGLONG cbFlush;                      
    ULONGLONG cMetaFlush;                   
    ULONGLONG cbMetaFlush;                  

} CLS_IO_STATISTICS, *PCLS_IO_STATISTICS, **PPCLS_IO_STATISTICS;





typedef CLS_IO_STATISTICS CLFS_IO_STATISTICS;
typedef CLFS_IO_STATISTICS *PCLFS_IO_STATISTICS, **PPCLFS_IO_STATISTICS;





























typedef UCHAR CLFS_SCAN_MODE, *PCLFS_SCAN_MODE;


















typedef FILE_OBJECT LOG_FILE_OBJECT, *PLOG_FILE_OBJECT, **PPLOG_FILE_OBJECT;






typedef struct _CLS_SCAN_CONTEXT
{
    CLFS_NODE_ID cidNode;
    PLOG_FILE_OBJECT plfoLog;
     ULONG cIndex;
     ULONG cContainers;
     ULONG cContainersReturned;
     CLFS_SCAN_MODE eScanMode;
     PCLS_CONTAINER_INFORMATION pinfoContainer;
    
} CLS_SCAN_CONTEXT, *PCLS_SCAN_CONTEXT, **PPCLS_SCAN_CONTEXT;














typedef CLS_SCAN_CONTEXT CLFS_SCAN_CONTEXT;
typedef CLFS_SCAN_CONTEXT *PCLFS_SCAN_CONTEXT, **PPCLFS_SCAN_CONTEXT;













typedef struct _CLS_ARCHIVE_DESCRIPTOR
{
    ULONGLONG coffLow;
    ULONGLONG coffHigh;
    CLS_CONTAINER_INFORMATION infoContainer;

} CLS_ARCHIVE_DESCRIPTOR, *PCLS_ARCHIVE_DESCRIPTOR, **PPCLS_ARCHIVE_DESCRIPTOR;





typedef CLS_ARCHIVE_DESCRIPTOR CLFS_ARCHIVE_DESCRIPTOR;
typedef CLFS_ARCHIVE_DESCRIPTOR *PCLFS_ARCHIVE_DESCRIPTOR, **PPCLFS_ARCHIVE_DESCRIPTOR;









typedef PVOID (* CLFS_BLOCK_ALLOCATION) (ULONG cbBufferLength, PVOID pvUserContext);







typedef void (* CLFS_BLOCK_DEALLOCATION) (PVOID pvBuffer, PVOID pvUserContext);









typedef enum _CLFS_LOG_ARCHIVE_MODE
{

    ClfsLogArchiveEnabled = 0x01,
    ClfsLogArchiveDisabled = 0x02

} CLFS_LOG_ARCHIVE_MODE, *PCLFS_LOG_ARCHIVE_MODE;

































 BOOLEAN __stdcall
ClfsLsnEqual
(
      const CLFS_LSN* plsn1,
      const CLFS_LSN* plsn2
);























 BOOLEAN __stdcall
ClfsLsnLess
(
      const CLFS_LSN* plsn1,
      const CLFS_LSN* plsn2
);























 BOOLEAN __stdcall
ClfsLsnGreater
(
      const CLFS_LSN* plsn1,
      const CLFS_LSN* plsn2
);























 BOOLEAN __stdcall
ClfsLsnNull
(
      const CLFS_LSN* plsn
);





















 CLFS_CONTAINER_ID __stdcall
ClfsLsnContainer
(
    const CLFS_LSN* plsn
);


























 CLFS_LSN __stdcall
ClfsLsnCreate
(
      CLFS_CONTAINER_ID    cidContainer,
      ULONG                offBlock,
      ULONG                cRecord
);





















 ULONG __stdcall
ClfsLsnBlockOffset
(
    const CLFS_LSN* plsn
);





















 ULONG __stdcall
ClfsLsnRecordSequence
(
      const CLFS_LSN* plsn
);























 BOOLEAN __stdcall
ClfsLsnInvalid
(
      const CLFS_LSN* plsn
);























 CLFS_LSN __stdcall
ClfsLsnIncrement (  PCLFS_LSN  plsn);




























































































































typedef enum _CLFS_MGMT_POLICY_TYPE {

    ClfsMgmtPolicyMaximumSize = 0x0,
    ClfsMgmtPolicyMinimumSize,
    ClfsMgmtPolicyNewContainerSize,
    ClfsMgmtPolicyGrowthRate,
    ClfsMgmtPolicyLogTail,
    ClfsMgmtPolicyAutoShrink,
    ClfsMgmtPolicyAutoGrow,
    ClfsMgmtPolicyNewContainerPrefix,
    ClfsMgmtPolicyNewContainerSuffix,
    ClfsMgmtPolicyNewContainerExtension,

    ClfsMgmtPolicyInvalid

} CLFS_MGMT_POLICY_TYPE, *PCLFS_MGMT_POLICY_TYPE;















































typedef struct _CLFS_MGMT_POLICY {

    
    
    
    ULONG                   Version;

    
    
    
    ULONG                   LengthInBytes;

    
    
    
    
    ULONG                   PolicyFlags;

    
    
    
    CLFS_MGMT_POLICY_TYPE   PolicyType;

    
    
    
    
    
    

    union {

        struct {
            ULONG       Containers;
        } MaximumSize;

        struct {
            ULONG       Containers;
        } MinimumSize;

        struct {
            ULONG       SizeInBytes;
        } NewContainerSize;

        struct {
            ULONG       AbsoluteGrowthInContainers;
            ULONG       RelativeGrowthPercentage;
        } GrowthRate;

        struct {
            ULONG       MinimumAvailablePercentage;
            ULONG       MinimumAvailableContainers;
        } LogTail;

        struct {
            ULONG       Percentage;
        } AutoShrink;

        struct {
            ULONG       Enabled;
        } AutoGrow;

        struct {
            USHORT      PrefixLengthInBytes;
            WCHAR       PrefixString[1]; 
        } NewContainerPrefix;

        struct {
            ULONGLONG   NextContainerSuffix;
        } NewContainerSuffix;

        struct {
            USHORT      ExtensionLengthInBytes;
            WCHAR       ExtensionString[1]; 
        } NewContainerExtension;

    } PolicyParameters;

    
    
    
    

} CLFS_MGMT_POLICY, *PCLFS_MGMT_POLICY;











typedef enum _CLFS_MGMT_NOTIFICATION_TYPE
{

    
    
    

    ClfsMgmtAdvanceTailNotification = 0,

    
    
    
    

    ClfsMgmtLogFullHandlerNotification,

    
    
    
    

    ClfsMgmtLogUnpinnedNotification,

    
    
    
    

    ClfsMgmtLogWriteNotification

} CLFS_MGMT_NOTIFICATION_TYPE, *PCLFS_MGMT_NOTIFICATION_TYPE;










typedef struct _CLFS_MGMT_NOTIFICATION
{

    
    
    

    CLFS_MGMT_NOTIFICATION_TYPE     Notification;
    
    
    
    
    

    CLFS_LSN                        Lsn;

    
    
    
    
    

    USHORT                          LogIsPinned;

} CLFS_MGMT_NOTIFICATION, *PCLFS_MGMT_NOTIFICATION;
















typedef
NTSTATUS
(*PCLFS_CLIENT_ADVANCE_TAIL_CALLBACK) (
      PLOG_FILE_OBJECT LogFile,
      PCLFS_LSN TargetLsn,
      PVOID ClientData
    );








typedef
void
(*PCLFS_CLIENT_LFF_HANDLER_COMPLETE_CALLBACK) (
      PLOG_FILE_OBJECT LogFile,
      NTSTATUS OperationStatus,
      BOOLEAN LogIsPinned,
      PVOID ClientData
    );









typedef
void
(*PCLFS_CLIENT_LOG_UNPINNED_CALLBACK) (
      PLOG_FILE_OBJECT LogFile,
      PVOID ClientData
    );










typedef
void
(*PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK) (
      PLOG_FILE_OBJECT LogFile,
      NTSTATUS OperationStatus,
      PVOID ClientData
    );















typedef struct _CLFS_MGMT_CLIENT_REGISTRATION {

    
    
    

    ULONG   Version;  

    PCLFS_CLIENT_ADVANCE_TAIL_CALLBACK AdvanceTailCallback;
    PVOID                              AdvanceTailCallbackData;

    PCLFS_CLIENT_LFF_HANDLER_COMPLETE_CALLBACK LogGrowthCompleteCallback;
    PVOID                                      LogGrowthCompleteCallbackData;

    PCLFS_CLIENT_LOG_UNPINNED_CALLBACK LogUnpinnedCallback;
    PVOID                              LogUnpinnedCallbackData;

} CLFS_MGMT_CLIENT_REGISTRATION, *PCLFS_MGMT_CLIENT_REGISTRATION;











typedef PVOID CLFS_MGMT_CLIENT, *PCLFS_MGMT_CLIENT;





NTSTATUS
ClfsMgmtRegisterManagedClient(
      PLOG_FILE_OBJECT LogFile,
      PCLFS_MGMT_CLIENT_REGISTRATION RegistrationData,
      PCLFS_MGMT_CLIENT ClientCookie
    );




NTSTATUS
ClfsMgmtDeregisterManagedClient(
      CLFS_MGMT_CLIENT ClientCookie
    );




NTSTATUS
ClfsMgmtTailAdvanceFailure(
      CLFS_MGMT_CLIENT Client,
      NTSTATUS Reason
    );




NTSTATUS
ClfsMgmtHandleLogFileFull(
      CLFS_MGMT_CLIENT Client
    );




NTSTATUS
ClfsMgmtInstallPolicy(
      PLOG_FILE_OBJECT  LogFile,
      PCLFS_MGMT_POLICY Policy,
      ULONG PolicyLength
    );




NTSTATUS
ClfsMgmtQueryPolicy(
      PLOG_FILE_OBJECT LogFile,
      CLFS_MGMT_POLICY_TYPE PolicyType,
      PCLFS_MGMT_POLICY Policy,
      PULONG PolicyLength
    );




NTSTATUS
ClfsMgmtRemovePolicy(
      PLOG_FILE_OBJECT LogFile,
      CLFS_MGMT_POLICY_TYPE PolicyType
    );




NTSTATUS
ClfsMgmtSetLogFileSize(
      PLOG_FILE_OBJECT LogFile,
      PULONGLONG NewSizeInContainers,
      PULONGLONG ResultingSizeInContainers,
      PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK CompletionRoutine,
      PVOID CompletionRoutineData
    );





NTSTATUS
ClfsMgmtSetLogFileSizeAsClient(
      PLOG_FILE_OBJECT LogFile,
      PCLFS_MGMT_CLIENT ClientCookie,
      PULONGLONG NewSizeInContainers,
      PULONGLONG ResultingSizeInContainers,
      PCLFS_SET_LOG_SIZE_COMPLETE_CALLBACK CompletionRoutine,
      PVOID CompletionRoutineData
    );























NTSTATUS ClfsInitialize (void);










void ClfsFinalize (void);












NTSTATUS ClfsCreateLogFile (
                      PPLOG_FILE_OBJECT pplfoLog,
                      PUNICODE_STRING puszLogFileName,
                      ACCESS_MASK fDesiredAccess,
                      ULONG dwShareMode,
                      PSECURITY_DESCRIPTOR psdLogFile,
                      ULONG fCreateDisposition,
                      ULONG fCreateOptions,
                      ULONG fFlagsAndAttributes,
                      ULONG fLogOptionFlag,
                      PVOID pvContext,
                      ULONG cbContext
                    );











NTSTATUS ClfsDeleteLogByPointer (  PLOG_FILE_OBJECT plfoLog);











NTSTATUS ClfsDeleteLogFile (
                      PUNICODE_STRING puszLogFileName,
                      PVOID pvReserved,
                      ULONG fLogOptionFlag,
                      PVOID pvContext,
                      ULONG cbContext
                    );











NTSTATUS ClfsAddLogContainer (
                      PLOG_FILE_OBJECT plfoLog,
                      PULONGLONG pcbContainer,
                      PUNICODE_STRING puszContainerPath
                    );











NTSTATUS ClfsAddLogContainerSet (
                      PLOG_FILE_OBJECT plfoLog,
                      USHORT cContainers,
                      PULONGLONG pcbContainer,
                      PUNICODE_STRING rguszContainerPath
                    );











NTSTATUS ClfsRemoveLogContainer (
                      PLOG_FILE_OBJECT plfoLog,
                      PUNICODE_STRING puszContainerPath,
                      BOOLEAN fForce
                    );











NTSTATUS ClfsRemoveLogContainerSet (
                      PLOG_FILE_OBJECT plfoLog,
                      USHORT cContainers,
                      PUNICODE_STRING rgwszContainerPath,
                      BOOLEAN fForce
                    );











NTSTATUS ClfsSetArchiveTail (
                      PLOG_FILE_OBJECT plfoLog,
                      PCLFS_LSN plsnArchiveTail
                    );











NTSTATUS ClfsSetEndOfLog (
                      PLOG_FILE_OBJECT plfoLog,
                      PCLFS_LSN plsnEnd
                    );











NTSTATUS ClfsCreateScanContext (
                      PLOG_FILE_OBJECT plfoLog,
                      ULONG cFromContainer,
                      ULONG cContainers,
                      CLFS_SCAN_MODE eScanMode,
                      PCLFS_SCAN_CONTEXT pcxScan
                    );











NTSTATUS ClfsScanLogContainers (
                      PCLFS_SCAN_CONTEXT pcxScan,
                      CLFS_SCAN_MODE eScanMode
                    );












NTSTATUS ClfsGetContainerName (
                      PLOG_FILE_OBJECT plfoLog,
                      CLFS_CONTAINER_ID cidLogicalContainer,
                      PUNICODE_STRING puszContainerName,
                      PULONG pcActualLenContainerName
                    );















NTSTATUS ClfsGetLogFileInformation (
                      PLOG_FILE_OBJECT plfoLog,
                      PCLFS_INFORMATION pinfoBuffer,
                      PULONG pcbInfoBuffer
                    );











NTSTATUS ClfsQueryLogFileInformation (
                      PLOG_FILE_OBJECT plfoLog,
                      CLFS_LOG_INFORMATION_CLASS eInformationClass,
                      PVOID pinfoInputBuffer,
                      ULONG cbinfoInputBuffer,
                      PVOID pinfoBuffer,
                      PULONG pcbInfoBuffer
                    );











NTSTATUS ClfsSetLogFileInformation (
                      PLOG_FILE_OBJECT plfoLog,
                      CLFS_LOG_INFORMATION_CLASS eInformationClass,
                      PVOID pinfoBuffer,
                      ULONG cbBuffer
                    );











NTSTATUS ClfsReadRestartArea (
                      PVOID pvMarshalContext,
                     PVOID *ppvRestartBuffer,
                      PULONG pcbRestartBuffer,
                      PCLFS_LSN plsn,
                     PVOID *ppvReadContext
                    );












NTSTATUS ClfsReadPreviousRestartArea (
                      PVOID pvReadContext,
                     PVOID *ppvRestartBuffer,
                      PULONG pcbRestartBuffer,
                      PCLFS_LSN plsnRestart
                    );











NTSTATUS ClfsWriteRestartArea (
                      PVOID pvMarshalContext,
                      PVOID pvRestartBuffer,
                      ULONG cbRestartBuffer,
                      PCLFS_LSN plsnBase,
                      ULONG fFlags,
                      PULONG pcbWritten,
                      PCLFS_LSN plsnNext
                    );










NTSTATUS ClfsAdvanceLogBase (
                      PVOID pvMarshalContext,
                      PCLFS_LSN plsnBase,
                      ULONG fFlags
                    );











NTSTATUS ClfsCloseAndResetLogFile (  PLOG_FILE_OBJECT plfoLog);










NTSTATUS  ClfsCloseLogFileObject (  PLOG_FILE_OBJECT plfoLog);











NTSTATUS ClfsCreateMarshallingArea (
                      PLOG_FILE_OBJECT plfoLog,
                      POOL_TYPE ePoolType,
                      PALLOCATE_FUNCTION pfnAllocBuffer,
                      PFREE_FUNCTION pfnFreeBuffer,
                      ULONG cbMarshallingBuffer,
                      ULONG cMaxWriteBuffers,
                      ULONG cMaxReadBuffers,
                     PVOID *ppvMarshalContext
                    );











NTSTATUS ClfsCreateMarshallingAreaEx (
                      PLOG_FILE_OBJECT plfoLog,
                      POOL_TYPE ePoolType,
                      PALLOCATE_FUNCTION pfnAllocBuffer,
                      PFREE_FUNCTION pfnFreeBuffer,
                      ULONG cbMarshallingBuffer,
                      ULONG cMaxWriteBuffers,
                      ULONG cMaxReadBuffers,
                      ULONG cAlignmentSize,
                      ULONGLONG fFlags,
                     PVOID *ppvMarshalContext
                    );











NTSTATUS ClfsDeleteMarshallingArea (  PVOID pvMarshalContext);











NTSTATUS ClfsReserveAndAppendLog (
                      PVOID pvMarshalContext,
                      PCLFS_WRITE_ENTRY rgWriteEntries,
                      ULONG cWriteEntries,
                      PCLFS_LSN plsnUndoNext,
                      PCLFS_LSN plsnPrevious,
                      ULONG cReserveRecords,
                      PLONGLONG rgcbReservation,
                      ULONG fFlags,
                      PCLFS_LSN plsn
                    );












NTSTATUS ClfsReserveAndAppendLogAligned (
                      PVOID pvMarshalContext,
                      PCLFS_WRITE_ENTRY rgWriteEntries,
                      ULONG cWriteEntries,
                      ULONG cbEntryAlignment,
                      PCLFS_LSN plsnUndoNext,
                      PCLFS_LSN plsnPrevious,
                      ULONG cReserveRecords,
                      PLONGLONG rgcbReservation,
                      ULONG fFlags,
                      PCLFS_LSN plsn
                    );











NTSTATUS ClfsAlignReservedLog (
                      PVOID pvMarshalContext,
                      ULONG cRecords,
                      LONGLONG rgcbReservation [],
                      PLONGLONG pcbAlignReservation
                    );











NTSTATUS ClfsAllocReservedLog (
                      PVOID pvMarshalContext,
                      ULONG cRecords,
                      PLONGLONG pcbAdjustment
                    );











NTSTATUS ClfsFreeReservedLog (
                      PVOID pvMarshalContext,
                      ULONG cRecords,
                      PLONGLONG pcbAdjustment
                    );











NTSTATUS ClfsFlushBuffers (  PVOID pvMarshalContext);











NTSTATUS ClfsFlushToLsn (
                      PVOID pvMarshalContext,
                      PCLFS_LSN plsnFlush,
                      PCLFS_LSN plsnLastFlushed
                    );











NTSTATUS ClfsReadLogRecord (
                      PVOID pvMarshalContext,
                      PCLFS_LSN plsnFirst,
                      CLFS_CONTEXT_MODE peContextMode,
                     PVOID *ppvReadBuffer,
                      PULONG pcbReadBuffer,
                      PCLFS_RECORD_TYPE peRecordType,
                      PCLFS_LSN plsnUndoNext,
                      PCLFS_LSN plsnPrevious,
                     PVOID* ppvReadContext
                    );










NTSTATUS ClfsReadNextLogRecord (
                      PVOID pvReadContext,
                     PVOID *ppvBuffer,
                      PULONG pcbBuffer,
                      PCLFS_RECORD_TYPE peRecordType,
                      PCLFS_LSN plsnUser,
                      PCLFS_LSN plsnUndoNext,
                      PCLFS_LSN plsnPrevious,
                      PCLFS_LSN plsnRecord
                    );










NTSTATUS ClfsTerminateReadLog (  PVOID pvCursorContext);










NTSTATUS ClfsGetLastLsn (
                      PLOG_FILE_OBJECT plfoLog,
                      PCLFS_LSN plsnLast
                    );










NTSTATUS ClfsGetIoStatistics (
                      PLOG_FILE_OBJECT plfoLog,
                      PVOID pvStatsBuffer,
                      ULONG cbStatsBuffer,
                      CLFS_IOSTATS_CLASS eStatsClass,
                      PULONG pcbStatsWritten
                    );























CLFS_LSN
ClfsLaterLsn (  PCLFS_LSN plsn);























CLFS_LSN
ClfsEarlierLsn (  PCLFS_LSN plsn);




























NTSTATUS
ClfsLsnDifference (
      PCLFS_LSN plsnStart,
      PCLFS_LSN plsnFinish,
      ULONG cbContainer,
      ULONG cbMaxBlock,
      PLONGLONG pcbDifference
    );






















BOOLEAN
ClfsValidTopLevelContext (  PIRP pirpTopLevelContext);









typedef struct _KTRANSACTION KTRANSACTION, *PKTRANSACTION, * PRKTRANSACTION;
typedef struct _KENLISTMENT KENLISTMENT, *PKENLISTMENT, * PRKENLISTMENT;
typedef struct _KRESOURCEMANAGER KRESOURCEMANAGER, *PKRESOURCEMANAGER, * PRKRESOURCEMANAGER;
typedef struct _KTM KTM, *PKTM, * PRKTM;

typedef GUID UOW, *PUOW;
typedef GUID *PGUID;





typedef
NTSTATUS
(__stdcall *PTM_RM_NOTIFICATION) (
          PKENLISTMENT EnlistmentObject,
          PVOID RMContext,
          PVOID TransactionContext,
          ULONG TransactionNotification,
       PLARGE_INTEGER TmVirtualClock,
          ULONG ArgumentLength,
          PVOID Argument
    );





typedef GUID KCRM_PROTOCOL_ID, *PKCRM_PROTOCOL_ID;

typedef
NTSTATUS
(__stdcall *PTM_PROPAGATE_ROUTINE) (
      PVOID    PropagationCookie,
      PVOID    CallbackData,
      NTSTATUS PropagationStatus,
      GUID     TransactionGuid
    );





 
 

NTSTATUS
__stdcall
TmInitializeTransactionManager (
      PRKTM TransactionManager,
      PCUNICODE_STRING LogFileName,
      PGUID TmId,
      ULONG CreateOptions
    );


 
 

NTSTATUS
__stdcall
TmRenameTransactionManager (
      PUNICODE_STRING LogFileName,
      LPGUID ExistingTransactionManagerGuid
    );

 
 

NTSTATUS
__stdcall
TmRecoverTransactionManager (
      PKTM Tm,
      PLARGE_INTEGER TargetVirtualClock
    );

 

NTSTATUS
__stdcall
TmCommitTransaction (
      PKTRANSACTION Transaction,
      BOOLEAN       Wait
    );


 

NTSTATUS
__stdcall
TmRollbackTransaction (
      PKTRANSACTION Transaction,
      BOOLEAN       Wait
    );


 
 

NTSTATUS
__stdcall
TmCreateEnlistment (
      PHANDLE           EnlistmentHandle,
      KPROCESSOR_MODE    PreviousMode,
      ACCESS_MASK        DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      PRKRESOURCEMANAGER ResourceManager,
      PKTRANSACTION      Transaction,
      ULONG          CreateOptions,
      NOTIFICATION_MASK  NotificationMask,
      PVOID          EnlistmentKey
    );

 
 

NTSTATUS
__stdcall
TmRecoverEnlistment (
      PKENLISTMENT Enlistment,
      PVOID        EnlistmentKey
    );

 
 

NTSTATUS
__stdcall
TmPrePrepareEnlistment (
      PKENLISTMENT Enlistment,
      PLARGE_INTEGER TmVirtualClock
    );

 
 

NTSTATUS
__stdcall
TmPrepareEnlistment (
      PKENLISTMENT Enlistment,
      PLARGE_INTEGER TmVirtualClock
    );

 
 

NTSTATUS
__stdcall
TmCommitEnlistment (
      PKENLISTMENT Enlistment,
      PLARGE_INTEGER TmVirtualClock
    );

 

NTSTATUS
__stdcall
TmRollbackEnlistment (
      PKENLISTMENT Enlistment,
      PLARGE_INTEGER TmVirtualClock
    );

 

NTSTATUS
__stdcall
TmPrePrepareComplete (
      PKENLISTMENT Enlistment,
      PLARGE_INTEGER TmVirtualClock
    );

 

NTSTATUS
__stdcall
TmPrepareComplete (
      PKENLISTMENT Enlistment,
      PLARGE_INTEGER TmVirtualClock
    );

 

NTSTATUS
__stdcall
TmReadOnlyEnlistment (
      PKENLISTMENT Enlistment,
      PLARGE_INTEGER TmVirtualClock
    );

 

NTSTATUS
__stdcall
TmCommitComplete (
      PKENLISTMENT Enlistment,
      PLARGE_INTEGER TmVirtualClock
    );

 

NTSTATUS
__stdcall
TmRollbackComplete (
      PKENLISTMENT Enlistment,
      PLARGE_INTEGER TmVirtualClock
    );

 
 

NTSTATUS
__stdcall
TmReferenceEnlistmentKey (
      PKENLISTMENT Enlistment,
      PVOID *Key
    );

 
 

NTSTATUS
__stdcall
TmDereferenceEnlistmentKey (
      PKENLISTMENT Enlistment,
      PBOOLEAN LastReference
    );

 

NTSTATUS
__stdcall
TmSinglePhaseReject (
      PKENLISTMENT Enlistment,
      PLARGE_INTEGER TmVirtualClock
    );

 

NTSTATUS
__stdcall
TmRequestOutcomeEnlistment (
      PKENLISTMENT Enlistment,
      PLARGE_INTEGER TmVirtualClock
    );






 
 

NTSTATUS
__stdcall
TmEnableCallbacks (
      PKRESOURCEMANAGER ResourceManager,
      PTM_RM_NOTIFICATION CallbackRoutine,
      PVOID RMKey
    );

 
 

NTSTATUS
__stdcall
TmRecoverResourceManager (
      PKRESOURCEMANAGER ResourceManager
    );

 

NTSTATUS
__stdcall
TmPropagationComplete(
       PKRESOURCEMANAGER ResourceManager,
       ULONG             RequestCookie,
       ULONG             BufferLength,
       PVOID             Buffer
    );

 

NTSTATUS
__stdcall
TmPropagationFailed(
       PKRESOURCEMANAGER ResourceManager,
       ULONG             RequestCookie,
       NTSTATUS          Status
    );

 

void
__stdcall
TmGetTransactionId(
       PKTRANSACTION Transaction,
      PUOW TransactionId
    );

 
 

BOOLEAN
__stdcall
TmIsTransactionActive (
      PKTRANSACTION Transaction
    );













typedef struct _PCW_INSTANCE *PPCW_INSTANCE;
typedef struct _PCW_REGISTRATION *PPCW_REGISTRATION;
typedef struct _PCW_BUFFER *PPCW_BUFFER;

typedef struct _PCW_COUNTER_DESCRIPTOR {
    USHORT Id;
    USHORT StructIndex;
    USHORT Offset;
    USHORT Size;
} PCW_COUNTER_DESCRIPTOR, *PPCW_COUNTER_DESCRIPTOR;

typedef struct _PCW_DATA {
      const void *Data;
      ULONG Size;
} PCW_DATA, *PPCW_DATA;

typedef struct _PCW_COUNTER_INFORMATION {
    ULONG64 CounterMask;
    PCUNICODE_STRING InstanceMask;
} PCW_COUNTER_INFORMATION, *PPCW_COUNTER_INFORMATION;

typedef struct _PCW_MASK_INFORMATION {
    ULONG64 CounterMask;
    PCUNICODE_STRING InstanceMask;
    ULONG InstanceId;
    BOOLEAN CollectMultiple;
    PPCW_BUFFER Buffer;
    PKEVENT CancelEvent;
} PCW_MASK_INFORMATION, *PPCW_MASK_INFORMATION;

typedef union _PCW_CALLBACK_INFORMATION {
    PCW_COUNTER_INFORMATION AddCounter;
    PCW_COUNTER_INFORMATION RemoveCounter;
    PCW_MASK_INFORMATION EnumerateInstances;
    PCW_MASK_INFORMATION CollectData;
} PCW_CALLBACK_INFORMATION, *PPCW_CALLBACK_INFORMATION;

typedef enum _PCW_CALLBACK_TYPE {
    PcwCallbackAddCounter = 0,
    PcwCallbackRemoveCounter,
    PcwCallbackEnumerateInstances,
    PcwCallbackCollectData,
} PCW_CALLBACK_TYPE, *PPCW_CALLBACK_TYPE;

typedef
NTSTATUS __stdcall
PCW_CALLBACK(
      PCW_CALLBACK_TYPE Type,
      PPCW_CALLBACK_INFORMATION Info,
      PVOID Context
    );

typedef PCW_CALLBACK *PPCW_CALLBACK;

typedef enum PCW_REGISTRATION_FLAGS {
    PcwRegistrationNone = 0,


    











    PcwRegistrationSiloNeutral = 0x0001,

} PCW_REGISTRATION_FLAGS;

typedef struct _PCW_REGISTRATION_INFORMATION {
      ULONG Version;
      PCUNICODE_STRING Name;
      ULONG CounterCount;
      PPCW_COUNTER_DESCRIPTOR Counters;
      PPCW_CALLBACK Callback;
      PVOID CallbackContext;

    
    PCW_REGISTRATION_FLAGS Flags;

} PCW_REGISTRATION_INFORMATION, *PPCW_REGISTRATION_INFORMATION;


 
NTSTATUS
__stdcall
PcwRegister(
     PPCW_REGISTRATION *Registration,
      PPCW_REGISTRATION_INFORMATION Info
    );



 
void
__stdcall
PcwUnregister(
      PPCW_REGISTRATION Registration
    );



 
NTSTATUS
__stdcall
PcwCreateInstance(
     PPCW_INSTANCE *Instance,
      PPCW_REGISTRATION Registration,
      PCUNICODE_STRING Name,
      ULONG Count,
      PPCW_DATA Data
    );



 
void
__stdcall
PcwCloseInstance(
      PPCW_INSTANCE Instance
    );



 
NTSTATUS
__stdcall
PcwAddInstance(
      PPCW_BUFFER Buffer,
      PCUNICODE_STRING Name,
      ULONG Id,
      ULONG Count,
      PPCW_DATA Data
    );







 
NTSTATUS
VslCreateSecureSection (
      PHANDLE Handle,
      PEPROCESS TargetProcess,
      PMDL Mdl,
      ULONG DevicePageProtection,
      ULONG Attributes
    );

 
NTSTATUS
VslDeleteSecureSection (
      HANDLE GlobalHandle
    );





















































typedef enum _DRIVER_RUNTIME_INIT_FLAGS {
    
    
    
    
    
    
    

    DrvRtPoolNxOptIn             = 0x00000001,

    LastDrvRtFlag
} DRIVER_RUNTIME_INIT_FLAGS, * PDRIVER_RUNTIME_INIT_FLAGS;

typedef const enum _DRIVER_RUNTIME_INIT_FLAGS * PCDRIVER_RUNTIME_INIT_FLAGS;


















void
ExInitializeDriverRuntime(
      ULONG RuntimeFlags
    )

;
















extern POBJECT_TYPE *CmKeyObjectType;
extern POBJECT_TYPE *IoFileObjectType;
extern POBJECT_TYPE *ExEventObjectType;
extern POBJECT_TYPE *ExSemaphoreObjectType;
extern POBJECT_TYPE *TmTransactionManagerObjectType;
extern POBJECT_TYPE *TmResourceManagerObjectType;
extern POBJECT_TYPE *TmEnlistmentObjectType;
extern POBJECT_TYPE *TmTransactionObjectType;
extern POBJECT_TYPE *PsProcessType;
extern POBJECT_TYPE *PsThreadType;
extern POBJECT_TYPE *PsJobType;
extern POBJECT_TYPE *SeTokenObjectType;



extern POBJECT_TYPE *ExDesktopObjectType;






























typedef struct _BUS_HANDLER *PBUS_HANDLER;
typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT;
typedef struct _DEVICE_HANDLER_OBJECT *PDEVICE_HANDLER_OBJECT;








typedef struct _EPROCESS *PEPROCESS;
typedef struct _ETHREAD *PETHREAD;

typedef struct _EJOB *PEJOB;

typedef struct _EJOB *PESILO;
typedef struct _SILO_MONITOR *PSILO_MONITOR;

typedef struct _IO_TIMER *PIO_TIMER;
typedef struct _KINTERRUPT *PKINTERRUPT;
typedef struct _KTHREAD *PKTHREAD, *PRKTHREAD;
typedef struct _OBJECT_TYPE *POBJECT_TYPE;
typedef struct _PEB *PPEB;
typedef struct _IMAGE_NT_HEADERS *PIMAGE_NT_HEADERS32;
typedef struct _IMAGE_NT_HEADERS64 *PIMAGE_NT_HEADERS64;

typedef PIMAGE_NT_HEADERS64 PIMAGE_NT_HEADERS;








extern  volatile CCHAR KeNumberProcessors;











extern POBJECT_TYPE *PsProcessType;
extern POBJECT_TYPE *PsThreadType;
extern POBJECT_TYPE *PsJobType;

extern POBJECT_TYPE *PsSiloContextPagedType;
extern POBJECT_TYPE *PsSiloContextNonPagedType;























































































































































































































































































































































































































































































































typedef struct  __pragma(warning(push)) __pragma(warning(disable:4845))  __pragma(warning(pop)) _CONTEXT {

    
    
    
    
    
    

    ULONG64 P1Home;
    ULONG64 P2Home;
    ULONG64 P3Home;
    ULONG64 P4Home;
    ULONG64 P5Home;
    ULONG64 P6Home;

    
    
    

    ULONG ContextFlags;
    ULONG MxCsr;

    
    
    

    USHORT SegCs;
    USHORT SegDs;
    USHORT SegEs;
    USHORT SegFs;
    USHORT SegGs;
    USHORT SegSs;
    ULONG EFlags;

    
    
    

    ULONG64 Dr0;
    ULONG64 Dr1;
    ULONG64 Dr2;
    ULONG64 Dr3;
    ULONG64 Dr6;
    ULONG64 Dr7;

    
    
    

    ULONG64 Rax;
    ULONG64 Rcx;
    ULONG64 Rdx;
    ULONG64 Rbx;
    ULONG64 Rsp;
    ULONG64 Rbp;
    ULONG64 Rsi;
    ULONG64 Rdi;
    ULONG64 R8;
    ULONG64 R9;
    ULONG64 R10;
    ULONG64 R11;
    ULONG64 R12;
    ULONG64 R13;
    ULONG64 R14;
    ULONG64 R15;

    
    
    

    ULONG64 Rip;

    
    
    

    union {
        XMM_SAVE_AREA32 FltSave;
        struct {
            M128A Header[2];
            M128A Legacy[8];
            M128A Xmm0;
            M128A Xmm1;
            M128A Xmm2;
            M128A Xmm3;
            M128A Xmm4;
            M128A Xmm5;
            M128A Xmm6;
            M128A Xmm7;
            M128A Xmm8;
            M128A Xmm9;
            M128A Xmm10;
            M128A Xmm11;
            M128A Xmm12;
            M128A Xmm13;
            M128A Xmm14;
            M128A Xmm15;
        } ;
    } ;

    
    
    

    M128A VectorRegister[26];
    ULONG64 VectorControl;

    
    
    

    ULONG64 DebugControl;
    ULONG64 LastBranchToRip;
    ULONG64 LastBranchFromRip;
    ULONG64 LastExceptionToRip;
    ULONG64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT;










































































































































































































































































































































































typedef union _ARM64_NT_NEON128 {
    struct {
        ULONGLONG Low;
        LONGLONG High;
    } ;
    double D[2];
    float S[4];
    USHORT H[8];
    UCHAR B[16];
} ARM64_NT_NEON128, *PARM64_NT_NEON128;



















typedef struct  __pragma(warning(push)) __pragma(warning(disable:4845))  __pragma(warning(pop)) _ARM64_NT_CONTEXT {

    
    
    

     ULONG ContextFlags;

    
    
    

     ULONG Cpsr;       
     union {
                    struct {
                        ULONG64 X0;
                        ULONG64 X1;
                        ULONG64 X2;
                        ULONG64 X3;
                        ULONG64 X4;
                        ULONG64 X5;
                        ULONG64 X6;
                        ULONG64 X7;
                        ULONG64 X8;
                        ULONG64 X9;
                        ULONG64 X10;
                        ULONG64 X11;
                        ULONG64 X12;
                        ULONG64 X13;
                        ULONG64 X14;
                        ULONG64 X15;
                        ULONG64 X16;
                        ULONG64 X17;
                        ULONG64 X18;
                        ULONG64 X19;
                        ULONG64 X20;
                        ULONG64 X21;
                        ULONG64 X22;
                        ULONG64 X23;
                        ULONG64 X24;
                        ULONG64 X25;
                        ULONG64 X26;
                        ULONG64 X27;
                        ULONG64 X28;
            ULONG64 Fp;
            ULONG64 Lr;
                    } ;
                    ULONG64 X[31];
                 } ;
     ULONG64 Sp;
     ULONG64 Pc;

    
    
    

     ARM64_NT_NEON128 V[32];
     ULONG Fpcr;
     ULONG Fpsr;

    
    
    

     ULONG Bcr[8];
     ULONG64 Bvr[8];
     ULONG Wcr[2];
     ULONG64 Wvr[2];
    

} ARM64_NT_CONTEXT, *PARM64_NT_CONTEXT;













typedef struct  __pragma(warning(push)) __pragma(warning(disable:4845))  __pragma(warning(pop)) _ARM64EC_NT_CONTEXT {
    union {
        struct {

            
            
            

             ULONG64 AMD64_P1Home;
             ULONG64 AMD64_P2Home;
             ULONG64 AMD64_P3Home;
             ULONG64 AMD64_P4Home;
             ULONG64 AMD64_P5Home;
             ULONG64 AMD64_P6Home;

            
            
            

             ULONG ContextFlags;

             ULONG AMD64_MxCsr_copy;

            
            
            
            

             USHORT AMD64_SegCs;
             USHORT AMD64_SegDs;
             USHORT AMD64_SegEs;
             USHORT AMD64_SegFs;
             USHORT AMD64_SegGs;
             USHORT AMD64_SegSs;

            
            
            

             ULONG AMD64_EFlags;

            
            
            

             ULONG64 AMD64_Dr0;
             ULONG64 AMD64_Dr1;
             ULONG64 AMD64_Dr2;
             ULONG64 AMD64_Dr3;
             ULONG64 AMD64_Dr6;
             ULONG64 AMD64_Dr7;

            
            
            

             ULONG64 X8;     
             ULONG64 X0;     
             ULONG64 X1;     
             ULONG64 X27;    
             ULONG64 Sp;     
             ULONG64 Fp;     
             ULONG64 X25;    
             ULONG64 X26;    
             ULONG64 X2;     
             ULONG64 X3;     
             ULONG64 X4;     
             ULONG64 X5;     
             ULONG64 X19;    
             ULONG64 X20;    
             ULONG64 X21;    
             ULONG64 X22;    

            
            
            

             ULONG64 Pc;     

            
            
            

            struct {
                 USHORT AMD64_ControlWord;
                 USHORT AMD64_StatusWord;
                 UCHAR AMD64_TagWord;
                 UCHAR AMD64_Reserved1;
                 USHORT AMD64_ErrorOpcode;
                 ULONG AMD64_ErrorOffset;
                 USHORT AMD64_ErrorSelector;
                 USHORT AMD64_Reserved2;
                 ULONG AMD64_DataOffset;
                 USHORT AMD64_DataSelector;
                 USHORT AMD64_Reserved3;

                 ULONG AMD64_MxCsr;
                 ULONG AMD64_MxCsr_Mask;

                 ULONG64 Lr;                 
                 USHORT X16_0;               
                 USHORT AMD64_St0_Reserved1;
                 ULONG AMD64_St0_Reserved2;
                 ULONG64 X6;                 
                 USHORT X16_1;               
                 USHORT AMD64_St1_Reserved1;
                 ULONG AMD64_St1_Reserved2;
                 ULONG64 X7;                 
                 USHORT X16_2;               
                 USHORT AMD64_St2_Reserved1;
                 ULONG AMD64_St2_Reserved2;
                 ULONG64 X9;                 
                 USHORT X16_3;               
                 USHORT AMD64_St3_Reserved1;
                 ULONG AMD64_St3_Reserved2;
                 ULONG64 X10;                
                 USHORT X17_0;               
                 USHORT AMD64_St4_Reserved1;
                 ULONG AMD64_St4_Reserved2;
                 ULONG64 X11;                
                 USHORT X17_1;               
                 USHORT AMD64_St5_Reserved1;
                 ULONG AMD64_St5_Reserved2;
                 ULONG64 X12;                
                 USHORT X17_2;               
                 USHORT AMD64_St6_Reserved1;
                 ULONG AMD64_St6_Reserved2;
                 ULONG64 X15;                
                 USHORT X17_3;               
                 USHORT AMD64_St7_Reserved1;
                 ULONG AMD64_St7_Reserved2;

                 ARM64_NT_NEON128 V[16];     
                 UCHAR AMD64_XSAVE_FORMAT_Reserved4[96];
            } ;

            
            
            

             ARM64_NT_NEON128 AMD64_VectorRegister[26];
             ULONG64 AMD64_VectorControl;

            
            
            

             ULONG64 AMD64_DebugControl;
             ULONG64 AMD64_LastBranchToRip;
             ULONG64 AMD64_LastBranchFromRip;
             ULONG64 AMD64_LastExceptionToRip;
             ULONG64 AMD64_LastExceptionFromRip;
            

        } ;

    





    } ;
} ARM64EC_NT_CONTEXT, *PARM64EC_NT_CONTEXT;
















typedef enum {

    WinNullSid                                  = 0,
    WinWorldSid                                 = 1,
    WinLocalSid                                 = 2,
    WinCreatorOwnerSid                          = 3,
    WinCreatorGroupSid                          = 4,
    WinCreatorOwnerServerSid                    = 5,
    WinCreatorGroupServerSid                    = 6,
    WinNtAuthoritySid                           = 7,
    WinDialupSid                                = 8,
    WinNetworkSid                               = 9,
    WinBatchSid                                 = 10,
    WinInteractiveSid                           = 11,
    WinServiceSid                               = 12,
    WinAnonymousSid                             = 13,
    WinProxySid                                 = 14,
    WinEnterpriseControllersSid                 = 15,
    WinSelfSid                                  = 16,
    WinAuthenticatedUserSid                     = 17,
    WinRestrictedCodeSid                        = 18,
    WinTerminalServerSid                        = 19,
    WinRemoteLogonIdSid                         = 20,
    WinLogonIdsSid                              = 21,
    WinLocalSystemSid                           = 22,
    WinLocalServiceSid                          = 23,
    WinNetworkServiceSid                        = 24,
    WinBuiltinDomainSid                         = 25,
    WinBuiltinAdministratorsSid                 = 26,
    WinBuiltinUsersSid                          = 27,
    WinBuiltinGuestsSid                         = 28,
    WinBuiltinPowerUsersSid                     = 29,
    WinBuiltinAccountOperatorsSid               = 30,
    WinBuiltinSystemOperatorsSid                = 31,
    WinBuiltinPrintOperatorsSid                 = 32,
    WinBuiltinBackupOperatorsSid                = 33,
    WinBuiltinReplicatorSid                     = 34,
    WinBuiltinPreWindows2000CompatibleAccessSid = 35,
    WinBuiltinRemoteDesktopUsersSid             = 36,
    WinBuiltinNetworkConfigurationOperatorsSid  = 37,
    WinAccountAdministratorSid                  = 38,
    WinAccountGuestSid                          = 39,
    WinAccountKrbtgtSid                         = 40,
    WinAccountDomainAdminsSid                   = 41,
    WinAccountDomainUsersSid                    = 42,
    WinAccountDomainGuestsSid                   = 43,
    WinAccountComputersSid                      = 44,
    WinAccountControllersSid                    = 45,
    WinAccountCertAdminsSid                     = 46,
    WinAccountSchemaAdminsSid                   = 47,
    WinAccountEnterpriseAdminsSid               = 48,
    WinAccountPolicyAdminsSid                   = 49,
    WinAccountRasAndIasServersSid               = 50,
    WinNTLMAuthenticationSid                    = 51,
    WinDigestAuthenticationSid                  = 52,
    WinSChannelAuthenticationSid                = 53,
    WinThisOrganizationSid                      = 54,
    WinOtherOrganizationSid                     = 55,
    WinBuiltinIncomingForestTrustBuildersSid    = 56,
    WinBuiltinPerfMonitoringUsersSid            = 57,
    WinBuiltinPerfLoggingUsersSid               = 58,
    WinBuiltinAuthorizationAccessSid            = 59,
    WinBuiltinTerminalServerLicenseServersSid   = 60,
    WinBuiltinDCOMUsersSid                      = 61,
    WinBuiltinIUsersSid                         = 62,
    WinIUserSid                                 = 63,
    WinBuiltinCryptoOperatorsSid                = 64,
    WinUntrustedLabelSid                        = 65,
    WinLowLabelSid                              = 66,
    WinMediumLabelSid                           = 67,
    WinHighLabelSid                             = 68,
    WinSystemLabelSid                           = 69,
    WinWriteRestrictedCodeSid                   = 70,
    WinCreatorOwnerRightsSid                    = 71,
    WinCacheablePrincipalsGroupSid              = 72,
    WinNonCacheablePrincipalsGroupSid           = 73,
    WinEnterpriseReadonlyControllersSid         = 74,
    WinAccountReadonlyControllersSid            = 75,
    WinBuiltinEventLogReadersGroup              = 76,
    WinNewEnterpriseReadonlyControllersSid      = 77,
    WinBuiltinCertSvcDComAccessGroup            = 78,
    WinMediumPlusLabelSid                       = 79,
    WinLocalLogonSid                            = 80,
    WinConsoleLogonSid                          = 81,
    WinThisOrganizationCertificateSid           = 82,
    WinApplicationPackageAuthoritySid           = 83,
    WinBuiltinAnyPackageSid                     = 84,
    WinCapabilityInternetClientSid              = 85,
    WinCapabilityInternetClientServerSid        = 86,
    WinCapabilityPrivateNetworkClientServerSid  = 87,
    WinCapabilityPicturesLibrarySid             = 88,
    WinCapabilityVideosLibrarySid               = 89,
    WinCapabilityMusicLibrarySid                = 90,
    WinCapabilityDocumentsLibrarySid            = 91,
    WinCapabilitySharedUserCertificatesSid      = 92,
    WinCapabilityEnterpriseAuthenticationSid    = 93,
    WinCapabilityRemovableStorageSid            = 94,
    WinBuiltinRDSRemoteAccessServersSid         = 95,
    WinBuiltinRDSEndpointServersSid             = 96,
    WinBuiltinRDSManagementServersSid           = 97,
    WinUserModeDriversSid                       = 98,
    WinBuiltinHyperVAdminsSid                   = 99,
    WinAccountCloneableControllersSid           = 100,
    WinBuiltinAccessControlAssistanceOperatorsSid = 101,
    WinBuiltinRemoteManagementUsersSid          = 102,
    WinAuthenticationAuthorityAssertedSid       = 103,
    WinAuthenticationServiceAssertedSid         = 104,
    WinLocalAccountSid                          = 105,
    WinLocalAccountAndAdministratorSid          = 106,
    WinAccountProtectedUsersSid                 = 107,
    WinCapabilityAppointmentsSid                = 108,
    WinCapabilityContactsSid                    = 109,
    WinAccountDefaultSystemManagedSid           = 110,
    WinBuiltinDefaultSystemManagedGroupSid      = 111,
    WinBuiltinStorageReplicaAdminsSid           = 112,
    WinAccountKeyAdminsSid                      = 113,
    WinAccountEnterpriseKeyAdminsSid            = 114,
    WinAuthenticationKeyTrustSid                = 115,
    WinAuthenticationKeyPropertyMFASid          = 116,
    WinAuthenticationKeyPropertyAttestationSid  = 117,
    WinAuthenticationFreshKeyAuthSid            = 118,
    WinBuiltinDeviceOwnersSid                   = 119,
} WELL_KNOWN_SID_TYPE;












typedef UCHAR SE_SIGNING_LEVEL, *PSE_SIGNING_LEVEL;
























typedef enum _SE_IMAGE_SIGNATURE_TYPE
{
    SeImageSignatureNone = 0,
    SeImageSignatureEmbedded,
    SeImageSignatureCache,
    SeImageSignatureCatalogCached,
    SeImageSignatureCatalogNotCached,
    SeImageSignatureCatalogHint,
    SeImageSignaturePackageCatalog,
    SeImageSignaturePplMitigated
} SE_IMAGE_SIGNATURE_TYPE, *PSE_IMAGE_SIGNATURE_TYPE;














































































































































































































































































































































































































































































































































































































































typedef union _RTL_RUN_ONCE {       
    PVOID Ptr;                      
} RTL_RUN_ONCE, *PRTL_RUN_ONCE;     

typedef
 
 
ULONG 
__stdcall
RTL_RUN_ONCE_INIT_FN (
      PRTL_RUN_ONCE RunOnce,
      PVOID Parameter,
      PVOID *Context
    );
typedef RTL_RUN_ONCE_INIT_FN *PRTL_RUN_ONCE_INIT_FN;









 

void
__stdcall
RtlRunOnceInitialize (
      PRTL_RUN_ONCE RunOnce
    );

 
 

NTSTATUS
__stdcall
RtlRunOnceExecuteOnce (
      PRTL_RUN_ONCE RunOnce,
       PRTL_RUN_ONCE_INIT_FN InitFn,
      PVOID Parameter,
     PVOID *Context
    );

 
 

NTSTATUS
__stdcall
RtlRunOnceBeginInitialize (
      PRTL_RUN_ONCE RunOnce,
      ULONG Flags,
     PVOID *Context
    );

 

NTSTATUS
__stdcall
RtlRunOnceComplete (
      PRTL_RUN_ONCE RunOnce,
      ULONG Flags,
      PVOID Context
    );












typedef enum _TABLE_SEARCH_RESULT{
    TableEmptyTree,
    TableFoundNode,
    TableInsertAsLeft,
    TableInsertAsRight
} TABLE_SEARCH_RESULT;





typedef enum _RTL_GENERIC_COMPARE_RESULTS {
    GenericLessThan,
    GenericGreaterThan,
    GenericEqual
} RTL_GENERIC_COMPARE_RESULTS;




















struct _RTL_AVL_TABLE;







typedef
 
 
RTL_GENERIC_COMPARE_RESULTS
__stdcall
RTL_AVL_COMPARE_ROUTINE (
      struct _RTL_AVL_TABLE *Table,
      PVOID FirstStruct,
      PVOID SecondStruct
    );
typedef RTL_AVL_COMPARE_ROUTINE *PRTL_AVL_COMPARE_ROUTINE;






typedef
 
 
 
PVOID
__stdcall
RTL_AVL_ALLOCATE_ROUTINE (
      struct _RTL_AVL_TABLE *Table,
      CLONG ByteSize
    );
typedef RTL_AVL_ALLOCATE_ROUTINE *PRTL_AVL_ALLOCATE_ROUTINE;







typedef
 
 
void
__stdcall
RTL_AVL_FREE_ROUTINE (
      struct _RTL_AVL_TABLE *Table,
          PVOID Buffer
    );
typedef RTL_AVL_FREE_ROUTINE *PRTL_AVL_FREE_ROUTINE;















typedef
 
 
NTSTATUS
__stdcall
RTL_AVL_MATCH_FUNCTION (
      struct _RTL_AVL_TABLE *Table,
      PVOID UserData,
      PVOID MatchData
    );
typedef RTL_AVL_MATCH_FUNCTION *PRTL_AVL_MATCH_FUNCTION;



















typedef struct _RTL_BALANCED_LINKS {
    struct _RTL_BALANCED_LINKS *Parent;
    struct _RTL_BALANCED_LINKS *LeftChild;
    struct _RTL_BALANCED_LINKS *RightChild;
    CHAR Balance;
    UCHAR Reserved[3];
} RTL_BALANCED_LINKS;
typedef RTL_BALANCED_LINKS *PRTL_BALANCED_LINKS;









typedef struct _RTL_AVL_TABLE {
    RTL_BALANCED_LINKS BalancedRoot;
    PVOID OrderedPointer;
    ULONG WhichOrderedElement;
    ULONG NumberGenericTableElements;
    ULONG DepthOfTree;
    PRTL_BALANCED_LINKS RestartKey;
    ULONG DeleteCount;
    PRTL_AVL_COMPARE_ROUTINE CompareRoutine;
    PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine;
    PRTL_AVL_FREE_ROUTINE FreeRoutine;
    PVOID TableContext;
} RTL_AVL_TABLE;
typedef RTL_AVL_TABLE *PRTL_AVL_TABLE;










void
__stdcall
RtlInitializeGenericTableAvl (
      PRTL_AVL_TABLE Table,
      PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
      PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
      PRTL_AVL_FREE_ROUTINE FreeRoutine,
      PVOID TableContext
    );

















PVOID
__stdcall
RtlInsertElementGenericTableAvl (
      PRTL_AVL_TABLE Table,
      PVOID Buffer,
      CLONG BufferSize,
      PBOOLEAN NewElement
    );



















PVOID
__stdcall
RtlInsertElementGenericTableFullAvl (
      PRTL_AVL_TABLE Table,
      PVOID Buffer,
      CLONG BufferSize,
      PBOOLEAN NewElement,
      PVOID NodeOrParent,
      TABLE_SEARCH_RESULT SearchResult
    );












BOOLEAN
__stdcall
RtlDeleteElementGenericTableAvl (
      PRTL_AVL_TABLE Table,
      PVOID Buffer
    );










void
__stdcall
RtlDeleteElementGenericTableAvlEx (
      PRTL_AVL_TABLE Table,
      PVOID NodeOrParent
    );












 

PVOID
__stdcall
RtlLookupElementGenericTableAvl (
      PRTL_AVL_TABLE Table,
      PVOID Buffer
    );














PVOID
__stdcall
RtlLookupElementGenericTableFullAvl (
      PRTL_AVL_TABLE Table,
      PVOID Buffer,
      PVOID *NodeOrParent,
      TABLE_SEARCH_RESULT *SearchResult
    );
























 

PVOID
__stdcall
RtlEnumerateGenericTableAvl (
      PRTL_AVL_TABLE Table,
      BOOLEAN Restart
    );





























 

PVOID
__stdcall
RtlEnumerateGenericTableWithoutSplayingAvl (
      PRTL_AVL_TABLE Table,
      PVOID *RestartKey
    );












 

PVOID
__stdcall
RtlLookupFirstMatchingElementGenericTableAvl (
      PRTL_AVL_TABLE Table,
      PVOID Buffer,
      PVOID *RestartKey
    );



































 

PVOID
__stdcall
RtlEnumerateGenericTableLikeADirectory (
      PRTL_AVL_TABLE Table,
      PRTL_AVL_MATCH_FUNCTION MatchFunction,
      PVOID MatchData,
      ULONG NextFlag,
      PVOID *RestartKey,
      PULONG DeleteCount,
      PVOID Buffer
    );












 

PVOID
__stdcall
RtlGetElementGenericTableAvl (
      PRTL_AVL_TABLE Table,
      ULONG I
    );









ULONG
__stdcall
RtlNumberGenericTableElementsAvl (
      PRTL_AVL_TABLE Table
    );












 

BOOLEAN
__stdcall
RtlIsGenericTableEmptyAvl (
      PRTL_AVL_TABLE Table
    );



























































typedef struct _RTL_SPLAY_LINKS {
    struct _RTL_SPLAY_LINKS *Parent;
    struct _RTL_SPLAY_LINKS *LeftChild;
    struct _RTL_SPLAY_LINKS *RightChild;
} RTL_SPLAY_LINKS;
typedef RTL_SPLAY_LINKS *PRTL_SPLAY_LINKS;





void
RtlInitializeSplayLinks (
      PRTL_SPLAY_LINKS Links
    )








;



































































































void
RtlInsertAsLeftChild (
      PRTL_SPLAY_LINKS ParentLinks,
      PRTL_SPLAY_LINKS ChildLinks
    )









;


void
RtlInsertAsRightChild (
      PRTL_SPLAY_LINKS ParentLinks,
      PRTL_SPLAY_LINKS ChildLinks
    )









;












PRTL_SPLAY_LINKS
__stdcall
RtlSplay (
      PRTL_SPLAY_LINKS Links
    );












PRTL_SPLAY_LINKS
__stdcall
RtlDelete (
      PRTL_SPLAY_LINKS Links
    );













void
__stdcall
RtlDeleteNoSplay (
      PRTL_SPLAY_LINKS Links,
      PRTL_SPLAY_LINKS *Root
    );










 

PRTL_SPLAY_LINKS
__stdcall
RtlSubtreeSuccessor (
      PRTL_SPLAY_LINKS Links
    );










 

PRTL_SPLAY_LINKS
__stdcall
RtlSubtreePredecessor (
      PRTL_SPLAY_LINKS Links
    );









 

PRTL_SPLAY_LINKS
__stdcall
RtlRealSuccessor (
      PRTL_SPLAY_LINKS Links
    );










 

PRTL_SPLAY_LINKS
__stdcall
RtlRealPredecessor (
      PRTL_SPLAY_LINKS Links
    );




























struct _RTL_GENERIC_TABLE;







typedef
 
 
RTL_GENERIC_COMPARE_RESULTS
__stdcall
RTL_GENERIC_COMPARE_ROUTINE (
      struct _RTL_GENERIC_TABLE *Table,
      PVOID FirstStruct,
      PVOID SecondStruct
    );
typedef RTL_GENERIC_COMPARE_ROUTINE *PRTL_GENERIC_COMPARE_ROUTINE;






typedef
 
 
 
PVOID
__stdcall
RTL_GENERIC_ALLOCATE_ROUTINE (
      struct _RTL_GENERIC_TABLE *Table,
      CLONG ByteSize
    );
typedef RTL_GENERIC_ALLOCATE_ROUTINE *PRTL_GENERIC_ALLOCATE_ROUTINE;







typedef
 
 
void
__stdcall
RTL_GENERIC_FREE_ROUTINE (
      struct _RTL_GENERIC_TABLE *Table,
          PVOID Buffer
    );
typedef RTL_GENERIC_FREE_ROUTINE *PRTL_GENERIC_FREE_ROUTINE;








typedef struct _RTL_GENERIC_TABLE {
    PRTL_SPLAY_LINKS TableRoot;
    LIST_ENTRY InsertOrderList;
    PLIST_ENTRY OrderedPointer;
    ULONG WhichOrderedElement;
    ULONG NumberGenericTableElements;
    PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine;
    PRTL_GENERIC_ALLOCATE_ROUTINE AllocateRoutine;
    PRTL_GENERIC_FREE_ROUTINE FreeRoutine;
    PVOID TableContext;
} RTL_GENERIC_TABLE;
typedef RTL_GENERIC_TABLE *PRTL_GENERIC_TABLE;










void
__stdcall
RtlInitializeGenericTable (
      PRTL_GENERIC_TABLE Table,
      PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine,
      PRTL_GENERIC_ALLOCATE_ROUTINE AllocateRoutine,
      PRTL_GENERIC_FREE_ROUTINE FreeRoutine,
      PVOID TableContext
    );

















PVOID
__stdcall
RtlInsertElementGenericTable (
      PRTL_GENERIC_TABLE Table,
      PVOID Buffer,
      CLONG BufferSize,
      PBOOLEAN NewElement
    );



















PVOID
__stdcall
RtlInsertElementGenericTableFull (
      PRTL_GENERIC_TABLE Table,
      PVOID Buffer,
      CLONG BufferSize,
      PBOOLEAN NewElement,
      PVOID NodeOrParent,
      TABLE_SEARCH_RESULT SearchResult
    );












BOOLEAN
__stdcall
RtlDeleteElementGenericTable (
      PRTL_GENERIC_TABLE Table,
      PVOID Buffer
    );











 

PVOID
__stdcall
RtlLookupElementGenericTable (
      PRTL_GENERIC_TABLE Table,
      PVOID Buffer
    );














PVOID
__stdcall
RtlLookupElementGenericTableFull (
      PRTL_GENERIC_TABLE Table,
      PVOID Buffer,
      PVOID *NodeOrParent,
      TABLE_SEARCH_RESULT *SearchResult
    );


























 

PVOID
__stdcall
RtlEnumerateGenericTable (
      PRTL_GENERIC_TABLE Table,
      BOOLEAN Restart
    );




























 

PVOID
__stdcall
RtlEnumerateGenericTableWithoutSplaying (
      PRTL_GENERIC_TABLE Table,
      PVOID *RestartKey
    );












 

PVOID
__stdcall
RtlGetElementGenericTable(
      PRTL_GENERIC_TABLE Table,
      ULONG I
    );









ULONG
__stdcall
RtlNumberGenericTableElements(
      PRTL_GENERIC_TABLE Table
    );









 

BOOLEAN
__stdcall
RtlIsGenericTableEmpty (
      PRTL_GENERIC_TABLE Table
    );





















typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
    LIST_ENTRY Linkage;
    ULONG_PTR Signature;
} RTL_DYNAMIC_HASH_TABLE_ENTRY, *PRTL_DYNAMIC_HASH_TABLE_ENTRY;





























typedef struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT {
    PLIST_ENTRY ChainHead;
    PLIST_ENTRY PrevLinkage;
    ULONG_PTR Signature;
} RTL_DYNAMIC_HASH_TABLE_CONTEXT, *PRTL_DYNAMIC_HASH_TABLE_CONTEXT;

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
    union {
       RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
       PLIST_ENTRY CurEntry;
    };
    PLIST_ENTRY ChainHead;
    ULONG BucketIndex;
} RTL_DYNAMIC_HASH_TABLE_ENUMERATOR, *PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR;

typedef struct _RTL_DYNAMIC_HASH_TABLE {

    
    ULONG Flags;
    ULONG Shift;

    
    ULONG TableSize;
    ULONG Pivot;
    ULONG DivisorMask;

    
    ULONG NumEntries;
    ULONG NonEmptyBuckets;
    ULONG NumEnumerators;

    
    PVOID Directory;

} RTL_DYNAMIC_HASH_TABLE, *PRTL_DYNAMIC_HASH_TABLE;









void
RtlInitHashTableContext(
      PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    )
;




void
RtlInitHashTableContextFromEnumerator(
      PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context,
      PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    )
;




void
RtlReleaseHashTableContext(
      PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    )
;




ULONG
RtlTotalBucketsHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable
    )
;




ULONG
RtlNonEmptyBucketsHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable
    )
;




ULONG
RtlEmptyBucketsHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable
    )
;




ULONG
RtlTotalEntriesHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable
    )
;




ULONG
RtlActiveEnumeratorsHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable
    )
;













 
 

BOOLEAN
__stdcall
RtlCreateHashTable(
      
        PRTL_DYNAMIC_HASH_TABLE *HashTable,
      ULONG Shift,
      ULONG Flags
    );



 
 

BOOLEAN
__stdcall
RtlCreateHashTableEx(
      
        PRTL_DYNAMIC_HASH_TABLE *HashTable,
      ULONG InitialSize,
      ULONG Shift,
      ULONG Flags
    );




void
__stdcall
RtlDeleteHashTable(
      
        PRTL_DYNAMIC_HASH_TABLE HashTable
    );




BOOLEAN
__stdcall
RtlInsertEntryHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
      ULONG_PTR Signature,
      PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    );




BOOLEAN
__stdcall
RtlRemoveEntryHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
      PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    );



 

PRTL_DYNAMIC_HASH_TABLE_ENTRY
__stdcall
RtlLookupEntryHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      ULONG_PTR Signature,
      PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    );



 

PRTL_DYNAMIC_HASH_TABLE_ENTRY
__stdcall
RtlGetNextEntryHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context
    );




BOOLEAN
__stdcall
RtlInitEnumerationHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );



 

PRTL_DYNAMIC_HASH_TABLE_ENTRY
__stdcall
RtlEnumerateEntryHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );




void
__stdcall
RtlEndEnumerationHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );




BOOLEAN
__stdcall
RtlInitWeakEnumerationHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );



 

PRTL_DYNAMIC_HASH_TABLE_ENTRY
__stdcall
RtlWeaklyEnumerateEntryHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );




void
__stdcall
RtlEndWeakEnumerationHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );




BOOLEAN
__stdcall
RtlInitStrongEnumerationHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );



 

PRTL_DYNAMIC_HASH_TABLE_ENTRY
__stdcall
RtlStronglyEnumerateEntryHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );




void
__stdcall
RtlEndStrongEnumerationHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable,
      PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator
    );





BOOLEAN
__stdcall
RtlExpandHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable
    );




BOOLEAN
__stdcall
RtlContractHashTable(
      PRTL_DYNAMIC_HASH_TABLE HashTable
    );







PVOID
_ReturnAddress (
    void
    );















void
__stdcall
RtlGetCallersAddress(
      PVOID *CallersAddress,
      PVOID *CallersCaller
    );

















ULONG
__stdcall
RtlWalkFrameChain (
      PVOID *Callers,
      ULONG Count,
      ULONG Flags
    );





 

ULONG64
__stdcall
RtlGetEnabledExtendedFeatures(
      ULONG64 FeatureMask
    );




 

NTSTATUS
__stdcall
RtlCharToInteger (
      PCSZ String,
      ULONG Base,
      PULONG Value
    );





void
__stdcall
RtlCopyString(
      PSTRING DestinationString,
      const STRING * SourceString
    );



 

CHAR
__stdcall
RtlUpperChar (
      CHAR Character
    );





 
 

LONG
__stdcall
RtlCompareString(
      const STRING * String1,
      const STRING * String2,
      BOOLEAN CaseInSensitive
    );



 
 

BOOLEAN
__stdcall
RtlEqualString(
      const STRING * String1,
      const STRING * String2,
      BOOLEAN CaseInSensitive
    );





 

void
__stdcall
RtlUpperString(
      PSTRING DestinationString,
      const STRING * SourceString
    );



 
 

BOOLEAN
__stdcall
RtlPrefixUnicodeString(
      PCUNICODE_STRING String1,
      PCUNICODE_STRING String2,
      BOOLEAN CaseInSensitive
    );



 
 

BOOLEAN
__stdcall
RtlSuffixUnicodeString(
      PCUNICODE_STRING String1,
      PCUNICODE_STRING String2,
      BOOLEAN CaseInSensitive
    );



 


NTSTATUS
__stdcall
RtlUpcaseUnicodeString(
    
    
        PUNICODE_STRING DestinationString,
      PCUNICODE_STRING SourceString,
      BOOLEAN AllocateDestinationString
    );








         
 

LARGE_INTEGER
__stdcall
RtlLargeIntegerDivide (
      LARGE_INTEGER Dividend,
      LARGE_INTEGER Divisor,
      PLARGE_INTEGER Remainder
    )
;























 

NTSTATUS
__stdcall
RtlQueryRegistryValueWithFallback(
                                  HANDLE PrimaryHandle,
                                  HANDLE FallbackHandle,
                                      PUNICODE_STRING ValueName,
                                      ULONG ValueLength,
                                 PULONG ValueType,
      PVOID ValueData,
	   PULONG ResultLength
   );



























LUID
__stdcall
RtlConvertLongToLuid(
      LONG Long
    )
;


LUID
__stdcall
RtlConvertUlongToLuid(
      ULONG Ulong
    )
;




 

void
__stdcall
RtlMapGenericMask(
      PACCESS_MASK AccessMask,
      const GENERIC_MAPPING *GenericMapping
    );








 

NTSTATUS
__stdcall
RtlVolumeDeviceToDosName(
      PVOID VolumeDeviceObject,
      PUNICODE_STRING DosName
    );





ULONG
__stdcall
DbgPrompt (
      PCCH Prompt,
      PCH Response,
      ULONG Length
    );






BOOLEAN
__stdcall
RtlGetProductInfo(
       ULONG  OSMajorVersion,
       ULONG  OSMinorVersion,
       ULONG  SpMajorVersion,
       ULONG  SpMinorVersion,
      PULONG ReturnedProductType
    );








NTSTATUS
__stdcall
RtlIsUntrustedObject (
      HANDLE Handle,
      PVOID Object,
      PBOOLEAN UntrustedObject
    );






ULONG
__stdcall
RtlGetActiveConsoleId(
    void
    );




ULONGLONG
__stdcall
RtlGetConsoleSessionForegroundProcessId(
    void
    );




ULONG
__stdcall
RtlGetSuiteMask(
    void
    );



 
 

BOOLEAN
__stdcall
RtlIsMultiSessionSku (
    void
    );



 
 

BOOLEAN
__stdcall
RtlIsStateSeparationEnabled (
    void
    );

typedef enum _STATE_LOCATION_TYPE {
    LocationTypeRegistry = 0,
    LocationTypeFileSystem = 1,
    LocationTypeMaximum = 2
} STATE_LOCATION_TYPE;

 
 

NTSTATUS
__stdcall
RtlGetPersistedStateLocation (
                             PCWSTR    SourceID,
                         PCWSTR    CustomValue,
                         PCWSTR    DefaultPath,
                             STATE_LOCATION_TYPE StateLocationType,
     
                                PWCHAR   TargetPath,
                             ULONG    BufferLengthIn,
                        PULONG   BufferLengthOut
    );




 
 

NTSTATUS
__stdcall
RtlIsApiSetImplemented(
      PCSTR apiSetName
    );




 
 

BOOLEAN
__stdcall
RtlIsMultiUsersInSessionSku (
    void
    );





BOOLEAN
__stdcall
RtlGetNtProductType(
      PNT_PRODUCT_TYPE NtProductType
    );



 

PCWSTR
__stdcall
RtlGetNtSystemRoot (
    void
    );









typedef struct _NV_MEMORY_RANGE {
    void *BaseAddress;
    SIZE_T Length;
} NV_MEMORY_RANGE, *PNV_MEMORY_RANGE;




































































































 

NTSTATUS
__stdcall
RtlGetNonVolatileToken (
      PVOID NvBuffer,
      SIZE_T Size,
     PVOID *NvToken
    );

 

NTSTATUS
__stdcall
RtlFreeNonVolatileToken (
      PVOID NvToken
    );

 

NTSTATUS
__stdcall
RtlFlushNonVolatileMemory (
      PVOID NvToken,
      PVOID NvBuffer,
      SIZE_T Size,
      ULONG Flags
    );

 

NTSTATUS
__stdcall
RtlDrainNonVolatileFlush (
      PVOID NvToken
    );

 

NTSTATUS
__stdcall
RtlWriteNonVolatileMemory (
      PVOID NvToken,
      void __unaligned *NvDestination,
      const void __unaligned *Source,
      SIZE_T Size,
      ULONG Flags
    );



 

NTSTATUS
__stdcall
RtlFillNonVolatileMemory (
      PVOID NvToken,
      void __unaligned *NvDestination,
      SIZE_T Size,
      const UCHAR Value,
      ULONG Flags
    );



 

NTSTATUS
__stdcall
RtlFlushNonVolatileMemoryRanges (
      PVOID NvToken,
      PNV_MEMORY_RANGE NvRanges,
      SIZE_T NumRanges,
      ULONG Flags
    );



















































typedef struct CORRELATION_VECTOR {
    CHAR Version;
    CHAR Vector[129];
} CORRELATION_VECTOR;

typedef CORRELATION_VECTOR *PCORRELATION_VECTOR;




NTSTATUS
__stdcall
RtlInitializeCorrelationVector(
      PCORRELATION_VECTOR CorrelationVector,
       int Version,
       const GUID * Guid
    );



NTSTATUS
__stdcall
RtlIncrementCorrelationVector(
      PCORRELATION_VECTOR CorrelationVector
    );


NTSTATUS
__stdcall
RtlExtendCorrelationVector(
      PCORRELATION_VECTOR CorrelationVector
    );


NTSTATUS
__stdcall
RtlValidateCorrelationVector(
      PCORRELATION_VECTOR Vector
    );






typedef struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG {
    
    
    
    ULONG Size;

    
    
    
    PCWSTR TriggerId;

} CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG, *PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;



void
CUSTOM_SYSTEM_EVENT_TRIGGER_INIT(
         PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG Config,
      PCWSTR TriggerId
    )
;


 
 
NTSTATUS
__stdcall
RtlRaiseCustomSystemEventTrigger(
      PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig
    );






BOOLEAN
__stdcall
RtlIsZeroMemory (
      PVOID Buffer,
      SIZE_T Length
    );

 

BOOLEAN
__stdcall
RtlNormalizeSecurityDescriptor (
      PSECURITY_DESCRIPTOR *SecurityDescriptor,
      ULONG SecurityDescriptorLength,
      PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
      PULONG NewSecurityDescriptorLength,
      BOOLEAN CheckOnly
    );















typedef enum _RTL_SYSTEM_GLOBAL_DATA_ID {
    GlobalDataIdUnknown = 0,
    GlobalDataIdRngSeedVersion,
    GlobalDataIdInterruptTime,
    GlobalDataIdTimeZoneBias,
    GlobalDataIdImageNumberLow,
    GlobalDataIdImageNumberHigh,
    GlobalDataIdTimeZoneId,
    GlobalDataIdNtMajorVersion,
    GlobalDataIdNtMinorVersion,
    GlobalDataIdSystemExpirationDate,
    GlobalDataIdKdDebuggerEnabled,
    GlobalDataIdCyclesPerYield,
    GlobalDataIdSafeBootMode,
    GlobalDataIdLastSystemRITEventTickCount,
    GlobalDataIdConsoleSharedDataFlags,
    GlobalDataIdNtSystemRootDrive,
    GlobalDataIdQpcShift,
    GlobalDataIdQpcBypassEnabled,
    GlobalDataIdQpcData,
    GlobalDataIdQpcBias
} RTL_SYSTEM_GLOBAL_DATA_ID, *PRTL_SYSTEM_GLOBAL_DATA_ID;


NTSTATUS
__stdcall
RtlGetSystemGlobalData (
      RTL_SYSTEM_GLOBAL_DATA_ID DataId,
      PVOID Buffer,
      ULONG Size
    );


NTSTATUS
__stdcall
RtlSetSystemGlobalData (
      RTL_SYSTEM_GLOBAL_DATA_ID DataId,
      PVOID Buffer,
      ULONG Size
    );






































































































































































































typedef struct _FILE_ALIGNMENT_INFORMATION {
    ULONG AlignmentRequirement;
} FILE_ALIGNMENT_INFORMATION, *PFILE_ALIGNMENT_INFORMATION;






typedef struct _FILE_NAME_INFORMATION {
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NAME_INFORMATION, *PFILE_NAME_INFORMATION;




typedef struct _FILE_ATTRIBUTE_TAG_INFORMATION {
    ULONG FileAttributes;
    ULONG ReparseTag;
} FILE_ATTRIBUTE_TAG_INFORMATION, *PFILE_ATTRIBUTE_TAG_INFORMATION;



typedef struct _FILE_DISPOSITION_INFORMATION {
    BOOLEAN DeleteFile;
} FILE_DISPOSITION_INFORMATION, *PFILE_DISPOSITION_INFORMATION;











typedef struct _FILE_DISPOSITION_INFORMATION_EX {
    ULONG Flags;
} FILE_DISPOSITION_INFORMATION_EX, *PFILE_DISPOSITION_INFORMATION_EX;




typedef struct _FILE_END_OF_FILE_INFORMATION {
    LARGE_INTEGER EndOfFile;
} FILE_END_OF_FILE_INFORMATION, *PFILE_END_OF_FILE_INFORMATION;



typedef struct _FILE_VALID_DATA_LENGTH_INFORMATION {
    LARGE_INTEGER ValidDataLength;
} FILE_VALID_DATA_LENGTH_INFORMATION, *PFILE_VALID_DATA_LENGTH_INFORMATION;





















typedef struct _FILE_FS_LABEL_INFORMATION {
    ULONG VolumeLabelLength;
    WCHAR VolumeLabel[1];
} FILE_FS_LABEL_INFORMATION, *PFILE_FS_LABEL_INFORMATION;

typedef struct _FILE_FS_VOLUME_INFORMATION {
    LARGE_INTEGER VolumeCreationTime;
    ULONG VolumeSerialNumber;
    ULONG VolumeLabelLength;
    BOOLEAN SupportsObjects;
    WCHAR VolumeLabel[1];
} FILE_FS_VOLUME_INFORMATION, *PFILE_FS_VOLUME_INFORMATION;






typedef struct _FILE_FS_SIZE_INFORMATION {
    LARGE_INTEGER TotalAllocationUnits;
    LARGE_INTEGER AvailableAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_SIZE_INFORMATION, *PFILE_FS_SIZE_INFORMATION;

typedef struct _FILE_FS_FULL_SIZE_INFORMATION {
    LARGE_INTEGER TotalAllocationUnits;
    LARGE_INTEGER CallerAvailableAllocationUnits;
    LARGE_INTEGER ActualAvailableAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_FULL_SIZE_INFORMATION, *PFILE_FS_FULL_SIZE_INFORMATION;


typedef struct _FILE_FS_FULL_SIZE_INFORMATION_EX {

    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    
    

    ULONGLONG ActualTotalAllocationUnits;
    ULONGLONG ActualAvailableAllocationUnits;
    ULONGLONG ActualPoolUnavailableAllocationUnits;

    
    
    
    
    
    
    
    
    
    
    

    ULONGLONG CallerTotalAllocationUnits;
    ULONGLONG CallerAvailableAllocationUnits;
    ULONGLONG CallerPoolUnavailableAllocationUnits;

    
    
    

    ULONGLONG UsedAllocationUnits;

    
    
    

    ULONGLONG TotalReservedAllocationUnits;

    
    
    
    

    ULONGLONG VolumeStorageReserveAllocationUnits;

    
    
    
    
    
    
    
    
    
    
    

    ULONGLONG AvailableCommittedAllocationUnits;

    
    
    
    

    ULONGLONG PoolAvailableAllocationUnits;

    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;

} FILE_FS_FULL_SIZE_INFORMATION_EX, *PFILE_FS_FULL_SIZE_INFORMATION_EX;



typedef struct _FILE_FS_METADATA_SIZE_INFORMATION {
    LARGE_INTEGER TotalMetadataAllocationUnits;
    ULONG SectorsPerAllocationUnit;
    ULONG BytesPerSector;
} FILE_FS_METADATA_SIZE_INFORMATION, *PFILE_FS_METADATA_SIZE_INFORMATION;






























































typedef struct _FILE_FS_SECTOR_SIZE_INFORMATION {
    ULONG LogicalBytesPerSector;
    ULONG PhysicalBytesPerSectorForAtomicity;
    ULONG PhysicalBytesPerSectorForPerformance;
    ULONG FileSystemEffectivePhysicalBytesPerSectorForAtomicity;
    ULONG Flags;
    ULONG ByteOffsetForSectorAlignment;
    ULONG ByteOffsetForPartitionAlignment;
} FILE_FS_SECTOR_SIZE_INFORMATION, *PFILE_FS_SECTOR_SIZE_INFORMATION;

typedef struct _FILE_FS_OBJECTID_INFORMATION {
    UCHAR ObjectId[16];
    UCHAR ExtendedInfo[48];
} FILE_FS_OBJECTID_INFORMATION, *PFILE_FS_OBJECTID_INFORMATION;














typedef enum _BUS_DATA_TYPE {
    ConfigurationSpaceUndefined = -1,
    Cmos,
    EisaConfiguration,
    Pos,
    CbusConfiguration,
    PCIConfiguration,
    VMEConfiguration,
    NuBusConfiguration,
    PCMCIAConfiguration,
    MPIConfiguration,
    MPSAConfiguration,
    PNPISAConfiguration,
    SgiInternalConfiguration,
    MaximumBusDataType
} BUS_DATA_TYPE, *PBUS_DATA_TYPE;

typedef struct _KEY_NAME_INFORMATION {
    ULONG   NameLength;
    WCHAR   Name[1];            
} KEY_NAME_INFORMATION, *PKEY_NAME_INFORMATION;

typedef struct _KEY_CACHED_INFORMATION {
    LARGE_INTEGER LastWriteTime;
    ULONG   TitleIndex;
    ULONG   SubKeys;
    ULONG   MaxNameLen;
    ULONG   Values;
    ULONG   MaxValueNameLen;
    ULONG   MaxValueDataLen;
    ULONG   NameLength;
} KEY_CACHED_INFORMATION, *PKEY_CACHED_INFORMATION;

typedef struct _KEY_VIRTUALIZATION_INFORMATION {
    ULONG   VirtualizationCandidate : 1; 
    ULONG   VirtualizationEnabled   : 1; 
    ULONG   VirtualTarget           : 1; 
    ULONG   VirtualStore            : 1; 
    ULONG   VirtualSource           : 1; 
    ULONG   Reserved                : 27;
} KEY_VIRTUALIZATION_INFORMATION, *PKEY_VIRTUALIZATION_INFORMATION;

typedef struct _KEY_LAYER_INFORMATION {
    ULONG   IsTombstone      : 1;
    ULONG   IsSupersedeLocal : 1;
    ULONG   IsSupersedeTree  : 1;
    ULONG   ClassIsInherited : 1;
    ULONG   Reserved         : 28;
} KEY_LAYER_INFORMATION, *PKEY_LAYER_INFORMATION;


















typedef struct _EXCEPTION_REGISTRATION_RECORD {
    struct _EXCEPTION_REGISTRATION_RECORD *Next;
    PEXCEPTION_ROUTINE Handler;
} EXCEPTION_REGISTRATION_RECORD;

typedef EXCEPTION_REGISTRATION_RECORD *PEXCEPTION_REGISTRATION_RECORD;


typedef struct _NT_TIB {
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    PVOID StackBase;
    PVOID StackLimit;
    PVOID SubSystemTib;

    union {
        PVOID FiberData;
        ULONG Version;
    };



    PVOID ArbitraryUserPointer;
    struct _NT_TIB *Self;
} NT_TIB;
typedef NT_TIB *PNT_TIB;




typedef struct _NT_TIB32 {
    ULONG ExceptionList;
    ULONG StackBase;
    ULONG StackLimit;
    ULONG SubSystemTib;


    union {
        ULONG FiberData;
        ULONG Version;
    };




    ULONG ArbitraryUserPointer;
    ULONG Self;
} NT_TIB32, *PNT_TIB32;

typedef struct _NT_TIB64 {
    ULONG64 ExceptionList;
    ULONG64 StackBase;
    ULONG64 StackLimit;
    ULONG64 SubSystemTib;


    union {
        ULONG64 FiberData;
        ULONG Version;
    };





    ULONG64 ArbitraryUserPointer;
    ULONG64 Self;
} NT_TIB64, *PNT_TIB64;









typedef enum _PROCESSINFOCLASS {
    ProcessBasicInformation                      = 0,
    ProcessQuotaLimits                           = 1,
    ProcessIoCounters                            = 2,
    ProcessVmCounters                            = 3,
    ProcessTimes                                 = 4,
    ProcessBasePriority                          = 5,
    ProcessRaisePriority                         = 6,
    ProcessDebugPort                             = 7,
    ProcessExceptionPort                         = 8,
    ProcessAccessToken                           = 9,
    ProcessLdtInformation                        = 10,
    ProcessLdtSize                               = 11,
    ProcessDefaultHardErrorMode                  = 12,
    ProcessIoPortHandlers                        = 13,   
    ProcessPooledUsageAndLimits                  = 14,
    ProcessWorkingSetWatch                       = 15,
    ProcessUserModeIOPL                          = 16,
    ProcessEnableAlignmentFaultFixup             = 17,
    ProcessPriorityClass                         = 18,
    ProcessWx86Information                       = 19,
    ProcessHandleCount                           = 20,
    ProcessAffinityMask                          = 21,
    ProcessPriorityBoost                         = 22,
    ProcessDeviceMap                             = 23,
    ProcessSessionInformation                    = 24,
    ProcessForegroundInformation                 = 25,
    ProcessWow64Information                      = 26,
    ProcessImageFileName                         = 27,
    ProcessLUIDDeviceMapsEnabled                 = 28,
    ProcessBreakOnTermination                    = 29,
    ProcessDebugObjectHandle                     = 30,
    ProcessDebugFlags                            = 31,
    ProcessHandleTracing                         = 32,
    ProcessIoPriority                            = 33,
    ProcessExecuteFlags                          = 34,
    ProcessTlsInformation                        = 35,
    ProcessCookie                                = 36,
    ProcessImageInformation                      = 37,
    ProcessCycleTime                             = 38,
    ProcessPagePriority                          = 39,
    ProcessInstrumentationCallback               = 40,
    ProcessThreadStackAllocation                 = 41,
    ProcessWorkingSetWatchEx                     = 42,
    ProcessImageFileNameWin32                    = 43,
    ProcessImageFileMapping                      = 44,
    ProcessAffinityUpdateMode                    = 45,
    ProcessMemoryAllocationMode                  = 46,
    ProcessGroupInformation                      = 47,
    ProcessTokenVirtualizationEnabled            = 48,
    ProcessOwnerInformation                      = 49,
    ProcessWindowInformation                     = 50,
    ProcessHandleInformation                     = 51,
    ProcessMitigationPolicy                      = 52,
    ProcessDynamicFunctionTableInformation       = 53,
    ProcessHandleCheckingMode                    = 54,
    ProcessKeepAliveCount                        = 55,
    ProcessRevokeFileHandles                     = 56,
    ProcessWorkingSetControl                     = 57,
    ProcessHandleTable                           = 58,
    ProcessCheckStackExtentsMode                 = 59,
    ProcessCommandLineInformation                = 60,
    ProcessProtectionInformation                 = 61,
    ProcessMemoryExhaustion                      = 62,
    ProcessFaultInformation                      = 63,
    ProcessTelemetryIdInformation                = 64,
    ProcessCommitReleaseInformation              = 65,
    ProcessReserved1Information                  = 66,
    ProcessReserved2Information                  = 67,
    ProcessSubsystemProcess                      = 68,
    ProcessInPrivate                             = 70,
    ProcessRaiseUMExceptionOnInvalidHandleClose  = 71,
    ProcessSubsystemInformation                  = 75,
    ProcessWin32kSyscallFilterInformation        = 79,
    ProcessEnergyTrackingState                   = 82,
    MaxProcessInfoClass                             
} PROCESSINFOCLASS;






typedef enum _THREADINFOCLASS {
    ThreadBasicInformation          = 0,
    ThreadTimes                     = 1,
    ThreadPriority                  = 2,
    ThreadBasePriority              = 3,
    ThreadAffinityMask              = 4,
    ThreadImpersonationToken        = 5,
    ThreadDescriptorTableEntry      = 6,
    ThreadEnableAlignmentFaultFixup = 7,
    ThreadEventPair_Reusable        = 8,
    ThreadQuerySetWin32StartAddress = 9,
    ThreadZeroTlsCell               = 10,
    ThreadPerformanceCount          = 11,
    ThreadAmILastThread             = 12,
    ThreadIdealProcessor            = 13,
    ThreadPriorityBoost             = 14,
    ThreadSetTlsArrayAddress        = 15,   
    ThreadIsIoPending               = 16,
    ThreadHideFromDebugger          = 17,
    ThreadBreakOnTermination        = 18,
    ThreadSwitchLegacyState         = 19,
    ThreadIsTerminated              = 20,
    ThreadLastSystemCall            = 21,
    ThreadIoPriority                = 22,
    ThreadCycleTime                 = 23,
    ThreadPagePriority              = 24,
    ThreadActualBasePriority        = 25,
    ThreadTebInformation            = 26,
    ThreadCSwitchMon                = 27,   
    ThreadCSwitchPmu                = 28,
    ThreadWow64Context              = 29,
    ThreadGroupInformation          = 30,
    ThreadUmsInformation            = 31,   
    ThreadCounterProfiling          = 32,
    ThreadIdealProcessorEx          = 33,
    ThreadCpuAccountingInformation  = 34,
    ThreadSuspendCount              = 35,
    ThreadActualGroupAffinity       = 41,
    ThreadDynamicCodePolicyInfo     = 42,
    ThreadSubsystemInformation      = 45,

    MaxThreadInfoClass              = 56,
} THREADINFOCLASS;

































typedef struct _PAGE_PRIORITY_INFORMATION {
    ULONG PagePriority;
} PAGE_PRIORITY_INFORMATION, *PPAGE_PRIORITY_INFORMATION;






typedef struct _PROCESS_WS_WATCH_INFORMATION {
    PVOID FaultingPc;
    PVOID FaultingVa;
} PROCESS_WS_WATCH_INFORMATION, *PPROCESS_WS_WATCH_INFORMATION;






typedef struct _PROCESS_BASIC_INFORMATION {
    NTSTATUS ExitStatus;
    PPEB PebBaseAddress;
    ULONG_PTR AffinityMask;
    KPRIORITY BasePriority;
    ULONG_PTR UniqueProcessId;
    ULONG_PTR InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION,*PPROCESS_BASIC_INFORMATION;

typedef struct _PROCESS_EXTENDED_BASIC_INFORMATION {
    SIZE_T Size;    
    PROCESS_BASIC_INFORMATION BasicInfo;
    union {
        ULONG Flags;
        struct {
            ULONG IsProtectedProcess : 1;
            ULONG IsWow64Process : 1;
            ULONG IsProcessDeleting : 1;
            ULONG IsCrossSessionCreate : 1;
            ULONG IsFrozen : 1;
            ULONG IsBackground : 1;
            ULONG IsStronglyNamed : 1;
            ULONG IsSecureProcess : 1;
            ULONG IsSubsystemProcess : 1;
            ULONG SpareBits : 23;
        } ;
    } ;
} PROCESS_EXTENDED_BASIC_INFORMATION, *PPROCESS_EXTENDED_BASIC_INFORMATION;




typedef struct _PROCESS_MEMBERSHIP_INFORMATION {
    ULONG ServerSiloId;
} PROCESS_MEMBERSHIP_INFORMATION, *PPROCESS_MEMBERSHIP_INFORMATION;










typedef struct _PROCESS_DEVICEMAP_INFORMATION {
    union {
        struct {
            HANDLE DirectoryHandle;
        } Set;
        struct {
            ULONG DriveMap;
            UCHAR DriveType[ 32 ];
        } Query;
    } ;
} PROCESS_DEVICEMAP_INFORMATION, *PPROCESS_DEVICEMAP_INFORMATION;

typedef struct _PROCESS_DEVICEMAP_INFORMATION_EX {
    union {
        struct {
            HANDLE DirectoryHandle;
        } Set;
        struct {
            ULONG DriveMap;
            UCHAR DriveType[ 32 ];
        } Query;
    } ;
    ULONG Flags;    
} PROCESS_DEVICEMAP_INFORMATION_EX, *PPROCESS_DEVICEMAP_INFORMATION_EX;











typedef struct _PROCESS_SESSION_INFORMATION {
    ULONG SessionId;
} PROCESS_SESSION_INFORMATION, *PPROCESS_SESSION_INFORMATION;

typedef struct _PROCESS_HANDLE_TRACING_ENABLE {
    ULONG Flags;
} PROCESS_HANDLE_TRACING_ENABLE, *PPROCESS_HANDLE_TRACING_ENABLE;

typedef struct _PROCESS_HANDLE_TRACING_ENABLE_EX {
    ULONG Flags;
    ULONG TotalSlots;
} PROCESS_HANDLE_TRACING_ENABLE_EX, *PPROCESS_HANDLE_TRACING_ENABLE_EX;








typedef struct _PROCESS_HANDLE_TRACING_ENTRY {
    HANDLE Handle;
    CLIENT_ID ClientId;
    ULONG Type;
    PVOID Stacks[16];
} PROCESS_HANDLE_TRACING_ENTRY, *PPROCESS_HANDLE_TRACING_ENTRY;

typedef struct _PROCESS_HANDLE_TRACING_QUERY {
    HANDLE Handle;
    ULONG  TotalTraces;
    PROCESS_HANDLE_TRACING_ENTRY HandleTrace[1];
} PROCESS_HANDLE_TRACING_QUERY, *PPROCESS_HANDLE_TRACING_QUERY;

























typedef struct _PROCESS_DYNAMIC_EH_CONTINUATION_TARGET {
    ULONG_PTR TargetAddress;
    ULONG_PTR Flags;
} PROCESS_DYNAMIC_EH_CONTINUATION_TARGET, *PPROCESS_DYNAMIC_EH_CONTINUATION_TARGET;

typedef struct _PROCESS_DYNAMIC_EH_CONTINUATION_TARGETS_INFORMATION {
    USHORT NumberOfTargets;
    USHORT Reserved;
    ULONG Reserved2;
    PPROCESS_DYNAMIC_EH_CONTINUATION_TARGET Targets;
} PROCESS_DYNAMIC_EH_CONTINUATION_TARGETS_INFORMATION, *PPROCESS_DYNAMIC_EH_CONTINUATION_TARGETS_INFORMATION;






















typedef struct _PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGE {
    ULONG_PTR BaseAddress;
    SIZE_T Size;
    ULONG Flags;
} PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGE, *PPROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGE;

typedef struct _PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGES_INFORMATION {
    USHORT NumberOfRanges;
    USHORT Reserved;
    ULONG Reserved2;
    PPROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGE Ranges;
} PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGES_INFORMATION, *PPROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGES_INFORMATION;














typedef struct _QUOTA_LIMITS {
    SIZE_T PagedPoolLimit;
    SIZE_T NonPagedPoolLimit;
    SIZE_T MinimumWorkingSetSize;
    SIZE_T MaximumWorkingSetSize;
    SIZE_T PagefileLimit;
    LARGE_INTEGER TimeLimit;
} QUOTA_LIMITS, *PQUOTA_LIMITS;







typedef union _RATE_QUOTA_LIMIT {
    ULONG RateData;
    struct {
        ULONG RatePercent : 7;
        ULONG Reserved0   : 25;
    } ;
} RATE_QUOTA_LIMIT, *PRATE_QUOTA_LIMIT;

typedef struct _QUOTA_LIMITS_EX {
    SIZE_T PagedPoolLimit;
    SIZE_T NonPagedPoolLimit;
    SIZE_T MinimumWorkingSetSize;
    SIZE_T MaximumWorkingSetSize;
    SIZE_T PagefileLimit;               
    LARGE_INTEGER TimeLimit;
    SIZE_T WorkingSetLimit;             
    SIZE_T Reserved2;
    SIZE_T Reserved3;
    SIZE_T Reserved4;
    ULONG  Flags;
    RATE_QUOTA_LIMIT CpuRateLimit;
} QUOTA_LIMITS_EX, *PQUOTA_LIMITS_EX;






typedef struct _IO_COUNTERS {
    ULONGLONG  ReadOperationCount;
    ULONGLONG  WriteOperationCount;
    ULONGLONG  OtherOperationCount;
    ULONGLONG ReadTransferCount;
    ULONGLONG WriteTransferCount;
    ULONGLONG OtherTransferCount;
} IO_COUNTERS;
typedef IO_COUNTERS *PIO_COUNTERS;









typedef struct _VM_COUNTERS {
    SIZE_T PeakVirtualSize;
    SIZE_T VirtualSize;
    ULONG PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
} VM_COUNTERS;
typedef VM_COUNTERS *PVM_COUNTERS;

typedef struct _VM_COUNTERS_EX {
    SIZE_T PeakVirtualSize;
    SIZE_T VirtualSize;
    ULONG PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
    SIZE_T PrivateUsage;
} VM_COUNTERS_EX;

typedef VM_COUNTERS_EX *PVM_COUNTERS_EX;

typedef struct _VM_COUNTERS_EX2 {
    VM_COUNTERS_EX CountersEx;
    SIZE_T PrivateWorkingSetSize;
    ULONGLONG SharedCommitUsage;
} VM_COUNTERS_EX2, *PVM_COUNTERS_EX2;







typedef enum _HARDWARE_COUNTER_TYPE {
    PMCCounter,
    MaxHardwareCounterType
} HARDWARE_COUNTER_TYPE, *PHARDWARE_COUNTER_TYPE;




typedef struct _HARDWARE_COUNTER {
    HARDWARE_COUNTER_TYPE Type;
    ULONG Reserved;
    ULONG64 Index;
} HARDWARE_COUNTER, *PHARDWARE_COUNTER;









typedef enum _PROCESS_MITIGATION_POLICY {
    ProcessDEPPolicy,
    ProcessASLRPolicy,
    ProcessDynamicCodePolicy,
    ProcessStrictHandleCheckPolicy,
    ProcessSystemCallDisablePolicy,
    ProcessMitigationOptionsMask,
    ProcessExtensionPointDisablePolicy,
    ProcessControlFlowGuardPolicy,
    ProcessSignaturePolicy,
    ProcessFontDisablePolicy,
    ProcessImageLoadPolicy,
    ProcessSystemCallFilterPolicy,
    ProcessPayloadRestrictionPolicy,
    ProcessChildProcessPolicy,
    ProcessSideChannelIsolationPolicy,
    ProcessUserShadowStackPolicy,
    ProcessRedirectionTrustPolicy,
    ProcessUserPointerAuthPolicy,
	ProcessSEHOPPolicy,
    ProcessActivationContextTrustPolicy,
    MaxProcessMitigationPolicy
} PROCESS_MITIGATION_POLICY, *PPROCESS_MITIGATION_POLICY;






typedef struct _PROCESS_MITIGATION_ASLR_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG EnableBottomUpRandomization : 1;
            ULONG EnableForceRelocateImages : 1;
            ULONG EnableHighEntropy : 1;
            ULONG DisallowStrippedImages : 1;
            ULONG ReservedFlags : 28;
        } ;
    } ;
} PROCESS_MITIGATION_ASLR_POLICY, *PPROCESS_MITIGATION_ASLR_POLICY;

typedef struct _PROCESS_MITIGATION_DEP_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG Enable : 1;
            ULONG DisableAtlThunkEmulation : 1;
            ULONG ReservedFlags : 30;
        } ;
    } ;
    BOOLEAN Permanent;
} PROCESS_MITIGATION_DEP_POLICY, *PPROCESS_MITIGATION_DEP_POLICY;

typedef struct _PROCESS_MITIGATION_SEHOP_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG EnableSehop : 1;
            ULONG ReservedFlags : 31;
        } ;
    } ;
} PROCESS_MITIGATION_SEHOP_POLICY, *PPROCESS_MITIGATION_SEHOP_POLICY;

typedef struct _PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG RaiseExceptionOnInvalidHandleReference : 1;
            ULONG HandleExceptionsPermanentlyEnabled : 1;
            ULONG ReservedFlags : 30;
        } ;
    } ;
} PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY, *PPROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY;

typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG DisallowWin32kSystemCalls : 1;
            ULONG AuditDisallowWin32kSystemCalls : 1;
            ULONG DisallowFsctlSystemCalls : 1;
            ULONG AuditDisallowFsctlSystemCalls : 1;
            ULONG ReservedFlags : 28;
        } ;
    } ;
} PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY, *PPROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY;

typedef struct _PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG DisableExtensionPoints : 1;
            ULONG ReservedFlags : 31;
        } ;
    } ;
} PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY, *PPROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY;

typedef struct _PROCESS_MITIGATION_DYNAMIC_CODE_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG ProhibitDynamicCode : 1;
            ULONG AllowThreadOptOut : 1;
            ULONG AllowRemoteDowngrade : 1;
            ULONG AuditProhibitDynamicCode : 1;
            ULONG ReservedFlags : 28;
        } ;
    } ;
} PROCESS_MITIGATION_DYNAMIC_CODE_POLICY, *PPROCESS_MITIGATION_DYNAMIC_CODE_POLICY;

typedef struct _PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG EnableControlFlowGuard : 1;
            ULONG EnableExportSuppression : 1;
            ULONG StrictMode : 1;
            ULONG EnableXfg : 1;
            ULONG EnableXfgAuditMode : 1;
            ULONG ReservedFlags : 27;
        } ;
    } ;
} PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY, *PPROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY;

typedef struct _PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG MicrosoftSignedOnly : 1;
            ULONG StoreSignedOnly : 1;
            ULONG MitigationOptIn : 1;
            ULONG AuditMicrosoftSignedOnly : 1;
            ULONG AuditStoreSignedOnly : 1;
            ULONG ReservedFlags : 27;
        } ;
    } ;
} PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY, *PPROCESS_MITIGATION_BINARY_SIGNATURE_POLICY;

typedef struct _PROCESS_MITIGATION_FONT_DISABLE_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG DisableNonSystemFonts     : 1;
            ULONG AuditNonSystemFontLoading : 1;
            ULONG ReservedFlags             : 30;
        } ;
    } ;
} PROCESS_MITIGATION_FONT_DISABLE_POLICY, *PPROCESS_MITIGATION_FONT_DISABLE_POLICY;

typedef struct _PROCESS_MITIGATION_IMAGE_LOAD_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG NoRemoteImages : 1;
            ULONG NoLowMandatoryLabelImages : 1;
            ULONG PreferSystem32Images : 1;
            ULONG AuditNoRemoteImages : 1;
            ULONG AuditNoLowMandatoryLabelImages : 1;
            ULONG ReservedFlags : 27;
        } ;
    } ;
} PROCESS_MITIGATION_IMAGE_LOAD_POLICY, *PPROCESS_MITIGATION_IMAGE_LOAD_POLICY;

typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG FilterId: 4;
            ULONG ReservedFlags : 28;
        } ;
    } ;
} PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY, *PPROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY;

typedef struct _PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG EnableExportAddressFilter     : 1;
            ULONG AuditExportAddressFilter      : 1;

            ULONG EnableExportAddressFilterPlus : 1;
            ULONG AuditExportAddressFilterPlus  : 1;

            ULONG EnableImportAddressFilter     : 1;
            ULONG AuditImportAddressFilter      : 1;

            ULONG EnableRopStackPivot           : 1;
            ULONG AuditRopStackPivot            : 1;

            ULONG EnableRopCallerCheck          : 1;
            ULONG AuditRopCallerCheck           : 1;

            ULONG EnableRopSimExec              : 1;
            ULONG AuditRopSimExec               : 1;

            ULONG ReservedFlags                 : 20;
        } ;
    } ;
} PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY, *PPROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY;

typedef struct _PROCESS_MITIGATION_CHILD_PROCESS_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG NoChildProcessCreation : 1;
            ULONG AuditNoChildProcessCreation : 1;
            ULONG AllowSecureProcessCreation : 1;
            ULONG ReservedFlags : 29;
        } ;
    } ;
} PROCESS_MITIGATION_CHILD_PROCESS_POLICY, *PPROCESS_MITIGATION_CHILD_PROCESS_POLICY;

typedef struct _PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY {
    union {
        ULONG Flags;
        struct {

            
            
            

            ULONG SmtBranchTargetIsolation : 1;

            
            
            
            
            
            
            
            
            
            
            
            
            

            ULONG IsolateSecurityDomain : 1;

            
            
            
            

            ULONG DisablePageCombine : 1;

            
            
            

            ULONG SpeculativeStoreBypassDisable : 1;

            
            
            
            

            ULONG RestrictCoreSharing : 1;

            ULONG ReservedFlags : 27;

        } ;
    } ;
} PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY, *PPROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY;

typedef struct _PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG EnableUserShadowStack : 1;
            ULONG AuditUserShadowStack : 1;
            ULONG SetContextIpValidation : 1;
            ULONG AuditSetContextIpValidation : 1;
            ULONG EnableUserShadowStackStrictMode : 1;
            ULONG BlockNonCetBinaries : 1;
            ULONG BlockNonCetBinariesNonEhcont : 1;
            ULONG AuditBlockNonCetBinaries : 1;
            ULONG CetDynamicApisOutOfProcOnly : 1;
            ULONG SetContextIpValidationRelaxedMode : 1;
            ULONG ReservedFlags : 22;

        } ;
    } ;
} PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY, *PPROCESS_MITIGATION_USER_SHADOW_STACK_POLICY;

typedef struct _PROCESS_MITIGATION_USER_POINTER_AUTH_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG EnablePointerAuthUserIp : 1;
            ULONG ReservedFlags : 31;
        } ;
    } ;
} PROCESS_MITIGATION_USER_POINTER_AUTH_POLICY, *PPROCESS_MITIGATION_USER_POINTER_AUTH_POLICY;

typedef struct _PROCESS_MITIGATION_REDIRECTION_TRUST_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG EnforceRedirectionTrust : 1;
            ULONG AuditRedirectionTrust : 1;
            ULONG ReservedFlags : 30;
        } ;
    } ;
} PROCESS_MITIGATION_REDIRECTION_TRUST_POLICY, *PPROCESS_MITIGATION_REDIRECTION_TRUST_POLICY;

typedef struct _PROCESS_MITIGATION_ACTIVATION_CONTEXT_TRUST_POLICY {
    union {
        ULONG Flags;
        struct {
            ULONG AssemblyManifestRedirectionTrust : 1;
            ULONG ReservedFlags : 31;
        } ;
    } ;
} PROCESS_MITIGATION_ACTIVATION_CONTEXT_TRUST_POLICY, *PPROCESS_MITIGATION_ACTIVATION_CONTEXT_TRUST_POLICY;








typedef struct _PROCESS_KEEPALIVE_COUNT_INFORMATION {
    ULONG WakeCount;
    ULONG NoWakeCount;
} PROCESS_KEEPALIVE_COUNT_INFORMATION, *PPROCESS_KEEPALIVE_COUNT_INFORMATION;





typedef struct _PROCESS_REVOKE_FILE_HANDLES_INFORMATION {
    UNICODE_STRING TargetDevicePath;
} PROCESS_REVOKE_FILE_HANDLES_INFORMATION, *PPROCESS_REVOKE_FILE_HANDLES_INFORMATION;









typedef struct _POOLED_USAGE_AND_LIMITS {
    SIZE_T PeakPagedPoolUsage;
    SIZE_T PagedPoolUsage;
    SIZE_T PagedPoolLimit;
    SIZE_T PeakNonPagedPoolUsage;
    SIZE_T NonPagedPoolUsage;
    SIZE_T NonPagedPoolLimit;
    SIZE_T PeakPagefileUsage;
    SIZE_T PagefileUsage;
    SIZE_T PagefileLimit;
} POOLED_USAGE_AND_LIMITS;
typedef POOLED_USAGE_AND_LIMITS *PPOOLED_USAGE_AND_LIMITS;








typedef struct _PROCESS_ACCESS_TOKEN {

    
    
    
    

    HANDLE Token;

    
    
    
    
    
    
    

    HANDLE Thread;

} PROCESS_ACCESS_TOKEN, *PPROCESS_ACCESS_TOKEN;











typedef struct _PROCESS_EXCEPTION_PORT {

    
    
    

      HANDLE ExceptionPortHandle;

    
    
    
    

      ULONG StateFlags;

} PROCESS_EXCEPTION_PORT, *PPROCESS_EXCEPTION_PORT;







typedef struct _KERNEL_USER_TIMES {
    LARGE_INTEGER CreateTime;
    LARGE_INTEGER ExitTime;
    LARGE_INTEGER KernelTime;
    LARGE_INTEGER UserTime;
} KERNEL_USER_TIMES;
typedef KERNEL_USER_TIMES *PKERNEL_USER_TIMES;







typedef enum _SUBSYSTEM_INFORMATION_TYPE {
    SubsystemInformationTypeWin32 = 0,
    SubsystemInformationTypeWSL = 1,
    MaxSubsystemInformationType
} SUBSYSTEM_INFORMATION_TYPE, *PSUBSYSTEM_INFORMATION_TYPE;
















typedef struct _POWER_THROTTLING_PROCESS_STATE {
    ULONG Version;
    ULONG ControlMask;
    ULONG StateMask;
} POWER_THROTTLING_PROCESS_STATE, *PPOWER_THROTTLING_PROCESS_STATE;







typedef struct _POWER_THROTTLING_THREAD_STATE {
    ULONG Version;
    ULONG ControlMask;
    ULONG StateMask;
} POWER_THROTTLING_THREAD_STATE, *PPOWER_THROTTLING_THREAD_STATE;








typedef struct _PROCESS_SYSCALL_PROVIDER_INFORMATION {
    GUID ProviderId;
    UCHAR Level;
} PROCESS_SYSCALL_PROVIDER_INFORMATION, *PPROCESS_SYSCALL_PROVIDER_INFORMATION;





 
NTSTATUS
__stdcall
NtOpenProcess (
      PHANDLE ProcessHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      PCLIENT_ID ClientId
    );































































































































































































































































































































typedef struct _KPCR {














    union {
        NT_TIB NtTib;
        struct {
            union _KGDTENTRY64 *GdtBase;
            struct _KTSS64 *TssBase;
            ULONG64 UserRsp;
            struct _KPCR *Self;
            struct _KPRCB *CurrentPrcb;
            PKSPIN_LOCK_QUEUE LockArray;
            PVOID Used_Self;
        };
    };

    union _KIDTENTRY64 *IdtBase;

    ULONG64 Unused[2];
    KIRQL Irql;
    UCHAR SecondLevelCacheAssociativity;
    UCHAR ObsoleteNumber;
    UCHAR Fill0;
    ULONG Unused0[3];
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG StallScaleFactor;
    PVOID Unused1[3];

    ULONG KernelReserved[15];
    ULONG SecondLevelCacheSize;
    ULONG HalReserved[16];
    ULONG Unused2;
    PVOID KdVersionBlock;
    PVOID Unused3;
    ULONG PcrAlign1[24];


} KPCR, *PKPCR;













typedef struct _KEXCEPTION_FRAME {





    ULONG64 P1Home;
    ULONG64 P2Home;
    ULONG64 P3Home;
    ULONG64 P4Home;
    ULONG64 P5;
    ULONG64 Spare1;





    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;





    ULONG64 TrapFrame;
    ULONG64 OutputBuffer;
    ULONG64 OutputLength;
    ULONG64 Spare2;






    ULONG64 MxCsr;





    ULONG64 Rbp;





    ULONG64 Rbx;
    ULONG64 Rdi;
    ULONG64 Rsi;
    ULONG64 R12;
    ULONG64 R13;
    ULONG64 R14;
    ULONG64 R15;





    ULONG64 Return;
} KEXCEPTION_FRAME, *PKEXCEPTION_FRAME;











typedef struct _KTRAP_FRAME {





    ULONG64 P1Home;
    ULONG64 P2Home;
    ULONG64 P3Home;
    ULONG64 P4Home;
    ULONG64 P5;






        KPROCESSOR_MODE PreviousMode;

    KIRQL PreviousIrql;





        UCHAR FaultIndicator;









    UCHAR ExceptionActive;





    ULONG MxCsr;








    ULONG64 Rax;
    ULONG64 Rcx;
    ULONG64 Rdx;
    ULONG64 R8;
    ULONG64 R9;
    ULONG64 R10;
    ULONG64 R11;







    union {
        ULONG64 GsBase;
        ULONG64 GsSwap;
    };








    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;






    union {
        ULONG64 FaultAddress;
        ULONG64 ContextRecord;
    };







    union {
        struct {
            ULONG64 Dr0;
            ULONG64 Dr1;
            ULONG64 Dr2;
            ULONG64 Dr3;
            ULONG64 Dr6;
            ULONG64 Dr7;
        };

        struct {
            ULONG64 ShadowStackFrame;
            ULONG64 Spare[5];
        };
    };





    struct {
        ULONG64 DebugControl;
        ULONG64 LastBranchToRip;
        ULONG64 LastBranchFromRip;
        ULONG64 LastExceptionToRip;
        ULONG64 LastExceptionFromRip;
    };





    USHORT SegDs;
    USHORT SegEs;
    USHORT SegFs;
    USHORT SegGs;





    ULONG64 TrapFrame;






    ULONG64 Rbx;
    ULONG64 Rdi;
    ULONG64 Rsi;






    ULONG64 Rbp;









    union {
        ULONG64 ErrorCode;
        ULONG64 ExceptionFrame;
    };

    ULONG64 Rip;
    USHORT SegCs;
    UCHAR Fill0;
    UCHAR Logging;
    USHORT Fill1[2];
    ULONG EFlags;
    ULONG Fill2;
    ULONG64 Rsp;
    USHORT SegSs;
    USHORT Fill3;
    ULONG Fill4;
} KTRAP_FRAME, *PKTRAP_FRAME;

typedef struct _KUMS_CONTEXT_HEADER {
    ULONG64 P1Home;
    ULONG64 P2Home;
    ULONG64 P3Home;
    ULONG64 P4Home;
    PVOID StackTop;
    ULONG64 StackSize;
    ULONG64 RspOffset;
    ULONG64 Rip;
    PXMM_SAVE_AREA32 FltSave;


    union {
        struct {
            ULONG64 Volatile : 1;
            ULONG64 Reserved : 63;
        };
        ULONG64 Flags;
    };
    PKTRAP_FRAME TrapFrame;
    PKEXCEPTION_FRAME ExceptionFrame;
    struct _KTHREAD *SourceThread;
    ULONG64 Return;
} KUMS_CONTEXT_HEADER, *PKUMS_CONTEXT_HEADER;






extern  ULONG KeLastBranchMSR;





extern const  PVOID MmHighestUserAddress;


extern const  PVOID MmSystemRangeStart;


extern const  ULONG64 MmUserProbeAddress;


















































typedef enum _INTERLOCKED_RESULT {
    ResultNegative = 1,
    ResultZero = 0,
    ResultPositive = 2
} INTERLOCKED_RESULT;




 

LONG
_ExInterlockedDecrementLong (
       PLONG Addend
    )

;




 

LONG
_ExInterlockedIncrementLong (
       PLONG Addend
    )

;





ULONG
_ExInterlockedExchangeUlong (
       PULONG Target,
      ULONG Value
    )

;
















PKPCR
KeGetPcr (
    void
    )

;









ULONG
KeGetCurrentProcessorNumber (
    void
    )

;

















 
 
 

KIRQL
KeRaiseIrqlToDpcLevel (
    void
    )


















;

 
 

KIRQL
KeRaiseIrqlToSynchLevel (
    void
    )
















;














































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































typedef enum _SYSTEM_FIRMWARE_TABLE_ACTION {
    SystemFirmwareTable_Enumerate,
    SystemFirmwareTable_Get
} SYSTEM_FIRMWARE_TABLE_ACTION;

typedef struct _SYSTEM_FIRMWARE_TABLE_INFORMATION {
    ULONG                           ProviderSignature;
    SYSTEM_FIRMWARE_TABLE_ACTION    Action;
    ULONG                           TableID;
    ULONG                           TableBufferLength;
    UCHAR                           TableBuffer[1];
} SYSTEM_FIRMWARE_TABLE_INFORMATION, *PSYSTEM_FIRMWARE_TABLE_INFORMATION;

typedef
NTSTATUS
(__cdecl *PFNFTH) (
      PSYSTEM_FIRMWARE_TABLE_INFORMATION SystemFirmwareTableInfo
    );

typedef struct _SYSTEM_FIRMWARE_TABLE_HANDLER {
    ULONG       ProviderSignature;
    BOOLEAN     Register;
    PFNFTH      FirmwareTableHandler;
    PVOID       DriverObject;
} SYSTEM_FIRMWARE_TABLE_HANDLER, *PSYSTEM_FIRMWARE_TABLE_HANDLER;








typedef
void
(*PTIMER_APC_ROUTINE) (
      PVOID TimerContext,
      ULONG TimerLowValue,
      LONG TimerHighValue
    );





typedef enum _TIMER_SET_INFORMATION_CLASS {
    TimerSetCoalescableTimer,
    MaxTimerInfoClass  
} TIMER_SET_INFORMATION_CLASS;



typedef struct _TIMER_SET_COALESCABLE_TIMER_INFO {
      LARGE_INTEGER DueTime;
      PTIMER_APC_ROUTINE TimerApcRoutine;
      PVOID TimerContext;
      struct _COUNTED_REASON_CONTEXT *WakeContext;
      ULONG Period;
      ULONG TolerableDelay;
      PBOOLEAN PreviousState;
} TIMER_SET_COALESCABLE_TIMER_INFO, *PTIMER_SET_COALESCABLE_TIMER_INFO;










typedef
ULONG_PTR
(*PDRIVER_VERIFIER_THUNK_ROUTINE) (
      PVOID Context
    );






typedef struct _DRIVER_VERIFIER_THUNK_PAIRS {
    PDRIVER_VERIFIER_THUNK_ROUTINE  PristineRoutine;
    PDRIVER_VERIFIER_THUNK_ROUTINE  NewRoutine;
} DRIVER_VERIFIER_THUNK_PAIRS, *PDRIVER_VERIFIER_THUNK_PAIRS;



























































































































































typedef struct _XSTATE_FEATURE {
    ULONG Offset;
    ULONG Size;
} XSTATE_FEATURE, *PXSTATE_FEATURE;

typedef struct _XSTATE_CONFIGURATION {
    
    ULONG64 EnabledFeatures;

    
    ULONG64 EnabledVolatileFeatures;

    
    ULONG Size;

    
    union {
        ULONG ControlFlags;
        struct
        {
            ULONG OptimizedSave : 1;
            ULONG CompactionEnabled : 1;
            ULONG ExtendedFeatureDisable : 1;
        } ;
    } ;

    
    XSTATE_FEATURE Features[(64)];

    
    ULONG64 EnabledSupervisorFeatures;

    
    ULONG64 AlignedFeatures;

    
    ULONG AllFeatureSize;

    
    ULONG AllFeatures[(64)];

    
    ULONG64 EnabledUserVisibleSupervisorFeatures;

    
    ULONG64 ExtendedFeatureDisableFeatures;

    
    ULONG AllNonLargeFeatureSize;

    ULONG Spare;

} XSTATE_CONFIGURATION, *PXSTATE_CONFIGURATION;


































































































































typedef struct _KUSER_SHARED_DATA {

    
    
    
    
    

    ULONG TickCountLowDeprecated;
    ULONG TickCountMultiplier;

    
    
    

    volatile KSYSTEM_TIME InterruptTime;

    
    
    

    volatile KSYSTEM_TIME SystemTime;

    
    
    

    volatile KSYSTEM_TIME TimeZoneBias;

    
    
    
    
    

    USHORT ImageNumberLow;
    USHORT ImageNumberHigh;

    
    
    
    
    
    

    WCHAR NtSystemRoot[260];

    
    
    

    ULONG MaxStackTraceDepth;

    
    
    

    ULONG CryptoExponent;

    
    
    

    ULONG TimeZoneId;
    ULONG LargePageMinimum;

    
    
    

    ULONG AitSamplingValue;

    
    
    

    ULONG AppCompatFlag;

    
    
    

    ULONGLONG RNGSeedVersion;

    
    
    

    ULONG GlobalValidationRunlevel;

    volatile LONG TimeZoneBiasStamp;

    
    
    
    

    ULONG NtBuildNumber;

    
    
    
    
    
    

    NT_PRODUCT_TYPE NtProductType;
    BOOLEAN ProductTypeIsValid;
    BOOLEAN Reserved0[1];
    USHORT NativeProcessorArchitecture;

    
    
    
    
    
    
    
    

    ULONG NtMajorVersion;
    ULONG NtMinorVersion;

    
    
    

    BOOLEAN ProcessorFeatures[64];

    
    
    

    ULONG Reserved1;
    ULONG Reserved3;

    
    
    

    volatile ULONG TimeSlip;

    
    
    

    ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;

    
    
    

    ULONG BootId;

    
    
    
    
    
    

    LARGE_INTEGER SystemExpirationDate;

    
    
    
    
    
    

    ULONG SuiteMask;

    
    
    

    BOOLEAN KdDebuggerEnabled;

    
    
    

    union
    {
        UCHAR MitigationPolicies;
        struct
        {
            UCHAR NXSupportPolicy : 2;
            UCHAR SEHValidationPolicy : 2;
            UCHAR CurDirDevicesSkippedForDlls : 2;
            UCHAR Reserved : 2;
        };
    };

    
    
    
    
    

    USHORT CyclesPerYield;

    
    
    
    
    
    

    volatile ULONG ActiveConsoleId;

    
    
    
    
    

    volatile ULONG DismountCount;

    
    
    
    
    

    ULONG ComPlusPackage;

    
    
    
    
    

    ULONG LastSystemRITEventTickCount;

    
    
    
    

    ULONG NumberOfPhysicalPages;

    
    
    

    BOOLEAN SafeBootMode;

    
    
    

    union {
        UCHAR VirtualizationFlags;















    };

    
    
    

    UCHAR Reserved12[2];

    
    
    
    
    
    
    
    

    union {
        ULONG SharedDataFlags;
        struct {

            
            
            
            

            ULONG DbgErrorPortPresent       : 1;
            ULONG DbgElevationEnabled       : 1;
            ULONG DbgVirtEnabled            : 1;
            ULONG DbgInstallerDetectEnabled : 1;
            ULONG DbgLkgEnabled             : 1;
            ULONG DbgDynProcessorEnabled    : 1;
            ULONG DbgConsoleBrokerEnabled   : 1;
            ULONG DbgSecureBootEnabled      : 1;
            ULONG DbgMultiSessionSku        : 1;
            ULONG DbgMultiUsersInSessionSku : 1;
            ULONG DbgStateSeparationEnabled : 1;
            ULONG SpareBits                 : 21;
        } ;
    } ;

    ULONG DataFlagsPad[1];

    
    
    
    
    
    

    ULONGLONG TestRetInstruction;
    LONGLONG QpcFrequency;

    
    
    
    

    ULONG SystemCall;

    
    
    

    ULONG Reserved2;

    
    
    

    ULONGLONG SystemCallPad[2];

    
    
    

    union {
        volatile KSYSTEM_TIME TickCount;
        volatile ULONG64 TickCountQuad;
        struct {
            ULONG ReservedTickCountOverlay[3];
            ULONG TickCountPad[1];
        } ;
    } ;

    
    
    

    ULONG Cookie;
    ULONG CookiePad[1];

    
    
    
    
    
    
    

    LONGLONG ConsoleSessionForegroundProcessId;

    
    
    
    
    
    
    

    ULONGLONG TimeUpdateLock;

    
    
    

    ULONGLONG BaselineSystemTimeQpc;

    
    
    

    ULONGLONG BaselineInterruptTimeQpc;

    
    
    
    

    ULONGLONG QpcSystemTimeIncrement;

    
    
    
    

    ULONGLONG QpcInterruptTimeIncrement;

    
    
    
    

    UCHAR QpcSystemTimeIncrementShift;

    
    
    
    

    UCHAR QpcInterruptTimeIncrementShift;

    
    
    

    USHORT UnparkedProcessorCount;

    
    
    
    
    
    

    ULONG EnclaveFeatureMask[4];

    
    
    

    ULONG TelemetryCoverageRound;

    
    
    
    

    USHORT UserModeGlobalLogger[16];

    
    
    
    

    ULONG ImageFileExecutionOptions;

    
    
    

    ULONG LangGenerationCount;

    
    
    

    ULONGLONG Reserved4;

    
    
    

    volatile ULONGLONG InterruptTimeBias;

    
    
    
    

    volatile ULONGLONG QpcBias;

    
    
    

    ULONG ActiveProcessorCount;
    volatile UCHAR ActiveGroupCount;

    
    
    

    UCHAR Reserved9;

    union {
        USHORT QpcData;
        struct {

            
            
            
            

            volatile UCHAR QpcBypassEnabled;

            
            
            
            

            UCHAR QpcShift;
        };
    };

    LARGE_INTEGER TimeZoneBiasEffectiveStart;
    LARGE_INTEGER TimeZoneBiasEffectiveEnd;

    
    
    

    XSTATE_CONFIGURATION XState;

    KSYSTEM_TIME FeatureConfigurationChangeStamp;
    ULONG Spare;

    ULONG64 UserPointerAuthMask;

} KUSER_SHARED_DATA, *PKUSER_SHARED_DATA;













typedef char __C_ASSERT__[(0 == 0)?1:-1];
typedef char __C_ASSERT__[(1 == 1)?1:-1];





typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TickCountLowDeprecated)) == 0x0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TickCountMultiplier)) == 0x4)?1:-1];
typedef char __C_ASSERT__[(__alignof(KSYSTEM_TIME) == 4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->InterruptTime)) == 0x08)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SystemTime)) == 0x014)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TimeZoneBias)) == 0x020)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ImageNumberLow)) == 0x02c)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ImageNumberHigh)) == 0x02e)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NtSystemRoot)) == 0x030)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->MaxStackTraceDepth)) == 0x238)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->CryptoExponent)) == 0x23c)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TimeZoneId)) == 0x240)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->LargePageMinimum)) == 0x244)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->AitSamplingValue)) == 0x248)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->AppCompatFlag)) == 0x24c)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->RNGSeedVersion)) == 0x250)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->GlobalValidationRunlevel)) == 0x258)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TimeZoneBiasStamp)) == 0x25c)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NtBuildNumber)) == 0x260)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NtProductType)) == 0x264)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ProductTypeIsValid)) == 0x268)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NativeProcessorArchitecture)) == 0x26a)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NtMajorVersion)) == 0x26c)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NtMinorVersion)) == 0x270)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ProcessorFeatures)) == 0x274)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Reserved1)) == 0x2b4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Reserved3)) == 0x2b8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TimeSlip)) == 0x2bc)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->AlternativeArchitecture)) == 0x2c0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SystemExpirationDate)) == 0x2c8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SuiteMask)) == 0x2d0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->KdDebuggerEnabled)) == 0x2d4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->MitigationPolicies)) == 0x2d5)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->CyclesPerYield)) == 0x2d6)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ActiveConsoleId)) == 0x2d8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->DismountCount)) == 0x2dc)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ComPlusPackage)) == 0x2e0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->LastSystemRITEventTickCount)) == 0x2e4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->NumberOfPhysicalPages)) == 0x2e8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SafeBootMode)) == 0x2ec)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->VirtualizationFlags)) == 0x2ed)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Reserved12)) == 0x2ee)?1:-1];



typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SharedDataFlags)) == 0x2f0)?1:-1];



typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TestRetInstruction)) == 0x2f8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->QpcFrequency)) == 0x300)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SystemCall)) == 0x308)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Reserved2)) == 0x30c)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->SystemCallPad)) == 0x310)?1:-1];



typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TickCount)) == 0x320)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TickCountQuad)) == 0x320)?1:-1];



typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Cookie)) == 0x330)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ConsoleSessionForegroundProcessId)) == 0x338)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TimeUpdateLock)) == 0x340)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->BaselineSystemTimeQpc)) == 0x348)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->BaselineInterruptTimeQpc)) == 0x350)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->QpcSystemTimeIncrement)) == 0x358)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->QpcInterruptTimeIncrement)) == 0x360)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->QpcSystemTimeIncrementShift)) == 0x368)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->QpcInterruptTimeIncrementShift)) == 0x369)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->UnparkedProcessorCount)) == 0x36a)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->EnclaveFeatureMask)) == 0x36c)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TelemetryCoverageRound)) == 0x37c)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->UserModeGlobalLogger)) == 0x380)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ImageFileExecutionOptions)) == 0x3a0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->LangGenerationCount)) == 0x3a4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Reserved4)) == 0x3a8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->InterruptTimeBias)) == 0x3b0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->QpcBias)) == 0x3b8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ActiveProcessorCount)) == 0x3c0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->ActiveGroupCount)) == 0x3c4)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->Reserved9)) == 0x3c5)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->QpcData)) == 0x3c6)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->QpcBypassEnabled)) == 0x3c6)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->QpcShift)) == 0x3c7)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TimeZoneBiasEffectiveStart)) == 0x3c8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->TimeZoneBiasEffectiveEnd)) == 0x3d0)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->XState)) == 0x3d8)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->FeatureConfigurationChangeStamp)) == 0x720)?1:-1];
typedef char __C_ASSERT__[(((LONG)(LONG_PTR)&(((KUSER_SHARED_DATA *)0)->UserPointerAuthMask)) == 0x730)?1:-1];

typedef char __C_ASSERT__[(sizeof(KUSER_SHARED_DATA) == 0x738)?1:-1];














typedef struct _CM_PCCARD_DEVICE_DATA {
    UCHAR Flags;
    UCHAR ErrorCode;
    USHORT Reserved;
    ULONG BusData;
    ULONG DeviceId;
    ULONG LegacyBaseAddress;
    UCHAR IRQMap[16];
} CM_PCCARD_DEVICE_DATA, *PCM_PCCARD_DEVICE_DATA;























typedef enum _CONFIGURATION_TYPE {
    ArcSystem,
    CentralProcessor,
    FloatingPointProcessor,
    PrimaryIcache,
    PrimaryDcache,
    SecondaryIcache,
    SecondaryDcache,
    SecondaryCache,
    EisaAdapter,
    TcAdapter,
    ScsiAdapter,
    DtiAdapter,
    MultiFunctionAdapter,
    DiskController,
    TapeController,
    CdromController,
    WormController,
    SerialController,
    NetworkController,
    DisplayController,
    ParallelController,
    PointerController,
    KeyboardController,
    AudioController,
    OtherController,
    DiskPeripheral,
    FloppyDiskPeripheral,
    TapePeripheral,
    ModemPeripheral,
    MonitorPeripheral,
    PrinterPeripheral,
    PointerPeripheral,
    KeyboardPeripheral,
    TerminalPeripheral,
    OtherPeripheral,
    LinePeripheral,
    NetworkPeripheral,
    SystemMemory,
    DockingInformation,
    RealModeIrqRoutingTable,
    RealModePCIEnumeration,
    MaximumType
} CONFIGURATION_TYPE, *PCONFIGURATION_TYPE;




































NTSTATUS
KeInitializeCrashDumpHeader(
      ULONG DumpType,
      ULONG Flags,
      PVOID Buffer,
      ULONG BufferSize,
      PULONG BufferNeeded
    );




void
KeSetImportanceDpc (
      PRKDPC Dpc,
      KDPC_IMPORTANCE Importance
    );




void
KeSetTargetProcessorDpc (
      PRKDPC Dpc,
      CCHAR Number
    );




 

LONG
KePulseEvent (
      PRKEVENT Event,
      KPRIORITY Increment,
      BOOLEAN Wait
    );





typedef
 
 
void
(__stdcall EXPAND_STACK_CALLOUT) (
      PVOID Parameter
    );

typedef EXPAND_STACK_CALLOUT *PEXPAND_STACK_CALLOUT;


 
 

NTSTATUS
KeExpandKernelStackAndCallout (
      PEXPAND_STACK_CALLOUT Callout,
      PVOID Parameter,
      SIZE_T Size
    );






 
 
 
 

NTSTATUS
KeExpandKernelStackAndCalloutEx (
      PEXPAND_STACK_CALLOUT Callout,
      PVOID Parameter,
      SIZE_T Size,
      BOOLEAN Wait,
      PVOID Context
    );





 
 

LONG
KeSetBasePriorityThread (
      PKTHREAD Thread,
      LONG Increment
    );





 

void
KeEnterCriticalRegion (
    void
    );




 

void
KeLeaveCriticalRegion (
    void
    );




 

void
KeEnterGuardedRegion (
    void
    );




 

void
KeLeaveGuardedRegion (
    void
    );



 
 

BOOLEAN
KeAreApcsDisabled (
    void
    );





 


void
__stdcall
KeBugCheck (
      ULONG BugCheckCode
    );







 
 

BOOLEAN
KeInvalidateAllCaches (
    void
    );




 
 

void

KeInvalidateRangeAllCaches (
      PVOID BaseAddress,
      ULONG Length
    );




KAFFINITY
KeQueryActiveProcessors (
    void
    );




ULONG
KeQueryActiveProcessorCount (
      PKAFFINITY ActiveProcessors
    );




ULONG
KeQueryActiveProcessorCountEx (
      USHORT GroupNumber
    );




ULONG
KeQueryMaximumProcessorCount (
    void
    );




ULONG
KeQueryMaximumProcessorCountEx (
      USHORT GroupNumber
    );




USHORT
KeQueryActiveGroupCount (
    void
    );




USHORT
KeQueryMaximumGroupCount (
    void
    );




KAFFINITY
KeQueryGroupAffinity (
      USHORT GroupNumber
    );




ULONG
KeGetCurrentProcessorNumberEx (
      PPROCESSOR_NUMBER ProcNumber
    );




void
KeQueryNodeActiveAffinity (
      USHORT NodeNumber,
      PGROUP_AFFINITY Affinity,
      PUSHORT Count
    );




USHORT
KeQueryNodeMaximumProcessorCount (
      USHORT NodeNumber
    );




USHORT
KeQueryHighestNodeNumber (
    void
    );




USHORT
KeGetCurrentNodeNumber (
    void
    );



 


NTSTATUS
KeQueryLogicalProcessorRelationship (
      PPROCESSOR_NUMBER ProcessorNumber,
      LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
      PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
     PULONG Length
    );


 

LOGICAL
KeShouldYieldProcessor (
    void
    );



NTSTATUS
KeQueryNodeActiveAffinity2 (
      USHORT NodeNumber,
     
    PGROUP_AFFINITY GroupAffinities,
      USHORT GroupAffinitiesCount,
      PUSHORT GroupAffinitiesRequired
    );




ULONG
KeQueryNodeActiveProcessorCount (
      USHORT NodeNumber
    );



 

NTSTATUS
KeSetHardwareCounterConfiguration (
      PHARDWARE_COUNTER CounterArray,
      ULONG Count
    );



 

NTSTATUS
KeQueryHardwareCounterConfiguration (
      PHARDWARE_COUNTER CounterArray,
      ULONG MaximumCount,
      PULONG Count
    );





















 


void
ExRaiseDatatypeMisalignment (
    void
    );





 


void
ExRaiseAccessViolation (
    void
    );








typedef struct _ZONE_SEGMENT_HEADER {
    SINGLE_LIST_ENTRY SegmentList;
    PVOID Reserved;
} ZONE_SEGMENT_HEADER, *PZONE_SEGMENT_HEADER;

typedef struct _ZONE_HEADER {
    SINGLE_LIST_ENTRY FreeList;
    SINGLE_LIST_ENTRY SegmentList;
    ULONG BlockSize;
    ULONG TotalSegmentSize;
} ZONE_HEADER, *PZONE_HEADER;



 


NTSTATUS
ExInitializeZone(
      PZONE_HEADER Zone,
      ULONG BlockSize,
      PVOID InitialSegment,
      ULONG InitialSegmentSize
    );





 


NTSTATUS
ExExtendZone(
      PZONE_HEADER Zone,
      PVOID Segment,
      ULONG SegmentSize
    );





 
 


NTSTATUS
ExInterlockedExtendZone(
      PZONE_HEADER Zone,
      PVOID Segment,
      ULONG SegmentSize,
       PKSPIN_LOCK Lock
    );





































































































































































































































typedef GUID UUID;



 

NTSTATUS
ExUuidCreate(
      UUID *Uuid
    );






















































































































BOOLEAN
MmIsThisAnNtAsSystem (
    void
    );





 
 

NTSTATUS
MmMapUserAddressesToPage (
      PVOID BaseAddress,
      SIZE_T NumberOfBytes,
      PVOID PageAddress
    );



typedef struct _PHYSICAL_MEMORY_RANGE {
    PHYSICAL_ADDRESS BaseAddress;
    LARGE_INTEGER NumberOfBytes;
} PHYSICAL_MEMORY_RANGE, *PPHYSICAL_MEMORY_RANGE;













 

NTSTATUS
MmAddPhysicalMemory (
      PPHYSICAL_ADDRESS StartAddress,
      PLARGE_INTEGER NumberOfBytes
    );


typedef NTSTATUS (*PMM_ROTATE_COPY_CALLBACK_FUNCTION) (
      PMDL DestinationMdl,
      PMDL SourceMdl,
      PVOID Context
    );

typedef enum _MM_ROTATE_DIRECTION {
    MmToFrameBuffer,
    MmToFrameBufferNoCopy,
    MmToRegularMemory,
    MmToRegularMemoryNoCopy,
    MmMaximumRotateDirection
} MM_ROTATE_DIRECTION, *PMM_ROTATE_DIRECTION;



 
 
NTSTATUS
MmRotatePhysicalView (
      PVOID VirtualAddress,
      PSIZE_T NumberOfBytes,
      PMDL NewMdl,
      MM_ROTATE_DIRECTION Direction,
      PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
      PVOID Context
    );










 

NTSTATUS
MmRemovePhysicalMemory (
      PPHYSICAL_ADDRESS StartAddress,
      PLARGE_INTEGER NumberOfBytes
    );



 

PPHYSICAL_MEMORY_RANGE
MmGetPhysicalMemoryRanges (
    void
    );









 

PPHYSICAL_MEMORY_RANGE
MmGetPhysicalMemoryRangesEx (
      PVOID PartitionObject
    );






 

PPHYSICAL_MEMORY_RANGE
MmGetPhysicalMemoryRangesEx2 (
      PVOID PartitionObject,
      ULONG Flags
    );




 
 

  PVOID
MmMapVideoDisplay (
      PHYSICAL_ADDRESS PhysicalAddress,
      SIZE_T NumberOfBytes,
      MEMORY_CACHING_TYPE CacheType
     );




 

void
MmUnmapVideoDisplay (
       PVOID BaseAddress,
       SIZE_T NumberOfBytes
     );




PHYSICAL_ADDRESS
MmGetPhysicalAddress (
      PVOID BaseAddress
    );



 

NTSTATUS
MmGetCacheAttribute (
      PHYSICAL_ADDRESS PhysicalAddress,
      MEMORY_CACHING_TYPE *CacheType
    );

typedef struct _MM_COPY_ADDRESS {
    union {
        PVOID VirtualAddress;
        PHYSICAL_ADDRESS PhysicalAddress;
    };
} MM_COPY_ADDRESS, *PMMCOPY_ADDRESS;




 

NTSTATUS
MmCopyMemory (
      PVOID TargetAddress,
      MM_COPY_ADDRESS SourceAddress,
      SIZE_T NumberOfBytes,
      ULONG Flags,
      PSIZE_T NumberOfBytesTransferred
    );







 
NTSTATUS
MmGetCacheAttributeEx (
      PHYSICAL_ADDRESS PhysicalAddress,
      ULONG Flags,
      MEMORY_CACHING_TYPE *CacheType
    );






PVOID
MmGetVirtualForPhysical (
      PHYSICAL_ADDRESS PhysicalAddress
    );





 
 

 PVOID
MmAllocateContiguousMemory (
      SIZE_T NumberOfBytes,
      PHYSICAL_ADDRESS HighestAcceptableAddress
    );



 
 

 PVOID
MmAllocateContiguousMemorySpecifyCache (
      SIZE_T NumberOfBytes,
      PHYSICAL_ADDRESS LowestAcceptableAddress,
      PHYSICAL_ADDRESS HighestAcceptableAddress,
      PHYSICAL_ADDRESS BoundaryAddressMultiple,
      MEMORY_CACHING_TYPE CacheType
    );






typedef ULONG NODE_REQUIREMENT;








 
 

 PVOID
MmAllocateContiguousMemorySpecifyCacheNode (
      SIZE_T NumberOfBytes,
      PHYSICAL_ADDRESS LowestAcceptableAddress,
      PHYSICAL_ADDRESS HighestAcceptableAddress,
      PHYSICAL_ADDRESS BoundaryAddressMultiple,
      MEMORY_CACHING_TYPE CacheType,
      NODE_REQUIREMENT PreferredNode
    );



 
 

 PVOID
MmAllocateContiguousNodeMemory (
      SIZE_T NumberOfBytes,
      PHYSICAL_ADDRESS LowestAcceptableAddress,
      PHYSICAL_ADDRESS HighestAcceptableAddress,
      PHYSICAL_ADDRESS BoundaryAddressMultiple,
      ULONG Protect,
      NODE_REQUIREMENT PreferredNode
    );






 

NTSTATUS
MmAllocateContiguousMemoryEx (
      PSIZE_T NumberOfBytes,
      PHYSICAL_ADDRESS LowestAcceptableAddress,
      PHYSICAL_ADDRESS HighestAcceptableAddress,
      PHYSICAL_ADDRESS BoundaryAddressMultiple,
      NODE_REQUIREMENT PreferredNode,
      ULONG Protect,
      PVOID PartitionObject,
      ULONG Tag,
      ULONG Flags,
      PVOID* BaseAddress
    );




 

void
MmFreeContiguousMemory (
      PVOID BaseAddress
    );



 

void
MmFreeContiguousMemorySpecifyCache (
      PVOID BaseAddress,
      SIZE_T NumberOfBytes,
      MEMORY_CACHING_TYPE CacheType
    );




 
 

  PVOID
MmAllocateNonCachedMemory (
      SIZE_T NumberOfBytes
    );



 

void
MmFreeNonCachedMemory (
      PVOID BaseAddress,
      SIZE_T NumberOfBytes
    );



 

BOOLEAN
MmIsAddressValid (
      PVOID VirtualAddress
    );



 


BOOLEAN
MmIsNonPagedSystemAddressValid (
      PVOID VirtualAddress
    );




 

void
MmLockPagableSectionByHandle (
      PVOID ImageSectionHandle
    );












 
 
 

HANDLE
MmSecureVirtualMemory (
       PVOID Address,
        SIZE_T Size,
      ULONG ProbeMode
    );
















 
 
 

HANDLE
MmSecureVirtualMemoryEx (
       PVOID Address,
        SIZE_T Size,
      ULONG ProbeMode,
      ULONG Flags
    );




 

void
MmUnsecureVirtualMemory (
      HANDLE SecureHandle
    );






 
 

NTSTATUS
MmMapViewInSystemSpaceEx (
      PVOID Section,
     PVOID *MappedBase,
      PSIZE_T ViewSize,
      PLARGE_INTEGER SectionOffset,
      ULONG_PTR Flags
    );




 
 

NTSTATUS
MmMapViewInSystemSpace (
      PVOID Section,
     PVOID *MappedBase,
      PSIZE_T ViewSize
    );




 

NTSTATUS
MmUnmapViewInSystemSpace (
      PVOID MappedBase
    );



 
 

NTSTATUS
MmMapViewInSessionSpaceEx (
      PVOID Section,
     PVOID *MappedBase,
      PSIZE_T ViewSize,
      PLARGE_INTEGER SectionOffset,
      ULONG_PTR Flags
    );




 
 

NTSTATUS
MmMapViewInSessionSpace (
      PVOID Section,
     PVOID *MappedBase,
      PSIZE_T ViewSize
    );





 

NTSTATUS
MmUnmapViewInSessionSpace (
      PVOID MappedBase
    );





 
 

NTSTATUS
MmCreateMirror (
    void
    );




 

BOOLEAN
SeSinglePrivilegeCheck(
      LUID PrivilegeValue,
      KPROCESSOR_MODE PreviousMode
    );



extern  PEPROCESS PsInitialSystemProcess;





































typedef struct _PS_CREATE_NOTIFY_INFO {
      SIZE_T Size;
    union {
          ULONG Flags;
        struct {
              ULONG FileOpenNameAvailable : 1;
              ULONG IsSubsystemProcess : 1;
              ULONG Reserved : 30;
        };
    };
      HANDLE ParentProcessId;
      CLIENT_ID CreatingThreadId;
      struct _FILE_OBJECT *FileObject;
      PCUNICODE_STRING ImageFileName;
      PCUNICODE_STRING CommandLine;
      NTSTATUS CreationStatus;
} PS_CREATE_NOTIFY_INFO, *PPS_CREATE_NOTIFY_INFO;

typedef
void
(*PCREATE_PROCESS_NOTIFY_ROUTINE)(
      HANDLE ParentId,
      HANDLE ProcessId,
      BOOLEAN Create
    );



 

NTSTATUS
PsSetCreateProcessNotifyRoutine(
      PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine,
      BOOLEAN Remove
    );


typedef
void
(*PCREATE_PROCESS_NOTIFY_ROUTINE_EX) (
      PEPROCESS Process,
      HANDLE ProcessId,
      PPS_CREATE_NOTIFY_INFO CreateInfo
    );



 

NTSTATUS
PsSetCreateProcessNotifyRoutineEx (
      PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine,
      BOOLEAN Remove
    );



typedef enum _PSCREATEPROCESSNOTIFYTYPE {
    PsCreateProcessNotifySubsystems = 0
} PSCREATEPROCESSNOTIFYTYPE;

 

NTSTATUS
PsSetCreateProcessNotifyRoutineEx2 (
      PSCREATEPROCESSNOTIFYTYPE NotifyType,
      PVOID NotifyInformation,
      BOOLEAN Remove
    );


typedef
void
(*PCREATE_THREAD_NOTIFY_ROUTINE)(
      HANDLE ProcessId,
      HANDLE ThreadId,
      BOOLEAN Create
    );



 

NTSTATUS
PsSetCreateThreadNotifyRoutine(
      PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine
    );



typedef enum _PSCREATETHREADNOTIFYTYPE {
    PsCreateThreadNotifyNonSystem = 0,
    PsCreateThreadNotifySubsystems = 1
} PSCREATETHREADNOTIFYTYPE;

 

NTSTATUS
PsSetCreateThreadNotifyRoutineEx(
      PSCREATETHREADNOTIFYTYPE NotifyType,
      PVOID NotifyInformation
    );




NTSTATUS
PsRemoveCreateThreadNotifyRoutine (
      PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine
    );








typedef struct _IMAGE_INFO {
    union {
        ULONG Properties;
        struct {
            ULONG ImageAddressingMode  : 8;  
            ULONG SystemModeImage      : 1;  
            ULONG ImageMappedToAllPids : 1;  
            ULONG ExtendedInfoPresent  : 1;  
            ULONG MachineTypeMismatch  : 1;  
            ULONG ImageSignatureLevel  : 4;  
            ULONG ImageSignatureType   : 3;  
            ULONG ImagePartialMap      : 1;  
            ULONG Reserved             : 12;
        };
    };
    PVOID       ImageBase;
    ULONG       ImageSelector;
    SIZE_T      ImageSize;
    ULONG       ImageSectionNumber;
} IMAGE_INFO, *PIMAGE_INFO;

typedef struct _IMAGE_INFO_EX {
    SIZE_T              Size;
    IMAGE_INFO          ImageInfo;
    struct _FILE_OBJECT *FileObject;
} IMAGE_INFO_EX, *PIMAGE_INFO_EX;

typedef
void
(*PLOAD_IMAGE_NOTIFY_ROUTINE)(
      PUNICODE_STRING FullImageName,
      HANDLE ProcessId,                
      PIMAGE_INFO ImageInfo
    );


 

NTSTATUS
PsSetLoadImageNotifyRoutine(
      PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine
    );






 

NTSTATUS
PsSetLoadImageNotifyRoutineEx(
      PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine,
      ULONG_PTR Flags
    );




 

NTSTATUS
PsRemoveLoadImageNotifyRoutine(
      PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine
    );





HANDLE
PsGetCurrentProcessId(
    void
    );



 

HANDLE
PsGetCurrentThreadId(
    void
    );








 

BOOLEAN
PsSetCurrentThreadPrefetching (
      BOOLEAN Prefetching
    );

 

BOOLEAN
PsIsCurrentThreadPrefetching (
    void
    );




 

LONGLONG
PsGetProcessCreateTimeQuadPart(
      PEPROCESS Process
    );



 

ULONGLONG
PsGetProcessStartKey(
      PEPROCESS Process
    );



 

NTSTATUS
PsGetProcessExitStatus(
      PEPROCESS Process
    );

 

NTSTATUS
PsGetThreadExitStatus(
      PETHREAD Thread
    );



 

HANDLE
PsGetProcessId(
      PEPROCESS Process
    );


 

HANDLE
PsGetThreadId(
      PETHREAD Thread
     );


 

PVOID
PsGetThreadProperty(
      PETHREAD Thread,
      ULONG_PTR Key,
      ULONG Flags
    );




HANDLE
PsGetThreadProcessId(
      PETHREAD Thread
    );




LONGLONG
PsGetThreadCreateTime(
      PETHREAD Thread
    );






PVOID
PsGetCurrentThreadTeb(
    void
    );










typedef
void
(__stdcall *SILO_CONTEXT_CLEANUP_CALLBACK)(
      PVOID SiloContext
    );

typedef
NTSTATUS
(__stdcall *SILO_MONITOR_CREATE_CALLBACK)(
      PESILO Silo
    );

typedef
void
(__stdcall *SILO_MONITOR_TERMINATE_CALLBACK)(
      PESILO Silo
    );



typedef struct _SILO_MONITOR_REGISTRATION {
    UCHAR Version;
    BOOLEAN MonitorHost;
    BOOLEAN MonitorExistingSilos;
    UCHAR Reserved[5];
    union {
        PUNICODE_STRING DriverObjectName;
        PUNICODE_STRING ComponentName;
    };
    SILO_MONITOR_CREATE_CALLBACK CreateCallback;
    SILO_MONITOR_TERMINATE_CALLBACK TerminateCallback;
} SILO_MONITOR_REGISTRATION, *PSILO_MONITOR_REGISTRATION;


NTSTATUS
PsGetJobSilo(
      PEJOB Job,
     PESILO *Silo
    );


NTSTATUS
PsGetJobServerSilo(
      PEJOB Job,
     PESILO *ServerSilo
    );


PESILO
PsGetEffectiveServerSilo(
      PESILO Silo
    );

 

PESILO
PsAttachSiloToCurrentThread(
      PESILO Silo
    );

 

void
PsDetachSiloFromCurrentThread(
      PESILO PreviousSilo
    );


BOOLEAN
PsIsHostSilo(
      PESILO Silo
    );


PESILO
PsGetHostSilo(
    void
    );

 

PESILO
PsGetCurrentSilo(
    void
    );


PESILO
PsGetCurrentServerSilo(
    void
    );



PUNICODE_STRING
PsGetCurrentServerSiloName(
    void
    );

 

BOOLEAN
PsIsCurrentThreadInServerSilo(
    void
    );

 

NTSTATUS
PsAcquireSiloHardReference(
      PESILO Silo
    );

 

void
PsReleaseSiloHardReference(
      PESILO Silo
    );




 
NTSTATUS
PsAllocSiloContextSlot(
      ULONG_PTR Reserved,
      ULONG *ReturnedContextSlot
   );


 
NTSTATUS
PsFreeSiloContextSlot(
      ULONG ContextSlot
    );


 
NTSTATUS
PsCreateSiloContext(
      PESILO Silo,
      ULONG Size,
      POOL_TYPE PoolType,
      SILO_CONTEXT_CLEANUP_CALLBACK ContextCleanupCallback,
     PVOID *ReturnedSiloContext
    );


 
NTSTATUS
PsInsertSiloContext(
      PESILO Silo,
      ULONG ContextSlot,
      PVOID SiloContext
   );


 
NTSTATUS
PsReplaceSiloContext(
      PESILO Silo,
      ULONG ContextSlot,
      PVOID NewSiloContext,
     PVOID *OldSiloContext
   );



NTSTATUS
PsGetSiloContext(
      PESILO Silo,
      ULONG ContextSlot,
     PVOID *ReturnedSiloContext
   );


 
NTSTATUS
PsRemoveSiloContext(
      PESILO Silo,
      ULONG ContextSlot,
     PVOID *RemovedSiloContext
   );

 

void
PsReferenceSiloContext(
      PVOID SiloContext
    );

 

void
PsDereferenceSiloContext(
      PVOID SiloContext
    );


 
NTSTATUS
PsInsertPermanentSiloContext(
      PESILO Silo,
      ULONG ContextSlot,
      PVOID SiloContext
   );


 
NTSTATUS
PsMakeSiloContextPermanent(
      PESILO Silo,
      ULONG ContextSlot
    );

 


NTSTATUS
PsGetPermanentSiloContext(
      PESILO Silo,
      ULONG ContextSlot,
     PVOID *ReturnedSiloContext
    );


 
NTSTATUS
PsRegisterSiloMonitor(
      PSILO_MONITOR_REGISTRATION Registration,
     PSILO_MONITOR *ReturnedMonitor
    );


 
NTSTATUS
PsStartSiloMonitor(
      PSILO_MONITOR Monitor
    );


ULONG
PsGetSiloMonitorContextSlot(
      PSILO_MONITOR Monitor
    );


void
PsUnregisterSiloMonitor(
        PSILO_MONITOR Monitor
    );


ULONG
PsGetServerSiloServiceSessionId(
      PESILO Silo
    );


ULONG
PsGetServerSiloActiveConsoleId(
      PESILO Silo
    );


void
PsTerminateServerSilo(
      PESILO ServerSilo,
      NTSTATUS ExitStatus
    );





PESILO
PsGetParentSilo(
      PEJOB Job
    );





 

PESILO
PsGetThreadServerSilo(
      PETHREAD Thread
    );


GUID*
PsGetSiloContainerId(
      PESILO Silo
    );


































































































typedef NTSTATUS (*PIO_QUERY_DEVICE_ROUTINE)(
      PVOID Context,
      PUNICODE_STRING PathName,
      INTERFACE_TYPE BusType,
      ULONG BusNumber,
      PKEY_VALUE_FULL_INFORMATION *BusInformation,
      CONFIGURATION_TYPE ControllerType,
      ULONG ControllerNumber,
      PKEY_VALUE_FULL_INFORMATION *ControllerInformation,
      CONFIGURATION_TYPE PeripheralType,
      ULONG PeripheralNumber,
      PKEY_VALUE_FULL_INFORMATION *PeripheralInformation
    );






typedef enum _IO_QUERY_DEVICE_DATA_FORMAT {
    IoQueryDeviceIdentifier = 0,
    IoQueryDeviceConfigurationData,
    IoQueryDeviceComponentInformation,
    IoQueryDeviceMaxData
} IO_QUERY_DEVICE_DATA_FORMAT, *PIO_QUERY_DEVICE_DATA_FORMAT;





typedef
void
DRIVER_REINITIALIZE (
      struct _DRIVER_OBJECT *DriverObject,
      PVOID Context,
      ULONG Count
    );

typedef DRIVER_REINITIALIZE *PDRIVER_REINITIALIZE;


typedef struct _CONTROLLER_OBJECT {
    CSHORT Type;
    CSHORT Size;
    PVOID ControllerExtension;
    KDEVICE_QUEUE DeviceWaitQueue;

    ULONG Spare1;
    LARGE_INTEGER Spare2;

} CONTROLLER_OBJECT, *PCONTROLLER_OBJECT;







































typedef struct _CONFIGURATION_INFORMATION {

    
    
    
    
    
    

    ULONG DiskCount;                
    ULONG FloppyCount;              
    ULONG CdRomCount;               
    ULONG TapeCount;                
    ULONG ScsiPortCount;            
    ULONG SerialCount;              
    ULONG ParallelCount;            

    
    
    
    

    BOOLEAN AtDiskPrimaryAddressClaimed;    
    BOOLEAN AtDiskSecondaryAddressClaimed;  

    
    
    
    

    ULONG Version;

    
    
    
    
    

    ULONG MediumChangerCount;

} CONFIGURATION_INFORMATION, *PCONFIGURATION_INFORMATION;






















 
 

void
IoAllocateController(
      PCONTROLLER_OBJECT ControllerObject,
      PDEVICE_OBJECT DeviceObject,
      PDRIVER_CONTROL ExecutionRoutine,
      PVOID Context
    );


































                 
 

NTSTATUS
IoAssignResources (
      PUNICODE_STRING RegistryPath,
      PUNICODE_STRING DriverClassName,
      PDRIVER_OBJECT DriverObject,
      PDEVICE_OBJECT DeviceObject,
      PIO_RESOURCE_REQUIREMENTS_LIST RequestedResources,
      PCM_RESOURCE_LIST *AllocatedResources
    );




                 
 

NTSTATUS
IoAttachDeviceByPointer(
      PDEVICE_OBJECT SourceDevice,
      PDEVICE_OBJECT TargetDevice
    );




 

PCONTROLLER_OBJECT
IoCreateController(
      ULONG Size
    );































 

void
IoDeleteController(
      PCONTROLLER_OBJECT ControllerObject
    );




 
 

void
IoFreeController(
      PCONTROLLER_OBJECT ControllerObject
    );



                 
                                 
PCONFIGURATION_INFORMATION                  
IoGetConfigurationInformation( void );      



 

PGENERIC_MAPPING
IoGetFileObjectGenericMapping(
    void
    );





void
IoCancelFileOpen(
      PDEVICE_OBJECT  DeviceObject,
      PFILE_OBJECT    FileObject
    );




 

PIRP
IoMakeAssociatedIrp(
      PIRP Irp,
      CCHAR StackSize
    );



 

PIRP
IoMakeAssociatedIrpEx(
      PIRP Irp,
      PDEVICE_OBJECT DeviceObject,
      CCHAR StackSize
    );



                 
 

NTSTATUS
IoQueryDeviceDescription(
      PINTERFACE_TYPE BusType,
      PULONG BusNumber,
      PCONFIGURATION_TYPE ControllerType,
      PULONG ControllerNumber,
      PCONFIGURATION_TYPE PeripheralType,
      PULONG PeripheralNumber,
      PIO_QUERY_DEVICE_ROUTINE CalloutRoutine,
      PVOID Context
    );




 

void
IoRaiseHardError(
      PIRP Irp,
      PVPB Vpb,
      PDEVICE_OBJECT RealDeviceObject
    );



 

BOOLEAN
IoRaiseInformationalHardError(
      NTSTATUS ErrorStatus,
      PUNICODE_STRING String,
      PKTHREAD Thread
    );



 

BOOLEAN
IoSetThreadHardErrorMode(
      BOOLEAN EnableHardErrors
    );



 

void
IoRegisterBootDriverReinitialization(
      PDRIVER_OBJECT DriverObject,
      PDRIVER_REINITIALIZE DriverReinitializationRoutine,
      PVOID Context
    );



 

void
IoRegisterDriverReinitialization(
      PDRIVER_OBJECT DriverObject,
      PDRIVER_REINITIALIZE DriverReinitializationRoutine,
      PVOID Context
    );




                 
 

NTSTATUS
IoReportResourceUsage(
      PUNICODE_STRING DriverClassName,
       PDRIVER_OBJECT DriverObject,
      PCM_RESOURCE_LIST DriverList,
      ULONG DriverListSize,
       PDEVICE_OBJECT DeviceObject,
      PCM_RESOURCE_LIST DeviceList,
      ULONG DeviceListSize,
       BOOLEAN OverrideConflict,
      PBOOLEAN ConflictDetected
    );




BOOLEAN
IoTranslateBusAddress(
       INTERFACE_TYPE InterfaceType,
       ULONG BusNumber,
       PHYSICAL_ADDRESS BusAddress,
      PULONG AddressSpace,
      PPHYSICAL_ADDRESS TranslatedAddress
    );




 

void
IoSetHardErrorOrVerifyDevice(
      PIRP Irp,
      PDEVICE_OBJECT DeviceObject
    );



 

void

HalExamineMBR(
      PDEVICE_OBJECT DeviceObject,
      ULONG SectorSize,
      ULONG MBRTypeIdentifier,
     PVOID *Buffer
    );



                 
 
 

NTSTATUS

IoReadPartitionTable(
       PDEVICE_OBJECT DeviceObject,
       ULONG SectorSize,
       BOOLEAN ReturnRecognizedPartitions,
      struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer
    );



                 
 
 

NTSTATUS

IoSetPartitionInformation(
      PDEVICE_OBJECT DeviceObject,
      ULONG SectorSize,
      ULONG PartitionNumber,
      ULONG PartitionType
    );




                 
 
 

NTSTATUS

IoWritePartitionTable(
      PDEVICE_OBJECT DeviceObject,
      ULONG SectorSize,
      ULONG SectorsPerTrack,
      ULONG NumberOfHeads,
      struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer
    );




NTSTATUS
IoCreateDisk(
      PDEVICE_OBJECT DeviceObject,
      struct _CREATE_DISK* Disk
    );



 

NTSTATUS
IoReadPartitionTableEx(
      PDEVICE_OBJECT DeviceObject,
     struct _DRIVE_LAYOUT_INFORMATION_EX** DriveLayout
    );



 

NTSTATUS
IoWritePartitionTableEx(
      PDEVICE_OBJECT DeviceObject,
      struct _DRIVE_LAYOUT_INFORMATION_EX* DriveLayout
    );



 

NTSTATUS
IoSetPartitionInformationEx(
      PDEVICE_OBJECT DeviceObject,
      ULONG PartitionNumber,
      struct _SET_PARTITION_INFORMATION_EX* PartitionInfo
    );




NTSTATUS
IoVerifyPartitionTable(
      PDEVICE_OBJECT DeviceObject,
      BOOLEAN FixErrors
    );


typedef struct _DISK_SIGNATURE {
    ULONG PartitionStyle;
    union {
        struct {
            ULONG Signature;
            ULONG CheckSum;
        } Mbr;

        struct {
            GUID DiskId;
        } Gpt;
    };
} DISK_SIGNATURE, *PDISK_SIGNATURE;



NTSTATUS
IoReadDiskSignature(
       PDEVICE_OBJECT DeviceObject,
       ULONG BytesPerSector,
      PDISK_SIGNATURE Signature
    );






NTSTATUS
IoVolumeDeviceToDosName(
       PVOID           VolumeDeviceObject,
      
          PUNICODE_STRING DosName
    );



 

NTSTATUS
IoVolumeDeviceToGuidPath(
       PVOID           VolumeDeviceObject,
      
          PUNICODE_STRING GuidPath
    );




NTSTATUS
IoVolumeDeviceToGuid(
       PVOID           VolumeDeviceObject,
      GUID            *Guid
    );




NTSTATUS
IoVolumeDeviceNameToGuid(
       PUNICODE_STRING VolumeDeviceName,
      GUID            *Guid
    );



 

NTSTATUS
IoVolumeDeviceNameToGuidPath(
       PUNICODE_STRING VolumeDeviceName,
      
          PUNICODE_STRING GuidPath
    );





NTSTATUS
IoSetSystemPartition(
      PUNICODE_STRING VolumeNameString
    );





NTSTATUS
IoCreateFileSpecifyDeviceObjectHint(
      PHANDLE FileHandle,
       ACCESS_MASK DesiredAccess,
       POBJECT_ATTRIBUTES ObjectAttributes,
      PIO_STATUS_BLOCK IoStatusBlock,
      PLARGE_INTEGER AllocationSize,
       ULONG FileAttributes,
       ULONG ShareAccess,
       ULONG Disposition,
       ULONG CreateOptions,
      PVOID EaBuffer,
       ULONG EaLength,
       CREATE_FILE_TYPE CreateFileType,
      PVOID InternalParameters,
       ULONG Options,
      PVOID DeviceObject
    );



typedef struct _IO_FOEXT_SILO_PARAMETERS {

    ULONG Length;
    union {
        struct {
            ULONG HasHardReference : 1;
            ULONG SpareFlags : 31;
        };
        ULONG Flags;
    };
    PESILO SiloContext;

} IO_FOEXT_SILO_PARAMETERS, *PIO_FOEXT_SILO_PARAMETERS;

PIO_FOEXT_SILO_PARAMETERS
IoGetSiloParameters (
      PFILE_OBJECT FileObject
    );

 
PESILO
IoGetSilo (
      PFILE_OBJECT FileObject
    );


typedef struct _TXN_PARAMETER_BLOCK {

    USHORT Length;              
    USHORT TxFsContext;         
    PVOID  TransactionObject;   

} TXN_PARAMETER_BLOCK, *PTXN_PARAMETER_BLOCK;









PTXN_PARAMETER_BLOCK
IoGetTransactionParameterBlock (
      PFILE_OBJECT FileObject
    );









typedef struct _CREATE_USER_PROCESS_ECP_CONTEXT {
    
    
    

    USHORT Size;

    
    
    

    USHORT Reserved;

    
    
    

    PACCESS_TOKEN AccessToken;

} CREATE_USER_PROCESS_ECP_CONTEXT, *PCREATE_USER_PROCESS_ECP_CONTEXT;


extern const GUID  GUID_ECP_CREATE_USER_PROCESS;




typedef struct _OPLOCK_KEY_ECP_CONTEXT *POPLOCK_KEY_ECP_CONTEXT;

POPLOCK_KEY_ECP_CONTEXT
IoGetOplockKeyContext (
      PFILE_OBJECT FileObject
    );








typedef struct _OPLOCK_KEY_CONTEXT {

    USHORT Version;        
    USHORT Flags;          

    GUID ParentOplockKey;

    GUID TargetOplockKey;

    ULONG Reserved;

} OPLOCK_KEY_CONTEXT, *POPLOCK_KEY_CONTEXT;







POPLOCK_KEY_CONTEXT
IoGetOplockKeyContextEx (
      PFILE_OBJECT FileObject
    );


typedef struct _IO_DRIVER_CREATE_CONTEXT {
    CSHORT Size;
    struct _ECP_LIST *ExtraCreateParameter;
    PVOID DeviceObjectHint;
    PTXN_PARAMETER_BLOCK TxnParameters;

    PESILO SiloContext;

} IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT;












typedef struct _IO_FOEXT_SHADOW_FILE {

    
    PFILE_OBJECT BackingFileObject;

    
    PVOID BackingFltInstance;

} IO_FOEXT_SHADOW_FILE, * PIO_FOEXT_SHADOW_FILE;

PIO_FOEXT_SHADOW_FILE
IoGetShadowFileInformation(
      PFILE_OBJECT FileObject
    );

NTSTATUS
IoSetShadowFileInformation(
      PFILE_OBJECT FileObject,
      PFILE_OBJECT BackingFileObject,
      PVOID BackingFltInstance
    );


void

IoInitializeDriverCreateContext(
    PIO_DRIVER_CREATE_CONTEXT DriverContext
    )
;



NTSTATUS
IoCreateFileEx(
      PHANDLE FileHandle,
       ACCESS_MASK DesiredAccess,
       POBJECT_ATTRIBUTES ObjectAttributes,
      PIO_STATUS_BLOCK IoStatusBlock,
      PLARGE_INTEGER AllocationSize,
       ULONG FileAttributes,
       ULONG ShareAccess,
       ULONG Disposition,
       ULONG CreateOptions,
      PVOID EaBuffer,
       ULONG EaLength,
       CREATE_FILE_TYPE CreateFileType,
      PVOID InternalParameters,
       ULONG Options,
      PIO_DRIVER_CREATE_CONTEXT DriverContext
    );

NTSTATUS
IoSetIrpExtraCreateParameter(
      PIRP Irp,
      struct _ECP_LIST *ExtraCreateParameter
    );

void
IoClearIrpExtraCreateParameter(
      PIRP Irp
    );

NTSTATUS
IoGetIrpExtraCreateParameter(
      PIRP Irp,
     struct _ECP_LIST **ExtraCreateParameter
    );




NTSTATUS
IoQueryInformationByName (
      POBJECT_ATTRIBUTES ObjectAttributes,
      PIO_STATUS_BLOCK IoStatusBlock,
      PVOID FileInformation,
      ULONG Length,
      FILE_INFORMATION_CLASS FileInformationClass,
      ULONG Options,
      PIO_DRIVER_CREATE_CONTEXT DriverContext
    );




NTSTATUS
IoAttachDeviceToDeviceStackSafe(
       PDEVICE_OBJECT SourceDevice,
       PDEVICE_OBJECT TargetDevice,
     PDEVICE_OBJECT *AttachedToDeviceObject
    );






BOOLEAN
IoIsFileOriginRemote(
      PFILE_OBJECT FileObject
    );




NTSTATUS
IoSetFileOrigin(
      PFILE_OBJECT FileObject,
      BOOLEAN Remote
    );



BOOLEAN
IoIsFileObjectIgnoringSharing (
    PFILE_OBJECT FileObject
);



NTSTATUS
IoSetFileObjectIgnoreSharing (
    PFILE_OBJECT FileObject
);





IO_PAGING_PRIORITY

IoGetPagingIoPriority(
      PIRP Irp
    );











typedef enum _BDCB_CALLBACK_TYPE {
    BdCbStatusUpdate,
    BdCbInitializeImage,
} BDCB_CALLBACK_TYPE, *PBDCB_CALLBACK_TYPE;

typedef enum _BDCB_CLASSIFICATION {
    BdCbClassificationUnknownImage,
    BdCbClassificationKnownGoodImage,
    BdCbClassificationKnownBadImage,
    BdCbClassificationKnownBadImageBootCritical,
    BdCbClassificationEnd,
} BDCB_CLASSIFICATION, *PBDCB_CLASSIFICATION;

typedef enum _BDCB_STATUS_UPDATE_TYPE {
    BdCbStatusPrepareForDependencyLoad,
    BdCbStatusPrepareForDriverLoad,
    BdCbStatusPrepareForUnload,
} BDCB_STATUS_UPDATE_TYPE, *PBDCB_STATUS_UPDATE_TYPE;

typedef struct _BDCB_STATUS_UPDATE_CONTEXT {
    BDCB_STATUS_UPDATE_TYPE StatusType;
} BDCB_STATUS_UPDATE_CONTEXT, *PBDCB_STATUS_UPDATE_CONTEXT;

typedef struct _BDCB_IMAGE_INFORMATION {
    BDCB_CLASSIFICATION Classification;
    ULONG ImageFlags;
    UNICODE_STRING ImageName;
    UNICODE_STRING RegistryPath;
    UNICODE_STRING CertificatePublisher;
    UNICODE_STRING CertificateIssuer;
    PVOID ImageHash;
    PVOID CertificateThumbprint;
    ULONG ImageHashAlgorithm;
    ULONG ThumbprintHashAlgorithm;
    ULONG ImageHashLength;
    ULONG CertificateThumbprintLength;
} BDCB_IMAGE_INFORMATION, *PBDCB_IMAGE_INFORMATION;

typedef
void
BOOT_DRIVER_CALLBACK_FUNCTION (
      PVOID CallbackContext,
      BDCB_CALLBACK_TYPE Classification,
      PBDCB_IMAGE_INFORMATION ImageInformation
    );

typedef BOOT_DRIVER_CALLBACK_FUNCTION *PBOOT_DRIVER_CALLBACK_FUNCTION;



PVOID
IoRegisterBootDriverCallback (
      PBOOT_DRIVER_CALLBACK_FUNCTION CallbackFunction,
      PVOID CallbackContext
    );



void
IoUnregisterBootDriverCallback (
      PVOID CallbackHandle
    );



NTSTATUS
IoGetActivityIdIrp (
      PIRP Irp,
      LPGUID Guid
    );



NTSTATUS
IoSetActivityIdIrp (
      PIRP Irp,
      LPCGUID Guid
    );



NTSTATUS
IoPropagateActivityIdToThread(
      PIRP Irp,
      LPGUID PropagatedId,
     LPCGUID *OriginalId
    );



LPCGUID
IoSetActivityIdThread (
      LPCGUID ActivityId
    );



void
IoClearActivityIdThread (
      LPCGUID OriginalId
    );



LPCGUID
IoGetActivityIdThread (
    void
    );



void
IoTransferActivityId (
      LPCGUID ActivityId,
      LPCGUID RelatedActivityId
    );





NTSTATUS
IoGetFsZeroingOffset (
      PIRP Irp,
      PULONG ZeroingOffset
    );

NTSTATUS
IoSetFsZeroingOffsetRequired (
      PIRP Irp
    );

NTSTATUS
IoSetFsZeroingOffset (
      PIRP Irp,
      ULONG ZeroingOffset
    );







LOGICAL
IoIsValidIrpStatus (
     NTSTATUS Status
    );




NTSTATUS
IoIncrementKeepAliveCount(
      PFILE_OBJECT FileObject,
      PEPROCESS Process
    );




NTSTATUS
IoDecrementKeepAliveCount(
      PFILE_OBJECT FileObject,
      PEPROCESS Process
    );





PEPROCESS
IoGetInitiatorProcess(
      PFILE_OBJECT FileObject
    );




void
IoSetMasterIrpStatus(
      PIRP MasterIrp,
      NTSTATUS Status
    );




NTSTATUS
IoQueryFullDriverPath(
      PDRIVER_OBJECT DriverObject,
      PUNICODE_STRING FullPath
    );


typedef struct _AGP_TARGET_BUS_INTERFACE_STANDARD {
    
    
    
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    
    
    
    PGET_SET_DEVICE_DATA SetBusData;
    PGET_SET_DEVICE_DATA GetBusData;
    UCHAR CapabilityID;  

} AGP_TARGET_BUS_INTERFACE_STANDARD, *PAGP_TARGET_BUS_INTERFACE_STANDARD;



 
 

NTSTATUS
IoReportDetectedDevice(
      PDRIVER_OBJECT DriverObject,
      INTERFACE_TYPE LegacyBusType,
      ULONG BusNumber,
      ULONG SlotNumber,
      PCM_RESOURCE_LIST ResourceList,
      PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
      BOOLEAN ResourceAssigned,
      PDEVICE_OBJECT *DeviceObject
    );



 
 

NTSTATUS
IoReportRootDevice(
      PDRIVER_OBJECT DriverObject
    );





typedef
 
 
NTSTATUS
(*PGET_LOCATION_STRING) (
      PVOID Context,
    
    
    PZZWSTR *LocationStrings
    );

typedef struct _PNP_LOCATION_INTERFACE {
    
    
    
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    
    
    
    PGET_LOCATION_STRING GetLocationString;

} PNP_LOCATION_INTERFACE, *PPNP_LOCATION_INTERFACE;





typedef enum _ARBITER_ACTION {
    ArbiterActionTestAllocation,
    ArbiterActionRetestAllocation,
    ArbiterActionCommitAllocation,
    ArbiterActionRollbackAllocation,
    ArbiterActionQueryAllocatedResources,
    ArbiterActionWriteReservedResources,
    ArbiterActionQueryConflict,
    ArbiterActionQueryArbitrate,
    ArbiterActionAddReserved,
    ArbiterActionBootAllocation
} ARBITER_ACTION, *PARBITER_ACTION;

typedef struct _ARBITER_CONFLICT_INFO {
    
    
    
    PDEVICE_OBJECT OwningObject;

    
    
    
    ULONGLONG Start;

    
    
    
    ULONGLONG End;

} ARBITER_CONFLICT_INFO, *PARBITER_CONFLICT_INFO;





typedef struct _ARBITER_TEST_ALLOCATION_PARAMETERS {

    
    
    
      PLIST_ENTRY ArbitrationList;

    
    
    
      ULONG AllocateFromCount;

    
    
    
    
      PCM_PARTIAL_RESOURCE_DESCRIPTOR AllocateFrom;

} ARBITER_TEST_ALLOCATION_PARAMETERS, *PARBITER_TEST_ALLOCATION_PARAMETERS;


typedef struct _ARBITER_RETEST_ALLOCATION_PARAMETERS {

    
    
    
      PLIST_ENTRY ArbitrationList;

    
    
    
      ULONG AllocateFromCount;

    
    
    
    
      PCM_PARTIAL_RESOURCE_DESCRIPTOR AllocateFrom;

} ARBITER_RETEST_ALLOCATION_PARAMETERS, *PARBITER_RETEST_ALLOCATION_PARAMETERS;

typedef struct _ARBITER_BOOT_ALLOCATION_PARAMETERS {

    
    
    
      PLIST_ENTRY ArbitrationList;

} ARBITER_BOOT_ALLOCATION_PARAMETERS, *PARBITER_BOOT_ALLOCATION_PARAMETERS;


typedef struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS {

    
    
    
      PCM_PARTIAL_RESOURCE_LIST *AllocatedResources;

} ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS, *PARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS;

typedef struct _ARBITER_QUERY_CONFLICT_PARAMETERS {

    
    
    
      PDEVICE_OBJECT PhysicalDeviceObject;

    
    
    
      PIO_RESOURCE_DESCRIPTOR ConflictingResource;

    
    
    
      PULONG ConflictCount;

    
    
    
      PARBITER_CONFLICT_INFO *Conflicts;

} ARBITER_QUERY_CONFLICT_PARAMETERS, *PARBITER_QUERY_CONFLICT_PARAMETERS;

typedef struct _ARBITER_QUERY_ARBITRATE_PARAMETERS {

    
    
    
    
      PLIST_ENTRY ArbitrationList;

} ARBITER_QUERY_ARBITRATE_PARAMETERS, *PARBITER_QUERY_ARBITRATE_PARAMETERS;

typedef struct _ARBITER_ADD_RESERVED_PARAMETERS {

    
    
    
    
      PDEVICE_OBJECT ReserveDevice;

} ARBITER_ADD_RESERVED_PARAMETERS, *PARBITER_ADD_RESERVED_PARAMETERS;


typedef struct _ARBITER_PARAMETERS {

    union {

        ARBITER_TEST_ALLOCATION_PARAMETERS              TestAllocation;
        ARBITER_RETEST_ALLOCATION_PARAMETERS            RetestAllocation;
        ARBITER_BOOT_ALLOCATION_PARAMETERS              BootAllocation;
        ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS    QueryAllocatedResources;
        ARBITER_QUERY_CONFLICT_PARAMETERS               QueryConflict;
        ARBITER_QUERY_ARBITRATE_PARAMETERS              QueryArbitrate;
        ARBITER_ADD_RESERVED_PARAMETERS                 AddReserved;

    } Parameters;

} ARBITER_PARAMETERS, *PARBITER_PARAMETERS;

typedef enum _ARBITER_REQUEST_SOURCE {

    ArbiterRequestUndefined = -1,
    ArbiterRequestLegacyReported,   
    ArbiterRequestHalReported,      
    ArbiterRequestLegacyAssigned,   
    ArbiterRequestPnpDetected,      
    ArbiterRequestPnpEnumerated     

} ARBITER_REQUEST_SOURCE;


typedef enum _ARBITER_RESULT {

    ArbiterResultUndefined = -1,
    ArbiterResultSuccess,
    ArbiterResultExternalConflict, 
    ArbiterResultNullRequest       

} ARBITER_RESULT;




























NTSTATUS
IoReportResourceForDetection(
      PDRIVER_OBJECT DriverObject,
      PCM_RESOURCE_LIST DriverList,
      ULONG DriverListSize,
      PDEVICE_OBJECT DeviceObject,
      PCM_RESOURCE_LIST DeviceList,
      ULONG DeviceListSize,
      PBOOLEAN ConflictDetected
    );


typedef struct _ARBITER_LIST_ENTRY {

    
    
    
    LIST_ENTRY ListEntry;

    
    
    
    ULONG AlternativeCount;

    
    
    
     
    PIO_RESOURCE_DESCRIPTOR Alternatives;

    
    
    
    PDEVICE_OBJECT PhysicalDeviceObject;

    
    
    
    ARBITER_REQUEST_SOURCE RequestSource;

    
    
    
    ULONG Flags;

    
    
    
    
    LONG_PTR WorkSpace;

    
    
    
    
    INTERFACE_TYPE InterfaceType;
    ULONG SlotNumber;
    ULONG BusNumber;

    
    
    
    
    
    PCM_PARTIAL_RESOURCE_DESCRIPTOR Assignment;

    
    
    
    
    PIO_RESOURCE_DESCRIPTOR SelectedAlternative;

    
    
    
    
    ARBITER_RESULT Result;

} ARBITER_LIST_ENTRY, *PARBITER_LIST_ENTRY;





typedef
NTSTATUS
(*PARBITER_HANDLER) (
      PVOID Context,
      ARBITER_ACTION Action,
      PARBITER_PARAMETERS Parameters
    );








typedef struct _ARBITER_INTERFACE {

    
    
    
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    
    
    
    PARBITER_HANDLER ArbiterHandler;

    
    
    
    ULONG Flags;

} ARBITER_INTERFACE, *PARBITER_INTERFACE;





typedef enum _RESOURCE_TRANSLATION_DIRECTION {
    TranslateChildToParent,
    TranslateParentToChild
} RESOURCE_TRANSLATION_DIRECTION;





typedef
NTSTATUS
(*PTRANSLATE_RESOURCE_HANDLER)(
      PVOID Context,
      PCM_PARTIAL_RESOURCE_DESCRIPTOR Source,
      RESOURCE_TRANSLATION_DIRECTION Direction,
      ULONG AlternativesCount,
      IO_RESOURCE_DESCRIPTOR Alternatives[],
      PDEVICE_OBJECT PhysicalDeviceObject,
      PCM_PARTIAL_RESOURCE_DESCRIPTOR Target
);

typedef
NTSTATUS
(*PTRANSLATE_RESOURCE_REQUIREMENTS_HANDLER)(
      PVOID Context,
      PIO_RESOURCE_DESCRIPTOR Source,
      PDEVICE_OBJECT PhysicalDeviceObject,
      PULONG TargetCount,
      PIO_RESOURCE_DESCRIPTOR *Target
);





typedef struct _TRANSLATOR_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    PTRANSLATE_RESOURCE_HANDLER TranslateResources;
    PTRANSLATE_RESOURCE_REQUIREMENTS_HANDLER TranslateResourceRequirements;
} TRANSLATOR_INTERFACE, *PTRANSLATOR_INTERFACE;







typedef
BOOLEAN
(*PHAL_RESET_DISPLAY_PARAMETERS) (
      ULONG Columns,
      ULONG Rows
    );




void
HalAcquireDisplayOwnership (
      PHAL_RESET_DISPLAY_PARAMETERS ResetDisplayParameters
    );


                                                

                                                

                                                





                                                



                                                



                                                


























































                 


ULONG
HalSetBusDataByOffset (
      BUS_DATA_TYPE BusDataType,
      ULONG BusNumber,
      ULONG SlotNumber,
      PVOID Buffer,
      ULONG Offset,
      ULONG Length
    );



                 
 

BOOLEAN
HalTranslateBusAddress (
      INTERFACE_TYPE  InterfaceType,
      ULONG BusNumber,
      PHYSICAL_ADDRESS BusAddress,
      PULONG AddressSpace,
      PPHYSICAL_ADDRESS TranslatedAddress
    );




















PVOID
HalAllocateCrashDumpRegisters (
      PADAPTER_OBJECT AdapterObject,
      PULONG NumberOfMapRegisters
    );








typedef enum _HAL_DMA_CRASH_DUMP_REGISTER_TYPE {
    HalDmaCrashDumpRegisterSet1 = 0,
    HalDmaCrashDumpRegisterSet2,
    HalDmaCrashDumpRegisterSetMax
} HAL_DMA_CRASH_DUMP_REGISTER_TYPE, *PHAL_DMA_CRASH_DUMP_REGISTER_TYPE;


NTSTATUS
HalDmaAllocateCrashDumpRegistersEx (
      PADAPTER_OBJECT Adapter,
      ULONG NumberOfMapRegisters,
      HAL_DMA_CRASH_DUMP_REGISTER_TYPE Type,
      PVOID *MapRegisterBase,
      PULONG MapRegistersAvailable
    );


NTSTATUS
HalDmaFreeCrashDumpRegistersEx (
      PADAPTER_OBJECT Adapter,
      HAL_DMA_CRASH_DUMP_REGISTER_TYPE Type
    );
























                 


ULONG
HalGetBusDataByOffset (
      BUS_DATA_TYPE BusDataType,
      ULONG BusNumber,
      ULONG SlotNumber,
      PVOID Buffer,
      ULONG Offset,
      ULONG Length
    );



                 
 
 

PADAPTER_OBJECT
HalGetAdapter (
      PDEVICE_DESCRIPTION DeviceDescription,
      PULONG NumberOfMapRegisters
    );






















typedef
PBUS_HANDLER
( *pHalHandlerForBus) (
      INTERFACE_TYPE InterfaceType,
      ULONG          BusNumber
    );
typedef
void
( *pHalReferenceBusHandler) (
      PBUS_HANDLER   BusHandler
    );





typedef enum _HAL_QUERY_INFORMATION_CLASS {
    HalInstalledBusInformation,
    HalProfileSourceInformation,
    HalInformationClassUnused1,
    HalPowerInformation,
    HalProcessorSpeedInformation,
    HalCallbackInformation,
    HalMapRegisterInformation,
    HalMcaLogInformation,               
    HalFrameBufferCachingInformation,
    HalDisplayBiosInformation,
    HalProcessorFeatureInformation,
    HalNumaTopologyInterface,
    HalErrorInformation,                
    HalCmcLogInformation,               
    HalCpeLogInformation,               
    HalQueryMcaInterface,
    HalQueryAMLIIllegalIOPortAddresses,
    HalQueryMaxHotPlugMemoryAddress,
    HalPartitionIpiInterface,
    HalPlatformInformation,
    HalQueryProfileSourceList,
    HalInitLogInformation,
    HalFrequencyInformation,
    HalProcessorBrandString,
    HalHypervisorInformation,
    HalPlatformTimerInformation,
    HalAcpiAuditInformation,
    HalIrtInformation,
    HalSecondaryInterruptInformation,
    HalParkingPageInformation,
    HalNumaRangeTableInformation,
    HalChannelTopologyInformation,
    HalExternalCacheInformation,
    HalQueryDebuggerInformation,
    HalFwBootPerformanceInformation,
    HalFwS3PerformanceInformation,
    HalGetChannelPowerInformation,
    HalQueryStateElementInformation,
    HalPsciInformation,
    HalInterruptControllerInformation,
    HalQueryIommuReservedRegionInformation,
    HalQueryArmErrataInformation,
    HalQueryProcessorEfficiencyInformation,
    HalQueryAcpiWakeAlarmSystemPowerStateInformation,
    HalQueryProfileNumberOfCounters,
    HalQueryHyperlaunchEntrypoint,
    HalHardwareWatchdogInformation,
    HalDmaRemappingInformation,
    HalQueryUnused0001,
    HalHeterogeneousMemoryAttributesInterface,
    HalQueryPerDeviceMsiLimitInformation,
    HalQueryProfileCorruptionStatus,
    HalQueryProfileCounterOwnership,
    
} HAL_QUERY_INFORMATION_CLASS, *PHAL_QUERY_INFORMATION_CLASS;


typedef enum _HAL_SET_INFORMATION_CLASS {
    HalProfileSourceInterval,
    HalProfileSourceInterruptHandler,  
    HalMcaRegisterDriver,              
    HalKernelErrorHandler,
    HalCmcRegisterDriver,              
    HalCpeRegisterDriver,              
    HalMcaLog,
    HalCmcLog,
    HalCpeLog,
    HalGenerateCmcInterrupt,           
    HalProfileSourceTimerHandler,      
    HalEnlightenment,
    HalProfileDpgoSourceInterruptHandler,  
    HalRegisterSecondaryInterruptInterface,
    HalSetChannelPowerInformation,
    HalI386ExceptionChainTerminatorInformation, 
    HalSetResetParkDisposition,        
    HalSetPsciSuspendMode,
    HalSetHvciEnabled,
    HalSetProcessorTraceInterruptHandler, 
    HalProfileSourceAdd,
    HalProfileSourceRemove,
    HalSetSwInterruptHandler,
    HalSetClockTimerMinimumInterval,
} HAL_SET_INFORMATION_CLASS, *PHAL_SET_INFORMATION_CLASS;




typedef
NTSTATUS
(*pHalQuerySystemInformation)(
      HAL_QUERY_INFORMATION_CLASS  InformationClass,
      ULONG     BufferSize,
      PVOID Buffer,
      PULONG   ReturnedLength
    );


typedef
NTSTATUS
(*pHalSetSystemInformation)(
      HAL_SET_INFORMATION_CLASS    InformationClass,
      ULONG     BufferSize,
      PVOID     Buffer
    );


typedef
void
( *pHalExamineMBR)(
      PDEVICE_OBJECT DeviceObject,
      ULONG SectorSize,
      ULONG MBRTypeIdentifier,
      PVOID *Buffer
    );

typedef
NTSTATUS
( *pHalIoReadPartitionTable)(
      PDEVICE_OBJECT DeviceObject,
      ULONG SectorSize,
      BOOLEAN ReturnRecognizedPartitions,
      struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer
    );

typedef
NTSTATUS
( *pHalIoSetPartitionInformation)(
      PDEVICE_OBJECT DeviceObject,
      ULONG SectorSize,
      ULONG PartitionNumber,
      ULONG PartitionType
    );

typedef
NTSTATUS
( *pHalIoWritePartitionTable)(
      PDEVICE_OBJECT DeviceObject,
      ULONG SectorSize,
      ULONG SectorsPerTrack,
      ULONG NumberOfHeads,
      struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer
    );

typedef
NTSTATUS
(*pHalQueryBusSlots)(
      PBUS_HANDLER         BusHandler,
      ULONG                BufferSize,
      PULONG              SlotNumbers,
      PULONG              ReturnedLength
    );

typedef
NTSTATUS
(*pHalInitPnpDriver)(
    void
    );


typedef struct _PM_DISPATCH_TABLE {
    ULONG   Signature;
    ULONG   Version;
    PVOID   Function[1];
} PM_DISPATCH_TABLE, *PPM_DISPATCH_TABLE;



typedef
NTSTATUS
(*pHalInitPowerManagement)(
      PPM_DISPATCH_TABLE  PmDriverDispatchTable,
      PPM_DISPATCH_TABLE *PmHalDispatchTable
    );


typedef
struct _DMA_ADAPTER *
(*pHalGetDmaAdapter)(
      PVOID PhysicalDeviceObject,
      struct _DEVICE_DESCRIPTION *DeviceDescriptor,
      PULONG NumberOfMapRegisters
    );


typedef
NTSTATUS
(*pHalGetInterruptTranslator)(
      INTERFACE_TYPE ParentInterfaceType,
      ULONG ParentBusNumber,
      INTERFACE_TYPE BridgeInterfaceType,
      USHORT Size,
      USHORT Version,
      PTRANSLATOR_INTERFACE Translator,
      PULONG BridgeBusNumber
    );


typedef
BOOLEAN
(*pHalTranslateBusAddress)(
      INTERFACE_TYPE  InterfaceType,
      ULONG BusNumber,
      PHYSICAL_ADDRESS BusAddress,
      PULONG AddressSpace,
      PPHYSICAL_ADDRESS TranslatedAddress
    );

typedef
NTSTATUS
(*pHalAssignSlotResources) (
      PUNICODE_STRING RegistryPath,
      PUNICODE_STRING DriverClassName ,
      PDRIVER_OBJECT DriverObject,
      PDEVICE_OBJECT DeviceObject,
      INTERFACE_TYPE BusType,
      ULONG BusNumber,
      ULONG SlotNumber,
      PCM_RESOURCE_LIST *AllocatedResources
    );

typedef
void
(*pHalHaltSystem) (
    void
    );

typedef
BOOLEAN
(*pHalResetDisplay) (
    void
    );



typedef struct _MAP_REGISTER_ENTRY {
    PVOID   MapRegister;
    BOOLEAN WriteToDevice;
} MAP_REGISTER_ENTRY, *PMAP_REGISTER_ENTRY;




typedef
UCHAR
(*pHalVectorToIDTEntry) (
    ULONG Vector
);

typedef
BOOLEAN
(*pHalFindBusAddressTranslation) (
      PHYSICAL_ADDRESS BusAddress,
      PULONG AddressSpace,
      PPHYSICAL_ADDRESS TranslatedAddress,
      PULONG_PTR Context,
      BOOLEAN NextBus
    );

typedef
NTSTATUS
(*pHalStartMirroring)(
    void
    );

typedef
NTSTATUS
(*pHalEndMirroring)(
      ULONG PassNumber
    );

typedef
NTSTATUS
(*pHalMirrorPhysicalMemory)(
      PHYSICAL_ADDRESS PhysicalAddress,
      LARGE_INTEGER NumberOfBytes
    );

typedef
NTSTATUS
(*pHalMirrorVerify)(
      PHYSICAL_ADDRESS PhysicalAddress,
      LARGE_INTEGER NumberOfBytes
    );





typedef struct {
    UCHAR Type;  
    BOOLEAN Valid;

    union {
        UCHAR Reserved[2];

        struct {
            UCHAR BitWidth;
            UCHAR AccessSize;
        };
    };

    PUCHAR    TranslatedAddress;
    ULONG     Length;
} DEBUG_DEVICE_ADDRESS, *PDEBUG_DEVICE_ADDRESS;

typedef struct {
    PHYSICAL_ADDRESS  Start;
    PHYSICAL_ADDRESS  MaxEnd;
    PVOID             VirtualAddress;
    ULONG             Length;
    BOOLEAN           Cached;
    BOOLEAN           Aligned;
} DEBUG_MEMORY_REQUIREMENTS, *PDEBUG_MEMORY_REQUIREMENTS;

typedef enum {
    KdNameSpacePCI,
    KdNameSpaceACPI,
    KdNameSpaceAny,
    KdNameSpaceNone,

    
    
    

    KdNameSpaceMax,
} KD_NAMESPACE_ENUM, *PKD_NAMESPACE_ENUM;

typedef enum {
    KdConfigureDeviceAndContinue,
    KdSkipDeviceAndContinue,
    KdConfigureDeviceAndStop,
    KdSkipDeviceAndStop,
} KD_CALLBACK_ACTION, *PKD_CALLBACK_ACTION;





typedef struct _DEBUG_TRANSPORT_DATA {
    ULONG HwContextSize;
    ULONG SharedVisibleDataSize;
    BOOLEAN UseSerialFraming;
    BOOLEAN ValidUSBCoreId;
    UCHAR USBCoreId;
} DEBUG_TRANSPORT_DATA, *PDEBUG_TRANSPORT_DATA;





typedef struct _DEBUG_IOMMU_EFI_DATA {
  PVOID PciIoProtocolHandle;
  PVOID Mapping;
} DEBUG_EFI_IOMMU_DATA, *PDEBUG_EFI_IOMMU_DATA;










typedef struct _DEBUG_DEVICE_DESCRIPTOR {
    ULONG     Bus;
    ULONG     Slot;
    USHORT    Segment;
    USHORT    VendorID;
    USHORT    DeviceID;
    UCHAR     BaseClass;
    UCHAR     SubClass;
    UCHAR     ProgIf;
    union {
        UCHAR     Flags;
        struct {
            UCHAR DbgHalScratchAllocated : 1;
            UCHAR DbgBarsMapped : 1;
            UCHAR DbgScratchAllocated : 1;
            UCHAR DbgUncachedMemory : 1;
            UCHAR DbgSynthetic : 1;
        };
    };
    BOOLEAN   Initialized;
    BOOLEAN   Configured;
    DEBUG_DEVICE_ADDRESS BaseAddress[6];
    DEBUG_MEMORY_REQUIREMENTS Memory;
    ULONG     Dbg2TableIndex;
    USHORT    PortType;
    USHORT    PortSubtype;
    PVOID     OemData;
    ULONG     OemDataLength;
    KD_NAMESPACE_ENUM NameSpace;
    PWCHAR    NameSpacePath;
    ULONG     NameSpacePathLength;
    ULONG     TransportType;
    DEBUG_TRANSPORT_DATA TransportData;
    DEBUG_EFI_IOMMU_DATA EfiIoMmuData;
} DEBUG_DEVICE_DESCRIPTOR, *PDEBUG_DEVICE_DESCRIPTOR;



typedef struct _PCI_DEBUGGING_DEVICE_IN_USE {
    USHORT Segment;
    ULONG Bus;
    ULONG Slot;
} PCI_DEBUGGING_DEVICE_IN_USE, *PPCI_DEBUGGING_DEVICE_IN_USE;

typedef struct _ACPI_DEBUGGING_DEVICE_IN_USE {
    ULONG NameSpacePathLength;
    WCHAR NameSpacePath[1];
} ACPI_DEBUGGING_DEVICE_IN_USE, *PACPI_DEBUGGING_DEVICE_IN_USE;

typedef struct _DEBUGGING_DEVICE_IN_USE {
    KD_NAMESPACE_ENUM NameSpace;
    ULONG StructureLength;
    union {
        ACPI_DEBUGGING_DEVICE_IN_USE AcpiDevice;
        PCI_DEBUGGING_DEVICE_IN_USE PciDevice;
    };
} DEBUGGING_DEVICE_IN_USE, *PDEBUGGING_DEVICE_IN_USE;

typedef struct _DEBUGGING_DEVICE_IN_USE_INFORMATION {
    ULONG DeviceCount;
    DEBUGGING_DEVICE_IN_USE Device[1];
} DEBUGGING_DEVICE_IN_USE_INFORMATION, *PDEBUGGING_DEVICE_IN_USE_INFORMATION;



typedef
KD_CALLBACK_ACTION
(*PDEBUG_DEVICE_FOUND_FUNCTION) (
    PDEBUG_DEVICE_DESCRIPTOR Device
    );

typedef
NTSTATUS
(*pKdEnumerateDebuggingDevices) (
      PVOID LoaderBlock,
      PDEBUG_DEVICE_DESCRIPTOR Device,
      PDEBUG_DEVICE_FOUND_FUNCTION Callback
    );

typedef
NTSTATUS
(*pKdSetupPciDeviceForDebugging)(
         PVOID                     LoaderBlock,   
      PDEBUG_DEVICE_DESCRIPTOR  PciDevice
);

typedef
NTSTATUS
(*pKdReleasePciDeviceForDebugging)(
      PDEBUG_DEVICE_DESCRIPTOR  PciDevice
);

typedef
NTSTATUS
(*pKdSetupIntegratedDeviceForDebugging)(
         PVOID                     LoaderBlock,   
      PDEBUG_DEVICE_DESCRIPTOR  IntegratedDevice
);

typedef
NTSTATUS
(*pKdReleaseIntegratedDeviceForDebugging)(
      PDEBUG_DEVICE_DESCRIPTOR  IntegratedDevice
);

typedef
PVOID
(*pKdGetAcpiTablePhase0)(
      struct _LOADER_PARAMETER_BLOCK *LoaderBlock,
      ULONG Signature
    );

typedef
void
(*pKdCheckPowerButton)(
    void
    );

typedef
void
(*pHalEndOfBoot)(
    void
    );

typedef
PVOID
(*pKdMapPhysicalMemory64)(
      PHYSICAL_ADDRESS PhysicalAddress,
      ULONG NumberPages,
      BOOLEAN FlushCurrentTLB
    );

typedef
void
(*pKdUnmapVirtualAddress)(
      PVOID VirtualAddress,
      ULONG NumberPages,
      BOOLEAN FlushCurrentTLB
    );

typedef
ULONG
(*pKdGetPciDataByOffset)(
      ULONG BusNumber,
      ULONG SlotNumber,
      PVOID Buffer,
      ULONG Offset,
      ULONG Length
    );

typedef
ULONG
(*pKdSetPciDataByOffset)(
      ULONG BusNumber,
      ULONG SlotNumber,
      PVOID Buffer,
      ULONG Offset,
      ULONG Length
    );

typedef
PVOID
(*pHalGetAcpiTable)(
      ULONG Signature,
      PCSTR OemId,
      PCSTR OemTableId
    );

typedef
void
(*PCI_ERROR_HANDLER_CALLBACK)(
    void
    );

typedef
void
(*pHalSetPciErrorHandlerCallback)(
      PCI_ERROR_HANDLER_CALLBACK Callback
    );

typedef
void
(*pHalGetPrmCache)(
      PLIST_ENTRY * FirmwareList,
      PLIST_ENTRY * UpdateList
    );




typedef struct {
    ULONG                           Version;
    pHalQuerySystemInformation      HalQuerySystemInformation;
    pHalSetSystemInformation        HalSetSystemInformation;
    pHalQueryBusSlots               HalQueryBusSlots;
    ULONG                           Spare1;
    pHalExamineMBR                  HalExamineMBR;
    pHalIoReadPartitionTable        HalIoReadPartitionTable;
    pHalIoSetPartitionInformation   HalIoSetPartitionInformation;
    pHalIoWritePartitionTable       HalIoWritePartitionTable;

    pHalHandlerForBus               HalReferenceHandlerForBus;
    pHalReferenceBusHandler         HalReferenceBusHandler;
    pHalReferenceBusHandler         HalDereferenceBusHandler;

    pHalInitPnpDriver               HalInitPnpDriver;
    pHalInitPowerManagement         HalInitPowerManagement;

    pHalGetDmaAdapter               HalGetDmaAdapter;
    pHalGetInterruptTranslator      HalGetInterruptTranslator;

    pHalStartMirroring              HalStartMirroring;
    pHalEndMirroring                HalEndMirroring;
    pHalMirrorPhysicalMemory        HalMirrorPhysicalMemory;
    pHalEndOfBoot                   HalEndOfBoot;
    pHalMirrorVerify                HalMirrorVerify;

    pHalGetAcpiTable                HalGetCachedAcpiTable;
    pHalSetPciErrorHandlerCallback  HalSetPciErrorHandlerCallback;

    pHalGetPrmCache                 HalGetPrmCache;
} HAL_DISPATCH, *PHAL_DISPATCH;





extern  PHAL_DISPATCH   HalDispatchTable;










































typedef struct _HAL_BUS_INFORMATION{
    INTERFACE_TYPE  BusType;
    BUS_DATA_TYPE   ConfigurationType;
    ULONG           BusNumber;
    ULONG           Reserved;
} HAL_BUS_INFORMATION, *PHAL_BUS_INFORMATION;


typedef enum _HAL_DISPLAY_BIOS_INFORMATION {
    HalDisplayInt10Bios,
    HalDisplayEmulatedBios,
    HalDisplayNoBios
} HAL_DISPLAY_BIOS_INFORMATION, *PHAL_DISPLAY_BIOS_INFORMATION;


typedef struct _HAL_POWER_INFORMATION {
    ULONG   TBD;
} HAL_POWER_INFORMATION, *PHAL_POWER_INFORMATION;


typedef struct _HAL_PROCESSOR_SPEED_INFO {
    ULONG   ProcessorSpeed;
} HAL_PROCESSOR_SPEED_INFORMATION, *PHAL_PROCESSOR_SPEED_INFORMATION;


typedef struct _HAL_CALLBACKS {
    PCALLBACK_OBJECT  SetSystemInformation;
    PCALLBACK_OBJECT  BusCheck;
} HAL_CALLBACKS, *PHAL_CALLBACKS;


typedef struct _HAL_PROCESSOR_FEATURE {
    ULONG UsableFeatureBits;
} HAL_PROCESSOR_FEATURE;



typedef
NTSTATUS
(*PHALIOREADWRITEHANDLER)(
           BOOLEAN fRead,
           ULONG dwAddr,
           ULONG dwSize,
       PULONG pdwData
    );




typedef struct _HAL_AMLI_BAD_IO_ADDRESS_LIST
{
    ULONG                   BadAddrBegin;
    ULONG                   BadAddrSize;
    ULONG                   OSVersionTrigger;
    PHALIOREADWRITEHANDLER  IOHandler;
} HAL_AMLI_BAD_IO_ADDRESS_LIST, *PHAL_AMLI_BAD_IO_ADDRESS_LIST;








typedef
void
(*PHALMCAINTERFACELOCK)(
    void
    );

typedef
void
(*PHALMCAINTERFACEUNLOCK)(
    void
    );

typedef
NTSTATUS
(*PHALMCAINTERFACEREADREGISTER)(
          UCHAR    BankNumber,
      PVOID    Exception
    );


typedef struct _HAL_MCA_INTERFACE {
    PHALMCAINTERFACELOCK            Lock;
    PHALMCAINTERFACEUNLOCK          Unlock;
    PHALMCAINTERFACEREADREGISTER    ReadRegister;
} HAL_MCA_INTERFACE;

typedef enum {
    ApicDestinationModePhysical = 1,
    ApicDestinationModeLogicalFlat,
    ApicDestinationModeLogicalClustered,
    ApicDestinationModeUnknown
} HAL_APIC_DESTINATION_MODE, *PHAL_APIC_DESTINATION_MODE;




struct _KTRAP_FRAME;
struct _KEXCEPTION_FRAME;

typedef
ERROR_SEVERITY
(*PDRIVER_EXCPTN_CALLBACK) (
      PVOID Context,
      struct _KTRAP_FRAME *TrapFrame,
      struct _KEXCEPTION_FRAME *ExceptionFrame,
      PMCA_EXCEPTION Exception
);

































typedef PDRIVER_EXCPTN_CALLBACK  PDRIVER_MCA_EXCEPTION_CALLBACK;






typedef struct _MCA_DRIVER_INFO {
    PDRIVER_MCA_EXCEPTION_CALLBACK ExceptionCallback;
    PKDEFERRED_ROUTINE             DpcCallback;
    PVOID                          DeviceContext;
} MCA_DRIVER_INFO, *PMCA_DRIVER_INFO;



typedef struct _HAL_ERROR_INFO {
    ULONG     Version;                 
    ULONG     InitMaxSize;             
    ULONG     McaMaxSize;              
    ULONG     McaPreviousEventsCount;  
    ULONG     McaCorrectedEventsCount; 
    ULONG     McaKernelDeliveryFails;  
    ULONG     McaDriverDpcQueueFails;  
    ULONG     McaReserved;
    ULONG     CmcMaxSize;              
    ULONG     CmcPollingInterval;      
    ULONG     CmcInterruptsCount;      
    ULONG     CmcKernelDeliveryFails;  
    ULONG     CmcDriverDpcQueueFails;  
    ULONG     CmcGetStateFails;        
    ULONG     CmcClearStateFails;      
    ULONG     CmcReserved;
    ULONGLONG CmcLogId;                
    ULONG     CpeMaxSize;              
    ULONG     CpePollingInterval;      
    ULONG     CpeInterruptsCount;      
    ULONG     CpeKernelDeliveryFails;  
    ULONG     CpeDriverDpcQueueFails;  
    ULONG     CpeGetStateFails;        
    ULONG     CpeClearStateFails;      
    ULONG     CpeInterruptSources;     
    ULONGLONG CpeLogId;                
    ULONGLONG KernelReserved[4];
} HAL_ERROR_INFO, *PHAL_ERROR_INFO;





























typedef
void
(*PDRIVER_CMC_EXCEPTION_CALLBACK) (
      PVOID            Context,
      PCMC_EXCEPTION   CmcLog
);





typedef
void
(*PDRIVER_CPE_EXCEPTION_CALLBACK) (
      PVOID            Context,
      PCPE_EXCEPTION   CmcLog
);







typedef struct _CMC_DRIVER_INFO {
    PDRIVER_CMC_EXCEPTION_CALLBACK ExceptionCallback;
    PKDEFERRED_ROUTINE             DpcCallback;
    PVOID                          DeviceContext;
} CMC_DRIVER_INFO, *PCMC_DRIVER_INFO;

typedef struct _CPE_DRIVER_INFO {
    PDRIVER_CPE_EXCEPTION_CALLBACK ExceptionCallback;
    PKDEFERRED_ROUTINE             DpcCallback;
    PVOID                          DeviceContext;
} CPE_DRIVER_INFO, *PCPE_DRIVER_INFO;

typedef struct _HAL_PLATFORM_INFORMATION {
    ULONG PlatformFlags;
} HAL_PLATFORM_INFORMATION, *PHAL_PLATFORM_INFORMATION;




















































































































































NTSTATUS
HalGetScatterGatherList (               
      PADAPTER_OBJECT DmaAdapter,
      PDEVICE_OBJECT DeviceObject,
      PMDL Mdl,
      PVOID CurrentVa,
      ULONG Length,
      PDRIVER_LIST_CONTROL ExecutionRoutine,
      PVOID Context,
      BOOLEAN WriteToDevice
    );



                 
void
HalPutScatterGatherList (
      PADAPTER_OBJECT DmaAdapter,
      PSCATTER_GATHER_LIST ScatterGather,
      BOOLEAN WriteToDevice
    );



                 
void
HalPutDmaAdapter(
      PADAPTER_OBJECT DmaAdapter
    );






typedef struct _WHEA_ERROR_SOURCE_DESCRIPTOR *PWHEA_ERROR_SOURCE_DESCRIPTOR;
typedef struct _WHEA_ERROR_RECORD *PWHEA_ERROR_RECORD;


void
HalBugCheckSystem (
      PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
      PWHEA_ERROR_RECORD ErrorRecord
    );
















typedef enum _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE {
    ResourceTypeSingle = 0,
    ResourceTypeRange,
    ResourceTypeExtendedCounterConfiguration,
    ResourceTypeOverflow,
    ResourceTypeEventBuffer,
    ResourceTypeIdenitificationTag,
    ResourceTypeMax
} PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE;
























typedef void (*PPHYSICAL_COUNTER_OVERFLOW_HANDLER)(
      ULONGLONG OverflowBits,
      HANDLE OwningHandle
    );

typedef void (*PPHYSICAL_COUNTER_EVENT_BUFFER_OVERFLOW_HANDLER)(
      PVOID EventBuffer,
      SIZE_T EntrySize,
      SIZE_T NumberOfEntries,
      HANDLE OwningHandle
    );

typedef struct _PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION {
    PPHYSICAL_COUNTER_EVENT_BUFFER_OVERFLOW_HANDLER OverflowHandler;
    ULONG CustomEventBufferEntrySize;
    ULONG EventThreshold;
} PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION, *PPHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION;

typedef struct _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR {
    PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE Type;
    ULONG Flags;
    union {
        ULONG CounterIndex;
        struct {
            ULONG Begin;
            ULONG End;
        } Range;
        PPHYSICAL_COUNTER_OVERFLOW_HANDLER OverflowHandler;
        PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION EventBufferConfiguration;
        ULONG IdentificationTag;
    } u;
} PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR, *PPHYSICAL_COUNTER_RESOURCE_DESCRIPTOR;





















typedef struct _PHYSICAL_COUNTER_RESOURCE_LIST {
    ULONG Count;
    PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR Descriptors[1];
} PHYSICAL_COUNTER_RESOURCE_LIST, *PPHYSICAL_COUNTER_RESOURCE_LIST;



















NTSTATUS
HalAllocateHardwareCounters (
      PGROUP_AFFINITY GroupAffinty,
      ULONG GroupCount,
      PPHYSICAL_COUNTER_RESOURCE_LIST ResourceList,
      PHANDLE CounterSetHandle
    );




NTSTATUS
HalFreeHardwareCounters (
      HANDLE CounterSetHandle
    );







 

BOOLEAN
FsRtlIsTotalDeviceFailure(
      NTSTATUS Status
    );









typedef struct _PCI_AGP_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;

    USHORT  Minor:4;
    USHORT  Major:4;
    USHORT  Rsvd1:8;

    struct _PCI_AGP_STATUS {
        ULONG   Rate:3;
        ULONG   Agp3Mode:1;
        ULONG   FastWrite:1;
        ULONG   FourGB:1;
        ULONG   HostTransDisable:1;
        ULONG   Gart64:1;
        ULONG   ITA_Coherent:1;
        ULONG   SideBandAddressing:1;                   
        ULONG   CalibrationCycle:3;
        ULONG   AsyncRequestSize:3;
        ULONG   Rsvd1:1;
        ULONG   Isoch:1;
        ULONG   Rsvd2:6;
        ULONG   RequestQueueDepthMaximum:8;             
    } AGPStatus;

    struct _PCI_AGP_COMMAND {
        ULONG   Rate:3;
        ULONG   Rsvd1:1;
        ULONG   FastWriteEnable:1;
        ULONG   FourGBEnable:1;
        ULONG   Rsvd2:1;
        ULONG   Gart64:1;
        ULONG   AGPEnable:1;
        ULONG   SBAEnable:1;
        ULONG   CalibrationCycle:3;
        ULONG   AsyncReqSize:3;
        ULONG   Rsvd3:8;
        ULONG   RequestQueueDepth:8;
    } AGPCommand;

} PCI_AGP_CAPABILITY, *PPCI_AGP_CAPABILITY;






typedef enum _EXTENDED_AGP_REGISTER {
    IsochStatus,
    AgpControl,
    ApertureSize,
    AperturePageSize,
    GartLow,
    GartHigh,
    IsochCommand
} EXTENDED_AGP_REGISTER, *PEXTENDED_AGP_REGISTER;

typedef struct _PCI_AGP_ISOCH_STATUS {
    ULONG ErrorCode: 2;
    ULONG Rsvd1: 1;
    ULONG Isoch_L: 3;
    ULONG Isoch_Y: 2;
    ULONG Isoch_N: 8;
    ULONG Rsvd2: 16;
} PCI_AGP_ISOCH_STATUS, *PPCI_AGP_ISOCH_STATUS;

typedef struct _PCI_AGP_CONTROL {
    ULONG Rsvd1: 7;
    ULONG GTLB_Enable: 1;
    ULONG AP_Enable: 1;
    ULONG CAL_Disable: 1;
    ULONG Rsvd2: 22;
} PCI_AGP_CONTROL, *PPCI_AGP_CONTROL;

typedef struct _PCI_AGP_APERTURE_PAGE_SIZE {
    USHORT PageSizeMask: 11;
    USHORT Rsvd1: 1;
    USHORT PageSizeSelect: 4;
} PCI_AGP_APERTURE_PAGE_SIZE, *PPCI_AGP_APERTURE_PAGE_SIZE;

typedef struct _PCI_AGP_ISOCH_COMMAND {
    USHORT Rsvd1: 6;
    USHORT Isoch_Y: 2;
    USHORT Isoch_N: 8;
} PCI_AGP_ISOCH_COMMAND, *PPCI_AGP_ISOCH_COMMAND;

typedef struct PCI_AGP_EXTENDED_CAPABILITY {

    PCI_AGP_ISOCH_STATUS IsochStatus;




    PCI_AGP_CONTROL AgpControl;
    USHORT ApertureSize;
    PCI_AGP_APERTURE_PAGE_SIZE AperturePageSize;
    ULONG GartLow;
    ULONG GartHigh;




    PCI_AGP_ISOCH_COMMAND IsochCommand;

} PCI_AGP_EXTENDED_CAPABILITY, *PPCI_AGP_EXTENDED_CAPABILITY;
































typedef struct _PCIX_BRIDGE_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;

    union {
        struct {
            USHORT Bus64Bit:1;
            USHORT Bus133MHzCapable:1;
            USHORT SplitCompletionDiscarded:1;
            USHORT UnexpectedSplitCompletion:1;
            USHORT SplitCompletionOverrun:1;
            USHORT SplitRequestDelayed:1;
            USHORT BusModeFrequency:4;  
            USHORT Rsvd:2;
            USHORT Version:2;           
            USHORT Bus266MHzCapable:1;
            USHORT Bus533MHzCapable:1;
        } ;
        USHORT AsUSHORT;
    } SecondaryStatus;

    union {
        struct {
            ULONG FunctionNumber:3;
            ULONG DeviceNumber:5;
            ULONG BusNumber:8;
            ULONG Device64Bit:1;
            ULONG Device133MHzCapable:1;
            ULONG SplitCompletionDiscarded:1;
            ULONG UnexpectedSplitCompletion:1;
            ULONG SplitCompletionOverrun:1;
            ULONG SplitRequestDelayed:1;
            ULONG Rsvd:7;
            ULONG DIMCapable:1;
            ULONG Device266MHzCapable:1;
            ULONG Device533MHzCapable:1;
        } ;
        ULONG AsULONG;
    } BridgeStatus;

    USHORT UpstreamSplitTransactionCapacity;
    USHORT UpstreamSplitTransactionLimit;

    USHORT DownstreamSplitTransactionCapacity;
    USHORT DownstreamSplitTransactionLimit;

    union {
        struct {
            ULONG SelectSecondaryRegisters:1;
            ULONG ErrorPresentInOtherBank:1;
            ULONG AdditionalCorrectableError:1;
            ULONG AdditionalUncorrectableError:1;
            ULONG ErrorPhase:3;
            ULONG ErrorCorrected:1;
            ULONG Syndrome:8;
            ULONG ErrorFirstCommand:4;
            ULONG ErrorSecondCommand:4;
            ULONG ErrorUpperAttributes:4;
            ULONG ControlUpdateEnable:1;
            ULONG Rsvd:1;
            ULONG DisableSingleBitCorrection:1;
            ULONG EccMode:1;
        } ;
        ULONG AsULONG;
    } EccControlStatus;

    ULONG EccFirstAddress;
    ULONG EccSecondAddress;
    ULONG EccAttribute;

} PCIX_BRIDGE_CAPABILITY, *PPCIX_BRIDGE_CAPABILITY;






typedef struct _PCI_SUBSYSTEM_IDS_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;
    USHORT Reserved;
    USHORT SubVendorID;
    USHORT SubSystemID;

} PCI_SUBSYSTEM_IDS_CAPABILITY, *PPCI_SUBSYSTEM_IDS_CAPABILITY;





typedef struct _PCI_ADVANCED_FEATURES_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;
    UCHAR Length;

    union {
        struct {
            UCHAR FunctionLevelResetSupported:1;
            UCHAR TransactionsPendingSupported:1;
            UCHAR Rsvd:6;
        } ;

        UCHAR AsUCHAR;
    } Capabilities;

    union {
        struct {
            UCHAR InitiateFunctionLevelReset:1;
            UCHAR Rsvd:7;
        } ;

        UCHAR AsUCHAR;
    } Control;

    union {
        struct {
            UCHAR TransactionsPending:1;
            UCHAR Rsvd:7;
        } ;

        UCHAR AsUCHAR;
    } Status;

} PCI_ADVANCED_FEATURES_CAPABILITY, *PPCI_ADVANCED_FEATURES_CAPABILITY;

































typedef struct _PCI_ROOT_BUS_OSC_SUPPORT_FIELD {
    union {
        struct {
            ULONG ExtendedConfigOpRegions:1;
            ULONG ActiveStatePowerManagement:1;
            ULONG ClockPowerManagement:1;
            ULONG SegmentGroups:1;
            ULONG MessageSignaledInterrupts:1;
            ULONG OptimizedBufferFlushAndFill:1;
            ULONG AspmOptionality:1;
            ULONG Reserved:25;
        } ;
        ULONG AsULONG;
    } u;
} PCI_ROOT_BUS_OSC_SUPPORT_FIELD, *PPCI_ROOT_BUS_OSC_SUPPORT_FIELD;

typedef struct _PCI_ROOT_BUS_OSC_CONTROL_FIELD {
    union {
        struct {
            ULONG ExpressNativeHotPlug:1;
            ULONG ShpcNativeHotPlug:1;
            ULONG ExpressNativePME:1;
            ULONG ExpressAdvancedErrorReporting:1;
            ULONG ExpressCapabilityStructure:1;
            ULONG LatencyToleranceReporting:1;
            ULONG Reserved:26;
        } ;
        ULONG AsULONG;
    } u;
} PCI_ROOT_BUS_OSC_CONTROL_FIELD, *PPCI_ROOT_BUS_OSC_CONTROL_FIELD;






typedef struct _PCI_FIRMWARE_BUS_CAPS {
    USHORT Type;
    USHORT Length; 
    struct {
        UCHAR SixtyFourBitDevice:1;
        UCHAR PciXMode1EccCapable:1;
        UCHAR DeviceIdMessagingCapable:1;
        UCHAR ObffWakeSignalCapable:1;
        UCHAR Reserved1:4;
    } ;
    UCHAR CurrentSpeedAndMode;
    UCHAR SupportedSpeedsAndModesLowByte;
    UCHAR SupportedSpeedsAndModesHighByte;
    UCHAR Voltage;
    UCHAR Reserved2[7];
} PCI_FIRMWARE_BUS_CAPS, *PPCI_FIRMWARE_BUS_CAPS;

typedef struct _PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER {
    USHORT Version;
    USHORT Status;
    ULONG  Length;
    PCI_FIRMWARE_BUS_CAPS Caps;
} PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER, *PPCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER;







typedef enum _PCI_HARDWARE_INTERFACE {

    PciConventional,
    PciXMode1,
    PciXMode2,
    PciExpress

} PCI_HARDWARE_INTERFACE, *PPCI_HARDWARE_INTERFACE;



typedef enum {

    BusWidth32Bits,
    BusWidth64Bits

} PCI_BUS_WIDTH;

typedef struct _PCI_ROOT_BUS_HARDWARE_CAPABILITY {

    
    
    

    PCI_HARDWARE_INTERFACE SecondaryInterface;

    
    
    
    
    
    
    
    

    struct {

        
        
        
        

        BOOLEAN BusCapabilitiesFound;


        
        
        

        ULONG CurrentSpeedAndMode;
        ULONG SupportedSpeedsAndModes;

        
        
        
        

        BOOLEAN DeviceIDMessagingCapable;

        
        
        

        PCI_BUS_WIDTH SecondaryBusWidth;
    } ;

    
    
    
    

    PCI_ROOT_BUS_OSC_SUPPORT_FIELD OscFeatureSupport;
    PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlRequest;
    PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlGranted;

} PCI_ROOT_BUS_HARDWARE_CAPABILITY, *PPCI_ROOT_BUS_HARDWARE_CAPABILITY;

typedef struct _PCI_FPB_CAPABILITY_HEADER {
    PCI_CAPABILITIES_HEADER Header;
    USHORT Reserved;
} PCI_FPB_CAPABILITY_HEADER, *PPCI_FPB_CAPABILITY_HEADER;

typedef union _PCI_FPB_CAPABILITIES_REGISTER {

    struct {
        ULONG RidDecodeMechanismSupported:1;
        ULONG MemLowDecodeMechanismSupported:1;
        ULONG MemHighDecodeMechanismSupported:1;
        ULONG NumSecDev:5;
        ULONG RidVectorSizeSupported:3;
        ULONG Rsvd0:5;
        ULONG MemLowVectorSizeSupported:3;
        ULONG Rsvd1:5;
        ULONG MemHighVectorSizeSupported:3;
        ULONG Rsvd2:5;
    } ;

    ULONG AsULONG;

} PCI_FPB_CAPABILITIES_REGISTER, *PPCI_FPB_CAPABILITIES_REGISTER;

typedef union _PCI_FPB_RID_VECTOR_CONTROL1_REGISTER {

    struct {
        ULONG RidDecodeMechanismEnable:1;
        ULONG Rsvd0:3;
        ULONG RidVectorGranularity:4;
        ULONG Rsvd1:11;
        ULONG RidVectorStart:13;
    } ;

    ULONG AsULONG;

} PCI_FPB_RID_VECTOR_CONTROL1_REGISTER, *PPCI_FPB_RID_VECTOR_CONTROL1_REGISTER;

typedef union _PCI_FPB_RID_VECTOR_CONTROL2_REGISTER {

    struct {
        ULONG Rsvd0:3;
        ULONG RidSecondaryStart:13;
        ULONG Rsvd1:16;
    } ;

    ULONG AsULONG;

} PCI_FPB_RID_VECTOR_CONTROL2_REGISTER, *PPCI_FPB_RID_VECTOR_CONTROL2_REGISTER;

typedef union _PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER {

    struct {
        ULONG MemLowDecodeMechanismEnable:1;
        ULONG Rsvd0:3;
        ULONG MemLowVectorGranularity:4;
        ULONG Rsvd1:12;
        ULONG MemLowVectorStart:12;
    } ;

    ULONG AsULONG;

} PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER, *PPCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER;

typedef union _PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER {

    struct {
        ULONG MemHighDecodeMechanismEnable:1;
        ULONG Rsvd0:3;
        ULONG MemHighVectorGranularity:4;
        ULONG Rsvd1:20;
        ULONG MemHighVectorStartLower:4;
    } ;

    ULONG AsULONG;

} PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER, *PPCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER;

typedef struct _PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER {
    ULONG MemHighVectorStartUpper;
} PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER, *PPCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER;

typedef union _PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER {

    struct {
        ULONG VectorAccessOffset:8;
        ULONG Rsvd0:6;
        ULONG VectorSelect:2;
        ULONG Rsvd1:16;
    } ;

    ULONG AsULONG;

} PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER, *PPCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER;

typedef struct _PCI_FPB_VECTOR_ACCESS_DATA_REGISTER {
    ULONG VectorAccessData;
} PCI_FPB_VECTOR_ACCESS_DATA_REGISTER, *PPCI_FPB_VECTOR_ACCESS_DATA_REGISTER;

typedef struct _PCI_FPB_CAPABILITY {
    PCI_FPB_CAPABILITY_HEADER Header;
    PCI_FPB_CAPABILITIES_REGISTER CapabilitiesRegister;
    PCI_FPB_RID_VECTOR_CONTROL1_REGISTER RidVectorControl1Register;
    PCI_FPB_RID_VECTOR_CONTROL2_REGISTER RidVectorControl2Register;
    PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER MemLowVectorControlRegister;
    PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER MemHighVectorControl1Register;
    PCI_FPB_MEM_HIGH_VECTOR_CONTROL2_REGISTER MemHighVectorControl2Register;
    PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER VectorAccessControlRegister;
    PCI_FPB_VECTOR_ACCESS_DATA_REGISTER VectorAccessDataRegister;
} PCI_FPB_CAPABILITY, *PPCI_FPB_CAPABILITY;

















































typedef struct _PCI_VENDOR_SPECIFIC_CAPABILITY {
    PCI_CAPABILITIES_HEADER Header;
    UCHAR VscLength;
    UCHAR VendorSpecific;
} PCI_VENDOR_SPECIFIC_CAPABILITY, *PPCI_VENDOR_SPECIFIC_CAPABILITY;







typedef union _PCI_EXPRESS_CAPABILITIES_REGISTER {

    struct {

        USHORT CapabilityVersion:4;
        USHORT DeviceType:4;               
        USHORT SlotImplemented:1;
        USHORT InterruptMessageNumber:5;
        USHORT Rsvd:2;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_CAPABILITIES_REGISTER, *PPCI_EXPRESS_CAPABILITIES_REGISTER;

typedef union _PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER {

    struct {

        ULONG MaxPayloadSizeSupported:3;     
        ULONG PhantomFunctionsSupported:2;
        ULONG ExtendedTagSupported:1;
        ULONG L0sAcceptableLatency:3;        
        ULONG L1AcceptableLatency:3;         
        ULONG Undefined:3;
        ULONG RoleBasedErrorReporting:1;
        ULONG Rsvd1:2;
        ULONG CapturedSlotPowerLimit:8;
        ULONG CapturedSlotPowerLimitScale:2;
        ULONG FunctionLevelResetCapability:1;
        ULONG Rsvd2:3;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER, *PPCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER;










typedef union _PCI_EXPRESS_DEVICE_CONTROL_REGISTER {

    struct {

        USHORT CorrectableErrorEnable:1;
        USHORT NonFatalErrorEnable:1;
        USHORT FatalErrorEnable:1;
        USHORT UnsupportedRequestErrorEnable:1;
        USHORT EnableRelaxedOrder:1;
        USHORT MaxPayloadSize:3;                 
        USHORT ExtendedTagEnable:1;
        USHORT PhantomFunctionsEnable:1;
        USHORT AuxPowerEnable:1;
        USHORT NoSnoopEnable:1;
        USHORT MaxReadRequestSize:3;             
        USHORT BridgeConfigRetryEnable:1;
    } ;

    
    
    

    struct {
        USHORT :15;
        USHORT InitiateFunctionLevelReset:1;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_DEVICE_CONTROL_REGISTER, *PPCI_EXPRESS_DEVICE_CONTROL_REGISTER;









typedef union _PCI_EXPRESS_DEVICE_STATUS_REGISTER {

    struct {

        USHORT CorrectableErrorDetected:1;
        USHORT NonFatalErrorDetected:1;
        USHORT FatalErrorDetected:1;
        USHORT UnsupportedRequestDetected:1;
        USHORT AuxPowerDetected:1;
        USHORT TransactionsPending:1;
        USHORT Rsvd:10;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_DEVICE_STATUS_REGISTER, *PPCI_EXPRESS_DEVICE_STATUS_REGISTER;

typedef union _PCI_EXPRESS_LINK_CAPABILITIES_REGISTER {

    struct {

        ULONG MaximumLinkSpeed:4;
        ULONG MaximumLinkWidth:6;
        ULONG ActiveStatePMSupport:2;   
        ULONG L0sExitLatency:3;         
        ULONG L1ExitLatency:3;          
        ULONG ClockPowerManagement:1;
        ULONG SurpriseDownErrorReportingCapable:1;
        ULONG DataLinkLayerActiveReportingCapable:1;
        ULONG LinkBandwidthNotificationCapability:1;
        ULONG AspmOptionalityCompliance:1;
        ULONG Rsvd:1;
        ULONG PortNumber:8;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_LINK_CAPABILITIES_REGISTER, *PPCI_EXPRESS_LINK_CAPABILITIES_REGISTER;

typedef union _PCI_EXPRESS_LINK_CONTROL_REGISTER {

    struct {

        USHORT ActiveStatePMControl:2;    
        USHORT Rsvd1:1;
        USHORT ReadCompletionBoundary:1;  
        USHORT LinkDisable:1;
        USHORT RetrainLink:1;
        USHORT CommonClockConfig:1;
        USHORT ExtendedSynch:1;
        USHORT EnableClockPowerManagement:1;
        USHORT Rsvd2:7;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_LINK_CONTROL_REGISTER, *PPCI_EXPRESS_LINK_CONTROL_REGISTER;

typedef union _PCI_EXPRESS_LINK_STATUS_REGISTER {

    struct {

        USHORT LinkSpeed:4;
        USHORT LinkWidth:6;
        USHORT Undefined:1;
        USHORT LinkTraining:1;
        USHORT SlotClockConfig:1;
        USHORT DataLinkLayerActive:1;
        USHORT Rsvd:2;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_LINK_STATUS_REGISTER, *PPCI_EXPRESS_LINK_STATUS_REGISTER;

typedef union _PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER {

    struct {

        ULONG AttentionButtonPresent:1;
        ULONG PowerControllerPresent:1;
        ULONG MRLSensorPresent:1;
        ULONG AttentionIndicatorPresent:1;
        ULONG PowerIndicatorPresent:1;
        ULONG HotPlugSurprise:1;
        ULONG HotPlugCapable:1;
        ULONG SlotPowerLimit:8;
        ULONG SlotPowerLimitScale:2;
        ULONG ElectromechanicalLockPresent:1;
        ULONG NoCommandCompletedSupport:1;
        ULONG PhysicalSlotNumber:13;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER, *PPCI_EXPRESS_SLOT_CAPABILITIES_REGISTER;

typedef union _PCI_EXPRESS_SLOT_CONTROL_REGISTER {

    struct {

        USHORT AttentionButtonEnable:1;
        USHORT PowerFaultDetectEnable:1;
        USHORT MRLSensorEnable:1;
        USHORT PresenceDetectEnable:1;
        USHORT CommandCompletedEnable:1;
        USHORT HotPlugInterruptEnable:1;
        USHORT AttentionIndicatorControl:2;  
        USHORT PowerIndicatorControl:2;      
        USHORT PowerControllerControl:1;     
        USHORT ElectromechanicalLockControl:1;
        USHORT DataLinkStateChangeEnable:1;
        USHORT Rsvd:3;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_SLOT_CONTROL_REGISTER, *PPCI_EXPRESS_SLOT_CONTROL_REGISTER;

typedef union _PCI_EXPRESS_SLOT_STATUS_REGISTER {

    struct {

        USHORT AttentionButtonPressed:1;
        USHORT PowerFaultDetected:1;
        USHORT MRLSensorChanged:1;
        USHORT PresenceDetectChanged:1;
        USHORT CommandCompleted:1;
        USHORT MRLSensorState:1;        
        USHORT PresenceDetectState:1;   
        USHORT ElectromechanicalLockEngaged:1;
        USHORT DataLinkStateChanged:1;
        USHORT Rsvd:7;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_SLOT_STATUS_REGISTER, *PPCI_EXPRESS_SLOT_STATUS_REGISTER;

typedef union _PCI_EXPRESS_ROOT_CONTROL_REGISTER {

    struct {

        USHORT CorrectableSerrEnable:1;
        USHORT NonFatalSerrEnable:1;
        USHORT FatalSerrEnable:1;
        USHORT PMEInterruptEnable:1;
        USHORT CRSSoftwareVisibilityEnable:1;
        USHORT Rsvd:11;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_ROOT_CONTROL_REGISTER, *PPCI_EXPRESS_ROOT_CONTROL_REGISTER;

typedef union _PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER {

    struct {

        USHORT CRSSoftwareVisibility:1;
        USHORT Rsvd:15;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER, *PPCI_EXPRESS_ROOT_CAPABILITIES_REGISTER;

typedef union _PCI_EXPRESS_ROOT_STATUS_REGISTER {

    struct {

        ULONG PMERequestorId:16;  
        ULONG PMEStatus:1;
        ULONG PMEPending:1;
        ULONG Rsvd:14;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_ROOT_STATUS_REGISTER, *PPCI_EXPRESS_ROOT_STATUS_REGISTER;

typedef union _PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER {

    struct {

        ULONG CompletionTimeoutRangesSupported:4;
        ULONG CompletionTimeoutDisableSupported:1;
        ULONG AriForwardingSupported:1;
        ULONG AtomicOpRoutingSupported:1;
        ULONG AtomicOpCompleterSupported32Bit:1;
        ULONG AtomicOpCompleterSupported64Bit:1;
        ULONG CASCompleterSupported128Bit:1;
        ULONG NoROEnabledPRPRPassing:1;
        ULONG LTRMechanismSupported:1;
        ULONG TPHCompleterSupported:2;
        ULONG Rsvd:4;
        ULONG OBFFSupported:2;
        ULONG ExtendedFmtFieldSuported:1;
        ULONG EndEndTLPPrefixSupported:1;
        ULONG MaxEndEndTLPPrefixes:2;
        ULONG Rsvd2:8;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER, *PPCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER;

typedef union _PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER {

    struct {

        USHORT CompletionTimeoutValue:4;
        USHORT CompletionTimeoutDisable:1;
        USHORT AriForwardingEnable:1;
        USHORT AtomicOpRequesterEnable:1;
        USHORT AtomicOpEgresBlocking:1;
        USHORT IDORequestEnable:1;
        USHORT IDOCompletionEnable:1;
        USHORT LTRMechanismEnable:1;
        USHORT Rsvd:2;
        USHORT OBFFEnable:2;
        USHORT EndEndTLPPrefixBlocking:1;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER, *PPCI_EXPRESS_DEVICE_CONTROL_2_REGISTER;

typedef union _PCI_EXPRESS_DEVICE_STATUS_2_REGISTER {

    struct {

        USHORT Rsvd:16;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_DEVICE_STATUS_2_REGISTER, *PPCI_EXPRESS_DEVICE_STATUS_2_REGISTER;

typedef union _PCI_EXPRESS_LINK_CAPABILITIES_2_REGISTER {

    struct {

        ULONG Rsvd0:1;
        ULONG SupportedLinkSpeedsVector:7;
        ULONG Rsvd8_31:24;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_LINK_CAPABILITIES_2_REGISTER, *PPCI_EXPRESS_LINK_CAPABILITIES_2_REGISTER;

typedef union _PCI_EXPRESS_LINK_CONTROL_2_REGISTER {

    struct {

        USHORT TargetLinkSpeed:4;
        USHORT Rsvd4_15:12;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_LINK_CONTROL_2_REGISTER, *PPCI_EXPRESS_LINK_CONTROL_2_REGISTER;

typedef union _PCI_EXPRESS_LINK_STATUS_2_REGISTER {

    struct {

        USHORT Rsvd0_15:16;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_LINK_STATUS_2_REGISTER, *PPCI_EXPRESS_LINK_STATUS_2_REGISTER;





typedef struct _PCI_EXPRESS_CAPABILITY {

    PCI_CAPABILITIES_HEADER Header;
    PCI_EXPRESS_CAPABILITIES_REGISTER ExpressCapabilities;

    PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER DeviceCapabilities;

    PCI_EXPRESS_DEVICE_CONTROL_REGISTER DeviceControl;
    PCI_EXPRESS_DEVICE_STATUS_REGISTER DeviceStatus;

    PCI_EXPRESS_LINK_CAPABILITIES_REGISTER LinkCapabilities;

    PCI_EXPRESS_LINK_CONTROL_REGISTER LinkControl;
    PCI_EXPRESS_LINK_STATUS_REGISTER LinkStatus;

    PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER SlotCapabilities;

    PCI_EXPRESS_SLOT_CONTROL_REGISTER SlotControl;
    PCI_EXPRESS_SLOT_STATUS_REGISTER SlotStatus;

    PCI_EXPRESS_ROOT_CONTROL_REGISTER RootControl;
    PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER RootCapabilities;

    PCI_EXPRESS_ROOT_STATUS_REGISTER RootStatus;

    PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER DeviceCapabilities2;
    PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER DeviceControl2;
    PCI_EXPRESS_DEVICE_STATUS_2_REGISTER DeviceStatus2;

    PCI_EXPRESS_LINK_CAPABILITIES_2_REGISTER LinkCapabilities2;
    PCI_EXPRESS_LINK_CONTROL_2_REGISTER LinkControl2;
    PCI_EXPRESS_LINK_STATUS_2_REGISTER LinkStatus2;

} PCI_EXPRESS_CAPABILITY, *PPCI_EXPRESS_CAPABILITY;



typedef enum {

    MRLClosed = 0,
    MRLOpen

} PCI_EXPRESS_MRL_STATE;

typedef enum {

    SlotEmpty = 0,
    CardPresent

} PCI_EXPRESS_CARD_PRESENCE;

typedef enum {

    IndicatorOn = 1,
    IndicatorBlink,
    IndicatorOff

} PCI_EXPRESS_INDICATOR_STATE;

typedef enum {

    PowerOn = 0,
    PowerOff

} PCI_EXPRESS_POWER_STATE;

typedef enum {

    NoAspmSupport = 0,
    L0sEntrySupport = 1,
    L1EntrySupport = 2,
    L0sAndL1EntrySupport = 3

} PCI_EXPRESS_ASPM_SUPPORT;

typedef enum {

    L0sAndL1EntryDisabled,
    L0sEntryEnabled,
    L1EntryEnabled,
    L0sAndL1EntryEnabled

} PCI_EXPRESS_ASPM_CONTROL;

typedef enum {

    L0s_Below64ns = 0,
    L0s_64ns_128ns,
    L0s_128ns_256ns,
    L0s_256ns_512ns,
    L0s_512ns_1us,
    L0s_1us_2us,
    L0s_2us_4us,
    L0s_Above4us

} PCI_EXPRESS_L0s_EXIT_LATENCY;

typedef enum {

    L1_Below1us = 0,
    L1_1us_2us,
    L1_2us_4us,
    L1_4us_8us,
    L1_8us_16us,
    L1_16us_32us,
    L1_32us_64us,
    L1_Above64us

} PCI_EXPRESS_L1_EXIT_LATENCY;

typedef enum {

    RCB64Bytes = 0,
    RCB128Bytes

} PCI_EXPRESS_RCB;

typedef enum {

    PciExpressPciPmLinkSubState_L11_BitIndex = 0,
    PciExpressPciPmLinkSubState_L12_BitIndex,
    PciExpressASPMLinkSubState_L11_BitIndex,
    PciExpressASPMLinkSubState_L12_BitIndex

} PCI_EXPRESS_LINK_SUBSTATE;

typedef enum {

    PciDeviceD3Cold_State_Disabled_BitIndex = 1, 
    PciDeviceD3Cold_State_Enabled_BitIndex, 
    PciDeviceD3Cold_State_ParentRootPortS0WakeSupported_BitIndex,
    PciDeviceD3Cold_State_Disabled_Bridge_HackFlags_BitIndex,
    PciDeviceD3Cold_Reason_Default_State_BitIndex = 8, 
    PciDeviceD3Cold_Reason_INF_BitIndex, 
    PciDeviceD3Cold_Reason_Interface_Api_BitIndex 

} PCI_DEVICE_D3COLD_STATE_REASON;



typedef enum {

    PciExpressEndpoint = 0,
    PciExpressLegacyEndpoint,
    PciExpressRootPort = 4,
    PciExpressUpstreamSwitchPort,
    PciExpressDownstreamSwitchPort,
    PciExpressToPciXBridge,
    PciXToExpressBridge,
    PciExpressRootComplexIntegratedEndpoint,
    PciExpressRootComplexEventCollector

} PCI_EXPRESS_DEVICE_TYPE;



typedef enum {

    MaxPayload128Bytes = 0,
    MaxPayload256Bytes,
    MaxPayload512Bytes,
    MaxPayload1024Bytes,
    MaxPayload2048Bytes,
    MaxPayload4096Bytes

} PCI_EXPRESS_MAX_PAYLOAD_SIZE;

typedef union _PCI_EXPRESS_PME_REQUESTOR_ID {

    struct {

        USHORT FunctionNumber:3;
        USHORT DeviceNumber:5;
        USHORT BusNumber:8;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_PME_REQUESTOR_ID, *PPCI_EXPRESS_PME_REQUESTOR_ID;







typedef void
(*PciPin2Line) (
      struct _BUS_HANDLER  *BusHandler,
      struct _BUS_HANDLER  *RootHandler,
      PCI_SLOT_NUMBER      SlotNumber,
      PPCI_COMMON_CONFIG   PciData
    );

typedef void
(*PciLine2Pin) (
      struct _BUS_HANDLER  *BusHandler,
      struct _BUS_HANDLER  *RootHandler,
      PCI_SLOT_NUMBER      SlotNumber,
      PPCI_COMMON_CONFIG   PciNewData,
      PPCI_COMMON_CONFIG   PciOldData
    );

typedef void
(*PciReadWriteConfig) (
      struct _BUS_HANDLER *BusHandler,
      PCI_SLOT_NUMBER Slot,
      PVOID Buffer,
      ULONG Offset,
      ULONG Length
    );




typedef struct _PCIBUSDATA {
    ULONG                   Tag;
    ULONG                   Version;
    PciReadWriteConfig      ReadConfig;
    PciReadWriteConfig      WriteConfig;
    PciPin2Line             Pin2Line;
    PciLine2Pin             Line2Pin;
    PCI_SLOT_NUMBER         ParentSlot;
    PVOID                   Reserved[4];
} PCIBUSDATA, *PPCIBUSDATA;





typedef union _PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER {

    struct {

        ULONG MaxSnoopLatencyValue:10;
        ULONG MaxSnoopLatencyScale:3;
        ULONG Rsvd:2;
        ULONG MaxSnoopRequirement:1;

        ULONG MaxNoSnoopLatencyValue:10;
        ULONG MaxNoSnoopLatencyScale:3;
        ULONG Rsvd2:2;
        ULONG MaxNoSnoopRequirement:1;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER, *PPCI_EXPRESS_LTR_MAX_LATENCY_REGISTER;

typedef struct _PCI_EXPRESS_LTR_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER Latency;

} PCI_EXPRESS_LTR_CAPABILITY, *PPCI_EXPRESS_LTR_CAPABILITY;










typedef union _PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER {

    struct {

        ULONG NoStModeSupported:1;
        ULONG InteruptVectorModeSupported:1;
        ULONG DeviceSpecificModeSupported:1;
        ULONG Rsvd:5;
        ULONG ExtendedTPHRequesterSupported:1;
        ULONG StTableLocation:2;
        ULONG Rsvd2:5;
        ULONG StTableSize:11;
        ULONG Rsvd3:5;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER, *PPCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER;

typedef union _PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER {

    struct {

        ULONG StModeSelect:3;
        ULONG Rsvd:5;
        ULONG TphRequesterEnable:2;
        ULONG Rsvd2:22;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER, *PPCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER;

typedef union _PCI_EXPRESS_TPH_ST_TABLE_ENTRY {

    struct {

        USHORT LowerEntry:8;
        USHORT UpperEntry:8;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_TPH_ST_TABLE_ENTRY, *PPCI_EXPRESS_TPH_ST_TABLE_ENTRY;

typedef struct _PCI_EXPRESS_TPH_REQUESTER_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER RequesterCapability;
    PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER RequesterControl;

} PCI_EXPRESS_TPH_REQUESTER_CAPABILITY, *PPCI_EXPRESS_TPH_REQUESTER_CAPABILITY;





typedef union _PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER {

    struct {
        ULONG PciPmL12Supported:1;
        ULONG PciPmL11Supported:1;
        ULONG AspmL12Supported:1;
        ULONG AspmL11Supported:1;
        ULONG L1PmSsSupported:1;
        ULONG Rsvd:3;
        ULONG PortCommonModeRestoreTime:8;
        ULONG PortTPowerOnScale:2;
        ULONG Rsvd2:1;
        ULONG PortTPowerOnValue:5;
        ULONG Rsvd3:8;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER, *PPCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER;

typedef union _PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER {

    struct {
        ULONG PciPmL12Enabled:1;
        ULONG PciPmL11Enabled:1;
        ULONG AspmL12Enabled:1;
        ULONG AspmL11Enabled:1;
        ULONG Rsvd:4;
        ULONG CommonModeRestoreTime:8;
        ULONG LtrL12ThresholdValue:10;
        ULONG Rsvd2:3;
        ULONG LtrL12ThresholdScale:3;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER, *PPCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER;

typedef union _PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER {

    struct {

        ULONG TPowerOnScale:2;
        ULONG Rsvd:1;
        ULONG TPowerOnValue:5;
        ULONG Rsvd2:24;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER, *PPCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER;

typedef struct _PCI_EXPRESS_L1_PM_SS_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER L1PmSsCapabilities;
    PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER L1PmSsControl1;
    PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER L1PmSsControl2;

} PCI_EXPRESS_L1_PM_SS_CAPABILITY, *PPCI_EXPRESS_L1_PM_SS_CAPABILITY;

typedef union _PCI_EXPRESS_DPC_CAPS_REGISTER {

    struct {
        USHORT InterruptMsgNumber : 5;
        USHORT RpExtensionsForDpc : 1;
        USHORT PoisonedTlpEgressBlockingSupported : 1;
        USHORT DpcSoftwareTriggeringSupported : 1;
        USHORT RpPioLogSize : 4;
        USHORT DlActiveErrCorSignalingSupported : 1;
        USHORT Reserved : 3;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_DPC_CAPS_REGISTER, *PPCI_EXPRESS_DPC_CAPS_REGISTER;

typedef union _PCI_EXPRESS_DPC_CONTROL_REGISTER {

    struct {
        USHORT TriggerEnable : 2;
        USHORT CompletionControl : 1;
        USHORT InterruptEnable : 1;
        USHORT ErrCorEnable : 1;
        USHORT PoisonedTlpEgressBlockingEnable : 1;
        USHORT SoftwareTrigger : 1;
        USHORT DlActiveErrCorEnable : 1;
        USHORT Reserved : 8;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_DPC_CONTROL_REGISTER, *PPCI_EXPRESS_DPC_CONTROL_REGISTER;

typedef union _PCI_EXPRESS_DPC_STATUS_REGISTER {

    struct {
        USHORT TriggerStatus : 1;
        USHORT TriggerReason : 2;
        USHORT InterruptStatus : 1;
        USHORT RpBusy : 1;
        USHORT TriggerReasonExtension : 2;
        USHORT Reserved1 : 1;
        USHORT PioFirstErrPointer : 5;
        USHORT Reserved2 : 3;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_DPC_STATUS_REGISTER, *PPCI_EXPRESS_DPC_STATUS_REGISTER;

typedef union _PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER {

    struct {
        ULONG CfgURCpl : 1;
        ULONG CfgCACpl : 1;
        ULONG CfgCTO : 1;
        ULONG Reserved1 : 5;
        ULONG IoURCpl : 1;
        ULONG IoCACpl : 1;
        ULONG IoCTO : 1;
        ULONG Reserved2 : 5;
        ULONG MemURCpl : 1;
        ULONG MemCACpl : 1;
        ULONG MemCTO : 1;
        ULONG Reserved3 : 12;
        ULONG Reserved4 : 1;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER,
    *PPCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER;

typedef union _PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER {

    struct {
        ULONG CfgURCpl : 1;
        ULONG CfgCACpl : 1;
        ULONG CfgCTO : 1;
        ULONG Reserved1 : 5;
        ULONG IoURCpl : 1;
        ULONG IoCACpl : 1;
        ULONG IoCTO : 1;
        ULONG Reserved2 : 5;
        ULONG MemURCpl : 1;
        ULONG MemCACpl : 1;
        ULONG MemCTO : 1;
        ULONG Reserved3 : 13;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER,
    *PPCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER;

typedef union _PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER {

    struct {
        ULONG CfgURCpl : 1;
        ULONG CfgCACpl : 1;
        ULONG CfgCTO : 1;
        ULONG Reserved1 : 5;
        ULONG IoURCpl : 1;
        ULONG IoCACpl : 1;
        ULONG IoCTO : 1;
        ULONG Reserved2 : 5;
        ULONG MemURCpl : 1;
        ULONG MemCACpl : 1;
        ULONG MemCTO : 1;
        ULONG Reserved3 : 13;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER,
    *PPCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER;

typedef union _PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER {

    struct {
        ULONG CfgURCpl : 1;
        ULONG CfgCACpl : 1;
        ULONG CfgCTO : 1;
        ULONG Reserved1 : 5;
        ULONG IoURCpl : 1;
        ULONG IoCACpl : 1;
        ULONG IoCTO : 1;
        ULONG Reserved2 : 5;
        ULONG MemURCpl : 1;
        ULONG MemCACpl : 1;
        ULONG MemCTO : 1;
        ULONG Reserved3 : 13;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER,
    *PPCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER;

typedef union _PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER {

    struct {
        ULONG CfgURCpl : 1;
        ULONG CfgCACpl : 1;
        ULONG CfgCTO : 1;
        ULONG Reserved1 : 5;
        ULONG IoURCpl : 1;
        ULONG IoCACpl : 1;
        ULONG IoCTO : 1;
        ULONG Reserved2 : 5;
        ULONG MemURCpl : 1;
        ULONG MemCACpl : 1;
        ULONG MemCTO : 1;
        ULONG Reserved3 : 13;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER,
    *PPCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER;

typedef struct _PCI_EXPRESS_DPC_RP_PIO_HEADERLOG_REGISTER {

    ULONG PioHeaderLogRegister[4];

} PCI_EXPRESS_DPC_RP_PIO_HEADERLOG_REGISTER,
    *PPCI_EXPRESS_DPC_RP_PIO_HEADERLOG_REGISTER;

typedef union _PCI_EXPRESS_DPC_RP_PIO_IMPSPECLOG_REGISTER {

    ULONG PioImpSpecLog;

} PCI_EXPRESS_DPC_RP_PIO_IMPSPECLOG_REGISTER,
    *PPCI_EXPRESS_DPC_RP_PIO_IMPSPECLOG_REGISTER;

typedef struct _PCI_EXPRESS_DPC_RP_PIO_TLPPREFIXLOG_REGISTER {

    ULONG PioTlpPrefixLogRegister[4];

} PCI_EXPRESS_DPC_RP_PIO_TLPPREFIXLOG_REGISTER,
    *PPCI_EXPRESS_DPC_RP_PIO_TLPPREFIXLOG_REGISTER;

typedef union _PCI_EXPRESS_DPC_ERROR_SOURCE_ID {

    struct {
        USHORT Function:3;
        USHORT Device:5;
        USHORT Bus:8;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_DPC_ERROR_SOURCE_ID, *PPCI_EXPRESS_DPC_ERROR_SOURCE_ID;

typedef struct _PCI_EXPRESS_DPC_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    
    
    

    PCI_EXPRESS_DPC_CAPS_REGISTER DpcCapabilities;
    PCI_EXPRESS_DPC_CONTROL_REGISTER DpcControl;
    PCI_EXPRESS_DPC_STATUS_REGISTER DpcStatus;
    PCI_EXPRESS_DPC_ERROR_SOURCE_ID DpcErrSrcId;

    
    
    

    PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER RpPioStatus;
    PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER RpPioMask;
    PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER RpPioSeverity;
    PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER RpPioSysError;
    PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER RpPioException;
    PCI_EXPRESS_DPC_RP_PIO_HEADERLOG_REGISTER RpPioHeaderLog;
    PCI_EXPRESS_DPC_RP_PIO_IMPSPECLOG_REGISTER RpPioImpSpecLog;
    PCI_EXPRESS_DPC_RP_PIO_TLPPREFIXLOG_REGISTER RpPioPrefixLog;

} PCI_EXPRESS_DPC_CAPABILITY, *PPCI_EXPRESS_DPC_CAPABILITY;

typedef union _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER {
    struct {
        ULONG Rsvd:4;
        ULONG SizesSupported:20;
        ULONG Rsvd2:8;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER, *PPCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER;

typedef union _PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER {
    struct {

        ULONG BarIndex:3;
        ULONG Rsvd:2;
        ULONG NumberOfResizableBars:3;
        ULONG BarSize:6;
        ULONG Rsvd2:18;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER, *PPCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER;

typedef struct _PCI_EXPRESS_RESIZABLE_BAR_ENTRY {
    PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER Control;
} PCI_EXPRESS_RESIZABLE_BAR_ENTRY, *PPCI_EXPRESS_RESIZABLE_BAR_ENTRY;

typedef struct _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY {

    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;

    PCI_EXPRESS_RESIZABLE_BAR_ENTRY Entry[6];

} PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY, *PPCI_EXPRESS_RESIZABLE_BAR_CAPABILITY;





typedef union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1 {
    struct {
        ULONG DvsecVendorId:16;
        ULONG DvsecVersion:4;
        ULONG DvsecLength:12;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1, *PPCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1;

typedef union _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2 {
    struct {
        USHORT DvsecId:16;
    } ;

    USHORT AsUSHORT;

} PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2, *PPCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2;

typedef struct _PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1 DvsecHeader1;
    PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2 DvsecHeader2;
    USHORT DvsecRegisters[1];

} PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY, *PPCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_CAPABILITY;







typedef struct _PCI_EXPRESS_LINK_CONTROL3 {
    union {
        struct {
            ULONG PerformEq:1;
            ULONG LinkEqIntEn:1;
            ULONG Reserved:30;
        };
        ULONG AsULONG;
    };

} PCI_EXPRESS_LINK_CONTROL3, *PPCI_EXPRESS_LINK_CONTROL3;

typedef struct _PCI_EXPRESS_LANE_ERROR_STATUS {
    ULONG LaneBitmap;
} PCI_EXPRESS_LANE_ERROR_STATUS, *PPCI_EXPRESS_LANE_ERROR_STATUS;

typedef struct _PCI_EXPRESS_SECONDARY_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_LINK_CONTROL3 LinkControl3;
    PCI_EXPRESS_LANE_ERROR_STATUS LaneErrorStatus;
} PCI_EXPRESS_SECONDARY_CAPABILITY, *PPCI_EXPRESS_SECONDARY_CAPABILITY;





typedef union _PCI_EXPRESS_NPEM_CAPABILITY_REGISTER {
    struct {
        ULONG Capable:1;
        ULONG ResetCapable:1;
        ULONG OkCapable:1;
        ULONG LocateCapable:1;
        ULONG FailCapable:1;
        ULONG RebuildCapable:1;
        ULONG PFACapable:1;
        ULONG HotSpareCapable:1;
        ULONG InACriticalArrayCapable:1;
        ULONG InAFailedArrayCapable:1;
        ULONG InvalidDeviceTypeCapable:1;
        ULONG DisabledCapable:1;
        ULONG Rsvd:12;
        ULONG EnclosureSpecificCapabilities:8;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_NPEM_CAPABILITY_REGISTER, *PPCI_EXPRESS_NPEM_CAPABILITY_REGISTER;

typedef union _PCI_EXPRESS_NPEM_CONTROL_REGISTER {
    struct {
        ULONG Enable:1;
        ULONG InitiateReset:1;
        ULONG OkControl:1;
        ULONG LocateControl:1;
        ULONG FailControl:1;
        ULONG RebuildControl:1;
        ULONG PFAControl:1;
        ULONG HotSpareControl:1;
        ULONG InACriticalArrayControl:1;
        ULONG InAFailedArrayControl:1;
        ULONG InvalidDeviceTypeControl:1;
        ULONG DisabledControl:1;
        ULONG Rsvd:12;
        ULONG EnclosureSpecificControls:8;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_NPEM_CONTROL_REGISTER, *PPCI_EXPRESS_NPEM_CONTROL_REGISTER;

typedef union _PCI_EXPRESS_NPEM_STATUS_REGISTER {
    struct {
        ULONG CommandCompleted:1;
        ULONG Rsvd:23;
        ULONG EnclosureSpecificStatus:8;
    } ;

    ULONG AsULONG;

} PCI_EXPRESS_NPEM_STATUS_REGISTER, *PPCI_EXPRESS_NPEM_STATUS_REGISTER;

typedef struct _PCI_EXPRESS_NPEM_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_NPEM_CAPABILITY_REGISTER Capability;
    PCI_EXPRESS_NPEM_CONTROL_REGISTER Control;
    PCI_EXPRESS_NPEM_STATUS_REGISTER Status;
} PCI_EXPRESS_NPEM_CAPABILITY, *PPCI_EXPRESS_NPEM_CAPABILITY;

typedef struct _PCI_EXPRESS_EVENT_COLLECTOR_ENDPOINT_ASSOCIATION_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    ULONG AssociationBitmap;
} PCI_EXPRESS_EVENT_COLLECTOR_ENDPOINT_ASSOCIATION_CAPABILITY, *PPCI_EXPRESS_EVENT_COLLECTOR_ENDPOINT_ASSOCIATION_CAPABILITY;





typedef union _PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11 {

    
    
    

    struct {
        USHORT CacheCapable:1;
        USHORT IoCapable:1;
        USHORT MemCapable:1;
        USHORT MemHwInitMode:1;
        USHORT HdmCount:2;
        USHORT Reserved0:8;
        USHORT ViralCapable:1;
        USHORT Reserved1:1;
    };

    USHORT AsUSHORT;
} PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11, *PPCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11;

typedef union _PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER {
    struct {
        USHORT CacheEnable:1;
        USHORT IoEnable:1;
        USHORT MemEnable:1;
        USHORT CacheSFCoverage:5;
        USHORT CacheSFGranularity:3;
        USHORT CacheCleanEviction:1;
        USHORT Reserved0:2;
        USHORT ViralEnable:1;
        USHORT Reserved1:1;
    };

    USHORT AsUSHORT;
} PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER, *PPCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER;

typedef union _PCI_EXPRESS_CXL_DVSEC_STATUS_REGISTER {
    struct {
        USHORT Reserved0:14;
        USHORT ViralStatus:1;
        USHORT Reserved1:1;
    };

    USHORT AsUSHORT;
} PCI_EXPRESS_CXL_DVSEC_STATUS_REGISTER, *PPCI_EXPRESS_CXL_DVSEC_STATUS_REGISTER;

typedef union _PCI_EXPRESS_CXL_DVSEC_LOCK_REGISTER {
    struct {
        USHORT ConfigLock:1;
        USHORT Reserved:15;
    };

    USHORT AsUSHORT;
} PCI_EXPRESS_CXL_DVSEC_LOCK_REGISTER, *PPCI_EXPRESS_CXL_DVSEC_LOCK_REGISTER;

typedef struct _PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_HIGH_REGISTER {
    ULONG MemSizeHigh;
} PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_HIGH_REGISTER, *PPCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_HIGH_REGISTER;

typedef union _PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11 {

    
    
    

    struct {
        ULONG MemInfoValid:1;
        ULONG MemActive:1;
        ULONG MediaType:3;
        ULONG MemClass:3;
        ULONG DesiredInterleave:3;
        ULONG Reserved:17;
        ULONG MemSizeLow:4;
    };

    ULONG AsULONG;
} PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11, *PPCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11;

typedef struct _PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_HIGH_REGISTER {
    ULONG MemBaseHigh;
} PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_HIGH_REGISTER, *PPCI_EXPRESS_CXL_DVSEC_RANGE_BASE_HIGH_REGISTER;

typedef union _PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_LOW_REGISTER {
    struct {
        ULONG Reserved:28;
        ULONG MemBaseLow:4;
    };

    ULONG AsULONG;
} PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_LOW_REGISTER, *PPCI_EXPRESS_CXL_DVSEC_RANGE_BASE_LOW_REGISTER;

typedef struct _PCI_EXPRESS_CXL_DVSEC_CAPABILITY {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1 DvsecHeader1;
    PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2 DvsecHeader2;
    UCHAR Reserved[46];
} PCI_EXPRESS_CXL_DVSEC_CAPABILITY, *PPCI_EXPRESS_CXL_DVSEC_CAPABILITY;

typedef struct _PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11 {
    PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;
    PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_1 DvsecHeader1;
    PCI_EXPRESS_DESIGNATED_VENDOR_SPECIFIC_HEADER_2 DvsecHeader2;
    PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11 Capability;
    PCI_EXPRESS_CXL_DVSEC_CONTROL_REGISTER Control;
    PCI_EXPRESS_CXL_DVSEC_STATUS_REGISTER Status;
    USHORT Control2;
    USHORT Status2;
    PCI_EXPRESS_CXL_DVSEC_LOCK_REGISTER Lock;
    USHORT Reserved;
    PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_HIGH_REGISTER Range1SizeHigh;
    PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11 Range1SizeLow;
    PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_HIGH_REGISTER Range1BaseHigh;
    PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_LOW_REGISTER Range1BaseLow;
    PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_HIGH_REGISTER Range2SizeHigh;
    PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11 Range2SizeLow;
    PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_HIGH_REGISTER Range2BaseHigh;
    PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_LOW_REGISTER Range2BaseLow;
} PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11, *PPCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11;

typedef char __C_ASSERT__[(sizeof(PCI_EXPRESS_CXL_DVSEC_CAPABILITY) == 0x38)?1:-1];
typedef char __C_ASSERT__[(sizeof(PCI_EXPRESS_CXL_DVSEC_CAPABILITY) == sizeof(PCI_EXPRESS_CXL_DVSEC_CAPABILITY_V11))?1:-1];









typedef
 
 
ULONG 
PCI_READ_WRITE_CONFIG (
      PVOID Context,
      ULONG BusOffset,
      ULONG Slot,
      PVOID Buffer,
      ULONG Offset,
      ULONG Length
    );

typedef PCI_READ_WRITE_CONFIG *PPCI_READ_WRITE_CONFIG;

typedef
 
 
void 
PCI_PIN_TO_LINE (
      PVOID Context,
      PPCI_COMMON_CONFIG PciData
    );

typedef PCI_PIN_TO_LINE *PPCI_PIN_TO_LINE;

typedef
 
 
void
PCI_LINE_TO_PIN (
      PVOID Context,
      PPCI_COMMON_CONFIG PciNewData,
      PPCI_COMMON_CONFIG PciOldData
    );

typedef PCI_LINE_TO_PIN *PPCI_LINE_TO_PIN;

typedef
 
 
void
PCI_ROOT_BUS_CAPABILITY (
      PVOID Context,
      PPCI_ROOT_BUS_HARDWARE_CAPABILITY HardwareCapability
    );

typedef PCI_ROOT_BUS_CAPABILITY *PPCI_ROOT_BUS_CAPABILITY;

typedef
 
 
void
PCI_EXPRESS_WAKE_CONTROL (
      PVOID Context,
      BOOLEAN EnableWake
    );

typedef PCI_EXPRESS_WAKE_CONTROL *PPCI_EXPRESS_WAKE_CONTROL;

typedef
 
 
void
PCI_PREPARE_MULTISTAGE_RESUME (
      PVOID Context
    );

typedef PCI_PREPARE_MULTISTAGE_RESUME *PPCI_PREPARE_MULTISTAGE_RESUME;


typedef struct _PCI_BUS_INTERFACE_STANDARD {
    
    
    
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;
    
    
    
    PPCI_READ_WRITE_CONFIG ReadConfig;
    PPCI_READ_WRITE_CONFIG WriteConfig;
    PPCI_PIN_TO_LINE PinToLine;
    PPCI_LINE_TO_PIN LineToPin;
    PPCI_ROOT_BUS_CAPABILITY RootBusCapability;
    PPCI_EXPRESS_WAKE_CONTROL ExpressWakeControl;
    PPCI_PREPARE_MULTISTAGE_RESUME PrepareMultistageResume;

} PCI_BUS_INTERFACE_STANDARD, *PPCI_BUS_INTERFACE_STANDARD;














 

NTSTATUS
__stdcall
ZwSetInformationThread (
      HANDLE ThreadHandle,
      THREADINFOCLASS ThreadInformationClass,
      PVOID ThreadInformation,
      ULONG ThreadInformationLength
    );



 

NTSTATUS
ZwCreateTimer (
      PHANDLE TimerHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      TIMER_TYPE TimerType
    );



 
NTSTATUS
ZwOpenTimer (
      PHANDLE TimerHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes
    );



 
NTSTATUS
ZwCancelTimer (
      HANDLE TimerHandle,
      PBOOLEAN CurrentState
    );



 
NTSTATUS
ZwSetTimer (
      HANDLE TimerHandle,
      PLARGE_INTEGER DueTime,
      PTIMER_APC_ROUTINE TimerApcRoutine,
      PVOID TimerContext,
      BOOLEAN ResumeTimer,
      LONG Period,
      PBOOLEAN PreviousState
    );



 
NTSTATUS
ZwSetTimerEx (
      HANDLE TimerHandle,
      TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
      PVOID TimerSetInformation,
      ULONG TimerSetInformationLength
    );



 

NTSTATUS
__stdcall
ZwQueryVolumeInformationFile(
      HANDLE FileHandle,
      PIO_STATUS_BLOCK IoStatusBlock,
      PVOID FsInformation,
      ULONG Length,
      FS_INFORMATION_CLASS FsInformationClass
    );



 

NTSTATUS
__stdcall
ZwDeviceIoControlFile(
      HANDLE FileHandle,
      HANDLE Event,
      PIO_APC_ROUTINE ApcRoutine,
      PVOID ApcContext,
      PIO_STATUS_BLOCK IoStatusBlock,
      ULONG IoControlCode,
      PVOID InputBuffer,
      ULONG InputBufferLength,
      PVOID OutputBuffer,
      ULONG OutputBufferLength
    );



 

NTSTATUS
__stdcall
ZwDisplayString(
      PUNICODE_STRING String
    );



 

NTSTATUS
__stdcall
ZwPowerInformation(
      POWER_INFORMATION_LEVEL InformationLevel,
      PVOID InputBuffer,
      ULONG InputBufferLength,
      PVOID OutputBuffer,
      ULONG OutputBufferLength
    );



 

NTSTATUS
__stdcall
ZwAllocateLocallyUniqueId(
      PLUID Luid
    );

 


NTSTATUS
__stdcall
ZwTerminateProcess (
      HANDLE ProcessHandle,
      NTSTATUS ExitStatus
    );

 

NTSTATUS
__stdcall
ZwOpenProcess (
      PHANDLE ProcessHandle,
      ACCESS_MASK DesiredAccess,
      POBJECT_ATTRIBUTES ObjectAttributes,
      PCLIENT_ID ClientId
    );











typedef enum _WHEA_ERROR_SOURCE_TYPE {
    WheaErrSrcTypeMCE          = 0x00,    
    WheaErrSrcTypeCMC          = 0x01,    
    WheaErrSrcTypeCPE          = 0x02,    
    WheaErrSrcTypeNMI          = 0x03,    
    WheaErrSrcTypePCIe         = 0x04,    
    WheaErrSrcTypeGeneric      = 0x05,    
    WheaErrSrcTypeINIT         = 0x06,    
    WheaErrSrcTypeBOOT         = 0x07,    
    WheaErrSrcTypeSCIGeneric   = 0x08,    
    WheaErrSrcTypeIPFMCA       = 0x09,    
    WheaErrSrcTypeIPFCMC       = 0x0a,    
    WheaErrSrcTypeIPFCPE       = 0x0b,    
    WheaErrSrcTypeGenericV2    = 0x0c,    
    WheaErrSrcTypeSCIGenericV2 = 0x0d,    
    WheaErrSrcTypeBMC          = 0x0e,    
    WheaErrSrcTypePMEM         = 0x0f,    
    WheaErrSrcTypeDeviceDriver = 0x10,    
    WheaErrSrcTypeSea          = 0x11,    
    WheaErrSrcTypeSei          = 0x12,    
    WheaErrSrcTypeMax
} WHEA_ERROR_SOURCE_TYPE, *PWHEA_ERROR_SOURCE_TYPE;






typedef enum _WHEA_ERROR_SOURCE_STATE {
    WheaErrSrcStateStopped       = 0x01,
    WheaErrSrcStateStarted       = 0x02,
    WheaErrSrcStateRemoved       = 0x03,
    WheaErrSrcStateRemovePending = 0x04
} WHEA_ERROR_SOURCE_STATE, *PWHEA_ERROR_SOURCE_STATE;


















































































typedef
NTSTATUS
(_WHEA_ERROR_SOURCE_INITIALIZE_DEVICE_DRIVER)(
      PVOID Context,
      ULONG ErrorSourceId
    );

typedef _WHEA_ERROR_SOURCE_INITIALIZE_DEVICE_DRIVER
    *WHEA_ERROR_SOURCE_INITIALIZE_DEVICE_DRIVER;

typedef
void
(_WHEA_ERROR_SOURCE_UNINITIALIZE_DEVICE_DRIVER)(
      PVOID Context
    );

typedef _WHEA_ERROR_SOURCE_UNINITIALIZE_DEVICE_DRIVER
    *WHEA_ERROR_SOURCE_UNINITIALIZE_DEVICE_DRIVER;

typedef
NTSTATUS
(_WHEA_ERROR_SOURCE_CORRECT_DEVICE_DRIVER)(
      PVOID ErrorSourceDesc,
      PULONG MaximumSectionLength
    );

typedef _WHEA_ERROR_SOURCE_CORRECT_DEVICE_DRIVER
    *WHEA_ERROR_SOURCE_CORRECT_DEVICE_DRIVER;

typedef struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD {
    WHEA_ERROR_SOURCE_INITIALIZE_DEVICE_DRIVER Initialize;
    WHEA_ERROR_SOURCE_UNINITIALIZE_DEVICE_DRIVER Uninitialize;
    WHEA_ERROR_SOURCE_CORRECT_DEVICE_DRIVER Correct;
} WHEA_ERROR_SOURCE_CONFIGURATION_DD, *PWHEA_ERROR_SOURCE_CONFIGURATION_DD;

typedef PVOID WHEA_ERROR_HANDLE;

typedef struct _WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER_V1 {
    ULONG Version;
    GUID SourceGuid;
    USHORT LogTag;
    UCHAR Reserved[6];
    WHEA_ERROR_SOURCE_INITIALIZE_DEVICE_DRIVER Initialize;
    WHEA_ERROR_SOURCE_UNINITIALIZE_DEVICE_DRIVER Uninitialize;
} WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER_V1,
  *PWHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER_V1;

typedef struct _WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER {
    ULONG Version;
    GUID SourceGuid;
    USHORT LogTag;
    UCHAR Reserved[6];
    WHEA_ERROR_SOURCE_INITIALIZE_DEVICE_DRIVER Initialize;
    WHEA_ERROR_SOURCE_UNINITIALIZE_DEVICE_DRIVER Uninitialize;
    ULONG  MaxSectionDataLength;
    ULONG MaxSectionsPerReport;
    GUID CreatorId;
    GUID PartitionId;
} WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER,
  *PWHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER;

typedef struct _WHEA_DRIVER_BUFFER_SET {
    ULONG Version;
     
        PUCHAR Data;
    ULONG DataSize;
    LPGUID SectionTypeGuid;
     
        PUCHAR SectionFriendlyName;
    PUCHAR Flags;
} WHEA_DRIVER_BUFFER_SET, *PWHEA_DRIVER_BUFFER_SET;















typedef union _WHEA_NOTIFICATION_FLAGS {
    struct {
        USHORT PollIntervalRW:1;
        USHORT SwitchToPollingThresholdRW:1;
        USHORT SwitchToPollingWindowRW:1;
        USHORT ErrorThresholdRW:1;
        USHORT ErrorThresholdWindowRW:1;
        USHORT Reserved:11;
    } ;
    USHORT AsUSHORT;
} WHEA_NOTIFICATION_FLAGS, *PWHEA_NOTIFICATION_FLAGS;

typedef union _XPF_MC_BANK_FLAGS {
    struct {
        UCHAR ClearOnInitializationRW:1;
        UCHAR ControlDataRW:1;
        UCHAR Reserved:6;
    } ;
    UCHAR AsUCHAR;
} XPF_MC_BANK_FLAGS, *PXPF_MC_BANK_FLAGS;

typedef union _XPF_MCE_FLAGS {
    struct {
        ULONG MCG_CapabilityRW:1;
        ULONG MCG_GlobalControlRW:1;
        ULONG Reserved:30;
    } ;
    ULONG AsULONG;
} XPF_MCE_FLAGS, *PXPF_MCE_FLAGS;

typedef union _AER_ROOTPORT_DESCRIPTOR_FLAGS {
    struct {
        USHORT UncorrectableErrorMaskRW:1;
        USHORT UncorrectableErrorSeverityRW:1;
        USHORT CorrectableErrorMaskRW:1;
        USHORT AdvancedCapsAndControlRW:1;
        USHORT RootErrorCommandRW:1;
        USHORT Reserved:11;
    } ;
    USHORT AsUSHORT;
} AER_ROOTPORT_DESCRIPTOR_FLAGS, *PAER_ROOTPORT_DESCRIPTOR_FLAGS;

typedef union _AER_ENDPOINT_DESCRIPTOR_FLAGS {
    struct {
        USHORT UncorrectableErrorMaskRW:1;
        USHORT UncorrectableErrorSeverityRW:1;
        USHORT CorrectableErrorMaskRW:1;
        USHORT AdvancedCapsAndControlRW:1;
        USHORT Reserved:12;
    } ;
    USHORT AsUSHORT;
} AER_ENDPOINT_DESCRIPTOR_FLAGS, *PAER_ENDPOINT_DESCRIPTOR_FLAGS;

typedef union _AER_BRIDGE_DESCRIPTOR_FLAGS {
    struct {
        USHORT UncorrectableErrorMaskRW:1;
        USHORT UncorrectableErrorSeverityRW:1;
        USHORT CorrectableErrorMaskRW:1;
        USHORT AdvancedCapsAndControlRW:1;
        USHORT SecondaryUncorrectableErrorMaskRW:1;
        USHORT SecondaryUncorrectableErrorSevRW:1;
        USHORT SecondaryCapsAndControlRW:1;
        USHORT Reserved:9;
    } ;
    USHORT AsUSHORT;
} AER_BRIDGE_DESCRIPTOR_FLAGS, *PAER_BRIDGE_DESCRIPTOR_FLAGS;






typedef struct _WHEA_NOTIFICATION_DESCRIPTOR {
    UCHAR Type;
    UCHAR Length;
    WHEA_NOTIFICATION_FLAGS Flags;

    union {
        struct {
            ULONG PollInterval;
        } Polled;

        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Interrupt;

        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } LocalInterrupt;

        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Sci;

        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Nmi;

        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Sea;

        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Sei;

        struct {
            ULONG PollInterval;
            ULONG Vector;
            ULONG SwitchToPollingThreshold;
            ULONG SwitchToPollingWindow;
            ULONG ErrorThreshold;
            ULONG ErrorThresholdWindow;
        } Gsiv;
    } u;
} WHEA_NOTIFICATION_DESCRIPTOR, *PWHEA_NOTIFICATION_DESCRIPTOR;








typedef struct _WHEA_XPF_MC_BANK_DESCRIPTOR {
    UCHAR BankNumber;
    BOOLEAN ClearOnInitialization;
    UCHAR StatusDataFormat;
    XPF_MC_BANK_FLAGS Flags;
    ULONG ControlMsr;
    ULONG StatusMsr;
    ULONG AddressMsr;
    ULONG MiscMsr;
    ULONGLONG ControlData;
} WHEA_XPF_MC_BANK_DESCRIPTOR, *PWHEA_XPF_MC_BANK_DESCRIPTOR;







typedef struct _WHEA_XPF_MCE_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR NumberOfBanks;
    XPF_MCE_FLAGS Flags;
    ULONGLONG MCG_Capability;
    ULONGLONG MCG_GlobalControl;
    WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];
} WHEA_XPF_MCE_DESCRIPTOR, *PWHEA_XPF_MCE_DESCRIPTOR;







typedef struct _WHEA_XPF_CMC_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR NumberOfBanks;
    ULONG Reserved;
    WHEA_NOTIFICATION_DESCRIPTOR Notify;
    WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];
} WHEA_XPF_CMC_DESCRIPTOR, *PWHEA_XPF_CMC_DESCRIPTOR;

typedef struct _WHEA_PCI_SLOT_NUMBER {
    union {
        struct {
            ULONG DeviceNumber:5;
            ULONG FunctionNumber:3;
            ULONG Reserved:24;
        } bits;
        ULONG AsULONG;
    } u;
} WHEA_PCI_SLOT_NUMBER, *PWHEA_PCI_SLOT_NUMBER;







typedef struct _WHEA_XPF_NMI_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
} WHEA_XPF_NMI_DESCRIPTOR, *PWHEA_XPF_NMI_DESCRIPTOR;







typedef struct _WHEA_AER_ROOTPORT_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR Reserved;
    ULONG BusNumber;
    WHEA_PCI_SLOT_NUMBER Slot;
    USHORT DeviceControl;
    AER_ROOTPORT_DESCRIPTOR_FLAGS Flags;
    ULONG UncorrectableErrorMask;
    ULONG UncorrectableErrorSeverity;
    ULONG CorrectableErrorMask;
    ULONG AdvancedCapsAndControl;
    ULONG RootErrorCommand;
} WHEA_AER_ROOTPORT_DESCRIPTOR, *PWHEA_AER_ROOTPORT_DESCRIPTOR;







typedef struct _WHEA_AER_ENDPOINT_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR Reserved;
    ULONG BusNumber;
    WHEA_PCI_SLOT_NUMBER Slot;
    USHORT DeviceControl;
    AER_ENDPOINT_DESCRIPTOR_FLAGS Flags;
    ULONG UncorrectableErrorMask;
    ULONG UncorrectableErrorSeverity;
    ULONG CorrectableErrorMask;
    ULONG AdvancedCapsAndControl;
} WHEA_AER_ENDPOINT_DESCRIPTOR, *PWHEA_AER_ENDPOINT_DESCRIPTOR;







typedef struct _WHEA_AER_BRIDGE_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR Reserved;
    ULONG BusNumber;
    WHEA_PCI_SLOT_NUMBER Slot;
    USHORT DeviceControl;
    AER_BRIDGE_DESCRIPTOR_FLAGS Flags;
    ULONG UncorrectableErrorMask;
    ULONG UncorrectableErrorSeverity;
    ULONG CorrectableErrorMask;
    ULONG AdvancedCapsAndControl;
    ULONG SecondaryUncorrectableErrorMask;
    ULONG SecondaryUncorrectableErrorSev;
    ULONG SecondaryCapsAndControl;
} WHEA_AER_BRIDGE_DESCRIPTOR, *PWHEA_AER_BRIDGE_DESCRIPTOR;







typedef struct _WHEA_GENERIC_ERROR_DESCRIPTOR {

    
    
    

    USHORT Type;

    
    
    

    UCHAR Reserved;

    
    
    

    UCHAR Enabled;

    
    
    

    ULONG ErrStatusBlockLength;

    
    
    
    

    ULONG RelatedErrorSourceId;

    
    
    
    
    

    UCHAR ErrStatusAddressSpaceID;
    UCHAR ErrStatusAddressBitWidth;
    UCHAR ErrStatusAddressBitOffset;
    UCHAR ErrStatusAddressAccessSize;
    LARGE_INTEGER ErrStatusAddress;

    
    
    
    

    WHEA_NOTIFICATION_DESCRIPTOR Notify;

} WHEA_GENERIC_ERROR_DESCRIPTOR, *PWHEA_GENERIC_ERROR_DESCRIPTOR;

typedef struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2 {

    
    
    

    USHORT Type;

    
    
    

    UCHAR Reserved;

    
    
    

    UCHAR Enabled;

    
    
    

    ULONG ErrStatusBlockLength;

    
    
    
    

    ULONG RelatedErrorSourceId;

    
    
    
    
    

    UCHAR ErrStatusAddressSpaceID;
    UCHAR ErrStatusAddressBitWidth;
    UCHAR ErrStatusAddressBitOffset;
    UCHAR ErrStatusAddressAccessSize;
    LARGE_INTEGER ErrStatusAddress;

    
    
    
    

    WHEA_NOTIFICATION_DESCRIPTOR Notify;

    
    
    
    
    

    UCHAR ReadAckAddressSpaceID;
    UCHAR ReadAckAddressBitWidth;
    UCHAR ReadAckAddressBitOffset;
    UCHAR ReadAckAddressAccessSize;
    LARGE_INTEGER ReadAckAddress;
    ULONGLONG ReadAckPreserveMask;
    ULONGLONG ReadAckWriteMask;

} WHEA_GENERIC_ERROR_DESCRIPTOR_V2, *PWHEA_GENERIC_ERROR_DESCRIPTOR_V2;

typedef struct _WHEA_DEVICE_DRIVER_DESCRIPTOR {
    USHORT Type;
    BOOLEAN Enabled;
    UCHAR Reserved;
    GUID SourceGuid;
    USHORT LogTag;
    USHORT Reserved2;
    ULONG PacketLength;
    ULONG PacketCount;
    PUCHAR PacketBuffer;
    WHEA_ERROR_SOURCE_CONFIGURATION_DD Config;
    GUID CreatorId;
    GUID PartitionId;
    ULONG MaxSectionDataLength;
    ULONG MaxSectionsPerRecord;
    PUCHAR PacketStateBuffer;
    LONG OpenHandles;
} WHEA_DEVICE_DRIVER_DESCRIPTOR, *PWHEA_DEVICE_DRIVER_DESCRIPTOR;

typedef struct _WHEA_IPF_MCA_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR Reserved;
} WHEA_IPF_MCA_DESCRIPTOR, *PWHEA_IPF_MCA_DESCRIPTOR;

typedef struct _WHEA_IPF_CMC_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR Reserved;
} WHEA_IPF_CMC_DESCRIPTOR, *PWHEA_IPF_CMC_DESCRIPTOR;

typedef struct _WHEA_IPF_CPE_DESCRIPTOR {
    USHORT Type;
    UCHAR Enabled;
    UCHAR Reserved;
} WHEA_IPF_CPE_DESCRIPTOR, *PWHEA_IPF_CPE_DESCRIPTOR;

typedef struct _WHEA_ERROR_SOURCE_DESCRIPTOR {
    ULONG Length;                                              
    ULONG Version;                                             
    WHEA_ERROR_SOURCE_TYPE Type;                               
    WHEA_ERROR_SOURCE_STATE State;                             
    ULONG MaxRawDataLength;                                    
    ULONG NumRecordsToPreallocate;                             
    ULONG MaxSectionsPerRecord;                                
    ULONG ErrorSourceId;                                       
    ULONG PlatformErrorSourceId;                               
    ULONG Flags;                                               

    union {                                                    
        WHEA_XPF_MCE_DESCRIPTOR XpfMceDescriptor;
        WHEA_XPF_CMC_DESCRIPTOR XpfCmcDescriptor;
        WHEA_XPF_NMI_DESCRIPTOR XpfNmiDescriptor;
        WHEA_IPF_MCA_DESCRIPTOR IpfMcaDescriptor;
        WHEA_IPF_CMC_DESCRIPTOR IpfCmcDescriptor;
        WHEA_IPF_CPE_DESCRIPTOR IpfCpeDescriptor;
        WHEA_AER_ROOTPORT_DESCRIPTOR AerRootportDescriptor;
        WHEA_AER_ENDPOINT_DESCRIPTOR AerEndpointDescriptor;
        WHEA_AER_BRIDGE_DESCRIPTOR AerBridgeDescriptor;
        WHEA_GENERIC_ERROR_DESCRIPTOR GenErrDescriptor;
        WHEA_GENERIC_ERROR_DESCRIPTOR_V2 GenErrDescriptorV2;
        WHEA_DEVICE_DRIVER_DESCRIPTOR DeviceDriverDescriptor;
    } Info;

} WHEA_ERROR_SOURCE_DESCRIPTOR, *PWHEA_ERROR_SOURCE_DESCRIPTOR;


BOOLEAN
WheaIsGhesAssistSrc (
      PWHEA_ERROR_SOURCE_DESCRIPTOR ErrSrc
    )





















;









































typedef enum _IPMI_OS_SEL_RECORD_TYPE {
    IpmiOsSelRecordTypeWhea = 0,
    IpmiOsSelRecordTypeOther,
    IpmiOsSelRecordTypeWheaErrorXpfMca,
    IpmiOsSelRecordTypeWheaErrorPci,
    IpmiOsSelRecordTypeWheaErrorNmi,
    IpmiOsSelRecordTypeWheaErrorOther,
    IpmiOsSelRecordTypeRaw,
    IpmiOsSelRecordTypeDriver,
    IpmiOsSelRecordTypeBugcheckRecovery,
    IpmiOsSelRecordTypeBugcheckData,
    IpmiOsSelRecordTypeMax
} IPMI_OS_SEL_RECORD_TYPE, *PIPMI_OS_SEL_RECORD_TYPE;











typedef struct _IPMI_OS_SEL_RECORD {
    ULONG Signature;
    ULONG Version;
    ULONG Length;
    IPMI_OS_SEL_RECORD_TYPE RecordType;
    ULONG DataLength;
    UCHAR Data[1];
} IPMI_OS_SEL_RECORD, *PIPMI_OS_SEL_RECORD;















































































































































































typedef union _WHEA_REVISION {
    struct {
        UCHAR MinorRevision;
        UCHAR MajorRevision;
    } ;
    USHORT AsUSHORT;
} WHEA_REVISION, *PWHEA_REVISION;

typedef enum _WHEA_ERROR_SEVERITY {
    WheaErrSevRecoverable   = 0,
    WheaErrSevFatal         = 1,
    WheaErrSevCorrected     = 2,
    WheaErrSevInformational = 3
} WHEA_ERROR_SEVERITY, *PWHEA_ERROR_SEVERITY;

typedef union _WHEA_TIMESTAMP {
    struct {
        ULONGLONG Seconds:8;
        ULONGLONG Minutes:8;
        ULONGLONG Hours:8;
        ULONGLONG Precise:1;
        ULONGLONG Reserved:7;
        ULONGLONG Day:8;
        ULONGLONG Month:8;
        ULONGLONG Year:8;
        ULONGLONG Century:8;
    } ;
    LARGE_INTEGER AsLARGE_INTEGER;
} WHEA_TIMESTAMP, *PWHEA_TIMESTAMP;

typedef union _WHEA_PERSISTENCE_INFO {
    struct {
        ULONGLONG Signature:16;
        ULONGLONG Length:24;
        ULONGLONG Identifier:16;
        ULONGLONG Attributes:2;
        ULONGLONG DoNotLog:1;
        ULONGLONG Reserved:5;
    } ;
    ULONGLONG AsULONGLONG;
} WHEA_PERSISTENCE_INFO, *PWHEA_PERSISTENCE_INFO;




















typedef union _WHEA_ERROR_STATUS {
    ULONGLONG ErrorStatus;
    struct {
        ULONGLONG Reserved1:8;
        ULONGLONG ErrorType:8;
        ULONGLONG Address:1;
        ULONGLONG Control:1;
        ULONGLONG Data:1;
        ULONGLONG Responder:1;
        ULONGLONG Requester:1;
        ULONGLONG FirstError:1;
        ULONGLONG Overflow:1;
        ULONGLONG Reserved2:41;
    } ;
} WHEA_ERROR_STATUS, *PWHEA_ERROR_STATUS;



typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS {
    struct {
        ULONG PlatformId:1;
        ULONG Timestamp:1;
        ULONG PartitionId:1;
        ULONG Reserved:29;
    } ;
    ULONG AsULONG;
} WHEA_ERROR_RECORD_HEADER_VALIDBITS, *PWHEA_ERROR_RECORD_HEADER_VALIDBITS;





typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS {
    struct {
        ULONG Recovered:1;
        ULONG PreviousError:1;
        ULONG Simulated:1;
        ULONG DeviceDriver:1;
        ULONG CriticalEvent:1;
        ULONG PersistPfn:1;
        ULONG SectionsTruncated:1;
        ULONG RecoveryInProgress:1;
        ULONG Throttle:1;
        ULONG Reserved:23;
    } ;
    ULONG AsULONG;
} WHEA_ERROR_RECORD_HEADER_FLAGS, *PWHEA_ERROR_RECORD_HEADER_FLAGS;






typedef struct _WHEA_ERROR_RECORD_HEADER {
    ULONG Signature;
    WHEA_REVISION Revision;
    ULONG SignatureEnd;
    USHORT SectionCount;
    WHEA_ERROR_SEVERITY Severity;
    WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;
     
        ULONG Length;
    WHEA_TIMESTAMP Timestamp;
    GUID PlatformId;
    GUID PartitionId;
    GUID CreatorId;
    GUID NotifyType;
    ULONGLONG RecordId;
    WHEA_ERROR_RECORD_HEADER_FLAGS Flags;
    WHEA_PERSISTENCE_INFO PersistenceInfo;
    union {
        struct {
            ULONG OsBuildNumber; 
            UCHAR Reserved2[8];
        };

        UCHAR Reserved[12];
    };
} WHEA_ERROR_RECORD_HEADER, *PWHEA_ERROR_RECORD_HEADER;















typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->Signature)) == (0)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->Signature)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->Revision)) == (4)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->Revision)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->SignatureEnd)) == (6)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->SignatureEnd)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->SectionCount)) == (10)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->SectionCount)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->Severity)) == (12)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->Severity)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->ValidBits)) == (16)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->ValidBits)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->Length)) == (20)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->Length)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->Timestamp)) == (24)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->Timestamp)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->PlatformId)) == (32)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->PlatformId)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->PartitionId)) == (48)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->PartitionId)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->CreatorId)) == (64)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->CreatorId)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->NotifyType)) == (80)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->NotifyType)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->RecordId)) == (96)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->RecordId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->Flags)) == (104)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->Flags)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->PersistenceInfo)) == (108)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->PersistenceInfo)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_HEADER *)0)->Reserved)) == (116)) && ((sizeof(((WHEA_ERROR_RECORD_HEADER *)0)->Reserved)) == (12))))?1:-1];



typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS {
    struct {
        ULONG Primary:1;
        ULONG ContainmentWarning:1;
        ULONG Reset:1;
        ULONG ThresholdExceeded:1;
        ULONG ResourceNotAvailable:1;
        ULONG LatentError:1;
        ULONG Propagated:1;
        ULONG FruTextByPlugin:1;
        ULONG Reserved:24;
    } ;
    ULONG AsULONG;
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS,
    *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;










typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
    struct {
        UCHAR FRUId:1;
        UCHAR FRUText:1;
        UCHAR Reserved:6;
    } ;
    UCHAR AsUCHAR;
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS,
    *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;

typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
    ULONG SectionOffset;
    ULONG SectionLength;
    WHEA_REVISION Revision;
    WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;
    UCHAR Reserved;
    WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;
    GUID SectionType;
    GUID FRUId;
    WHEA_ERROR_SEVERITY SectionSeverity;
    CCHAR FRUText[20];
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR;















typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->SectionOffset)) == (0)) && ((sizeof(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->SectionOffset)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->SectionLength)) == (4)) && ((sizeof(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->SectionLength)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->Revision)) == (8)) && ((sizeof(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->Revision)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->ValidBits)) == (10)) && ((sizeof(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->ValidBits)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->Reserved)) == (11)) && ((sizeof(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->Reserved)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->Flags)) == (12)) && ((sizeof(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->Flags)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->SectionType)) == (16)) && ((sizeof(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->SectionType)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->FRUId)) == (32)) && ((sizeof(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->FRUId)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->SectionSeverity)) == (48)) && ((sizeof(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->SectionSeverity)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->FRUText)) == (52)) && ((sizeof(((WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *)0)->FRUText)) == (20))))?1:-1];



typedef   struct _WHEA_ERROR_RECORD {
    WHEA_ERROR_RECORD_HEADER Header;
     
        WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];
} WHEA_ERROR_RECORD, *PWHEA_ERROR_RECORD;






typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD *)0)->Header)) == (0)) && ((sizeof(((WHEA_ERROR_RECORD *)0)->Header)) == (128))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_RECORD *)0)->SectionDescriptor)) == (128)) && ((sizeof(((WHEA_ERROR_RECORD *)0)->SectionDescriptor)) == (72))))?1:-1];





























typedef union _WHEA_PROCESSOR_FAMILY_INFO {
    struct {
        ULONG Stepping:4;
        ULONG Model:4;
        ULONG Family:4;
        ULONG ProcessorType:2;
        ULONG Reserved1:2;
        ULONG ExtendedModel:4;
        ULONG ExtendedFamily:8;
        ULONG Reserved2:4;
        ULONG NativeModelId;
    } ;
    ULONGLONG AsULONGLONG;
} WHEA_PROCESSOR_FAMILY_INFO, *PWHEA_PROCESSOR_FAMILY_INFO;

typedef union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG ProcessorType:1;
        ULONGLONG InstructionSet:1;
        ULONGLONG ErrorType:1;
        ULONGLONG Operation:1;
        ULONGLONG Flags:1;
        ULONGLONG Level:1;
        ULONGLONG CPUVersion:1;
        ULONGLONG CPUBrandString:1;
        ULONGLONG ProcessorId:1;
        ULONGLONG TargetAddress:1;
        ULONGLONG RequesterId:1;
        ULONGLONG ResponderId:1;
        ULONGLONG InstructionPointer:1;
        ULONGLONG NativeModelId:1;
        ULONGLONG Reserved:50;
    } ;
    ULONGLONG ValidBits;
} WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS,
  *PWHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS;

typedef struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION {
    WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS ValidBits;
    UCHAR ProcessorType;
    UCHAR InstructionSet;
    UCHAR ErrorType;
    UCHAR Operation;
    UCHAR Flags;
    UCHAR Level;
    USHORT Reserved;
    ULONGLONG CPUVersion;
    UCHAR CPUBrandString[128];
    ULONGLONG ProcessorId;
    ULONGLONG TargetAddress;
    ULONGLONG RequesterId;
    ULONGLONG ResponderId;
    ULONGLONG InstructionPointer;
} WHEA_PROCESSOR_GENERIC_ERROR_SECTION, *PWHEA_PROCESSOR_GENERIC_ERROR_SECTION;





















typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->ValidBits)) == (0)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->ValidBits)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->ProcessorType)) == (8)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->ProcessorType)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->InstructionSet)) == (9)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->InstructionSet)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->ErrorType)) == (10)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->ErrorType)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->Operation)) == (11)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->Operation)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->Flags)) == (12)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->Flags)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->Level)) == (13)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->Level)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->Reserved)) == (14)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->Reserved)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->CPUVersion)) == (16)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->CPUVersion)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->CPUBrandString)) == (24)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->CPUBrandString)) == (128))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->ProcessorId)) == (152)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->ProcessorId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->TargetAddress)) == (160)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->TargetAddress)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->RequesterId)) == (168)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->RequesterId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->ResponderId)) == (176)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->ResponderId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->InstructionPointer)) == (184)) && ((sizeof(((WHEA_PROCESSOR_GENERIC_ERROR_SECTION *)0)->InstructionPointer)) == (8))))?1:-1];





















typedef union _WHEA_XPF_CACHE_CHECK {
    struct {
        ULONGLONG TransactionTypeValid:1;
        ULONGLONG OperationValid:1;
        ULONGLONG LevelValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ReservedValid:8;

        ULONGLONG TransactionType:2;
        ULONGLONG Operation:4;
        ULONGLONG Level:3;
        ULONGLONG ProcessorContextCorrupt:1;
        ULONGLONG Uncorrected:1;
        ULONGLONG PreciseIP:1;
        ULONGLONG RestartableIP:1;
        ULONGLONG Overflow:1;

        ULONGLONG Reserved:34;
    } ;
    ULONGLONG XpfCacheCheck;
} WHEA_XPF_CACHE_CHECK, *PWHEA_XPF_CACHE_CHECK;

















typedef union _WHEA_XPF_TLB_CHECK {
    struct {
        ULONGLONG TransactionTypeValid:1;
        ULONGLONG OperationValid:1;
        ULONGLONG LevelValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ReservedValid:8;

        ULONGLONG TransactionType:2;
        ULONGLONG Operation:4;
        ULONGLONG Level:3;
        ULONGLONG ProcessorContextCorrupt:1;
        ULONGLONG Uncorrected:1;
        ULONGLONG PreciseIP:1;
        ULONGLONG RestartableIP:1;
        ULONGLONG Overflow:1;
        ULONGLONG Reserved:34;
    } ;
    ULONGLONG XpfTLBCheck;
} WHEA_XPF_TLB_CHECK, *PWHEA_XPF_TLB_CHECK;



























typedef union _WHEA_XPF_BUS_CHECK {
    struct {
        ULONGLONG TransactionTypeValid:1;
        ULONGLONG OperationValid:1;
        ULONGLONG LevelValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ParticipationValid:1;
        ULONGLONG TimeoutValid:1;
        ULONGLONG AddressSpaceValid:1;
        ULONGLONG ReservedValid:5;

        ULONGLONG TransactionType:2;
        ULONGLONG Operation:4;
        ULONGLONG Level:3;
        ULONGLONG ProcessorContextCorrupt:1;
        ULONGLONG Uncorrected:1;
        ULONGLONG PreciseIP:1;
        ULONGLONG RestartableIP:1;
        ULONGLONG Overflow:1;
        ULONGLONG Participation:2;
        ULONGLONG Timeout:1;
        ULONGLONG AddressSpace:2;
        ULONGLONG Reserved:29;
    } ;
    ULONGLONG XpfBusCheck;
} WHEA_XPF_BUS_CHECK, *PWHEA_XPF_BUS_CHECK;












typedef union _WHEA_XPF_MS_CHECK {
    struct {
        ULONGLONG ErrorTypeValid:1;
        ULONGLONG ProcessorContextCorruptValid:1;
        ULONGLONG UncorrectedValid:1;
        ULONGLONG PreciseIPValid:1;
        ULONGLONG RestartableIPValid:1;
        ULONGLONG OverflowValid:1;
        ULONGLONG ReservedValue:10;

        ULONGLONG ErrorType:3;
        ULONGLONG ProcessorContextCorrupt:1;
        ULONGLONG Uncorrected:1;
        ULONGLONG PreciseIP:1;
        ULONGLONG RestartableIP:1;
        ULONGLONG Overflow:1;
        ULONGLONG Reserved:40;
    } ;
    ULONGLONG XpfMsCheck;
} WHEA_XPF_MS_CHECK, *PWHEA_XPF_MS_CHECK;





typedef union _WHEA_XPF_PROCINFO_VALIDBITS {
    struct {
        ULONGLONG CheckInfo:1;
        ULONGLONG TargetId:1;
        ULONGLONG RequesterId:1;
        ULONGLONG ResponderId:1;
        ULONGLONG InstructionPointer:1;
        ULONGLONG Reserved:59;
    } ;
    ULONGLONG ValidBits;
} WHEA_XPF_PROCINFO_VALIDBITS, *PWHEA_XPF_PROCINFO_VALIDBITS;

typedef struct _WHEA_XPF_PROCINFO {
    GUID CheckInfoId;
    WHEA_XPF_PROCINFO_VALIDBITS ValidBits;
    union {
        WHEA_XPF_CACHE_CHECK CacheCheck;
        WHEA_XPF_TLB_CHECK TlbCheck;
        WHEA_XPF_BUS_CHECK BusCheck;
        WHEA_XPF_MS_CHECK MsCheck;
        ULONGLONG AsULONGLONG;
    } CheckInfo;
    ULONGLONG TargetId;
    ULONGLONG RequesterId;
    ULONGLONG ResponderId;
    ULONGLONG InstructionPointer;
} WHEA_XPF_PROCINFO, *PWHEA_XPF_PROCINFO;





typedef struct _WHEA_X86_REGISTER_STATE {
    ULONG Eax;
    ULONG Ebx;
    ULONG Ecx;
    ULONG Edx;
    ULONG Esi;
    ULONG Edi;
    ULONG Ebp;
    ULONG Esp;
    USHORT Cs;
    USHORT Ds;
    USHORT Ss;
    USHORT Es;
    USHORT Fs;
    USHORT Gs;
    ULONG Eflags;
    ULONG Eip;
    ULONG Cr0;
    ULONG Cr1;
    ULONG Cr2;
    ULONG Cr3;
    ULONG Cr4;
    ULONGLONG Gdtr;
    ULONGLONG Idtr;
    USHORT Ldtr;
    USHORT Tr;
} WHEA_X86_REGISTER_STATE, *PWHEA_X86_REGISTER_STATE;

typedef struct  _WHEA128A {
    ULONGLONG Low;
    LONGLONG High;
} WHEA128A, *PWHEA128A;






typedef struct _WHEA_X64_REGISTER_STATE {
    ULONGLONG Rax;
    ULONGLONG Rbx;
    ULONGLONG Rcx;
    ULONGLONG Rdx;
    ULONGLONG Rsi;
    ULONGLONG Rdi;
    ULONGLONG Rbp;
    ULONGLONG Rsp;
    ULONGLONG R8;
    ULONGLONG R9;
    ULONGLONG R10;
    ULONGLONG R11;
    ULONGLONG R12;
    ULONGLONG R13;
    ULONGLONG R14;
    ULONGLONG R15;
    USHORT Cs;
    USHORT Ds;
    USHORT Ss;
    USHORT Es;
    USHORT Fs;
    USHORT Gs;
    ULONG Reserved;
    ULONGLONG Rflags;
    ULONGLONG Eip;
    ULONGLONG Cr0;
    ULONGLONG Cr1;
    ULONGLONG Cr2;
    ULONGLONG Cr3;
    ULONGLONG Cr4;
    ULONGLONG Cr8;
    WHEA128A Gdtr;
    WHEA128A Idtr;
    USHORT Ldtr;
    USHORT Tr;
} WHEA_X64_REGISTER_STATE, *PWHEA_X64_REGISTER_STATE;















typedef struct _WHEA_XPF_CONTEXT_INFO {
    USHORT RegisterContextType;
    USHORT RegisterDataSize;
    ULONG MSRAddress;
    ULONGLONG MmRegisterAddress;

    
    
    

} WHEA_XPF_CONTEXT_INFO, *PWHEA_XPF_CONTEXT_INFO;





typedef union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG LocalAPICId:1;
        ULONGLONG CpuId:1;
        ULONGLONG ProcInfoCount:6;
        ULONGLONG ContextInfoCount:6;
        ULONGLONG Reserved:50;
    } ;
    ULONGLONG ValidBits;
} WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS,
  *PWHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS;

typedef struct _WHEA_XPF_PROCESSOR_ERROR_SECTION {
    WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS ValidBits;
    ULONGLONG LocalAPICId;
    UCHAR CpuId[48];

    
    
    
    

    UCHAR VariableInfo[1];
} WHEA_XPF_PROCESSOR_ERROR_SECTION, *PWHEA_XPF_PROCESSOR_ERROR_SECTION;




















typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_PROCINFO *)0)->CheckInfoId)) == (0)) && ((sizeof(((WHEA_XPF_PROCINFO *)0)->CheckInfoId)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_PROCINFO *)0)->ValidBits)) == (16)) && ((sizeof(((WHEA_XPF_PROCINFO *)0)->ValidBits)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_PROCINFO *)0)->CheckInfo)) == (24)) && ((sizeof(((WHEA_XPF_PROCINFO *)0)->CheckInfo)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_PROCINFO *)0)->TargetId)) == (32)) && ((sizeof(((WHEA_XPF_PROCINFO *)0)->TargetId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_PROCINFO *)0)->RequesterId)) == (40)) && ((sizeof(((WHEA_XPF_PROCINFO *)0)->RequesterId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_PROCINFO *)0)->ResponderId)) == (48)) && ((sizeof(((WHEA_XPF_PROCINFO *)0)->ResponderId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_PROCINFO *)0)->InstructionPointer)) == (56)) && ((sizeof(((WHEA_XPF_PROCINFO *)0)->InstructionPointer)) == (8))))?1:-1];

typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Eax)) == (0)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Eax)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Ebx)) == (4)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Ebx)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Ecx)) == (8)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Ecx)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Edx)) == (12)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Edx)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Esi)) == (16)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Esi)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Edi)) == (20)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Edi)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Ebp)) == (24)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Ebp)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Esp)) == (28)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Esp)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Cs)) == (32)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Cs)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Ds)) == (34)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Ds)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Ss)) == (36)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Ss)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Es)) == (38)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Es)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Fs)) == (40)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Fs)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Gs)) == (42)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Gs)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Eflags)) == (44)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Eflags)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Eip)) == (48)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Eip)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Cr0)) == (52)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Cr0)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Cr1)) == (56)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Cr1)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Cr2)) == (60)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Cr2)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Cr3)) == (64)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Cr3)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Cr4)) == (68)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Cr4)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Gdtr)) == (72)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Gdtr)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Idtr)) == (80)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Idtr)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Ldtr)) == (88)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Ldtr)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X86_REGISTER_STATE *)0)->Tr)) == (90)) && ((sizeof(((WHEA_X86_REGISTER_STATE *)0)->Tr)) == (2))))?1:-1];

typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Rax)) == (0)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Rax)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Rbx)) == (8)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Rbx)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Rcx)) == (16)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Rcx)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Rdx)) == (24)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Rdx)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Rsi)) == (32)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Rsi)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Rdi)) == (40)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Rdi)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Rbp)) == (48)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Rbp)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Rsp)) == (56)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Rsp)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->R8)) == (64)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->R8)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->R9)) == (72)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->R9)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->R10)) == (80)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->R10)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->R11)) == (88)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->R11)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->R12)) == (96)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->R12)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->R13)) == (104)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->R13)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->R14)) == (112)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->R14)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->R15)) == (120)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->R15)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Cs)) == (128)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Cs)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Ds)) == (130)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Ds)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Ss)) == (132)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Ss)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Es)) == (134)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Es)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Fs)) == (136)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Fs)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Gs)) == (138)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Gs)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Reserved)) == (140)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Reserved)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Rflags)) == (144)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Rflags)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Eip)) == (152)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Eip)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Cr0)) == (160)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Cr0)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Cr1)) == (168)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Cr1)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Cr2)) == (176)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Cr2)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Cr3)) == (184)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Cr3)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Cr4)) == (192)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Cr4)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Cr8)) == (200)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Cr8)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Gdtr)) == (208)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Gdtr)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Idtr)) == (224)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Idtr)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Ldtr)) == (240)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Ldtr)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_X64_REGISTER_STATE *)0)->Tr)) == (242)) && ((sizeof(((WHEA_X64_REGISTER_STATE *)0)->Tr)) == (2))))?1:-1];

typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_CONTEXT_INFO *)0)->RegisterContextType)) == (0)) && ((sizeof(((WHEA_XPF_CONTEXT_INFO *)0)->RegisterContextType)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_CONTEXT_INFO *)0)->RegisterDataSize)) == (2)) && ((sizeof(((WHEA_XPF_CONTEXT_INFO *)0)->RegisterDataSize)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_CONTEXT_INFO *)0)->MSRAddress)) == (4)) && ((sizeof(((WHEA_XPF_CONTEXT_INFO *)0)->MSRAddress)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_CONTEXT_INFO *)0)->MmRegisterAddress)) == (8)) && ((sizeof(((WHEA_XPF_CONTEXT_INFO *)0)->MmRegisterAddress)) == (8))))?1:-1];

typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_PROCESSOR_ERROR_SECTION *)0)->ValidBits)) == (0)) && ((sizeof(((WHEA_XPF_PROCESSOR_ERROR_SECTION *)0)->ValidBits)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_PROCESSOR_ERROR_SECTION *)0)->LocalAPICId)) == (8)) && ((sizeof(((WHEA_XPF_PROCESSOR_ERROR_SECTION *)0)->LocalAPICId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_PROCESSOR_ERROR_SECTION *)0)->CpuId)) == (16)) && ((sizeof(((WHEA_XPF_PROCESSOR_ERROR_SECTION *)0)->CpuId)) == (48))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_XPF_PROCESSOR_ERROR_SECTION *)0)->VariableInfo)) == (64)) && ((sizeof(((WHEA_XPF_PROCESSOR_ERROR_SECTION *)0)->VariableInfo)) == (1))))?1:-1];



typedef union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG ErrorStatus:1;
        ULONGLONG PhysicalAddress:1;
        ULONGLONG PhysicalAddressMask:1;
        ULONGLONG Node:1;
        ULONGLONG Card:1;
        ULONGLONG Module:1;
        ULONGLONG Bank:1;
        ULONGLONG Device:1;
        ULONGLONG Row:1;
        ULONGLONG Column:1;
        ULONGLONG BitPosition:1;
        ULONGLONG RequesterId:1;
        ULONGLONG ResponderId:1;
        ULONGLONG TargetId:1;
        ULONGLONG ErrorType:1;
        ULONGLONG RankNumber:1;
        ULONGLONG CardHandle:1;
        ULONGLONG ModuleHandle:1;
        ULONGLONG ExtendedRow:1;
        ULONGLONG BankGroup:1;
        ULONGLONG BankAddress:1;
        ULONGLONG ChipIdentification:1;
        ULONGLONG Reserved:42;
    } ;
    ULONGLONG ValidBits;
} WHEA_MEMORY_ERROR_SECTION_VALIDBITS,
  *PWHEA_MEMORY_ERROR_SECTION_VALIDBITS;















typedef struct _WHEA_MEMORY_ERROR_SECTION {
    WHEA_MEMORY_ERROR_SECTION_VALIDBITS ValidBits;
    WHEA_ERROR_STATUS ErrorStatus;
    ULONGLONG PhysicalAddress;
    ULONGLONG PhysicalAddressMask;
    USHORT Node;
    USHORT Card;
    USHORT Module;
    USHORT Bank;
    USHORT Device;
    USHORT Row;
    USHORT Column;
    USHORT BitPosition;
    ULONGLONG RequesterId;
    ULONGLONG ResponderId;
    ULONGLONG TargetId;
    UCHAR ErrorType;
    UCHAR Extended;
    USHORT RankNumber;
    USHORT CardHandle;
    USHORT ModuleHandle;
} WHEA_MEMORY_ERROR_SECTION, *PWHEA_MEMORY_ERROR_SECTION;




















typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->ValidBits)) == (0)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->ValidBits)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->ErrorStatus)) == (8)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->ErrorStatus)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->PhysicalAddress)) == (16)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->PhysicalAddress)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->PhysicalAddressMask)) == (24)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->PhysicalAddressMask)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->Node)) == (32)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->Node)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->Card)) == (34)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->Card)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->Module)) == (36)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->Module)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->Bank)) == (38)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->Bank)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->Device)) == (40)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->Device)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->Row)) == (42)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->Row)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->Column)) == (44)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->Column)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->BitPosition)) == (46)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->BitPosition)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->RequesterId)) == (48)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->RequesterId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->ResponderId)) == (56)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->ResponderId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->TargetId)) == (64)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->TargetId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_ERROR_SECTION *)0)->ErrorType)) == (72)) && ((sizeof(((WHEA_MEMORY_ERROR_SECTION *)0)->ErrorType)) == (1))))?1:-1];






typedef union _WHEA_PMEM_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG ErrorStatus:1;
        ULONGLONG NFITHandle:1;
        ULONGLONG LocationInfo:1;
        ULONGLONG Reserved:61;
    } ;
    ULONGLONG ValidBits;
} WHEA_PMEM_ERROR_SECTION_VALIDBITS,
  *PWHEA_PMEM_ERROR_SECTION_VALIDBITS;

typedef struct _WHEA_PMEM_PAGE_RANGE {
    ULONG64 StartingPfn;
    ULONG64 PageCount;
    ULONG64 MarkedBadBitmap;
} WHEA_PMEM_PAGE_RANGE, *PWHEA_PMEM_PAGE_RANGE;









typedef struct _WHEA_PMEM_ERROR_SECTION {
    WHEA_PMEM_ERROR_SECTION_VALIDBITS ValidBits;
    UCHAR LocationInfo[64];
    WHEA_ERROR_STATUS ErrorStatus;
    ULONG NFITHandle;
    ULONG PageRangeCount;
    WHEA_PMEM_PAGE_RANGE PageRange[1];
} WHEA_PMEM_ERROR_SECTION, *PWHEA_PMEM_ERROR_SECTION;

typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PMEM_ERROR_SECTION *)0)->ValidBits)) == (0)) && ((sizeof(((WHEA_PMEM_ERROR_SECTION *)0)->ValidBits)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PMEM_ERROR_SECTION *)0)->LocationInfo)) == (8)) && ((sizeof(((WHEA_PMEM_ERROR_SECTION *)0)->LocationInfo)) == (64))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PMEM_ERROR_SECTION *)0)->ErrorStatus)) == (72)) && ((sizeof(((WHEA_PMEM_ERROR_SECTION *)0)->ErrorStatus)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PMEM_ERROR_SECTION *)0)->NFITHandle)) == (80)) && ((sizeof(((WHEA_PMEM_ERROR_SECTION *)0)->NFITHandle)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PMEM_ERROR_SECTION *)0)->PageRangeCount)) == (84)) && ((sizeof(((WHEA_PMEM_ERROR_SECTION *)0)->PageRangeCount)) == (4))))?1:-1];





typedef struct _WHEA_PCIE_ADDRESS {
    UINT32 Segment;
    UINT32 Bus;
    UINT32 Device;
    UINT32 Function;
} WHEA_PCIE_ADDRESS, *PWHEA_PCIE_ADDRESS;

typedef union _WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS {
    struct {
        ULONGLONG Segment:1;
        ULONGLONG Bus:1;
        ULONGLONG Device:1;
        ULONGLONG Function:1;
        ULONGLONG Mask:1;
        ULONGLONG CorrectableErrorCount:1;
        ULONGLONG Reserved:58;
    } ;
    ULONGLONG ValidBits;
} WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS,
  *PWHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS;

typedef struct _WHEA_PCIE_CORRECTABLE_ERROR_DEVICES {
    WHEA_PCIE_CORRECTABLE_ERROR_DEVICES_VALIDBITS ValidBits;
    WHEA_PCIE_ADDRESS Address;
    UINT32 Mask;
    UINT32 CorrectableErrorCount
               [32];
} WHEA_PCIE_CORRECTABLE_ERROR_DEVICES, *PWHEA_PCIE_CORRECTABLE_ERROR_DEVICES;

typedef struct _WHEA_PCIE_CORRECTABLE_ERROR_SECTION_HEADER {
    UINT16 Version;
    UINT16 Count;
} WHEA_PCIE_CORRECTABLE_ERROR_SECTION_HEADER, 
      *PWHEA_PCIE_CORRECTABLE_ERROR_SECTION_HEADER;

typedef struct _WHEA_PCIE_CORRECTABLE_ERROR_SECTION {
    WHEA_PCIE_CORRECTABLE_ERROR_SECTION_HEADER Header;
     
        WHEA_PCIE_CORRECTABLE_ERROR_DEVICES Devices[1];
} WHEA_PCIE_CORRECTABLE_ERROR_SECTION, *PWHEA_PCIE_CORRECTABLE_ERROR_SECTION;

typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIE_CORRECTABLE_ERROR_SECTION *)0)->Header)) == (0)) && ((sizeof(((WHEA_PCIE_CORRECTABLE_ERROR_SECTION *)0)->Header)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIE_CORRECTABLE_ERROR_SECTION *)0)->Devices)) == (4)) && ((sizeof(((WHEA_PCIE_CORRECTABLE_ERROR_SECTION *)0)->Devices)) == (156))))?1:-1];



typedef union _WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG SocketId:1;
        ULONGLONG ChannelId:1;
        ULONGLONG DimmSlot:1;
        ULONGLONG CorrectableErrorCount:1;
        ULONGLONG Reserved:60;
    } ;
    ULONGLONG ValidBits;
} WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS,
  *PWHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS;

typedef struct _WHEA_MEMORY_CORRECTABLE_ERROR_HEADER {
    UINT16 Version;
    UINT16 Count;
} WHEA_MEMORY_CORRECTABLE_ERROR_HEADER, *PWHEA_MEMORY_CORRECTABLE_ERROR_HEADER;

typedef struct _WHEA_MEMORY_CORRECTABLE_ERROR_DATA {
    WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS ValidBits;
    UINT32 SocketId;
    UINT32 ChannelId;
    UINT32 DimmSlot;
    UINT32 CorrectableErrorCount;
} WHEA_MEMORY_CORRECTABLE_ERROR_DATA, *PWHEA_MEMORY_CORRECTABLE_ERROR_DATA;

typedef struct _WHEA_MEMORY_CORRECTABLE_ERROR_SECTION {
    WHEA_MEMORY_CORRECTABLE_ERROR_HEADER Header;
    WHEA_MEMORY_CORRECTABLE_ERROR_DATA Data[1];
} WHEA_MEMORY_CORRECTABLE_ERROR_SECTION, 
    *PWHEA_MEMORY_CORRECTABLE_ERROR_SECTION;

typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_CORRECTABLE_ERROR_SECTION *)0)->Header)) == (0)) && ((sizeof(((WHEA_MEMORY_CORRECTABLE_ERROR_SECTION *)0)->Header)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_MEMORY_CORRECTABLE_ERROR_SECTION *)0)->Data)) == (4)) && ((sizeof(((WHEA_MEMORY_CORRECTABLE_ERROR_SECTION *)0)->Data)) == (24))))?1:-1];



typedef union _WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG PortType:1;
        ULONGLONG Version:1;
        ULONGLONG CommandStatus:1;
        ULONGLONG DeviceId:1;
        ULONGLONG DeviceSerialNumber:1;
        ULONGLONG BridgeControlStatus:1;
        ULONGLONG ExpressCapability:1;
        ULONGLONG AerInfo:1;
        ULONGLONG Reserved:56;
    } ;
    ULONGLONG ValidBits;
} WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS,
  *PWHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS;

typedef struct _WHEA_PCIEXPRESS_DEVICE_ID {
    USHORT VendorID;
    USHORT DeviceID;
    ULONG ClassCode:24;
    ULONG FunctionNumber:8;
    ULONG DeviceNumber:8;
    ULONG Segment:16;
    ULONG PrimaryBusNumber:8;
    ULONG SecondaryBusNumber:8;
    ULONG Reserved1:3;
    ULONG SlotNumber:13;
    ULONG Reserved2:8;
} WHEA_PCIEXPRESS_DEVICE_ID, *PWHEA_PCIEXPRESS_DEVICE_ID;

typedef union _WHEA_PCIEXPRESS_VERSION {
    struct {
        UCHAR MinorVersion;
        UCHAR MajorVersion;
        USHORT Reserved;
    } ;
    ULONG AsULONG;
} WHEA_PCIEXPRESS_VERSION, *PWHEA_PCIEXPRESS_VERSION;

typedef union _WHEA_PCIEXPRESS_COMMAND_STATUS {
    struct {
        USHORT Command;
        USHORT Status;
    } ;
    ULONG AsULONG;
} WHEA_PCIEXPRESS_COMMAND_STATUS, *PWHEA_PCIEXPRESS_COMMAND_STATUS;

typedef union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS {
    struct {
        USHORT BridgeSecondaryStatus;
        USHORT BridgeControl;
    } ;
    ULONG AsULONG;
} WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS,
    *PWHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS;

typedef enum _WHEA_PCIEXPRESS_DEVICE_TYPE {
    WheaPciExpressEndpoint = 0,
    WheaPciExpressLegacyEndpoint,
    WheaPciExpressRootPort = 4,
    WheaPciExpressUpstreamSwitchPort,
    WheaPciExpressDownstreamSwitchPort,
    WheaPciExpressToPciXBridge,
    WheaPciXToExpressBridge,
    WheaPciExpressRootComplexIntegratedEndpoint,
    WheaPciExpressRootComplexEventCollector
} WHEA_PCIEXPRESS_DEVICE_TYPE;

typedef struct _WHEA_PCIEXPRESS_ERROR_SECTION {
    WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS ValidBits;
    WHEA_PCIEXPRESS_DEVICE_TYPE PortType;
    WHEA_PCIEXPRESS_VERSION Version;
    WHEA_PCIEXPRESS_COMMAND_STATUS CommandStatus;
    ULONG Reserved;
    WHEA_PCIEXPRESS_DEVICE_ID DeviceId;
    ULONGLONG DeviceSerialNumber;
    WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS BridgeControlStatus;
    UCHAR ExpressCapability[60];
    UCHAR AerInfo[96];
} WHEA_PCIEXPRESS_ERROR_SECTION, *PWHEA_PCIEXPRESS_ERROR_SECTION;

















typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->ValidBits)) == (0)) && ((sizeof(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->ValidBits)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->PortType)) == (8)) && ((sizeof(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->PortType)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->Version)) == (12)) && ((sizeof(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->Version)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->CommandStatus)) == (16)) && ((sizeof(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->CommandStatus)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->Reserved)) == (20)) && ((sizeof(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->Reserved)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->DeviceId)) == (24)) && ((sizeof(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->DeviceId)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->DeviceSerialNumber)) == (40)) && ((sizeof(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->DeviceSerialNumber)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->BridgeControlStatus)) == (48)) && ((sizeof(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->BridgeControlStatus)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->ExpressCapability)) == (52)) && ((sizeof(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->ExpressCapability)) == (60))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->AerInfo)) == (112)) && ((sizeof(((WHEA_PCIEXPRESS_ERROR_SECTION *)0)->AerInfo)) == (96))))?1:-1];












typedef union _WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG ErrorStatus:1;
        ULONGLONG ErrorType:1;
        ULONGLONG BusId:1;
        ULONGLONG BusAddress:1;
        ULONGLONG BusData:1;
        ULONGLONG BusCommand:1;
        ULONGLONG RequesterId:1;
        ULONGLONG CompleterId:1;
        ULONGLONG TargetId:1;
        ULONGLONG Reserved:55;
    } ;
    ULONGLONG ValidBits;
} WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS, *PWHEA_PCIXBUS_ERROR_SECTION_VALIDBITS;

typedef union _WHEA_PCIXBUS_ID {
    struct {
        UCHAR BusNumber;
        UCHAR BusSegment;
    } ;
    USHORT AsUSHORT;
} WHEA_PCIXBUS_ID, *PWHEA_PCIXBUS_ID;

typedef union _WHEA_PCIXBUS_COMMAND {
    struct {
        ULONGLONG Command:56;
        ULONGLONG PCIXCommand:1;
        ULONGLONG Reserved:7;
    } ;
    ULONGLONG AsULONGLONG;
} WHEA_PCIXBUS_COMMAND, *PWHEA_PCIXBUS_COMMAND;

typedef struct _WHEA_PCIXBUS_ERROR_SECTION {
    WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS ValidBits;
    WHEA_ERROR_STATUS ErrorStatus;
    USHORT ErrorType;
    WHEA_PCIXBUS_ID BusId;
    ULONG Reserved;
    ULONGLONG BusAddress;
    ULONGLONG BusData;
    WHEA_PCIXBUS_COMMAND BusCommand;
    ULONGLONG RequesterId;
    ULONGLONG CompleterId;
    ULONGLONG TargetId;
} WHEA_PCIXBUS_ERROR_SECTION, *PWHEA_PCIXBUS_ERROR_SECTION;












typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXBUS_ERROR_SECTION *)0)->ValidBits)) == (0)) && ((sizeof(((WHEA_PCIXBUS_ERROR_SECTION *)0)->ValidBits)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXBUS_ERROR_SECTION *)0)->ErrorStatus)) == (8)) && ((sizeof(((WHEA_PCIXBUS_ERROR_SECTION *)0)->ErrorStatus)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXBUS_ERROR_SECTION *)0)->ErrorType)) == (16)) && ((sizeof(((WHEA_PCIXBUS_ERROR_SECTION *)0)->ErrorType)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXBUS_ERROR_SECTION *)0)->BusId)) == (18)) && ((sizeof(((WHEA_PCIXBUS_ERROR_SECTION *)0)->BusId)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXBUS_ERROR_SECTION *)0)->Reserved)) == (20)) && ((sizeof(((WHEA_PCIXBUS_ERROR_SECTION *)0)->Reserved)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXBUS_ERROR_SECTION *)0)->BusAddress)) == (24)) && ((sizeof(((WHEA_PCIXBUS_ERROR_SECTION *)0)->BusAddress)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXBUS_ERROR_SECTION *)0)->BusData)) == (32)) && ((sizeof(((WHEA_PCIXBUS_ERROR_SECTION *)0)->BusData)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXBUS_ERROR_SECTION *)0)->BusCommand)) == (40)) && ((sizeof(((WHEA_PCIXBUS_ERROR_SECTION *)0)->BusCommand)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXBUS_ERROR_SECTION *)0)->RequesterId)) == (48)) && ((sizeof(((WHEA_PCIXBUS_ERROR_SECTION *)0)->RequesterId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXBUS_ERROR_SECTION *)0)->CompleterId)) == (56)) && ((sizeof(((WHEA_PCIXBUS_ERROR_SECTION *)0)->CompleterId)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXBUS_ERROR_SECTION *)0)->TargetId)) == (64)) && ((sizeof(((WHEA_PCIXBUS_ERROR_SECTION *)0)->TargetId)) == (8))))?1:-1];



typedef union _WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS {
    struct {
        ULONGLONG ErrorStatus:1;
        ULONGLONG IdInfo:1;
        ULONGLONG MemoryNumber:1;
        ULONGLONG IoNumber:1;
        ULONGLONG RegisterDataPairs:1;
        ULONGLONG Reserved:59;
    } ;
    ULONGLONG ValidBits;
} WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS,
  *PWHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS;

typedef struct _WHEA_PCIXDEVICE_ID {
    USHORT VendorId;
    USHORT DeviceId;
    ULONG ClassCode:24;
    ULONG FunctionNumber:8;
    ULONG DeviceNumber:8;
    ULONG BusNumber:8;
    ULONG SegmentNumber:8;
    ULONG Reserved1:8;
    ULONG Reserved2;
} WHEA_PCIXDEVICE_ID, *PWHEA_PCIXDEVICE_ID;

typedef struct WHEA_PCIXDEVICE_REGISTER_PAIR {
    ULONGLONG Register;
    ULONGLONG Data;
} WHEA_PCIXDEVICE_REGISTER_PAIR, *PWHEA_PCIXDEVICE_REGISTER_PAIR;

typedef struct _WHEA_PCIXDEVICE_ERROR_SECTION {
    WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS ValidBits;
    WHEA_ERROR_STATUS ErrorStatus;
    WHEA_PCIXDEVICE_ID IdInfo;
    ULONG MemoryNumber;
    ULONG IoNumber;
    WHEA_PCIXDEVICE_REGISTER_PAIR RegisterDataPairs[1];
} WHEA_PCIXDEVICE_ERROR_SECTION, *PWHEA_PCIXDEVICE_ERROR_SECTION;











typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->ValidBits)) == (0)) && ((sizeof(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->ValidBits)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->ErrorStatus)) == (8)) && ((sizeof(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->ErrorStatus)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->IdInfo)) == (16)) && ((sizeof(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->IdInfo)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->MemoryNumber)) == (32)) && ((sizeof(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->MemoryNumber)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->IoNumber)) == (36)) && ((sizeof(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->IoNumber)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->RegisterDataPairs)) == (40)) && ((sizeof(((WHEA_PCIXDEVICE_ERROR_SECTION *)0)->RegisterDataPairs)) == (16))))?1:-1];





typedef struct _WHEA_FIRMWARE_ERROR_RECORD_REFERENCE {
    UCHAR Type;
    UCHAR Reserved[7];
    ULONGLONG FirmwareRecordId;
} WHEA_FIRMWARE_ERROR_RECORD_REFERENCE, *PWHEA_FIRMWARE_ERROR_RECORD_REFERENCE;








typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_FIRMWARE_ERROR_RECORD_REFERENCE *)0)->Type)) == (0)) && ((sizeof(((WHEA_FIRMWARE_ERROR_RECORD_REFERENCE *)0)->Type)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_FIRMWARE_ERROR_RECORD_REFERENCE *)0)->Reserved)) == (1)) && ((sizeof(((WHEA_FIRMWARE_ERROR_RECORD_REFERENCE *)0)->Reserved)) == (7))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_FIRMWARE_ERROR_RECORD_REFERENCE *)0)->FirmwareRecordId)) == (8)) && ((sizeof(((WHEA_FIRMWARE_ERROR_RECORD_REFERENCE *)0)->FirmwareRecordId)) == (8))))?1:-1];

















typedef union _MCG_CAP {
    struct {
        ULONG64 CountField: 8;
        ULONG64 ControlMsrPresent: 1;
        ULONG64 ExtendedMsrsPresent: 1;
        ULONG64 SignalingExtensionPresent: 1;
        ULONG64 ThresholdErrorStatusPresent: 1;
        ULONG64 Reserved: 4;
        ULONG64 ExtendedRegisterCount: 8;
        ULONG64 SoftwareErrorRecoverySupported: 1;
        ULONG64 EnhancedMachineCheckCapability: 1;
        ULONG64 ExtendedErrorLogging: 1;
        ULONG64 LocalMachineCheckException: 1;
    } ;
    ULONG64 QuadPart;
} MCG_CAP, *PMCG_CAP;

typedef union _MCG_STATUS {
    struct {
        ULONG RestartIpValid:1;
        ULONG ErrorIpValid:1;
        ULONG MachineCheckInProgress:1;
        ULONG LocalMceValid:1;
        ULONG Reserved1:28;
        ULONG Reserved2;
    } ;
    ULONGLONG QuadPart;
} MCG_STATUS, *PMCG_STATUS;

typedef struct _MCI_STATUS_BITS_COMMON {
        ULONG64 McaErrorCode : 16;
        ULONG64 ModelErrorCode : 16;
        ULONG64 Reserved : 25;
        ULONG64 ContextCorrupt : 1;
        ULONG64 AddressValid : 1;
        ULONG64 MiscValid : 1;
        ULONG64 ErrorEnabled : 1;
        ULONG64 UncorrectedError : 1;
        ULONG64 StatusOverFlow : 1;
        ULONG64 Valid : 1;
} MCI_STATUS_BITS_COMMON, *PMCI_STATUS_BITS_COMMON;








typedef struct _MCI_STATUS_AMD_BITS {
        ULONG64 McaErrorCode : 16;
        ULONG64 ModelErrorCode : 16;
        ULONG64 ImplementationSpecific2 : 11;
        ULONG64 Poison : 1;
        ULONG64 Deferred : 1;
        ULONG64 ImplementationSpecific1 : 12;
        ULONG64 ContextCorrupt : 1;
        ULONG64 AddressValid : 1;
        ULONG64 MiscValid : 1;
        ULONG64 ErrorEnabled : 1;
        ULONG64 UncorrectedError : 1;
        ULONG64 StatusOverFlow : 1;
        ULONG64 Valid : 1;
} MCI_STATUS_AMD_BITS, *PMCI_STATUS_AMD_BITS;






typedef struct _MCI_STATUS_INTEL_BITS {
        ULONG64 McaErrorCode : 16;
        ULONG64 ModelErrorCode : 16;
        ULONG64 OtherInfo : 5;
        ULONG64 FirmwareUpdateError : 1;
        ULONG64 CorrectedErrorCount : 15;
        ULONG64 ThresholdErrorStatus : 2;
        ULONG64 ActionRequired : 1;
        ULONG64 Signalling : 1;
        ULONG64 ContextCorrupt : 1;
        ULONG64 AddressValid : 1;
        ULONG64 MiscValid : 1;
        ULONG64 ErrorEnabled : 1;
        ULONG64 UncorrectedError : 1;
        ULONG64 StatusOverFlow : 1;
        ULONG64 Valid : 1;
} MCI_STATUS_INTEL_BITS, *PMCI_STATUS_INTEL_BITS;


typedef union _MCI_STATUS {
    MCI_STATUS_BITS_COMMON CommonBits;
    MCI_STATUS_AMD_BITS AmdBits;
    MCI_STATUS_INTEL_BITS IntelBits;
    ULONG64 QuadPart;
} MCI_STATUS, *PMCI_STATUS;

typedef enum _WHEA_CPU_VENDOR {
    WheaCpuVendorOther = 0,
    WheaCpuVendorIntel,
    WheaCpuVendorAmd
} WHEA_CPU_VENDOR, *PWHEA_CPU_VENDOR;












typedef struct _WHEA_AMD_EXTENDED_REGISTERS {
    ULONGLONG IPID;
    ULONGLONG SYND;
    ULONGLONG CONFIG;
    ULONGLONG DESTAT;
    ULONGLONG DEADDR;
    ULONGLONG MISC1;
    ULONGLONG MISC2;
    ULONGLONG MISC3;
    ULONGLONG MISC4;
    ULONGLONG RasCap;
    ULONGLONG Reserved[24 - 10];
} WHEA_AMD_EXTENDED_REGISTERS, *PWHEA_AMD_EXTENDED_REGISTERS;

typedef struct _XPF_RECOVERY_INFO {
    struct {
        UINT32 NotSupported : 1;
        UINT32 Overflow : 1;
        UINT32 ContextCorrupt : 1;
        UINT32 RestartIpErrorIpNotValid : 1;
        UINT32 NoRecoveryContext : 1;
        UINT32 MiscOrAddrNotValid : 1;
        UINT32 InvalidAddressMode : 1;
        UINT32 HighIrql : 1;
        UINT32 InterruptsDisabled : 1;
        UINT32 SwapBusy : 1;
        UINT32 StackOverflow : 1;
        UINT32 Reserved : 21;
    } FailureReason;

    struct {
        UINT32 RecoveryAttempted : 1;
        UINT32 HvHandled : 1;
        UINT32 Reserved : 30;
    } Action;

    BOOLEAN ActionRequired;
    BOOLEAN RecoverySucceeded;
    BOOLEAN RecoveryKernel;
    UINT8 Reserved;
    UINT16 Reserved2;
    UINT16 Reserved3;
    UINT32 Reserved4;
} XPF_RECOVERY_INFO, *PXPF_RECOVERY_INFO;

typedef struct _WHEA_XPF_MCA_SECTION {
    ULONG VersionNumber;
    WHEA_CPU_VENDOR CpuVendor;
    LARGE_INTEGER Timestamp;
    ULONG ProcessorNumber;
    MCG_STATUS GlobalStatus;
    ULONGLONG InstructionPointer;
    ULONG BankNumber;
    MCI_STATUS Status;
    ULONGLONG Address;
    ULONGLONG Misc;
    ULONG ExtendedRegisterCount;
    ULONG ApicId;
    union {
        ULONGLONG ExtendedRegisters[24];
        WHEA_AMD_EXTENDED_REGISTERS AMDExtendedRegisters;
    };
    MCG_CAP GlobalCapability;

    
    
    

    XPF_RECOVERY_INFO RecoveryInfo;
} WHEA_XPF_MCA_SECTION, *PWHEA_XPF_MCA_SECTION;



typedef union _WHEA_NMI_ERROR_SECTION_FLAGS {
    struct {
        ULONG HypervisorError:1;
        ULONG Reserved:31;
    } ;
    ULONG AsULONG;
} WHEA_NMI_ERROR_SECTION_FLAGS, *PWHEA_NMI_ERROR_SECTION_FLAGS;

typedef struct _WHEA_NMI_ERROR_SECTION {
    UCHAR Data[8];
    WHEA_NMI_ERROR_SECTION_FLAGS Flags;
} WHEA_NMI_ERROR_SECTION, *PWHEA_NMI_ERROR_SECTION;



typedef struct _WHEA_MSR_DUMP_SECTION {
    UCHAR MsrDumpBuffer;
    ULONG MsrDumpLength;
    UCHAR MsrDumpData[1];
} WHEA_MSR_DUMP_SECTION, *PWHEA_MSR_DUMP_SECTION;



typedef struct _MU_TELEMETRY_SECTION {
  GUID ComponentID;
  GUID SubComponentID;
  UINT32 Reserved;
  UINT32 ErrorStatusValue;
  UINT64 AdditionalInfo1;
  UINT64 AdditionalInfo2;
} MU_TELEMETRY_SECTION, *PMU_TELEMETRY_SECTION;



typedef union _WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS {
    struct {
        ULONG MPIDR:1;
        ULONG AffinityLevel:1;
        ULONG RunningState:1;
        ULONG VendorSpecificInfo:1;
        ULONG Reserved:28;
    } ;
    ULONG AsULONG;
} WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS,
  *PWHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS;

typedef struct _WHEA_ARM_PROCESSOR_ERROR_SECTION {
    WHEA_ARM_PROCESSOR_ERROR_SECTION_VALID_BITS ValidBits;
    USHORT ErrorInformationStructures;
    USHORT ContextInformationStructures;
    ULONG SectionLength;
    UCHAR ErrorAffinityLevel;
    UCHAR Reserved[3];
    ULONGLONG MPIDR_EL1;
    ULONGLONG MIDR_EL1;
    ULONG RunningState;
    ULONG PSCIState;
    UCHAR Data[1];
} WHEA_ARM_PROCESSOR_ERROR_SECTION, *PWHEA_ARM_PROCESSOR_ERROR_SECTION;

typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->ValidBits)) == (0)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->ValidBits)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->ErrorInformationStructures)) == (4)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->ErrorInformationStructures)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->ContextInformationStructures)) == (6)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->ContextInformationStructures)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->SectionLength)) == (8)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->SectionLength)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->ErrorAffinityLevel)) == (12)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->ErrorAffinityLevel)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->Reserved)) == (13)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->Reserved)) == (3))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->MPIDR_EL1)) == (16)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->MPIDR_EL1)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->MIDR_EL1)) == (24)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->MIDR_EL1)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->RunningState)) == (32)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->RunningState)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->PSCIState)) == (36)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->PSCIState)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->Data)) == (40)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_SECTION *)0)->Data)) == (1))))?1:-1];



typedef enum _WHEA_RECOVERY_TYPE {
    WheaRecoveryTypeActionRequired = 1,
    WheaRecoveryTypeActionOptional,
    WheaRecoveryTypeMax
} WHEA_RECOVERY_TYPE, *PWHEA_RECOVERY_TYPE;

typedef union _WHEA_RECOVERY_ACTION {
    struct {
        ULONG NoneAttempted : 1;
        ULONG TerminateProcess : 1;
        ULONG ForwardedToVm : 1;
        ULONG MarkPageBad : 1;
        ULONG PoisonNotPresent :1;
        ULONG Reserved : 28;
    } ;

    ULONG AsULONG;
} WHEA_RECOVERY_ACTION, *PWHEA_RECOVERY_ACTION;

typedef enum _WHEA_RECOVERY_FAILURE_REASON {
    WheaRecoveryFailureReasonKernelCouldNotMarkMemoryBad = 1,
    WheaRecoveryFailureReasonKernelMarkMemoryBadTimedOut,
    WheaRecoveryFailureReasonNoRecoveryContext,
    WheaRecoveryFailureReasonNotContinuable,
    WheaRecoveryFailureReasonPcc,
    WheaRecoveryFailureReasonOverflow,
    WheaRecoveryFailureReasonNotSupported,
    WheaRecoveryFailureReasonMiscOrAddrNotValid,
    WheaRecoveryFailureReasonInvalidAddressMode,
    WheaRecoveryFailureReasonHighIrql,
    WheaRecoveryFailureReasonInsufficientAltContextWrappers,
    WheaRecoveryFailureReasonInterruptsDisabled,
    WheaRecoveryFailureReasonSwapBusy,
    WheaRecoveryFailureReasonStackOverflow,
    WheaRecoveryFailureReasonUnexpectedFailure,
    WheaRecoveryFailureReasonKernelWillPageFaultBCAtCurrentIrql,
    WheaRecoveryFailureReasonFarNotValid,
    WheaRecoveryFailureReasonMax
} WHEA_RECOVERY_FAILURE_REASON, *PWHEA_RECOVERY_FAILURE_REASON;

typedef struct _WHEA_ERROR_RECOVERY_INFO_SECTION {
    BOOLEAN RecoveryKernel;
    WHEA_RECOVERY_ACTION RecoveryAction;
    WHEA_RECOVERY_TYPE RecoveryType;
    KIRQL Irql;
    BOOLEAN RecoverySucceeded;
    WHEA_RECOVERY_FAILURE_REASON FailureReason;
    CCHAR ProcessName[20];
} WHEA_ERROR_RECOVERY_INFO_SECTION, *PWHEA_ERROR_RECOVERY_INFO_SECTION;



typedef union _WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS {
    struct {
        USHORT MultipleError:1;
        USHORT Flags:1;
        USHORT ErrorInformation:1;
        USHORT VirtualFaultAddress:1;
        USHORT PhysicalFaultAddress:1;
        USHORT Reserved:11;
    } ;
    USHORT AsUSHORT;
} WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS,
  *PWHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS;

typedef union _WHEA_ARM_CACHE_ERROR_VALID_BITS {
    struct {
        USHORT TransactionType:1;
        USHORT Operation:1;
        USHORT Level:1;
        USHORT ProcessorContextCorrupt:1;
        USHORT Corrected:1;
        USHORT PrecisePC:1;
        USHORT RestartablePC:1;
        USHORT Reserved:9;
    } ;
    USHORT AsUSHORT;
} WHEA_ARM_CACHE_ERROR_VALID_BITS, *PWHEA_ARM_CACHE_ERROR_VALID_BITS;

typedef struct _WHEA_ARM_CACHE_ERROR {
    WHEA_ARM_CACHE_ERROR_VALID_BITS ValidationBit;
    UCHAR TransactionType:2;
    UCHAR Operation:4;
    UCHAR Level:3;
    UCHAR ProcessorContextCorrupt:1;
    UCHAR Corrected:1;
    UCHAR PrecisePC:1;
    UCHAR RestartablePC:1;
    ULONGLONG Reserved:35;
} WHEA_ARM_CACHE_ERROR, *PWHEA_ARM_CACHE_ERROR;

typedef union _WHEA_ARM_TLB_ERROR_VALID_BITS {
    struct {
        USHORT TransactionType:1;
        USHORT Operation:1;
        USHORT Level:1;
        USHORT ProcessorContextCorrupt:1;
        USHORT Corrected:1;
        USHORT PrecisePC:1;
        USHORT RestartablePC:1;
        USHORT Reserved:9;
    } ;
    USHORT AsUSHORT;
} WHEA_ARM_TLB_ERROR_VALID_BITS, *PWHEA_ARM_TLB_ERROR_VALID_BITS;

typedef struct _WHEA_ARM_TLB_ERROR {
    WHEA_ARM_TLB_ERROR_VALID_BITS ValidationBit;
    UCHAR TransactionType:2;
    UCHAR Operation:4;
    UCHAR Level:3;
    UCHAR ProcessorContextCorrupt:1;
    UCHAR Corrected:1;
    UCHAR PrecisePC:1;
    UCHAR RestartablePC:1;
    ULONGLONG Reserved:36;
} WHEA_ARM_TLB_ERROR, *PWHEA_ARM_TLB_ERROR;

typedef union _WHEA_ARM_BUS_ERROR_VALID_BITS {
    struct {
        USHORT TransactionType:1;
        USHORT Operation:1;
        USHORT Level:1;
        USHORT ProcessorContextCorrupt:1;
        USHORT Corrected:1;
        USHORT PrecisePC:1;
        USHORT RestartablePC:1;
        USHORT ParticipationType:1;
        USHORT Timeout:1;
        USHORT AddressSpace:1;
        USHORT MemoryAttributes:1;
        USHORT AccessMode:1;
        USHORT Reserved:4;
    } ;
    USHORT AsUSHORT;
} WHEA_ARM_BUS_ERROR_VALID_BITS, *PWHEA_ARM_BUS_ERROR_VALID_BITS;

typedef struct _WHEA_ARM_BUS_ERROR {
    WHEA_ARM_BUS_ERROR_VALID_BITS ValidationBit;
    UCHAR TransactionType:2;
    UCHAR Operation:4;
    UCHAR Level:3;
    UCHAR ProcessorContextCorrupt:1;
    UCHAR Corrected:1;
    UCHAR PrecisePC:1;
    UCHAR RestartablePC:1;
    UCHAR ParticipationType:2;
    UCHAR TimeOut:1;
    UCHAR AddressSpace:2;
    USHORT MemoryAccessAttributes:9;
    UCHAR AccessMode:1;
    ULONG Reserved:20;
} WHEA_ARM_BUS_ERROR, *PWHEA_ARM_BUS_ERROR;

typedef union _WHEA_ARM_PROCESSOR_ERROR {
    WHEA_ARM_CACHE_ERROR CacheError;
    WHEA_ARM_TLB_ERROR TlbError;
    WHEA_ARM_BUS_ERROR BusError;
    ULONGLONG AsULONGLONG;
} WHEA_ARM_PROCESSOR_ERROR, *PWHEA_ARM_PROCESSOR_ERROR;

typedef struct _WHEA_ARM_PROCESSOR_ERROR_INFORMATION {
    UCHAR Version;
    UCHAR Length;
    WHEA_ARM_PROCESSOR_ERROR_INFORMATION_VALID_BITS ValidationBit;
    UCHAR Type;
    USHORT MultipleError;
    UCHAR Flags;
    ULONGLONG ErrorInformation;
    ULONGLONG VirtualFaultAddress;
    ULONGLONG PhysicalFaultAddress;
} WHEA_ARM_PROCESSOR_ERROR_INFORMATION, *PWHEA_ARM_PROCESSOR_ERROR_INFORMATION;

typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->Version)) == (0)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->Version)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->Length)) == (1)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->Length)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->ValidationBit)) == (2)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->ValidationBit)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->Type)) == (4)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->Type)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->MultipleError)) == (5)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->MultipleError)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->Flags)) == (7)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->Flags)) == (1))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->ErrorInformation)) == (8)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->ErrorInformation)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->VirtualFaultAddress)) == (16)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->VirtualFaultAddress)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->PhysicalFaultAddress)) == (24)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_INFORMATION *)0)->PhysicalFaultAddress)) == (8))))?1:-1];



typedef union _WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS {
    struct {
        ULONG ExceptionLevel:1;
        ULONG NonSecure:1;
        ULONG AArch64:1;
        ULONG Reserved:29;
    } ;
    ULONG AsULONG;
} WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS,
  *PWHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER_FLAGS;

typedef struct _WHEA_ARMV8_AARCH32_GPRS {
    ULONG R0;
    ULONG R1;
    ULONG R2;
    ULONG R3;
    ULONG R4;
    ULONG R5;
    ULONG R6;
    ULONG R7;
    ULONG R8;
    ULONG R9;
    ULONG R10;
    ULONG R11;
    ULONG R12;
    ULONG R13; 
    ULONG R14; 
    ULONG R15; 
} WHEA_ARMV8_AARCH32_GPRS, *PWHEA_ARMV8_AARCH32_GPRS;

typedef struct _WHEA_ARM_AARCH32_EL1_CSR {
    ULONG DFAR;
    ULONG DFSR;
    ULONG IFAR;
    ULONG ISR;
    ULONG MAIR0;
    ULONG MAIR1;
    ULONG MIDR;
    ULONG MPIDR;
    ULONG NMRR;
    ULONG PRRR;
    ULONG SCTLR; 
    ULONG SPSR;
    ULONG SPSR_abt;
    ULONG SPSR_fiq;
    ULONG SPSR_irq;
    ULONG SPSR_svc;
    ULONG SPSR_und;
    ULONG TPIDRPRW;
    ULONG TPIDRURO;
    ULONG TPIDRURW;
    ULONG TTBCR;
    ULONG TTBR0;
    ULONG TTBR1;
    ULONG DACR;
} WHEA_ARM_AARCH32_EL1_CSR, *PWHEA_ARM_AARCH32_EL1;

typedef struct _WHEA_ARM_AARCH32_EL2_CSR {
    ULONG ELR_hyp;
    ULONG HAMAIR0;
    ULONG HAMAIR1;
    ULONG HCR;
    ULONG HCR2;
    ULONG HDFAR;
    ULONG HIFAR;
    ULONG HPFAR;
    ULONG HSR;
    ULONG HTCR;
    ULONG HTPIDR;
    ULONG HTTBR;
    ULONG SPSR_hyp;
    ULONG VTCR;
    ULONG VTTBR;
    ULONG DACR32_EL2;
} WHEA_ARM_AARCH32_EL2_CSR, *PWHEA_ARM_AARCH32_EL2_CSR;

typedef struct _WHEA_ARM_AARCH32_SECURE_CSR {
    ULONG SCTLR;
    ULONG SPSR_mon;
} WHEA_ARM_AARCH32_SECURE_CSR, *PWHEA_ARM_AARCH32_SECURE_CSR;

typedef struct _WHEA_ARMV8_AARCH64_GPRS {
    ULONGLONG X0;
    ULONGLONG X1;
    ULONGLONG X2;
    ULONGLONG X3;
    ULONGLONG X4;
    ULONGLONG X5;
    ULONGLONG X6;
    ULONGLONG X7;
    ULONGLONG X8;
    ULONGLONG X9;
    ULONGLONG X10;
    ULONGLONG X11;
    ULONGLONG X12;
    ULONGLONG X13;
    ULONGLONG X14;
    ULONGLONG X15;
    ULONGLONG X16;
    ULONGLONG X17;
    ULONGLONG X18;
    ULONGLONG X19;
    ULONGLONG X20;
    ULONGLONG X21;
    ULONGLONG X22;
    ULONGLONG X23;
    ULONGLONG X24;
    ULONGLONG X25;
    ULONGLONG X26;
    ULONGLONG X27;
    ULONGLONG X28;
    ULONGLONG X29;
    ULONGLONG X30;
    ULONGLONG SP;
} WHEA_ARMV8_AARCH64_GPRS, *PWHEA_ARMV8_AARCH64_GPRS;

typedef struct _WHEA_ARM_AARCH64_EL1_CSR {
    ULONGLONG ELR_EL1;
    ULONGLONG ESR_EL2;
    ULONGLONG FAR_EL1;
    ULONGLONG ISR_EL1;
    ULONGLONG MAIR_EL1;
    ULONGLONG MIDR_EL1;
    ULONGLONG MPIDR_EL1;
    ULONGLONG SCTLR_EL1;
    ULONGLONG SP_EL0;
    ULONGLONG SP_EL1;
    ULONGLONG SPSR_EL1;
    ULONGLONG TCR_EL1;
    ULONGLONG TPIDR_EL0;
    ULONGLONG TPIDR_EL1;
    ULONGLONG TPIDRRO_EL0;
    ULONGLONG TTBR0_EL1;
    ULONGLONG TTBR1_EL1;
} WHEA_ARM_AARCH64_EL1_CSR, *PWHEA_ARM_AARCH64_EL1_CSR;

typedef struct _WHEA_ARM_AARCH64_EL2_CSR {
    ULONGLONG ELR_EL2;
    ULONGLONG ESR_EL2;
    ULONGLONG FAR_EL2;
    ULONGLONG HACR_EL2;
    ULONGLONG HCR_EL2;
    ULONGLONG HPFAR_EL2;
    ULONGLONG MAIR_EL2;
    ULONGLONG SCTLR_EL2;
    ULONGLONG SP_EL2;
    ULONGLONG SPSR_EL2;
    ULONGLONG TCR_EL2;
    ULONGLONG TPIDR_EL2;
    ULONGLONG TTBR0_EL2;
    ULONGLONG VTCR_EL2;
    ULONGLONG VTTBR_EL2;
} WHEA_ARM_AARCH64_EL2_CSR, *PWHEA_ARM_AARCH64_EL2_CSR;

typedef struct _WHEA_ARMV8_AARCH64_EL3_CSR {
    ULONGLONG ELR_EL3;
    ULONGLONG ESR_EL3;
    ULONGLONG FAR_EL3;
    ULONGLONG MAIR_EL3;
    ULONGLONG SCTLR_EL3;
    ULONGLONG SP_EL3;
    ULONGLONG SPSR_EL3;
    ULONGLONG TCR_EL3;
    ULONGLONG TPIDR_EL3;
    ULONGLONG TTBR0_EL3;
} WHEA_ARMV8_AARCH64_EL3_CSR, *PWHEA_ARMV8_AARCH64_EL3_CSR;

typedef struct _WHEA_ARM_MISC_CSR {
    USHORT MRSEncoding;
    ULONGLONG Value;
} WHEA_ARM_MISC_CSR, *PWHEA_ARM_MISC_CSR;

typedef struct _WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER {
    USHORT Version;
    USHORT RegisterContextType;
    ULONG RegisterArraySize;
    UCHAR RegisterArray[1];
} WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER,
  *PWHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER;

typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER *)0)->Version)) == (0)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER *)0)->Version)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER *)0)->RegisterContextType)) == (2)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER *)0)->RegisterContextType)) == (2))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER *)0)->RegisterArraySize)) == (4)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER *)0)->RegisterArraySize)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER *)0)->RegisterArray)) == (8)) && ((sizeof(((WHEA_ARM_PROCESSOR_ERROR_CONTEXT_INFORMATION_HEADER *)0)->RegisterArray)) == (1))))?1:-1];


typedef struct _WHEA_SEA_SECTION {
    ULONG Esr;
    ULONG64 Far;
    ULONG64 Par;
    BOOLEAN WasKernel;
} WHEA_SEA_SECTION, *PWHEA_SEA_SECTION;

typedef struct _WHEA_SEI_SECTION {
    ULONG Esr;
    ULONG64 Far;
} WHEA_SEI_SECTION, *PWHEA_SEI_SECTION;

typedef enum _WHEA_PCI_RECOVERY_SIGNAL {
    WheaPciRecoverySignalUnknown = 0,
    WheaPciRecoverySignalAer,
    WheaPciRecoverySignalDpc
}WHEA_PCI_RECOVERY_SIGNAL, *PWHEA_PCI_RECOVERY_SIGNAL;

typedef enum _WHEA_PCI_RECOVERY_STATUS {
    WheaPciREcoveryStatusUnknown = 0,
    WheaPciRecoveryStatusNoError,
    WheaPciRecoveryStatusLinkDisableTimeout,
    WheaPciRecoveryStatusLinkEnableTimeout,
    WheaPciRecoveryStatusRpBusyTimeout,
    WheaPciRecoveryStatusComplexTree,
    WheaPciRecoveryStatusBusNotFound,
}WHEA_PCI_RECOVERY_STATUS,  *PWHEA_PCI_RECOVERY_STATUS;

typedef struct _WHEA_PCI_RECOVERY_SECTION {
    UINT8 SignalType;
    BOOLEAN RecoveryAttempted;
    UINT8 RecoveryStatus;
} WHEA_PCI_RECOVERY_SECTION, *PWHEA_PCI_RECOVERY_SECTION;










































extern const GUID  CMC_NOTIFY_TYPE_GUID;


extern const GUID  CPE_NOTIFY_TYPE_GUID;


extern const GUID  MCE_NOTIFY_TYPE_GUID;


extern const GUID  PCIe_NOTIFY_TYPE_GUID;


extern const GUID  INIT_NOTIFY_TYPE_GUID;


extern const GUID  NMI_NOTIFY_TYPE_GUID;


extern const GUID  BOOT_NOTIFY_TYPE_GUID;


extern const GUID  SEA_NOTIFY_TYPE_GUID;


extern const GUID  SEI_NOTIFY_TYPE_GUID;


extern const GUID  PEI_NOTIFY_TYPE_GUID;


extern const GUID  BMC_NOTIFY_TYPE_GUID;


extern const GUID  SCI_NOTIFY_TYPE_GUID;


extern const GUID  EXTINT_NOTIFY_TYPE_GUID;


extern const GUID  DEVICE_DRIVER_NOTIFY_TYPE_GUID;


extern const GUID  CMCI_NOTIFY_TYPE_GUID;




extern const GUID  WHEA_DEVICE_ERROR_SUMMARY_GUID;
            



extern const GUID  PROCESSOR_GENERIC_ERROR_SECTION_GUID;


extern const GUID  XPF_PROCESSOR_ERROR_SECTION_GUID;


extern const GUID  IPF_PROCESSOR_ERROR_SECTION_GUID;


extern const GUID  ARM_PROCESSOR_ERROR_SECTION_GUID;


extern const GUID  MEMORY_ERROR_SECTION_GUID;


extern const GUID  PCIEXPRESS_ERROR_SECTION_GUID;


extern const GUID  PCIXBUS_ERROR_SECTION_GUID;


extern const GUID  PCIXDEVICE_ERROR_SECTION_GUID;


extern const GUID  FIRMWARE_ERROR_RECORD_REFERENCE_GUID;


extern const GUID  PMEM_ERROR_SECTION_GUID;


extern const GUID  MU_TELEMETRY_SECTION_GUID;


extern const GUID  RECOVERY_INFO_SECTION_GUID;




extern const GUID  WHEA_CACHECHECK_GUID;


extern const GUID  WHEA_TLBCHECK_GUID;


extern const GUID  WHEA_BUSCHECK_GUID;


extern const GUID  WHEA_MSCHECK_GUID;











extern const GUID  CPER_EMPTY_GUID;




extern const GUID  WHEA_RECORD_CREATOR_GUID;




extern const GUID  DEFAULT_DEVICE_DRIVER_CREATOR_GUID;




extern const GUID  GENERIC_NOTIFY_TYPE_GUID;




extern const GUID  IPF_SAL_RECORD_SECTION_GUID;


extern const GUID  XPF_MCA_SECTION_GUID;


extern const GUID  NMI_SECTION_GUID;


extern const GUID  GENERIC_SECTION_GUID;


extern const GUID  IPMI_MSR_DUMP_SECTION_GUID;


extern const GUID  WHEA_ERROR_PACKET_SECTION_GUID;


extern const GUID  WHEA_DPC_CAPABILITY_SECTION_GUID;


extern const GUID  PCIE_CORRECTABLE_ERROR_SUMMARY_SECTION_GUID;


extern const GUID  MEMORY_CORRECTABLE_ERROR_SUMMARY_SECTION_GUID;


extern const GUID  SEA_SECTION_GUID;


extern const GUID  SEI_SECTION_GUID;


extern const GUID  PCI_RECOVERY_SECTION_GUID;




















































typedef enum _WHEA_ERROR_TYPE {
    WheaErrTypeProcessor = 0,
    WheaErrTypeMemory,
    WheaErrTypePCIExpress,
    WheaErrTypeNMI,
    WheaErrTypePCIXBus,
    WheaErrTypePCIXDevice,
    WheaErrTypeGeneric,
    WheaErrTypePmem,
} WHEA_ERROR_TYPE, *PWHEA_ERROR_TYPE;

typedef union _WHEA_ERROR_PACKET_FLAGS {
    struct {
        ULONG PreviousError:1;
        ULONG CriticalEvent:1;
        ULONG HypervisorError:1;
        ULONG Simulated:1;
        ULONG PlatformPfaControl:1;
        ULONG PlatformDirectedOffline:1;
        ULONG AddressTranslationRequired:1;
        ULONG AddressTranslationCompleted:1;
        ULONG RecoveryOptional:1;
        ULONG Reserved2:23;
    } ;
    ULONG AsULONG;
} WHEA_ERROR_PACKET_FLAGS, *PWHEA_ERROR_PACKET_FLAGS;

typedef enum _WHEA_ERROR_PACKET_DATA_FORMAT {
    WheaDataFormatIPFSalRecord = 0,
    WheaDataFormatXPFMCA,
    WheaDataFormatMemory,
    WheaDataFormatPCIExpress,
    WheaDataFormatNMIPort,
    WheaDataFormatPCIXBus,
    WheaDataFormatPCIXDevice,
    WheaDataFormatGeneric,
    WheaDataFormatMax
} WHEA_ERROR_PACKET_DATA_FORMAT, *PWHEA_ERROR_PACKET_DATA_FORMAT;

typedef enum _WHEA_RAW_DATA_FORMAT {
    WheaRawDataFormatIPFSalRecord = 0x00,
    WheaRawDataFormatIA32MCA,
    WheaRawDataFormatIntel64MCA,
    WheaRawDataFormatAMD64MCA,
    WheaRawDataFormatMemory,
    WheaRawDataFormatPCIExpress,
    WheaRawDataFormatNMIPort,
    WheaRawDataFormatPCIXBus,
    WheaRawDataFormatPCIXDevice,
    WheaRawDataFormatGeneric,
    WheaRawDataFormatMax
} WHEA_RAW_DATA_FORMAT, *PWHEA_RAW_DATA_FORMAT;

typedef struct _WHEA_ERROR_PACKET_V1 {
    ULONG                   Signature;                          
    WHEA_ERROR_PACKET_FLAGS Flags;                              
    ULONG                   Size;                               
    ULONG                   RawDataLength;                      
    ULONGLONG               Reserved1;                          
    ULONGLONG               Context;                            
    WHEA_ERROR_TYPE         ErrorType;                          
    WHEA_ERROR_SEVERITY     ErrorSeverity;                      
    ULONG                   ErrorSourceId;                      
    WHEA_ERROR_SOURCE_TYPE  ErrorSourceType;                    
    ULONG                   Reserved2;                          
    ULONG                   Version;                            
    ULONGLONG               Cpu;                                
    union {
        WHEA_PROCESSOR_GENERIC_ERROR_SECTION    ProcessorError; 
        WHEA_MEMORY_ERROR_SECTION               MemoryError;
        WHEA_NMI_ERROR_SECTION                  NmiError;
        WHEA_PCIEXPRESS_ERROR_SECTION           PciExpressError;
        WHEA_PCIXBUS_ERROR_SECTION              PciXBusError;
        WHEA_PCIXDEVICE_ERROR_SECTION           PciXDeviceError;
        WHEA_PMEM_ERROR_SECTION                 PmemError;
    } u;
    WHEA_RAW_DATA_FORMAT     RawDataFormat;                     
    ULONG                    RawDataOffset;                     
    UCHAR                    RawData[1];                        

} WHEA_ERROR_PACKET_V1, *PWHEA_ERROR_PACKET_V1;




typedef struct _WHEA_ERROR_PACKET_V2 {
    ULONG Signature;
    ULONG Version;
    ULONG Length;
    WHEA_ERROR_PACKET_FLAGS Flags;
    WHEA_ERROR_TYPE ErrorType;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    ULONG ErrorSourceId;
    WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
    GUID NotifyType;
    ULONGLONG Context;
    WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;
    ULONG Reserved1;
    ULONG DataOffset;
    ULONG DataLength;
    ULONG PshedDataOffset;
    ULONG PshedDataLength;
    
    
} WHEA_ERROR_PACKET_V2, *PWHEA_ERROR_PACKET_V2;

typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->Signature)) == (0)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->Signature)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->Version)) == (4)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->Version)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->Length)) == (8)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->Length)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->Flags)) == (12)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->Flags)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->ErrorType)) == (16)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->ErrorType)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->ErrorSeverity)) == (20)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->ErrorSeverity)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->ErrorSourceId)) == (24)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->ErrorSourceId)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->ErrorSourceType)) == (28)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->ErrorSourceType)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->NotifyType)) == (32)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->NotifyType)) == (16))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->Context)) == (48)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->Context)) == (8))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->DataFormat)) == (56)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->DataFormat)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->Reserved1)) == (60)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->Reserved1)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->DataOffset)) == (64)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->DataOffset)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->DataLength)) == (68)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->DataLength)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->PshedDataOffset)) == (72)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->PshedDataOffset)) == (4))))?1:-1];
typedef char __C_ASSERT__[(((((LONG)(LONG_PTR)&(((WHEA_ERROR_PACKET_V2 *)0)->PshedDataLength)) == (76)) && ((sizeof(((WHEA_ERROR_PACKET_V2 *)0)->PshedDataLength)) == (4))))?1:-1];








typedef struct _WHEA_ERROR_PACKET_V2    WHEA_ERROR_PACKET, *PWHEA_ERROR_PACKET;



















typedef PCI_EXPRESS_DPC_CAPABILITY WHEA_PCI_DPC_SECTION, *PWHEA_PCI_DPC_SECTION;

typedef enum _WHEA_EVENT_LOG_ENTRY_TYPE {
    WheaEventLogEntryTypeInformational = 0,
    WheaEventLogEntryTypeWarning,
    WheaEventLogEntryTypeError
} WHEA_EVENT_LOG_ENTRY_TYPE, *PWHEA_EVENT_LOG_ENTRY_TYPE;

typedef enum _WHEA_EVENT_LOG_ENTRY_ID {
    WheaEventLogEntryIdCmcPollingTimeout       = 0x80000001,
    WheaEventLogEntryIdWheaInit                = 0x80000002,
    WheaEventLogEntryIdCmcSwitchToPolling      = 0x80000003,
    WheaEventLogEntryIdDroppedCorrectedError   = 0x80000004,
    WheaEventLogEntryIdStartedReportHwError    = 0x80000005, 
    WheaEventLogEntryIdPFAMemoryOfflined       = 0x80000006,
    WheaEventLogEntryIdPFAMemoryRemoveMonitor  = 0x80000007,
    WheaEventLogEntryIdPFAMemoryPolicy         = 0x80000008,
    WheaEventLogEntryIdPshedInjectError        = 0x80000009,
    WheaEventLogEntryIdOscCapabilities         = 0x8000000a,
    WheaEventLogEntryIdPshedPluginRegister     = 0x8000000b,
    WheaEventLogEntryIdAddRemoveErrorSource    = 0x8000000c,
    WheaEventLogEntryIdWorkQueueItem           = 0x8000000d,
    WheaEventLogEntryIdAttemptErrorRecovery    = 0x8000000e,
    WheaEventLogEntryIdMcaFoundErrorInBank     = 0x8000000f,
    WheaEventLogEntryIdMcaStuckErrorCheck      = 0x80000010,
    WheaEventLogEntryIdMcaErrorCleared         = 0x80000011,
    WheaEventLogEntryIdClearedPoison           = 0x80000012,
    WheaEventLogEntryIdProcessEINJ             = 0x80000013,
    WheaEventLogEntryIdProcessHEST             = 0x80000014,
    WheaEventLogEntryIdCreateGenericRecord     = 0x80000015,
    WheaEventLogEntryIdErrorRecord             = 0x80000016,
    WheaEventLogEntryIdErrorRecordLimit        = 0x80000017,
    WheaEventLogEntryIdAerNotGrantedToOs       = 0x80000018,
    WheaEventLogEntryIdErrSrcArrayInvalid      = 0x80000019,
    WheaEventLogEntryIdAcpiTimeOut             = 0x8000001a,
    WheaEventLogCmciRestart                    = 0x8000001b,
    WheaEventLogCmciFinalRestart               = 0x8000001c,
    WheaEventLogEntryEtwOverFlow               = 0x8000001d,
    WheaEventLogAzccRootBusSearchErr           = 0x8000001e,
    WheaEventLogAzccRootBusList                = 0x8000001f,
    WheaEventLogEntryIdErrSrcInvalid           = 0x80000020,
    WheaEventLogEntryIdGenericErrMemMap        = 0x80000021,
    WheaEventLogEntryIdPshedCallbackCollision  = 0x80000022,
    WheaEventLogEntryIdSELBugCheckProgress     = 0x80000023,
    WheaEventLogEntryIdPshedPluginLoad         = 0x80000024,
    WheaEventLogEntryIdPshedPluginUnload       = 0x80000025,
    WheaEventLogEntryIdPshedPluginSupported    = 0x80000026,
    WheaEventLogEntryIdDeviceDriver            = 0x80000027,
    WheaEventLogEntryIdCmciImplPresent         = 0x80000028,
    WheaEventLogEntryIdCmciInitError           = 0x80000029,
    WheaEventLogEntryIdSELBugCheckRecovery     = 0x8000002a,
    WheaEventLogEntryIdDrvErrSrcInvalid        = 0x8000002b,
    WheaEventLogEntryIdDrvHandleBusy           = 0x8000002c,
    WheaEventLogEntryIdWheaHeartbeat           = 0x8000002d,
    WheaEventLogAzccRootBusPoisonSet           = 0x8000002e,
    WheaEventLogEntryIdSELBugCheckInfo         = 0x8000002f,
    WheaEventLogEntryIdErrDimmInfoMismatch     = 0x80000030,
    WheaEventLogEntryIdeDpcEnabled             = 0x80000031,
    WheaEventLogEntryPageOfflineDone           = 0x80000032,
    WheaEventLogEntryPageOfflinePendMax        = 0x80000033,
    WheaEventLogEntryIdBadPageLimitReached     = 0x80000034,
    WheaEventLogEntrySrarDetail                = 0x80000035,
    WheaEventLogEntryEarlyError                = 0x80000036,
    WheaEventLogEntryIdPcieOverrideInfo        = 0x80000037,
    WheaEventLogEntryIdReadPcieOverridesErr    = 0x80000038,
    WheaEventLogEntryIdPcieConfigInfo          = 0x80000039,
    WheaEventLogEntryIdPcieSummaryFailed       = 0x80000040,
    WheaEventLogEntryIdThrottleRegCorrupt      = 0x80000041,
    WheaEventLogEntryIdThrottleAddErrSrcFailed = 0x80000042,
    WheaEventLogEntryIdThrottleRegDataIgnored  = 0x80000043,
    WheaEventLogEntryIdEnableKeyNotifFailed    = 0x80000044,
    WheaEventLogEntryIdKeyNotificationFailed   = 0x80000045,
    WheaEventLogEntryIdPcieRemoveDevice        = 0x80000046,
    WheaEventLogEntryIdPcieAddDevice           = 0x80000047,
    WheaEventLogEntryIdPcieSpuriousErrSource   = 0x80000048,
    WheaEventLogEntryIdMemoryAddDevice         = 0x80000049,
    WheaEventLogEntryIdMemoryRemoveDevice      = 0x8000004a,
    WheaEventLogEntryIdMemorySummaryFailed     = 0x8000004b,
    WheaEventLogEntryIdPcieDpcError            = 0x8000004c,
    WheaEventLogEntryIdCpuBusesInitFailed      = 0x8000004d,
    WheaEventLogEntryIdPshedPluginInitFailed   = 0x8000004e,
    WheaEventLogEntryIdFailedAddToDefectList   = 0x8000004f,
    WheaEventLogEntryIdDefectListFull          = 0x80000050,
    WheaEventLogEntryIdDefectListUEFIVarFailed = 0x80000051,
    WheaEventLogEntryIdDefectListCorrupt       = 0x80000052,
    WheaEventLogEntryIdBadHestNotifyData       = 0x80000053,
    WheaEventLogEntryIdSrasTableNotFound       = 0x80000054,
    WheaEventLogEntryIdSrasTableError          = 0x80000055,
    WheaEventLogEntryIdSrasTableEntries        = 0x80000056,
    WheaEventLogEntryIdRowFailure              = 0x80000057,
    WheaEventLogEntryIdCpusFrozen              = 0x80000060,
    WheaEventLogEntryIdCpusFrozenNoCrashDump   = 0x80000061,
    WheaEventLogEntryIdPshedPiTraceLog         = 0x80040010
} WHEA_EVENT_LOG_ENTRY_ID, *PWHEA_EVENT_LOG_ENTRY_ID;

typedef union _WHEA_EVENT_LOG_ENTRY_FLAGS {
    struct {
        ULONG Reserved1:1;
        ULONG LogInternalEtw:1;
        ULONG LogBlackbox:1;
        ULONG LogSel:1;
        ULONG RawSel:1;
        ULONG NoFormat:1;
        ULONG Driver:1;
        ULONG Reserved2:25;
    } ;
    ULONG AsULONG;
} WHEA_EVENT_LOG_ENTRY_FLAGS, *PWHEA_EVENT_LOG_ENTRY_FLAGS;

typedef struct _WHEA_EVENT_LOG_ENTRY_HEADER {
    ULONG Signature;
    ULONG Version;
    ULONG Length;
    WHEA_EVENT_LOG_ENTRY_TYPE Type;
    ULONG OwnerTag;
    WHEA_EVENT_LOG_ENTRY_ID Id;
    WHEA_EVENT_LOG_ENTRY_FLAGS Flags;
    ULONG PayloadLength;
} WHEA_EVENT_LOG_ENTRY_HEADER, *PWHEA_EVENT_LOG_ENTRY_HEADER;

typedef struct _WHEA_EVENT_LOG_ENTRY {
    WHEA_EVENT_LOG_ENTRY_HEADER Header;
    
} WHEA_EVENT_LOG_ENTRY, *PWHEA_EVENT_LOG_ENTRY;

typedef struct _WHEAP_DEFERRED_EVENT {
    LIST_ENTRY ListEntry;
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEAP_DEFERRED_EVENT, *PWHEAP_DEFERRED_EVENT;





typedef struct _WHEAP_BAD_HEST_NOTIFY_DATA_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    USHORT SourceId;
    USHORT Reserved;
    WHEA_NOTIFICATION_DESCRIPTOR NotifyDesc;
} WHEAP_BAD_HEST_NOTIFY_DATA_EVENT, *PWHEAP_BAD_HEST_NOTIFY_DATA_EVENT;

typedef struct _WHEAP_STARTED_REPORT_HW_ERROR {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    PWHEA_ERROR_PACKET ErrorPacket;
} WHEAP_STARTED_REPORT_HW_ERROR,
  *PWHEAP_STARTED_REPORT_HW_ERROR;

typedef enum _WHEAP_PFA_OFFLINE_DECISION_TYPE {
    WheapPfaOfflinePredictiveFailure = 1,
    WheapPfaOfflineUncorrectedError = 2
} WHEAP_PFA_OFFLINE_DECISION_TYPE, *PWHEAP_PFA_OFFLINE_DECISION_TYPE;

typedef struct _WHEAP_PFA_MEMORY_OFFLINED {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEAP_PFA_OFFLINE_DECISION_TYPE DecisionType;
    BOOLEAN ImmediateSuccess;
    ULONG Page;
} WHEAP_PFA_MEMORY_OFFLINED,
  *PWHEAP_PFA_MEMORY_OFFLINED;

typedef struct _WHEAP_PSHED_INJECT_ERROR {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG ErrorType;
    ULONGLONG Parameter1;
    ULONGLONG Parameter2;
    ULONGLONG Parameter3;
    ULONGLONG Parameter4;
    NTSTATUS InjectionStatus;
    BOOLEAN InjectionAttempted;
    BOOLEAN InjectionByPlugin;
} WHEAP_PSHED_INJECT_ERROR,
  *PWHEAP_PSHED_INJECT_ERROR;

typedef struct _WHEAP_OSC_IMPLEMENTED {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    BOOLEAN OscImplemented;
    BOOLEAN DebugChecked;
} WHEAP_OSC_IMPLEMENTED,
  *PWHEAP_OSC_IMPLEMENTED;

typedef struct _WHEAP_PSHED_PLUGIN_REGISTER {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG Version;
    ULONG Length;
    ULONG FunctionalAreaMask;
    NTSTATUS Status;
} WHEAP_PSHED_PLUGIN_REGISTER,
  *PWHEAP_PSHED_PLUGIN_REGISTER;

typedef enum _WHEA_PFA_REMOVE_TRIGGER {
    WheaPfaRemoveErrorThreshold = 1,
    WheaPfaRemoveTimeout = 2,
    WheaPfaRemoveCapacity = 3
} WHEA_PFA_REMOVE_TRIGGER, *PWHEA_PFA_REMOVE_TRIGGER;

typedef struct _WHEAP_PFA_MEMORY_REMOVE_MONITOR {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_PFA_REMOVE_TRIGGER RemoveTrigger;
    ULONG TimeInList;
    ULONG ErrorCount ;
    ULONG Page;
} WHEAP_PFA_MEMORY_REMOVE_MONITOR,
  *PWHEAP_PFA_MEMORY_REMOVE_MONITOR;

typedef struct _WHEAP_PFA_MEMORY_POLICY {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG RegistryKeysPresent;
    BOOLEAN DisableOffline;
    BOOLEAN PersistOffline;
    BOOLEAN PfaDisabled;
    ULONG PageCount;
    ULONG ErrorThreshold;
    ULONG TimeOut;
} WHEAP_PFA_MEMORY_POLICY,
  *PWHEAP_PFA_MEMORY_POLICY;

typedef struct _WHEAP_DROPPED_CORRECTED_ERROR_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
    ULONG ErrorSourceId;
} WHEAP_DROPPED_CORRECTED_ERROR_EVENT,
  *PWHEAP_DROPPED_CORRECTED_ERROR_EVENT;

typedef struct _WHEAP_CLEARED_POISON_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG64 PhysicalAddress;
} WHEAP_CLEARED_POISON_EVENT, *PWHEAP_CLEARED_POISON_EVENT;

typedef struct _WHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_ERROR_SOURCE_DESCRIPTOR Descriptor;
    NTSTATUS Status;
    BOOLEAN IsRemove;
} WHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT, *PWHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT;

typedef struct _WHEAP_ATTEMPT_RECOVERY_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_ERROR_RECORD_HEADER ErrorHeader;
    BOOLEAN ArchitecturalRecovery;
    BOOLEAN PshedRecovery;
    NTSTATUS Status;
} WHEAP_ATTEMPT_RECOVERY_EVENT, *PWHEAP_ATTEMPT_RECOVERY_EVENT;

typedef struct _WHEAP_FOUND_ERROR_IN_BANK_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG EpIndex;
    ULONG Bank;
    ULONG64 MciStatus;
    ULONG ErrorType;
} WHEAP_FOUND_ERROR_IN_BANK_EVENT, *PWHEAP_FOUND_ERROR_IN_BANK_EVENT;

typedef struct _WHEAP_STUCK_ERROR_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG EpIndex;
    ULONG Bank;
    ULONG64 MciStatus;
} WHEAP_STUCK_ERROR_EVENT, *PWHEAP_STUCK_ERROR_EVENT;

typedef struct _WHEAP_ERROR_CLEARED_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG EpIndex;
    ULONG Bank;
} WHEAP_ERROR_CLEARED_EVENT, *PWHEAP_ERROR_CLEARED_EVENT;

typedef struct _WHEAP_PROCESS_EINJ_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    CHAR Error[32];
    BOOLEAN InjectionActionTableValid;
    ULONG BeginInjectionInstructionCount;
    ULONG GetTriggerErrorActionTableInstructionCount;
    ULONG SetErrorTypeInstructionCount;
    ULONG GetErrorTypeInstructionCount;
    ULONG EndOperationInstructionCount;
    ULONG ExecuteOperationInstructionCount;
    ULONG CheckBusyStatusInstructionCount;
    ULONG GetCommandStatusInstructionCount;
    ULONG SetErrorTypeWithAddressInstructionCount;
    ULONG GetExecuteOperationTimingsInstructionCount;
} WHEAP_PROCESS_EINJ_EVENT, *PWHEAP_PROCESS_EINJ_EVENT;

typedef struct _WHEAP_PROCESS_HEST_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    CHAR Error[32];
    CHAR EntryType[32];
    ULONG EntryIndex;
    BOOLEAN HestValid;
    ULONG CmcCount;
    ULONG MceCount;
    ULONG NmiCount;
    ULONG AerRootCount;
    ULONG AerBridgeCount;
    ULONG AerEndPointCount;
    ULONG GenericV1Count;
    ULONG GenericV2Count;
} WHEAP_PROCESS_HEST_EVENT, *PWHEAP_PROCESS_HEST_EVENT;

typedef struct _WHEAP_CREATE_GENERIC_RECORD_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    CHAR Error[32];
    ULONG EntryCount;
    NTSTATUS Status;
} WHEAP_CREATE_GENERIC_RECORD_EVENT, *PWHEAP_CREATE_GENERIC_RECORD_EVENT;

typedef struct _WHEAP_ERROR_RECORD_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    PWHEA_ERROR_RECORD Record;
} WHEAP_ERROR_RECORD_EVENT, *PWHEAP_ERROR_RECORD_EVENT;

typedef struct _WHEAP_ERR_SRC_ARRAY_INVALID_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG ErrorSourceCount;
    ULONG ReportedLength;
    ULONG ExpectedLength;
} WHEAP_ERR_SRC_ARRAY_INVALID_EVENT, *PWHEAP_ERR_SRC_ARRAY_INVALID_EVENT;

typedef struct _WHEAP_ERR_SRC_INVALID_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_ERROR_SOURCE_DESCRIPTOR ErrDescriptor;
    CHAR Error[32];
} WHEAP_ERR_SRC_INVALID_EVENT, *PWHEAP_ERR_SRC_INVALID_EVENT;

typedef struct _WHEAP_GENERIC_ERR_MEM_MAP_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    CHAR MapReason[32];
    ULONG64 PhysicalAddress;
    ULONG64 Length;
} WHEAP_GENERIC_ERR_MEM_MAP_EVENT, *PWHEAP_GENERIC_ERR_MEM_MAP_EVENT;

typedef struct _WHEAP_ACPI_TIMEOUT_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    CHAR TableType[32];
    CHAR TableRequest[32];
} WHEAP_ACPI_TIMEOUT_EVENT, *PWHEAP_ACPI_TIMEOUT_EVENT;

typedef struct _WHEAP_CMCI_RESTART_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG CmciRestoreAttempts;
    ULONG MaxCmciRestoreLimit;
    ULONG MaxCorrectedErrorsFound;
    ULONG MaxCorrectedErrorLimit;
} WHEAP_CMCI_RESTART_EVENT, *PWHEAP_CMCI_RESTART_EVENT;

typedef struct _WHEA_SEL_BUGCHECK_PROGRESS {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG BugCheckCode;
    ULONG BugCheckProgressSummary;
} WHEA_SEL_BUGCHECK_PROGRESS, *PWHEA_SEL_BUGCHECK_PROGRESS;

typedef struct _WHEA_SEL_BUGCHECK_RECOVERY_STATUS_START_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    KIRQL StartingIrql;
} WHEA_SEL_BUGCHECK_RECOVERY_STATUS_START_EVENT,
    *PWHEA_SEL_BUGCHECK_RECOVERY_STATUS_START_EVENT;



typedef struct _WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    BOOLEAN Success;
    UCHAR Version;
    USHORT EntryCount;
    struct {

        
        
        

        UCHAR DumpPolicy;
        UCHAR Reserved[3];
    } Data;
} WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT,
    *PWHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE1_EVENT;

typedef struct _WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE2_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG BootId;
    BOOLEAN Success;
} WHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE2_EVENT,
    *PWHEA_SEL_BUGCHECK_RECOVERY_STATUS_PHASE2_EVENT;

typedef struct _WHEA_SEL_BUGCHECK_RECOVERY_STATUS_MULTIPLE_BUGCHECK_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    BOOLEAN IsBugcheckOwner;
    UCHAR RecursionCount;
    BOOLEAN IsBugcheckRecoveryOwner;
} WHEA_SEL_BUGCHECK_RECOVERY_STATUS_MULTIPLE_BUGCHECK_EVENT,
    *PWHEA_SEL_BUGCHECK_RECOVERY_STATUS_MULTIPLE_BUGCHECK_EVENT;

typedef struct _WHEA_PSHED_PLUGIN_LOAD_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WCHAR PluginName[32];
    ULONG MajorVersion;
    ULONG MinorVersion;
} WHEA_PSHED_PLUGIN_LOAD_EVENT, *PWHEA_PSHED_PLUGIN_LOAD_EVENT;

typedef struct _WHEA_PSHED_PLUGIN_UNLOAD_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WCHAR PluginName[32];
} WHEA_PSHED_PLUGIN_UNLOAD_EVENT, *PWHEA_PSHED_PLUGIN_UNLOAD_EVENT;

typedef enum _WHEA_PSHED_PLUGIN_ENABLE_NOTIFY_ERRORS {
    PshedPiEnableNotifyErrorCreateNotifyEvent = 1,
    PshedPiEnableNotifyErrorCreateSystemThread,
    PshedPiEnableNotifyErrorMax
} WHEA_PSHED_PLUGIN_ENABLE_NOTIFY_ERRORS,
    *PWHEA_PSHED_PLUGIN_ENABLE_NOTIFY_ERRORS;

typedef struct _WHEA_PSHED_PLUGIN_ENABLE_NOTIFY_FAILED_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_PSHED_PLUGIN_ENABLE_NOTIFY_ERRORS EnableError;
} WHEA_PSHED_PLUGIN_ENABLE_NOTIFY_FAILED_EVENT,
    *PWHEA_PSHED_PLUGIN_ENABLE_NOTIFY_FAILED_EVENT;

typedef struct _WHEA_PSHED_PLUGIN_PLATFORM_SUPPORT_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WCHAR PluginName[32];
    BOOLEAN Supported;
} WHEA_PSHED_PLUGIN_PLATFORM_SUPPORT_EVENT,
    *PWHEA_PSHED_PLUGIN_PLATFORM_SUPPORT_EVENT;

typedef struct _WHEA_PSHED_PLUGIN_INIT_FAILED_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    NTSTATUS Status;
} WHEA_PSHED_PLUGIN_INIT_FAILED_EVENT,
    *PWHEA_PSHED_PLUGIN_INIT_FAILED_EVENT;

typedef struct _WHEA_PSHED_PLUGIN_HEARTBEAT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEA_PSHED_PLUGIN_HEARTBEAT, *PWHEA_PSHED_PLUGIN_HEARTBEAT;

typedef struct _WHEA_PSHED_PLUGIN_DIMM_MISMATCH {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    UINT16 FirmwareBank;
    UINT16 FirmwareCol;
    UINT16 FirmwareRow;
    UINT16 RetryRdBank;
    UINT16 RetryRdCol;
    UINT16 RetryRdRow;
    UINT16 TaBank;
    UINT16 TaCol;
    UINT16 TaRow;
} WHEA_PSHED_PLUGIN_DIMM_MISMATCH, *PWHEA_PSHED_PLUGIN_DIMM_MISMATCH;

typedef struct _WHEA_ETW_OVERFLOW_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONGLONG RecordId;
} WHEA_ETW_OVERFLOW_EVENT, *PWHEA_ETW_OVERFLOW_EVENT;

typedef struct _WHEAP_CMCI_IMPLEMENTED_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    BOOLEAN CmciAvailable;
} WHEAP_CMCI_IMPLEMENTED_EVENT,
    *PWHEAP_CMCI_IMPLEMENTED_EVENT;

typedef struct _WHEAP_DEVICE_DRV_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    CHAR Function[32];
} WHEAP_DEVICE_DRV_EVENT, *PWHEAP_DEVICE_DRV_EVENT;

typedef struct _WHEAP_PLUGIN_PFA_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    BOOLEAN NoFurtherPfa;
} WHEAP_PLUGIN_PFA_EVENT, *PWHEAP_PLUGIN_PFA_EVENT;

typedef struct _WHEAP_CMCI_INITERR_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONGLONG Msr;
    ULONG Type;
    ULONG Bank;
    ULONG EpIndex;
} WHEAP_CMCI_INITERR_EVENT,
    *PWHEAP_CMCI_INITERR_EVENT;

typedef struct _WHEA_AZCC_ROOT_BUS_ERR_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    BOOLEAN MaxBusCountPassed;
    BOOLEAN InvalidBusMSR;
} WHEA_AZCC_ROOT_BUS_ERR_EVENT, *PWHEA_AZCC_ROOT_BUS_ERR_EVENT;

typedef struct _WHEA_AZCC_ROOT_BUS_LIST_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    UINT32 RootBusCount;
    UINT32 RootBuses[8];
} WHEA_AZCC_ROOT_BUS_LIST_EVENT, *PWHEA_AZCC_ROOT_BUS_LIST_EVENT;

typedef struct _WHEA_AZCC_SET_POISON_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    UINT32 Bus;
    BOOLEAN ReadSuccess;
    BOOLEAN WriteSuccess;
    BOOLEAN IsEnable;
} WHEA_AZCC_SET_POISON_EVENT, *PWHEA_AZCC_SET_POISON_EVENT;

typedef struct _WHEA_OFFLINE_DONE_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    ULONG64 Address;
} WHEA_OFFLINE_DONE_EVENT, *PWHEA_OFFLINE_DONE_EVENT;

typedef enum _WHEA_BUGCHECK_RECOVERY_LOG_TYPE {
    WheaEventBugCheckRecoveryEntry,
    WheaEventBugCheckRecoveryReturn,
    WheaEventBugCheckRecoveryMax,
} WHEA_BUGCHECK_RECOVERY_LOG_TYPE, *PWHEA_BUGCHECK_RECOVERY_LOG_TYPE;

typedef struct _WHEAP_EDPC_ENABLED_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    BOOLEAN eDPCEnabled;
    BOOLEAN eDPCRecovEnabled;
} WHEAP_EDPC_ENABLED_EVENT, *PWHEAP_EDPC_ENABLED_EVENT;

typedef struct _WHEA_SRAR_DETAIL_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    UINT32 RecoveryContextFlags;
    UINT64 RecoveryContextPa;
    NTSTATUS PageOfflineStatus;
    BOOLEAN KernelConsumerError;
} WHEA_SRAR_DETAIL_EVENT, *PWHEA_SRAR_DETAIL_EVENT;

typedef struct _WHEA_FAILED_ADD_DEFECT_LIST_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEA_FAILED_ADD_DEFECT_LIST_EVENT, *PWHEA_FAILED_ADD_DEFECT_LIST_EVENT;

typedef struct _WHEAP_PLUGIN_DEFECT_LIST_FULL_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEAP_PLUGIN_DEFECT_LIST_FULL_EVENT,
      *PWHEAP_PLUGIN_DEFECT_LIST_FULL_EVENT;

typedef struct _WHEAP_PLUGIN_DEFECT_LIST_UEFI_VAR_FAILED {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEAP_PLUGIN_DEFECT_LIST_UEFI_VAR_FAILED,
      *PWHEAP_PLUGIN_DEFECT_LIST_UEFI_VAR_FAILED;

typedef struct _WHEAP_PLUGIN_DEFECT_LIST_CORRUPT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEAP_PLUGIN_DEFECT_LIST_CORRUPT,
      *PWHEAP_PLUGIN_DEFECT_LIST_CORRUPT;

typedef struct _WHEAP_SPURIOUS_AER_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_ERROR_SEVERITY ErrorSeverity;

    
    
    
    

    ULONG ErrorHandlerType;
    ULONG SpuriousErrorSourceId;
    ULONG RootErrorCommand;
    ULONG RootErrorStatus;
    ULONG DeviceAssociationBitmap;
} WHEAP_SPURIOUS_AER_EVENT, *PWHEAP_SPURIOUS_AER_EVENT;

typedef enum _WHEAP_DPC_ERROR_EVENT_TYPE {
    WheapDpcErrNoErr = 0,
    WheapDpcErrBusNotFound,
    WheapDpcErrDpcedSubtree,
    WheapDpcErrDeviceIdBad,
    WheapDpcErrResetFailed,
    WheapDpcErrNoChildren,
} WHEAP_DPC_ERROR_EVENT_TYPE, *PWHEAP_DPC_ERROR_EVENT_TYPE;

typedef struct _WHEAP_DPC_ERROR_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEAP_DPC_ERROR_EVENT_TYPE ErrType;
    ULONG Bus;
    ULONG Device;
    ULONG Function;
    USHORT DeviceId;
    USHORT VendorId;
} WHEAP_DPC_ERROR_EVENT, *PWHEAP_DPC_ERROR_EVENT;

typedef enum _PSHED_PI_ERR_READING_PCIE_OVERRIDES {
    PshedPiErrReadingPcieOverridesNoErr = 0,
    PshedPiErrReadingPcieOverridesNoMemory,
    PshedPiErrReadingPcieOverridesQueryErr,
    PshedPiErrReadingPcieOverridesBadSize,
    PshedPiErrReadingPcieOverridesBadSignature,
    PshedPiErrReadingPcieOverridesNoCapOffset,
    PshedPiErrReadingPcieOverridesNotBinary,
} PSHED_PI_ERR_READING_PCIE_OVERRIDES,
    *PPSHED_PI_ERR_READING_PCIE_OVERRIDES;

typedef struct _WHEAP_PCIE_OVERRIDE_INFO {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    UINT32 Segment;
    UINT32 Bus;
    UINT32 Device;
    UINT32 Function;
    UINT8 ValidBits;
    UINT8 Reserved[3];
    UINT32 UncorrectableErrorMask;
    UINT32 UncorrectableErrorSeverity;
    UINT32 CorrectableErrorMask;
    UINT32 CapAndControl;
} WHEAP_PCIE_OVERRIDE_INFO, *PWHEAP_PCIE_OVERRIDE_INFO;

typedef struct _WHEAP_PCIE_READ_OVERRIDES_ERR {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    UINT32 FailureReason;
    NTSTATUS FailureStatus;
} WHEAP_PCIE_READ_OVERRIDES_ERR, *PWHEAP_PCIE_READ_OVERRIDES_ERR;

typedef struct _WHEAP_PCIE_CONFIG_INFO {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    UINT32 Segment;
    UINT32 Bus;
    UINT32 Device;
    UINT32 Function;
    UINT32 Offset;
    UINT32 Length;
    UINT64 Value;
    UINT8 Succeeded;
    UINT8 Reserved[3];
} WHEAP_PCIE_CONFIG_INFO, *PWHEAP_PCIE_CONFIG_INFO;

typedef struct _WHEA_THROTTLE_PCIE_ADD_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_PCIE_ADDRESS Address;
    UINT32 Mask;
    BOOLEAN Updated;
    NTSTATUS Status;
} WHEA_THROTTLE_PCIE_ADD_EVENT, *PWHEA_THROTTLE_PCIE_ADD_EVENT;

typedef struct _WHEA_THROTTLE_MEMORY_ADD_OR_REMOVE_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    UINT32 SocketId;
    UINT32 ChannelId;
    UINT32 DimmSlot;
} WHEA_THROTTLE_MEMORY_ADD_OR_REMOVE_EVENT, *PWHEA_THROTTLE_MEMORY_ADD_OR_REMOVE_EVENT;

typedef struct _WHEA_THROTTLE_PCIE_REMOVE_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_PCIE_ADDRESS Address;
    UINT32 Mask;
} WHEA_THROTTLE_PCIE_REMOVE_EVENT, *PWHEA_THROTTLE_PCIE_REMOVE_EVENT;

typedef enum _WHEA_THROTTLE_TYPE {
    WheaPcieThrottle = 0,
    WheaMemoryThrottle
} WHEA_THROTTLE_TYPE, *PWHEA_THROTTLE_TYPE;

typedef struct _WHEA_THROTTLE_REGISTRY_CORRUPT_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_THROTTLE_TYPE ThrottleType;
} WHEA_THROTTLE_REGISTRY_CORRUPT_EVENT,
    *PWHEA_THROTTLE_REGISTRY_CORRUPT_EVENT;

typedef struct _WHEA_THROTTLE_ADD_ERR_SRC_FAILED_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEA_THROTTLE_ADD_ERR_SRC_FAILED_EVENT,
    *PWHEA_THROTTLE_ADD_ERR_SRC_FAILED_EVENT;

typedef struct _WHEA_THROTTLE_REG_DATA_IGNORED_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    WHEA_THROTTLE_TYPE ThrottleType;
} WHEA_THROTTLE_REG_DATA_IGNORED_EVENT,
    *PWHEA_THROTTLE_REG_DATA_IGNORED_EVENT;

typedef struct _WHEA_REGISTER_KEY_NOTIFICATION_FAILED_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEA_REGISTER_KEY_NOTIFICATION_FAILED_EVENT,
    *PWHEA_REGISTER_KEY_NOTIFICATION_FAILED_EVENT;

typedef struct _WHEA_MEMORY_THROTTLE_SUMMARY_FAILED_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    NTSTATUS Status;
} WHEA_MEMORY_THROTTLE_SUMMARY_FAILED_EVENT,
    *PWHEA_MEMORY_THROTTLE_SUMMARY_FAILED_EVENT;

typedef struct _WHEA_PSHED_PI_CPU_BUSES_INIT_FAILED_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    NTSTATUS Status;
} WHEA_PSHED_PI_CPU_BUSES_INIT_FAILED_EVENT,
    *PWHEA_PSHED_PI_CPU_BUSES_INIT_FAILED_EVENT;

typedef struct _WHEA_PSHED_PI_TRACE_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    CCHAR Buffer[256];
} WHEA_PSHED_PI_TRACE_EVENT, *PWHEA_PSHED_PI_TRACE_EVENT;

typedef struct _WHEA_SRAS_TABLE_NOT_FOUND {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEA_SRAS_TABLE_NOT_FOUND, *PWHEA_SRAS_TABLE_NOT_FOUND;

typedef struct _WHEA_SRAS_TABLE_ERROR {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
} WHEA_SRAS_TABLE_ERROR, *PWHEA_SRAS_TABLE_ERROR;



typedef struct _WHEA_ACPI_HEADER {
  UINT32  Signature;
  UINT32  Length;
  UINT8   Revision;
  UINT8   Checksum;
  UINT8   OemId[6];
  UINT64  OemTableId;
  UINT32  OemRevision;
  UINT32  CreatorId;
  UINT32  CreatorRevision;
} WHEA_ACPI_HEADER, *PWHEA_ACPI_HEADER;

typedef struct _SIGNAL_REG_VALUE {
    UINT8 RegName[32];
    UINT32 MsrAddr;
    UINT64 Value;
} SIGNAL_REG_VALUE, *PSIGNAL_REG_VALUE;

typedef struct _EFI_ACPI_RAS_SIGNAL_TABLE {
    WHEA_ACPI_HEADER Header;
    UINT32 NumberRecord;
    SIGNAL_REG_VALUE Entries[1];
} EFI_ACPI_RAS_SIGNAL_TABLE, *PEFI_ACPI_RAS_SIGNAL_TABLE;

typedef struct _WHEA_SRAS_TABLE_ENTRIES_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    UINT32 LogNumber;
    UINT32 NumberSignals;
    UINT8 Data[1];
} WHEA_SRAS_TABLE_ENTRIES_EVENT, *PWHEA_SRAS_TABLE_ENTRIES_EVENT;

typedef struct _WHEAP_ROW_FAILURE_EVENT {
    WHEA_EVENT_LOG_ENTRY WheaEventLogEntry;
    PFN_NUMBER LowOrderPage;
    PFN_NUMBER HighOrderPage;
} WHEAP_ROW_FAILURE_EVENT, *PWHEAP_ROW_FAILURE_EVENT;


void
WheaInitEventLogEntry (
      PWHEA_EVENT_LOG_ENTRY LogEntry,
      WHEA_EVENT_LOG_ENTRY_TYPE Type,
      WHEA_EVENT_LOG_ENTRY_ID Id,
      WHEA_EVENT_LOG_ENTRY_FLAGS Flags,
      ULONG OwnerTag,
      ULONG PayloadLength
    )
;








typedef union _WHEA_GENERIC_ERROR_BLOCKSTATUS {
    struct {
        ULONG UncorrectableError:1;
        ULONG CorrectableError:1;
        ULONG MultipleUncorrectableErrors:1;
        ULONG MultipleCorrectableErrors:1;
        ULONG ErrorDataEntryCount:10;
        ULONG Reserved:18;
    } ;
    ULONG AsULONG;
} WHEA_GENERIC_ERROR_BLOCKSTATUS, *PWHEA_GENERIC_ERROR_BLOCKSTATUS;

typedef struct _WHEA_GENERIC_ERROR {
    WHEA_GENERIC_ERROR_BLOCKSTATUS BlockStatus;
    ULONG RawDataOffset;
    ULONG RawDataLength;
    ULONG DataLength;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    UCHAR Data[1];
} WHEA_GENERIC_ERROR, *PWHEA_GENERIC_ERROR;

typedef struct _WHEA_GENERIC_ERROR_DATA_ENTRY_V1 {
    GUID SectionType;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    WHEA_REVISION Revision;
    UCHAR ValidBits;
    UCHAR Flags;
    ULONG ErrorDataLength;
    GUID FRUId;
    UCHAR FRUText[20];
    UCHAR Data[1];
} WHEA_GENERIC_ERROR_DATA_ENTRY_V1, *PWHEA_GENERIC_ERROR_DATA_ENTRY_V1;



typedef struct _WHEA_GENERIC_ERROR_DATA_ENTRY_V2 {
    GUID SectionType;
    WHEA_ERROR_SEVERITY ErrorSeverity;
    WHEA_REVISION Revision;
    UCHAR ValidBits;
    UCHAR Flags;
    ULONG ErrorDataLength;
    GUID FRUId;
    UCHAR FRUText[20];
    WHEA_TIMESTAMP Timestamp;
    UCHAR Data[1];
} WHEA_GENERIC_ERROR_DATA_ENTRY_V2, *PWHEA_GENERIC_ERROR_DATA_ENTRY_V2;








typedef struct _WHEA_GENERIC_ERROR_DATA_ENTRY_V2    WHEA_GENERIC_ERROR_DATA_ENTRY, *PWHEA_GENERIC_ERROR_DATA_ENTRY;








































typedef
NTSTATUS
(_WHEA_ERROR_SOURCE_CORRECT)(
      PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
      PULONG MaximumSectionLength
    );

typedef _WHEA_ERROR_SOURCE_CORRECT *WHEA_ERROR_SOURCE_CORRECT;

typedef
NTSTATUS
(_WHEA_ERROR_SOURCE_INITIALIZE)(
      ULONG Phase,
      PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
      PVOID Context
    );

typedef _WHEA_ERROR_SOURCE_INITIALIZE *WHEA_ERROR_SOURCE_INITIALIZE;

typedef
NTSTATUS
(_WHEA_ERROR_SOURCE_CREATE_RECORD)(
      PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
      PWHEA_ERROR_PACKET ErrorPacket,
      PWHEA_ERROR_RECORD ErrorRecord,
      ULONG BufferSize,
      PVOID Context
    );

typedef _WHEA_ERROR_SOURCE_CREATE_RECORD *WHEA_ERROR_SOURCE_CREATE_RECORD;

typedef
NTSTATUS
(_WHEA_ERROR_SOURCE_RECOVER)(
      PVOID RecoveryContext,
      PWHEA_ERROR_SEVERITY Severity
    );

typedef _WHEA_ERROR_SOURCE_RECOVER *WHEA_ERROR_SOURCE_RECOVER;

typedef
void
(_WHEA_ERROR_SOURCE_UNINITIALIZE)(
     PVOID Context
    );

typedef _WHEA_ERROR_SOURCE_UNINITIALIZE *WHEA_ERROR_SOURCE_UNINITIALIZE;

typedef struct _WHEA_ERROR_SOURCE_CONFIGURATION {
    ULONG Flags;
    WHEA_ERROR_SOURCE_CORRECT Correct;
    WHEA_ERROR_SOURCE_INITIALIZE Initialize;
    WHEA_ERROR_SOURCE_CREATE_RECORD CreateRecord;
    WHEA_ERROR_SOURCE_RECOVER Recover;
    WHEA_ERROR_SOURCE_UNINITIALIZE Uninitialize;
    PVOID Reserved;
} WHEA_ERROR_SOURCE_CONFIGURATION, *PWHEA_ERROR_SOURCE_CONFIGURATION;


NTSTATUS
WheaAddErrorSourceDeviceDriver (
      PVOID Context,
      PWHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER Configuration,
      ULONG NumberPreallocatedErrorReports
    );


NTSTATUS
WheaAddErrorSourceDeviceDriverV1 (
      PVOID Context,
      PWHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER Configuration,
      ULONG NumBuffersToPreallocate,
      ULONG MaxDataLength
    );


NTSTATUS
WheaRemoveErrorSourceDeviceDriver (
      ULONG ErrorSourceId
    );

typedef union _WHEA_REPORT_HW_ERROR_DEVICE_DRIVER_FLAGS {
    struct {
        ULONG Reserved : 32;
    } ;

    ULONG AsULONG;
} WHEA_REPORT_HW_ERROR_DEVICE_DRIVER_FLAGS,
  *PWHEA_REPORT_HW_ERROR_DEVICE_DRIVER_FLAGS;



typedef struct _WHEA_PACKET_LOG_DATA {
    UCHAR LogData[36];
    UCHAR ExtraBytes[36];
    ULONG_PTR BcParam3;
    ULONG_PTR BcParam4;
    ULONG LogDataLength;
    USHORT LogTag;
    USHORT Reserved;
    WHEA_REPORT_HW_ERROR_DEVICE_DRIVER_FLAGS Flags;
} WHEA_PACKET_LOG_DATA, *PWHEA_PACKET_LOG_DATA;


NTSTATUS
WheaReportHwErrorDeviceDriver (
      ULONG ErrorSourceId,
      PDEVICE_OBJECT DeviceObject,
      PUCHAR ErrorData,
      ULONG ErrorDataLength,
      LPGUID SectionTypeGuid,
      WHEA_ERROR_SEVERITY ErrorSeverity,
      LPSTR DeviceFriendlyName
    );


WHEA_ERROR_HANDLE
WheaCreateHwErrorReportDeviceDriver (
      ULONG ErrorSourceId,
      PDEVICE_OBJECT DeviceObject
    );


NTSTATUS
WheaAddHwErrorReportSectionDeviceDriver (
      WHEA_ERROR_HANDLE ErrorHandle,
      ULONG SectionDataLength,
      PWHEA_DRIVER_BUFFER_SET BufferSet
    );


NTSTATUS
WheaHwErrorReportAbandonDeviceDriver (
      WHEA_ERROR_HANDLE ErrorHandle
    );


NTSTATUS
WheaHwErrorReportSubmitDeviceDriver (
      WHEA_ERROR_HANDLE ErrorHandle
    );


NTSTATUS
WheaHwErrorReportSetSeverityDeviceDriver (
      WHEA_ERROR_HANDLE ErrorHandle,
      WHEA_ERROR_SEVERITY ErrorSeverity
    );


NTSTATUS
WheaHwErrorReportSetSectionNameDeviceDriver (
      PWHEA_DRIVER_BUFFER_SET BufferSet,
      ULONG NameLength,
      PUCHAR Name
    );



NTSTATUS
WheaReportHwError(
      PWHEA_ERROR_PACKET ErrorPacket
    );


NTSTATUS
WheaAddErrorSource(
      PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource,
      PVOID Context
    );


NTSTATUS
WheaInitializeRecordHeader (
      PWHEA_ERROR_RECORD_HEADER Header
    );


NTSTATUS
WheaConfigureErrorSource (
      WHEA_ERROR_SOURCE_TYPE SourceType,
      PWHEA_ERROR_SOURCE_CONFIGURATION Configuration
    );


NTSTATUS
WheaUnconfigureErrorSource (
      WHEA_ERROR_SOURCE_TYPE SourceType
    );


void
WheaRemoveErrorSource(
      ULONG ErrorSourceId
    );


void
WheaLogInternalEvent (
      PWHEA_EVENT_LOG_ENTRY Entry
    );

WHEA_ERROR_SOURCE_STATE
WheaErrorSourceGetState (
      ULONG ErrorSourceId
    );



BOOLEAN
WheaIsCriticalState (
    void
    );

typedef
BOOLEAN
(_WHEA_SIGNAL_HANDLER_OVERRIDE_CALLBACK)(
     UINT_PTR Context
   );

typedef _WHEA_SIGNAL_HANDLER_OVERRIDE_CALLBACK  
    *WHEA_SIGNAL_HANDLER_OVERRIDE_CALLBACK;








typedef struct _WHEA_ERROR_SOURCE_OVERRIDE_SETTINGS {
    WHEA_ERROR_SOURCE_TYPE Type;
    ULONG MaxRawDataLength;
    ULONG NumRecordsToPreallocate;
    ULONG MaxSectionsPerRecord;
} WHEA_ERROR_SOURCE_OVERRIDE_SETTINGS, *PWHEA_ERROR_SOURCE_OVERRIDE_SETTINGS;

BOOLEAN
WheaSignalHandlerOverride (
      WHEA_ERROR_SOURCE_TYPE SourceType,
      UINT_PTR Context
    );

void
WheaUnregisterErrorSourceOverride (
      WHEA_ERROR_SOURCE_TYPE Type,
      ULONG32 OverrideErrorSourceId
    );

NTSTATUS
WheaRegisterErrorSourceOverride (
      WHEA_ERROR_SOURCE_OVERRIDE_SETTINGS OverrideSettings,
      PWHEA_ERROR_SOURCE_CONFIGURATION OverrideConfig,
      WHEA_SIGNAL_HANDLER_OVERRIDE_CALLBACK OverrideCallback
    );


typedef
NTSTATUS
(*PFN_WHEA_HIGH_IRQL_LOG_SEL_EVENT_HANDLER) (
      PVOID Context,
      PIPMI_OS_SEL_RECORD OsSelRecord
    );


BOOLEAN
WheaHighIrqlLogSelEventHandlerRegister (
       PFN_WHEA_HIGH_IRQL_LOG_SEL_EVENT_HANDLER Handler,
      PVOID Context
    );


void
WheaHighIrqlLogSelEventHandlerUnregister (
    void
    );



 
__inline
PWHEA_ERROR_PACKET
WheaGetErrPacketFromErrRecord (
      PWHEA_ERROR_RECORD Record
    )




















{

    PWHEA_ERROR_PACKET Packet;
    PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR Descriptor;
    ULONG Section;
    ULONG SizeRequired;

    Packet = ((void *)0);
    if (Record->Header.Signature != 'REPC') {
        goto GetErrPacketFromErrRecordEnd;
    }

    
    
    
    
    

    SizeRequired = sizeof(WHEA_ERROR_RECORD_HEADER) +
        (sizeof(WHEA_ERROR_RECORD_SECTION_DESCRIPTOR) *
         Record->Header.SectionCount);

    if (Record->Header.Length < SizeRequired) {
        goto GetErrPacketFromErrRecordEnd;
    }

    
    
    
    
    

    Descriptor = &Record->SectionDescriptor[0];
    for (Section = 0; Section < Record->Header.SectionCount; Section += 1) {

        if (RtlCompareMemory(&Descriptor->SectionType,
                             &WHEA_ERROR_PACKET_SECTION_GUID,
                             sizeof(GUID)) == sizeof(GUID)) {

                SizeRequired = Descriptor->SectionOffset +
                    Descriptor->SectionLength;

                if (Record->Header.Length < SizeRequired) {
                    goto GetErrPacketFromErrRecordEnd;
                }

                Packet = (PWHEA_ERROR_PACKET)
                    (((PUCHAR)Record) + Descriptor->SectionOffset);

                if (Packet->Signature != 'AEHW') {
                    Packet = ((void *)0);
                }

                goto GetErrPacketFromErrRecordEnd;
        }

        Descriptor += 1;
    }

GetErrPacketFromErrRecordEnd:
    return Packet;
}








typedef union _WHEA_ERROR_INJECTION_CAPABILITIES {
    struct {
        ULONG ProcessorCorrectable:1;                   
        ULONG ProcessorUncorrectableNonFatal:1;         
        ULONG ProcessorUncorrectableFatal:1;            
        ULONG MemoryCorrectable:1;                      
        ULONG MemoryUncorrectableNonFatal:1;            
        ULONG MemoryUncorrectableFatal:1;               
        ULONG PCIExpressCorrectable:1;                  
        ULONG PCIExpressUncorrectableNonFatal:1;        
        ULONG PCIExpressUncorrectableFatal:1;           
        ULONG PlatformCorrectable:1;                    
        ULONG PlatformUncorrectableNonFatal:1;          
        ULONG PlatformUncorrectableFatal:1;             
        ULONG IA64Corrected:1;                          
        ULONG IA64Recoverable:1;                        
        ULONG IA64Fatal:1;                              
        ULONG IA64RecoverableCache:1;                   
        ULONG IA64RecoverableRegFile:1;                 
        ULONG Reserved:15;
    } ;
    ULONG AsULONG;
} WHEA_ERROR_INJECTION_CAPABILITIES, *PWHEA_ERROR_INJECTION_CAPABILITIES;
















typedef
BOOLEAN
(*PFN_IN_USE_PAGE_OFFLINE_NOTIFY) (
      PFN_NUMBER Page,
      BOOLEAN Flags,
      BOOLEAN Poisoned,
      PVOID Context
    );


NTSTATUS
WheaRegisterInUsePageOfflineNotification (
      PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback,
      PVOID Context
    );


NTSTATUS
WheaUnregisterInUsePageOfflineNotification (
      PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback
    );


BOOLEAN
WheaGetNotifyAllOfflinesPolicy (
    void
    );





typedef union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS {
    struct {
        UCHAR PlatformDirected : 1;
        UCHAR Reserved : 5;
        UCHAR NotifyAllOfflines: 1;
        UCHAR PageOfflined : 1;
    } Bits;

    UINT8 AsUCHAR;
} WHEA_IN_USE_PAGE_NOTIFY_FLAGS, *PWHEA_IN_USE_PAGE_NOTIFY_FLAGS;

typedef enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE {
    WheaRecoveryContextErrorTypeMemory = 1,
    WheaRecoveryContextErrorTypePmem,
    WheaRecoveryContextErrorTypeMax

    union {
        struct {