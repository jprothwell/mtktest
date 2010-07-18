/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
* Filename:
* ---------
*  FMRadioDef.h
*
* Project:
* --------
*   MAUI
*
* Description:
* ------------
*   FM Radio id, const & macro definition
*
* Author:
* -------
*  Tim Chen
*
*==============================================================================
*           HISTORY
* Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * $Log$
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 *------------------------------------------------------------------------------
* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
*==============================================================================
*******************************************************************************/
#ifndef _FM_RADIO_RESDEF_H
#define _FM_RADIO_RESDEF_H

#include "MMI_features.h"

#ifdef __MMI_FM_RADIO__

#include "MMIDataType.h"    /* for resource base */

typedef enum
{
    STR_ID_FMRDO_BASE = FM_RADIO_BASE + 1,
    STR_ID_FMRDO_TITLE,
    STR_ID_FMRDO_CHANNEL_LIST,
    STR_ID_FMRDO_MANUAL_INPUT,
    STR_ID_FMRDO_PRESET_AUTO_SEARCH,
    STR_ID_FMRDO_SETTINGS,
    STR_ID_FMRDO_BACKGROUND_PLAY,
    STR_ID_FMRDO_SKIN,
    STR_ID_FMRDO_SKIN_1,
    STR_ID_FMRDO_SKIN_2,
    STR_ID_FMRDO_SKIN_3,
    STR_ID_FMRDO_PLAY,
    STR_ID_FMRDO_EDIT,
    STR_ID_FMRDO_EMPTY,
    STR_ID_FMRDO_PRESET_LIST,
    STR_ID_FMRDO_SEARCHING,
    STR_ID_FMRDO_CHANNEL_NAME,
    STR_ID_FMRDO_FREQUENCY,
    STR_ID_FMRDO_VALID_FM_BANDWIDTH,
    STR_ID_FMRDO_VALID_FM_DECIMAL,
    STR_ID_FMRDO_NEW_CHANNEL,
    STR_ID_FMRDO_POWER_ON_FIRST,
    STR_ID_FMRDO_STOP_AUDIO_PLAYER,
#ifdef __MMI_FM_RADIO_BIND_EARPHONE__
    STR_ID_FMRDO_PLEASE_PLUG_IN_EARPHONE,
#endif 
    STR_ID_FMRDO_LOUD_SPEAKER,
#if defined(__MMI_FM_RADIO_RECORD__)
    STR_ID_FMRDO_RECORD,
    STR_ID_FMRDO_APPEND,
    STR_ID_FMRDO_PAUSE,
    STR_ID_FMRDO_STOP,
    STR_ID_FMRDO_RESUME,
    STR_ID_FMRDO_FILE_LIST,
    STR_ID_FMRDO_RECORD_FORMAT,
    STR_ID_FMRDO_RECORD_QUALITY,
    STR_ID_FMRDO_RECORD_QUALITY_LOW,
    STR_ID_FMRDO_RECORD_QUALITY_HIGH,
    STR_ID_FMRDO_RECORD_STORAGE,
    STR_ID_FMRDO_FORMAT_AMR,
    STR_ID_FMRDO_FORMAT_WAV,
	STR_ID_FMRDO_FORMAT_AWB,
    STR_ID_FMRDO_BAD_FORMAT,
    STR_ID_FMRDO_INVALID_FORMAT,
    STR_ID_FMRDO_DEVICE_BUSY,
    STR_ID_FMRDO_OPEN_FILE_ERROR,
    STR_ID_FMRDO_NO_CARD,
    STR_ID_FMRDO_WRITE_PROTECTION_ERROR,
    STR_ID_FMRDO_RECORD_IN_BT_SCO,
#endif /* defined(__MMI_FM_RADIO_RECORD__) */ 
#ifdef __MMI_FM_RADIO_ON_SUBLCD__
    STR_ID_FM_RADIO_ON_SUBLCD_MODE_SELECT,
    STR_ID_FM_RADIO_ON_SUBLCD_STEP_MODE,
    STR_ID_FM_RADIO_ON_SUBLCD_CHANNEL_MODE,
    STR_ID_FM_RADIO_ON_SUBLCD_SEARCH_MODE,
    STR_ID_FM_RADIO_ON_SUBLCD_BACK_TO_MAINMENU,
    STR_ID_FM_RADIO_ON_SUBLCD_CHANNEL_NAME_CH,
    STR_ID_FM_RADIO_ON_SUBLCD_CHANNEL_NAME_RADIO,
    STR_ID_FM_RADIO_ON_SUBLCD_CHANNEL_NAME_SEARCH,
#endif /*__MMI_FM_RADIO_ON_SUBLCD__*/
    STR_ID_FMRDO_SAVE_ASK,
    STR_ID_FMRDO_DELETE_ASK,
    STR_ID_FMRDO_CANCEL_ASK,
    NO_OF_STR_ID_FMRDO
} FMRDO_STR_ID_Enum;

typedef enum
{
    IMG_ID_FMRDO_BASE = FM_RADIO_BASE + 1,
    IMG_ID_FMRDO_APP,
    IMG_ID_FMRDO_BACKGROUND_PLAY,
    IMG_ID_FMRDO_SKIN,
    IMG_ID_FMRDO_LOUDSPEAK,    
    IMG_ID_FMRDO_CHANNEL_NAME,
    IMG_ID_FMRDO_FREQUENCY,
#if defined(__MMI_FM_RADIO_RECORD__)
    IMG_ID_FMRDO_RECORD_FORMAT,
    IMG_ID_FMRDO_RECORD_QUALITY,
    IMG_ID_FMRDO_RECORD_STORAGE,
#endif /* defined(__MMI_FM_RADIO_RECORD__) */ 
    /* skin 1 */
    IMG_ID_FMRDO_SKIN_1_BACKGROUND,
    IMG_ID_FMRDO_SKIN_1_VOLUME,
    IMG_ID_FMRDO_SKIN_1_TUNER_SCALE,
    IMG_ID_FMRDO_SKIN_1_TUNER_SCALE_INDICATOR,
    IMG_ID_FMRDO_SKIN_1_POWER_BUTTON_ON_UP,
    IMG_ID_FMRDO_SKIN_1_POWER_BUTTON_ON_DOWN,
    IMG_ID_FMRDO_SKIN_1_POWER_BUTTON_OFF_UP,
    IMG_ID_FMRDO_SKIN_1_POWER_BUTTON_OFF_DOWN,
    IMG_ID_FMRDO_SKIN_1_SEARCH_BUTTON_ON_UP,
    IMG_ID_FMRDO_SKIN_1_SEARCH_BUTTON_ON_DOWN,
    IMG_ID_FMRDO_SKIN_1_SEARCH_BUTTON_OFF_UP,
    IMG_ID_FMRDO_SKIN_1_SEARCH_BUTTON_OFF_DOWN,
    IMG_ID_FMRDO_SKIN_1_STEP_UP_BUTTON_UP,
    IMG_ID_FMRDO_SKIN_1_STEP_UP_BUTTON_DOWN,
    IMG_ID_FMRDO_SKIN_1_STEP_DOWN_BUTTON_UP,
    IMG_ID_FMRDO_SKIN_1_STEP_DOWN_BUTTON_DOWN,
#ifdef __MMI_FM_RADIO_ANIMATION__
    IMG_ID_FMRDO_SKIN_1_ANIMATION,
#endif 
#ifdef __MMI_TOUCH_SCREEN__
    IMG_ID_FMRDO_SKIN_1_VOLUME_INC_UP,
    IMG_ID_FMRDO_SKIN_1_VOLUME_INC_DOWN,
    IMG_ID_FMRDO_SKIN_1_VOLUME_DEC_UP,
    IMG_ID_FMRDO_SKIN_1_VOLUME_DEC_DOWN,
    IMG_ID_FMRDO_SKIN_1_SETTING_UP,
    IMG_ID_FMRDO_SKIN_1_SETTING_DOWN,
#endif /* __MMI_TOUCH_SCREEN__ */ 
#if defined(__MMI_FM_RADIO_RECORD__)
    IMG_ID_FMRDO_SKIN_1_REC,
    IMG_ID_FMRDO_SKIN_1_REC_PAUSE,
    IMG_ID_FMRDO_SKIN_1_NUM_0,
    IMG_ID_FMRDO_SKIN_1_NUM_1,
    IMG_ID_FMRDO_SKIN_1_NUM_2,
    IMG_ID_FMRDO_SKIN_1_NUM_3,
    IMG_ID_FMRDO_SKIN_1_NUM_4,
    IMG_ID_FMRDO_SKIN_1_NUM_5,
    IMG_ID_FMRDO_SKIN_1_NUM_6,
    IMG_ID_FMRDO_SKIN_1_NUM_7,
    IMG_ID_FMRDO_SKIN_1_NUM_8,
    IMG_ID_FMRDO_SKIN_1_NUM_9,
    IMG_ID_FMRDO_SKIN_1_NUM_COL,
#endif /* defined(__MMI_FM_RADIO_RECORD__) */ 
    /* skin 2 */
    IMG_ID_FMRDO_SKIN_2_BACKGROUND,
    IMG_ID_FMRDO_SKIN_2_VOLUME,
    IMG_ID_FMRDO_SKIN_2_TUNER_SCALE,
    IMG_ID_FMRDO_SKIN_2_TUNER_SCALE_INDICATOR,
    IMG_ID_FMRDO_SKIN_2_POWER_BUTTON_ON_UP,
    IMG_ID_FMRDO_SKIN_2_POWER_BUTTON_ON_DOWN,
    IMG_ID_FMRDO_SKIN_2_POWER_BUTTON_OFF_UP,
    IMG_ID_FMRDO_SKIN_2_POWER_BUTTON_OFF_DOWN,
    IMG_ID_FMRDO_SKIN_2_SEARCH_BUTTON_ON_UP,
    IMG_ID_FMRDO_SKIN_2_SEARCH_BUTTON_ON_DOWN,
    IMG_ID_FMRDO_SKIN_2_SEARCH_BUTTON_OFF_UP,
    IMG_ID_FMRDO_SKIN_2_SEARCH_BUTTON_OFF_DOWN,
    IMG_ID_FMRDO_SKIN_2_STEP_UP_BUTTON_UP,
    IMG_ID_FMRDO_SKIN_2_STEP_UP_BUTTON_DOWN,
    IMG_ID_FMRDO_SKIN_2_STEP_DOWN_BUTTON_UP,
    IMG_ID_FMRDO_SKIN_2_STEP_DOWN_BUTTON_DOWN,
#ifdef __MMI_FM_RADIO_ANIMATION__
    IMG_ID_FMRDO_SKIN_2_ANIMATION,
#endif 
#ifdef __MMI_TOUCH_SCREEN__
    IMG_ID_FMRDO_SKIN_2_VOLUME_INC_UP,
    IMG_ID_FMRDO_SKIN_2_VOLUME_INC_DOWN,
    IMG_ID_FMRDO_SKIN_2_VOLUME_DEC_UP,
    IMG_ID_FMRDO_SKIN_2_VOLUME_DEC_DOWN,
    IMG_ID_FMRDO_SKIN_2_SETTING_UP,
    IMG_ID_FMRDO_SKIN_2_SETTING_DOWN,
#endif /* __MMI_TOUCH_SCREEN__ */ 
#if defined(__MMI_FM_RADIO_RECORD__)
    IMG_ID_FMRDO_SKIN_2_REC,
    IMG_ID_FMRDO_SKIN_2_REC_PAUSE,
    IMG_ID_FMRDO_SKIN_2_NUM_0,
    IMG_ID_FMRDO_SKIN_2_NUM_1,
    IMG_ID_FMRDO_SKIN_2_NUM_2,
    IMG_ID_FMRDO_SKIN_2_NUM_3,
    IMG_ID_FMRDO_SKIN_2_NUM_4,
    IMG_ID_FMRDO_SKIN_2_NUM_5,
    IMG_ID_FMRDO_SKIN_2_NUM_6,
    IMG_ID_FMRDO_SKIN_2_NUM_7,
    IMG_ID_FMRDO_SKIN_2_NUM_8,
    IMG_ID_FMRDO_SKIN_2_NUM_9,
    IMG_ID_FMRDO_SKIN_2_NUM_COL,
#endif /* defined(__MMI_FM_RADIO_RECORD__) */ 
    /* skin 3 */
    IMG_ID_FMRDO_SKIN_3_BACKGROUND,
    IMG_ID_FMRDO_SKIN_3_VOLUME,
    IMG_ID_FMRDO_SKIN_3_TUNER_SCALE,
    IMG_ID_FMRDO_SKIN_3_TUNER_SCALE_INDICATOR,
    IMG_ID_FMRDO_SKIN_3_POWER_BUTTON_ON_UP,
    IMG_ID_FMRDO_SKIN_3_POWER_BUTTON_ON_DOWN,
    IMG_ID_FMRDO_SKIN_3_POWER_BUTTON_OFF_UP,
    IMG_ID_FMRDO_SKIN_3_POWER_BUTTON_OFF_DOWN,
    IMG_ID_FMRDO_SKIN_3_SEARCH_BUTTON_ON_UP,
    IMG_ID_FMRDO_SKIN_3_SEARCH_BUTTON_ON_DOWN,
    IMG_ID_FMRDO_SKIN_3_SEARCH_BUTTON_OFF_UP,
    IMG_ID_FMRDO_SKIN_3_SEARCH_BUTTON_OFF_DOWN,
    IMG_ID_FMRDO_SKIN_3_STEP_UP_BUTTON_UP,
    IMG_ID_FMRDO_SKIN_3_STEP_UP_BUTTON_DOWN,
    IMG_ID_FMRDO_SKIN_3_STEP_DOWN_BUTTON_UP,
    IMG_ID_FMRDO_SKIN_3_STEP_DOWN_BUTTON_DOWN,
#ifdef __MMI_FM_RADIO_ANIMATION__
    IMG_ID_FMRDO_SKIN_3_ANIMATION,
#endif 
#ifdef __MMI_TOUCH_SCREEN__
    IMG_ID_FMRDO_SKIN_3_VOLUME_INC_UP,
    IMG_ID_FMRDO_SKIN_3_VOLUME_INC_DOWN,
    IMG_ID_FMRDO_SKIN_3_VOLUME_DEC_UP,
    IMG_ID_FMRDO_SKIN_3_VOLUME_DEC_DOWN,
    IMG_ID_FMRDO_SKIN_3_SETTING_UP,
    IMG_ID_FMRDO_SKIN_3_SETTING_DOWN,
#endif /* __MMI_TOUCH_SCREEN__ */ 
#if defined(__MMI_FM_RADIO_RECORD__)
    IMG_ID_FMRDO_SKIN_3_REC,
    IMG_ID_FMRDO_SKIN_3_REC_PAUSE,
    IMG_ID_FMRDO_SKIN_3_NUM_0,
    IMG_ID_FMRDO_SKIN_3_NUM_1,
    IMG_ID_FMRDO_SKIN_3_NUM_2,
    IMG_ID_FMRDO_SKIN_3_NUM_3,
    IMG_ID_FMRDO_SKIN_3_NUM_4,
    IMG_ID_FMRDO_SKIN_3_NUM_5,
    IMG_ID_FMRDO_SKIN_3_NUM_6,
    IMG_ID_FMRDO_SKIN_3_NUM_7,
    IMG_ID_FMRDO_SKIN_3_NUM_8,
    IMG_ID_FMRDO_SKIN_3_NUM_9,
    IMG_ID_FMRDO_SKIN_3_NUM_COL,
#endif /* defined(__MMI_FM_RADIO_RECORD__) */ 
    NO_OF_IMG_ID_FMRDO
} FMRDO_IMD_ID_Enum;

#ifdef __MMI_FM_RADIO_ON_SUBLCD__
typedef enum   
{
    IMG_ID_FMRDO_SUB_BASE = NO_OF_IMG_ID_FMRDO + 1,
    IMG_ID_FMRDO_SUB_SKIN_BACKGROUND,
    IMG_ID_FMRDO_SUB_SKIN_VOLUME,
    IMG_ID_FMRDO_SUB_SKIN_TUNER_SCALE,
    IMG_ID_FMRDO_SUB_SKIN_TUNER_SCALE_INDICATOR,
    IMG_ID_FMRDO_SUB_SKIN_POWER_BUTTON_ON_UP,
    IMG_ID_FMRDO_SUB_SKIN_POWER_BUTTON_ON_DOWN,
    IMG_ID_FMRDO_SUB_SKIN_POWER_BUTTON_OFF_UP,
    IMG_ID_FMRDO_SUB_SKIN_POWER_BUTTON_OFF_DOWN,
    IMG_ID_FMRDO_SUB_SKIN_SEARCH_BUTTON_ON_UP,
    IMG_ID_FMRDO_SUB_SKIN_SEARCH_BUTTON_ON_DOWN,
    IMG_ID_FMRDO_SUB_SKIN_SEARCH_BUTTON_OFF_UP,
    IMG_ID_FMRDO_SUB_SKIN_SEARCH_BUTTON_OFF_DOWN,
    IMG_ID_FMRDO_SUB_SKIN_STEP_UP_BUTTON_UP,
    IMG_ID_FMRDO_SUB_SKIN_STEP_UP_BUTTON_DOWN,
    IMG_ID_FMRDO_SUB_SKIN_STEP_DOWN_BUTTON_UP,
    IMG_ID_FMRDO_SUB_SKIN_STEP_DOWN_BUTTON_DOWN,
    NO_OF_IMG_ID_FMRDO_SUB   
    }fmrdo_sub_img_id_enum;
#endif /*__MMI_FM_RADIO_ON_SUBLCD__ */
typedef enum
{
    SCR_ID_FMRDO_BASE = FM_RADIO_BASE + 1,
    SCR_ID_FMRDO_MAIN,
    SCR_ID_FMRDO_MAIN_OPTION,
    SCR_ID_FMRDO_CHANNEL_LIST,
    SCR_ID_FMRDO_MANUAL_INPUT,
    SCR_ID_FMRDO_PRESET_LIST_CONFIRM,
    SCR_ID_FMRDO_SETTINGS,
    SCR_ID_FMRDO_CHANNEL_OPTION,
    SCR_ID_FMRDO_SEARCHING,
    SCR_ID_FMRDO_CHANNEL_EDIT,
    SCR_ID_FMRDO_CHANNEL_NAME_EDIT,
    SCR_ID_FMRDO_CHANNEL_NAME_EDIT_OPTION,
    SCR_ID_FMRDO_CLEAR_CHANNEL_CONFIRM,
    SCR_ID_FMRDO_SAVE_CHANNEL_CONFIRM,
    SCR_ID_FMRDO_EDIT_FILENAME,
    SCR_ID_FMRDO_EDIT_FILENAME_OPTIONS,
    SCR_ID_FMRDO_SUBLCD_MAIN,
    SCR_ID_FMRDO_SUBLCD_OPTION,
    SCR_ID_FMRDO_SUBLCD_SEARCHING,
    NO_OF_SCR_ID_FMRDO
} FMRDO_SCR_ID_Enum;


#endif /* __MMI_FM_RADIO__ */ 
#endif /* _FM_RADIO_RESDEF_H */ 
