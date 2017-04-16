#pragma once
#include "stdafx.h"
#include <winioctl.h>

namespace ArkProtect 
{
#define LINK_NAME    L"\\??\\ArkProtectLinkName"

#define DRIVER_SERVICE_NAME		L"ArkProtectDrv"    // 开启的服务名

/*
#define FILE_DEVICE_ARKPROTECT           0x8005

#define IOCTL_ARKPROTECT_PROCESSNUM        (UINT32)CTL_CODE(FILE_DEVICE_ARKPROTECT, 0x801, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ARKPROTECT_ENUMPROCESS       (UINT32)CTL_CODE(FILE_DEVICE_ARKPROTECT, 0x802, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ARKPROTECT_ENUMPROCESSMODULE (UINT32)CTL_CODE(FILE_DEVICE_ARKPROTECT, 0x803, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
*/


#define IOCTL_ARKPROTECT_PROCESSNUM        (UINT32)CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ARKPROTECT_ENUMPROCESS       (UINT32)CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ARKPROTECT_ENUMPROCESSMODULE (UINT32)CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

	//////////////////////////////////////////////////////////////////////////
	// 子窗体相关
	enum eChildDlg
	{
		cd_ProcessDialog,      // 进程模块对话框
		cd_DriverDialog,       // 驱动模块对话框
		cd_KernelDialog,       // 内核模块对话框
		cd_HookDialog,         // 内核钩子对话框
		cd_AboutDialog         // 关于信息对话框
	};

	// 状态栏
	enum eStatusBar
	{
		sb_Tip = WM_USER + 0x101,
		sb_Detail = WM_USER + 0x102
	};

	// PE文件位数
	enum ePeBit
	{
		pb_32,
		pb_64,
		pb_Unknown
	};

	enum eProcessInfoKind
	{
		pik_Module,
		pik_Thread,
		pik_Handle,
		pik_Window,
		pik_Memory
	};

	//////////////////////////////////////////////////////////////////////////
	// ListCtrl的列表结构
	typedef struct _COLUMN_STRUCT
	{
		WCHAR*	wzTitle;
		UINT	nWidth;
	} COLUMN_STRUCT;

	


}



