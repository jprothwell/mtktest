/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/ddk/cfg.h,v 1.1 2007/05/17 07:25:37 bw Exp $
*
* $Id: cfg.h,v 1.1 2007/05/17 07:25:37 bw Exp $
*
* $Date: 2007/05/17 07:25:37 $
*
* $Name: 1.1 $
*
* $Locker$
*
* $Revision: 1.1 $
*
* $State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* $Log: cfg.h,v $
* Revision 1.1  2007/05/17 07:25:37  bw
* UNI@bw_20070517 15:10:01 MTK U25 U26 06B V30 version
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2007
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/ddk/cfg.h,v 1.1 2007/05/14 09:47:01 bw Exp $
*
* ~Id: cfg.h,v 1.1 2007/05/14 09:47:01 bw Exp $
*
* ~Date: 2007/05/14 09:47:01 $
*
* ~Name: 1.1 $
*
* ~Locker$
*
* ~Revision: 1.1 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: cfg.h,v $
* Revision 1.1  2007/05/14 09:47:01  bw
* UNI@bw_20070514 17:21:01 MTK��ʼ�汾.�ϲ�U25V20��U26V28.
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/ddk/cfg.h,v 1.2 2007/04/04 06:51:38 bw Exp $
*
* ~Id: cfg.h,v 1.2 2007/04/04 06:51:38 bw Exp $
*
* ~Date: 2007/04/04 06:51:38 $
*
* ~Name: 1.2 $
*
* ~Locker$
*
* ~Revision: 1.2 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: cfg.h,v $
* Revision 1.2  2007/04/04 06:51:38  bw
* ����.c.h�ļ�ͷģ��
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

/*
 * cfg.h
 *
 * PnP Configuration Manager shared definitions between user mode and kernel mode code
 *
 * This file is part of the w32api package.
 *
 * Contributors:
 *   Created by Casper S. Hornstrup <chorns@users.sourceforge.net>
 *
 * THIS SOFTWARE IS NOT COPYRIGHTED
 *
 * This source code is offered for use in the public domain. You may
 * use, modify or distribute it freely.
 *
 * This code is distributed in the hope that it will be useful but
 * WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 * DISCLAIMED. This includes but is not limited to warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#ifndef __CFG_H
#define __CFG_H

#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack(push,4)

#define CM_PROB_NOT_CONFIGURED		  				0x00000001
#define CM_PROB_DEVLOADER_FAILED            0x00000002
#define CM_PROB_OUT_OF_MEMORY               0x00000003
#define CM_PROB_ENTRY_IS_WRONG_TYPE         0x00000004
#define CM_PROB_LACKED_ARBITRATOR           0x00000005
#define CM_PROB_BOOT_CONFIG_CONFLICT        0x00000006
#define CM_PROB_FAILED_FILTER               0x00000007
#define CM_PROB_DEVLOADER_NOT_FOUND         0x00000008
#define CM_PROB_INVALID_DATA                0x00000009
#define CM_PROB_FAILED_START                0x0000000A
#define CM_PROB_LIAR                        0x0000000B
#define CM_PROB_NORMAL_CONFLICT             0x0000000C
#define CM_PROB_NOT_VERIFIED                0x0000000D
#define CM_PROB_NEED_RESTART                0x0000000E
#define CM_PROB_REENUMERATION               0x0000000F
#define CM_PROB_PARTIAL_LOG_CONF            0x00000010
#define CM_PROB_UNKNOWN_RESOURCE            0x00000011
#define CM_PROB_REINSTALL                   0x00000012
#define CM_PROB_REGISTRY                    0x00000013
#define CM_PROB_VXDLDR                      0x00000014
#define CM_PROB_WILL_BE_REMOVED             0x00000015
#define CM_PROB_DISABLED                    0x00000016
#define CM_PROB_DEVLOADER_NOT_READY         0x00000017
#define CM_PROB_DEVICE_NOT_THERE            0x00000018
#define CM_PROB_MOVED                       0x00000019
#define CM_PROB_TOO_EARLY                   0x0000001A
#define CM_PROB_NO_VALID_LOG_CONF           0x0000001B
#define CM_PROB_FAILED_INSTALL              0x0000001C
#define CM_PROB_HARDWARE_DISABLED           0x0000001D
#define CM_PROB_CANT_SHARE_IRQ              0x0000001E
#define CM_PROB_FAILED_ADD                  0x0000001F
#define CM_PROB_DISABLED_SERVICE          	0x00000020
#define CM_PROB_TRANSLATION_FAILED        	0x00000021
#define CM_PROB_NO_SOFTCONFIG             	0x00000022
#define CM_PROB_BIOS_TABLE                	0x00000023
#define CM_PROB_IRQ_TRANSLATION_FAILED    	0x00000024
#define CM_PROB_FAILED_DRIVER_ENTRY       	0x00000025
#define CM_PROB_DRIVER_FAILED_PRIOR_UNLOAD	0x00000026
#define CM_PROB_DRIVER_FAILED_LOAD          0x00000027
#define CM_PROB_DRIVER_SERVICE_KEY_INVALID  0x00000028
#define CM_PROB_LEGACY_SERVICE_NO_DEVICES   0x00000029
#define CM_PROB_DUPLICATE_DEVICE            0x0000002A
#define CM_PROB_FAILED_POST_START           0x0000002B
#define CM_PROB_HALTED                      0x0000002C
#define CM_PROB_PHANTOM                     0x0000002D
#define CM_PROB_SYSTEM_SHUTDOWN             0x0000002E
#define CM_PROB_HELD_FOR_EJECT              0x0000002F
#define CM_PROB_DRIVER_BLOCKED              0x00000030
#define CM_PROB_REGISTRY_TOO_LARGE        	0x00000031

#define LCPRI_FORCECONFIG                 0x00000000
#define LCPRI_BOOTCONFIG                  0x00000001
#define LCPRI_DESIRED                     0x00002000
#define LCPRI_NORMAL                      0x00003000
#define LCPRI_LASTBESTCONFIG              0x00003FFF
#define LCPRI_SUBOPTIMAL                  0x00005000
#define LCPRI_LASTSOFTCONFIG              0x00007FFF
#define LCPRI_RESTART                     0x00008000
#define LCPRI_REBOOT                      0x00009000
#define LCPRI_POWEROFF                    0x0000A000
#define LCPRI_HARDRECONFIG                0x0000C000
#define LCPRI_HARDWIRED                   0x0000E000
#define LCPRI_IMPOSSIBLE                  0x0000F000
#define LCPRI_DISABLED                    0x0000FFFF
#define MAX_LCPRI                         0x0000FFFF

typedef enum _PNP_VETO_TYPE {
  PNP_VetoTypeUnknown,
  PNP_VetoLegacyDevice,
  PNP_VetoPendingClose,
  PNP_VetoWindowsApp,
  PNP_VetoWindowsService,
  PNP_VetoOutstandingOpen,
  PNP_VetoDevice,
  PNP_VetoDriver,
  PNP_VetoIllegalDeviceRequest,
  PNP_VetoInsufficientPower,
  PNP_VetoNonDisableable,
  PNP_VetoLegacyDriver
} PNP_VETO_TYPE, *PPNP_VETO_TYPE;

#pragma pack(pop)

#ifdef __cplusplus
}
#endif

#endif /* __CFG_H */