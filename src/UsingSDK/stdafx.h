
#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS     

#define _AFX_ALL_WARNINGS

#include <afxwin.h>         
#include <afxext.h>        


#include <afxdisp.h>     



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>          
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>            
#endif 

#include <afxcontrolbars.h>    









#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


#include "../ofetapi/ofetapi.h"
#include "../FileEvent/FileEvent.h"
#include "../ofetctrl/ofetctrl.h"


#endif