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
/*****************************************************************************
*
 * Filename:
 * ---------
 * SnakeDefs.h
  *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *   Snake Game ID declare
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef GAME_SNAKE_DEFS_H
#define GAME_SNAKE_DEFS_H

/* String ID */
typedef enum
{
    STR_GX_SNAKE_GAME_NAME = GAME_SNAKE_BASE + 1,
    STR_GX_SNAKE_EASY,
    STR_GX_SNAKE_NORMAL,
    STR_GX_SNAKE_HARD,
    STR_GX_SNAKE_HELP_DESCRIPTION
} SNAKE_STR_IDS;

/* Image ID */
typedef enum
{
    IMG_GX_SNAKE_GAME_ICON = GAME_SNAKE_BASE + 1,
    /* snake head image */
    IMG_GX_SNAKE_SNAKE_HEAD_UP,
    IMG_GX_SNAKE_SNAKE_HEAD_DOWN,
    IMG_GX_SNAKE_SNAKE_HEAD_RIGHT,
    IMG_GX_SNAKE_SNAKE_HEAD_LEFT,
    /* snake body image */
    IMG_GX_SNAKE_SNAKE_BODY_UP_DOWN,
    IMG_GX_SNAKE_SNAKE_BODY_RIGHT_LEFT,
    IMG_GX_SNAKE_SNAKE_BODY_UP_RIGHT,
    IMG_GX_SNAKE_SNAKE_BODY_UP_LEFT,
    IMG_GX_SNAKE_SNAKE_BODY_DOWN_RIGHT,
    IMG_GX_SNAKE_SNAKE_BODY_DOWN_LEFT,
    /* snake tail image */
    IMG_GX_SNAKE_SNAKE_TAIL_UP,
    IMG_GX_SNAKE_SNAKE_TAIL_DOWN,
    IMG_GX_SNAKE_SNAKE_TAIL_RIGHT,
    IMG_GX_SNAKE_SNAKE_TAIL_LEFT,
    /* egg */
    IMG_GX_SNAKE_EGG,
    IMG_GX_SNAKE_EGG_NEXT_STAGE,
    /* wall */
    IMG_GX_SNAKE_WALL,
    /* Number */
    IMG_GX_SNAKE_NUMBER_0,
    IMG_GX_SNAKE_NUMBER_1,
    IMG_GX_SNAKE_NUMBER_2,
    IMG_GX_SNAKE_NUMBER_3,
    IMG_GX_SNAKE_NUMBER_4,
    IMG_GX_SNAKE_NUMBER_5,
    IMG_GX_SNAKE_NUMBER_6,
    IMG_GX_SNAKE_NUMBER_7,
    IMG_GX_SNAKE_NUMBER_8,
    IMG_GX_SNAKE_NUMBER_9,

#ifndef __MMI_GAME_MULTI_LANGUAGE_SUPPORT__
    IMG_GX_SNAKE_STAGE_TXT,
    /* Game Over */
    IMG_GX_SNAKE_GOTEXT,
#else
    IMG_GX_SNAKE_GOTEXT_LANGUAGE0,
    IMG_GX_SNAKE_STAGE_LANGUAGE0,
    IMG_GX_SNAKE_GOTEXT_LANGUAGE1,
    IMG_GX_SNAKE_STAGE_LANGUAGE1,
    IMG_GX_SNAKE_GOTEXT_LANGUAGE2,
    IMG_GX_SNAKE_STAGE_LANGUAGE2,
    IMG_GX_SNAKE_GOTEXT_LANGUAGE3,
    IMG_GX_SNAKE_STAGE_LANGUAGE3,
    IMG_GX_SNAKE_GOTEXT_LANGUAGE4,
    IMG_GX_SNAKE_STAGE_LANGUAGE4,
    IMG_GX_SNAKE_GOTEXT_LANGUAGE5,
    IMG_GX_SNAKE_STAGE_LANGUAGE5,
    IMG_GX_SNAKE_GOTEXT_LANGUAGE6,
    IMG_GX_SNAKE_STAGE_LANGUAGE6,
    IMG_GX_SNAKE_GOTEXT_LANGUAGE7,
    IMG_GX_SNAKE_STAGE_LANGUAGE7,
    IMG_GX_SNAKE_GOTEXT_LANGUAGE8,
    IMG_GX_SNAKE_STAGE_LANGUAGE8,
    IMG_GX_SNAKE_GOTEXT_LANGUAGE9,
    IMG_GX_SNAKE_STAGE_LANGUAGE9,
#endif
    IMG_GX_SNAKE_GRADESMAP,
    IMG_GX_SNAKE_GOPIC,
    IMG_GX_SNAKE_TOTAL    
} SNAKE_IMG_IDS;


#endif /* GAME_SNAKE_DEFS_H */ 
