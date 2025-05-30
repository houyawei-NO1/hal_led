/*********************************************************************************************************************
 * Copyright (c) 2021, Infineon Technologies AG
 *
 * 
 * Distributed under the Boost Software License, Version 1.0.
 * 
 * 
 * Boost Software License - Version 1.0 - August 17th, 2003
 * 
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 * 
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer,
 * must be included in all copies of the Software, in whole or in part, and
 * all derivative works of the Software, unless such copies or derivative
 * works are solely in the form of machine-executable object code generated by
 * a source language processor.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 * 
 *********************************************************************************************************************/


/********************************************************************************************************
 * @file        TLE926x_DEFINES.h
 *
 * @brief       Main header declaration file for TLE926x SBC family device
 *
 * @version     V1.0.0
 * @date        
 * @author      Fedy Farhat
 * @author      Michael Schaffarczyk
 ********************************************************************************************************/
 
 

#ifndef TLE926x_DEFINES_H
#define TLE926x_DEFINES_H

#include <stdint.h>


/* ================================================================================ */
/* ================           General Control Registers            ================ */
/* ================================================================================ */


typedef enum {
    // General Control Registers
    SBC_M_S_CTRL                = 0x01U,
    SBC_HW_CTRL                 = 0x02U,
    SBC_WD_CTRL                 = 0x03U,
    SBC_BUS_CTRL_1              = 0x04U,
    SBC_BUS_CTRL_2              = 0x05U,
    SBC_WK_CTRL_1               = 0x06U,
    SBC_WK_CTRL_2               = 0x07U,
    SBC_WK_PUPD_CTRL            = 0x08U,
    SBC_WK_FLT_CTRL             = 0x09U,
    SBC_TIMER1_CTRL             = 0x0CU,
    SBC_TIMER2_CTRL             = 0x0DU,
    SBC_SW_SD_CTRL              = 0x10U,
    SBC_HS_CTRL_1               = 0x14U,
    SBC_HS_CTRL_2               = 0x15U,
    SBC_GPIO_CTRL               = 0x17U,
    SBC_PWM1_CTRL               = 0x18U,
    SBC_PWM2_CTRL               = 0x19U,
    SBC_PWM_FREQ_CTRL           = 0x1CU,
    SBC_SYS_STAT_CTRL           = 0x1EU,

    // Selective Wake Control Registers
    SBC_SWK_CTRL                = 0x20U,
    SBC_SWK_BTL1_CTRL           = 0x21U,
    SBC_SWK_BTL2_CTRL           = 0x22U,
    SBC_SWK_ID3_CTRL            = 0x23U,
    SBC_SWK_ID2_CTRL            = 0x24U,
    SBC_SWK_ID1_CTRL            = 0x25U,
    SBC_SWK_ID0_CTRL            = 0x26U,
    SBC_SWK_MASK_ID3_CTRL       = 0x27U,
    SBC_SWK_MASK_ID2_CTRL       = 0x28U,
    SBC_SWK_MASK_ID1_CTRL       = 0x29U,
    SBC_SWK_MASK_ID0_CTRL       = 0x2AU,
    SBC_SWK_DLC_CTRL            = 0x2BU,
    SBC_SWK_DATA7_CTRL          = 0x2CU,
    SBC_SWK_DATA6_CTRL          = 0x2DU,
    SBC_SWK_DATA5_CTRL          = 0x2EU,
    SBC_SWK_DATA4_CTRL          = 0x2FU,
    SBC_SWK_DATA3_CTRL          = 0x30U,
    SBC_SWK_DATA2_CTRL          = 0x31U,
    SBC_SWK_DATA1_CTRL          = 0x32U,
    SBC_SWK_DATA0_CTRL          = 0x33U,
    SBC_SWK_CAN_FD_CTRL         = 0x34U,

    // Selective Wake Trim and Configurations Registers
    SBC_SWK_OSC_TRIM_CTRL       = 0x38U,
    SBC_SWK_OPT_CTRL            = 0x39U,
    SBC_SWK_OSC_CAL_H_STAT      = 0x3AU,
    SBC_SWK_OSC_CAL_L_STAT      = 0x3BU,
    SBC_SWK_CDR_CTRL1           = 0x3CU,
    SBC_SWK_CDR_CTRL2           = 0x3DU,
    SBC_SWK_CDR_LIMIT_HIGH      = 0x3EU,
    SBC_SWK_CDR_LIMIT_LOW       = 0x3FU,

    // General Status Registers
    SBC_SUP_STAT_2              = 0x40U,
    SBC_SUP_STAT_1              = 0x41U,
    SBC_THERM_STAT              = 0x42U,
    SBC_DEV_STAT                = 0x43U,
    SBC_BUS_STAT_1              = 0x44U,
    SBC_BUS_STAT_2              = 0x45U,
    SBC_WK_STAT_1               = 0x46U,
    SBC_WK_STAT_2               = 0x47U,
    SBC_WK_LVL_STAT             = 0x48U,
    SBC_HS_OC_OT_STAT           = 0x54U,
    SBC_HS_OL_STAT              = 0x55U,

    // Selective Wake Status Registers
    SBC_SWK_STAT                = 0x70U,
    SBC_SWK_ECNT_STAT           = 0x71U,
    SBC_SWK_CDR_STAT1           = 0x72U,
    SBC_SWK_CDR_STAT2           = 0x73U,

    // Family and Product Registers
    SBC_FAM_PROD_STAT           = 0x7EU
} sbc_register_t;


typedef enum {
    // CONTROL REGISTERS
    // SBC_M_S_CTRL
    MODE_MASK                   = 0xC0U,
    VCC3_ON_MASK                = 0x20U,
    VCC2_ON_MASK                = 0x18U,
    VCC1_OV_RST_MASK            = 0x04U,
    VCC1_RT_MASK                = 0x03U,

    // SBC_HW_CTRL
    VCC3_V_CFG_MASK             = 0x80U,
    SOFT_RESET_RO_MASK          = 0x40U,
    FO_ON_MASK                  = 0x20U,
    VCC3_VS_UV_OFF_MASK         = 0x10U,
    VCC3_LS_MASK                = 0x08U,
    VCC3_LS_STP_ON_MASK         = 0x02U,
    CFG_MASK                    = 0x01U,

    // SBC_WD_CTRL
    CHECKSUM_MASK               = 0x80U,
    WD_STM_EN_0_MASK            = 0x40U,
    WD_WIN_MASK                 = 0x20U,
    WD_EN_WK_BUS_MASK           = 0x10U,
    WD_TIMER_MASK               = 0x07U,

    // SBC_BUS_CTRL_1
    LIN_FLASH_MASK              = 0x80U,
    LIN_LSM_MASK                = 0x40U,
    LIN_TXD_TO_MASK             = 0x20U,
    LIN1_MASK                   = 0x18U,
    CAN_MASK                    = 0x07U,

    // SBC_BUS_CTRL_2
    I_PEAK_TH_MASK              = 0x20U,
    LIN2_MASK                   = 0x03U,

    // SBC_WK_CTRL_1
    TIMER2_WK_EN_MASK           = 0x80U,
    TIMER1_WK_EN_MASK           = 0x40U,
    WD_STM_EN_1_MASK            = 0x04U,

    // SBC_WK_CTRL_2
    INT_GLOBAL_MASK             = 0x80U,
    WK_MEAS_MASK                = 0x20U,
    WK3_EN_MASK                 = 0x04U,
    WK2_EN_MASK                 = 0x02U,
    WK1_EN_MASK                 = 0x01U,

    //SBC_WK_PUPD_CTRL
    WK3_PUPD_MASK               = 0x30U,
    WK2_PUPD_MASK               = 0x0CU,
    WK1_PUPD_MASK               = 0x03U,

    // SBC_WK_FLT_CTRL
    WK3_FLT_MASK                = 0x30U,
    WK2_FLT_MASK                = 0x0CU,
    WK1_FLT_MASK                = 0x03U,

    // SBC_TIMER1_CTRL
    TIMER1_ON_MASK              = 0x70U,
    TIMER1_PER_MASK             = 0x07U,

    // SBC_TIMER2_CTRL
    TIMER2_ON_MASK              = 0x70U,
    TIMER2_PER_MASK             = 0x07U,

    // SBC_SW_SD_CTRL
    HS_OV_SD_EN_MASK            = 0x40U,
    HS_UV_SD_EN_MASK            = 0x20U,
    HS_OV_UV_REC_MASK           = 0x10U,

    // SBC_HS_CTRL_1
    HS2_MASK                    = 0x70U,
    HS1_MASK                    = 0x07U,

    // SBC_HS_CTRL_2
    HS4_MASK                    = 0x70U,
    HS3_MASK                    = 0x07U,

    // SBC_GPIO_CTRL
    FO_DC_MASK                  = 0xC0U,
    GPIO2_MASK                  = 0x38U,
    GPIO1_MASK                  = 0x07U,

    // SBC_PWM1_CTRL
    PWM1_DC_MASK                = 0xFFU,

    // SBC_PWM2_CTRL
    PWM2_DC_MASK                = 0xFFU,

    // SBC_PWM_FREQ_CTRL
    PWM2_FREQ_MASK              = 0x04U,
    PWM1_FREQ_MASK              = 0x01U,

    // SBC_SYS_STAT_CTRL
    SYS_STAT_MASK               = 0xFFU,

    // SELECTIVE WAKE REGISTERS
    // SBC_SWK_CTRL
    OSC_CAL_MASK                = 0x80U,
    TRIM_EN_MASK                = 0x60U,
    CANTO_MASK_MASK             = 0x10U,
    CFG_VAL_MASK                = 0x01U,
    
    // SBC_SWK_BTL1_CTRL
    TBIT_MASK                   = 0xFFU,

    // SBC_SWK_BTL2_CTRL
    SP_MASK                     = 0x3FU,
    
    // SBC_SKW_ID3_CTRL
    ID28_21_MASK                = 0xFFU,

    // SBC_SKW_ID2_CTRL
    ID20_13_MASK                = 0xFFU,

    // SBC_SKW_ID1_CTRL
    ID12_5_MASK                 = 0xFFU,

    // SBC_SKW_ID0_CTRL
    ID4_0_MASK                  = 0x7CU,
    RTR_MASK                    = 0x02U,
    IDE_MASK                    = 0x01U,

    // SBC_SWK_MASK_ID3_CTRL
    MASK_ID28_21_MASK           = 0xFFU,

    // SBC_SWK_MASK_ID2_CTRL
    MASK_ID20_13_MASK           = 0xFFU,

    // SBC_SWK_MASK_ID1_CTRL
    MASK_ID12_5_MASK            = 0xFFU,

    // SBC_SWK_MASK_ID0_CTRL
    MASK_ID4_0_MASK             = 0x7CU,

    // SBC_SWK_DLC_CTRL
    DLC_MASK                    = 0x0FU,

    // SBC_SWK_DATA7_CTRL
    DATA7_MASK                  = 0xFFU,

    // SBC_SWK_DATA6_CTRL
    DATA6_MASK                  = 0xFFU,

    // SBC_SWK_DATA5_CTRL
    DATA5_MASK                  = 0xFFU,

    // SBC_SWK_DATA4_CTRL
    DATA4_MASK                  = 0xFFU,

    // SBC_SWK_DATA3_CTRL
    DATA3_MASK                  = 0xFFU,

    // SBC_SWK_DATA2_CTRL
    DATA2_MASK                  = 0xFFU,

    // SBC_SWK_DATA1_CTRL
    DATA1_MASK                  = 0xFFU,

    // SBC_SWK_DATA0_CTRL
    DATA0_MASK                  = 0xFFU,

    // SBC_SWK_CAN_FD_CTRL
    DIS_ERR_CNT_MASK            = 0x20U,
    RX_FILT_BYP_MASK            = 0x10U,
    FD_FILTER_MASK              = 0x0EU,
    CAN_FD_EN_MASK              = 0x01U,

    // SELECTIVE WAKE TRIM & CONFIGURATIONS REGISTERS
    // SWK SBC_SWK_OSC_TRIM_CTRL
    TRIM_OSC_7_0_MASK           = 0xFFU,

    // SBC_SWK_OPT_CTRL
    RX_WK_SEL_MASK              = 0x80U,
    TRIM_OSC_12_8_MASK          = 0x1FU,

    // SBC_SWK_OSC_CAL_H_STAT
    OSC_CAL_H_MASK              = 0xFFU,

    // SBC_SWK_OSC_CAL_L_STAT
    OSC_CAL_L_MASK              = 0xFFU,

    // SBC_SWK_CDR_CTRL1
    SELFILT_MASK                = 0x0CU,
    CDR_EN_MASK                 = 0x01U,

    // SBC_SWK_CDR_CTRL2
    SEL_OSC_CLK_MASK            = 0x03U,

    // SBC_SWK_CDR_LIMIT_HIGH
    CDR_LIM_H_MASK              = 0xFFU,

    // SBC_SWK_CDR_LIMIT_LOW
    CDR_LIM_L_MASK              = 0xFFU,

    // STATUS REGISTERS
    // SBC_SUP_STAT_2
    VS_UV_MASK                  = 0x40U,
    VCC3_OC_MASK                = 0x10U,
    VCC3_UV_MASK                = 0x08U,
    VCC3_OT_MASK                = 0x04U,
    VCC1_OV_MASK                = 0x02U,
    VCC1_WARN_MASK              = 0x01U,

    // SBC_BUS_STAT_1
    POR_MASK                    = 0x80U,
    VSHS_UV_MASK                = 0x40U,
    VSHS_OV_MASK                = 0x20U,
    VCC2_OT_MASK                = 0x10U,
    VCC2_UV_MASK                = 0x08U,
    VCC1_SC_MASK                = 0x04U,
    VCC1_UV_FS_MASK             = 0x02U,
    VCC1_UV_MASK                = 0x01U,

    // SBC_THERM_STAT
    TSD2_MASK                   = 0x04U,
    TSD1_MASK                   = 0x02U,
    TPW_MASK                    = 0x01U,

    // SBC_DEV_STAT
    DEV_STAT_MASK               = 0xC0U,
    WD_FAIL_MASK                = 0x0CU,
    SPI_FAIL_MASK               = 0x02U,
    FAILURE_MASK                = 0x01U,

    // SBC_BUS_STAT_1
    LIN1_FAIL_MASK              = 0x60U,
    CANTO_MASK                  = 0x10U,
    SYSERR_MASK                 = 0x08U,
    CAN_FAIL_MASK               = 0x06U,
    VCAN_UV_MASK                = 0x01U,

    // SBC_BUS_STAT_2
    LIN2_FAIL_MASK              = 0x06U,

    // SBC_WK_STAT_1
    LIN2_WU_MASK                = 0x80U,
    LIN1_WU_MASK                = 0x40U,
    CAN_WU_MASK                 = 0x20U,
    TIMER_WU_MASK               = 0x10U,
    WK3_WU_MASK                 = 0x04U,
    WK2_WU_MASK                 = 0x02U,
    WK1_WU_MASK                 = 0x01U,

    // SBC_WK_STAT_2
    GPIO2_WU_MASK               = 0x20U,
    GPIO1_WU_MASK               = 0x10U,

    // SBC_WK_LVL_STAT
    SBC_DEV_LVL_MASK            = 0x80U,
    CFGP_MASK                   = 0x40U,
    GPIO2_LVL_MASK              = 0x20U,
    GPIO1_LVL_MASK              = 0x10U,
    WK3_LVL_MASK                = 0x04U,
    WK2_LVL_MASK                = 0x02U,
    WK1_LVL_MASK                = 0x01U,

    // SBC_HS_OC_OT_STAT
    HS4_OC_OT_MASK              = 0x08U,
    HS3_OC_OT_MASK              = 0x04U,
    HS2_OC_OT_MASK              = 0x02U,
    HS1_OC_OT_MASK              = 0x01U,

    // SBC_HS_OL_STAT
    HS4_OL_MASK                 = 0x08U,
    HS3_OL_MASK                 = 0x04U,
    HS2_OL_MASK                 = 0x02U,
    HS1_OL_MASK                 = 0x01U,

    // SELECTIVE WAKE STATUS REGISTERS
    // SWK_STAT
    SYNC_MASK                   = 0x40U,
    CANSIL_MASK                 = 0x08U,
    SWK_SET_MASK                = 0x04U,
    WUP_MASK                    = 0x02U,
    WUF_MASK                    = 0x01U,

    //SBC_SWK_ECNT_STAT
    ECNT_MASK                   = 0x3FU,
    
    // SBC_SWK_CDR_STAT1
    N_AVG_11_4_MASK             = 0xFFU,

    // SBC_SWK_CDR_STAT2
    N_AVG_3_0_MASK              = 0xF0U,

    // FAMILIY AND PRODUCT REGISTERS
    // SBC_FAM_PROD_STAT
    FAM_MASK                    = 0xF0U,
    PROD_MASK                   = 0x0FU
} sbc_bit_mask_t;


typedef enum {
    SBC_DEV_MODE_OFF            = 0,
    SBC_DEV_MODE_ON             = 1
} sbc_dev_mode_t;

// Set timer 
typedef enum {
    TIMER1,
    TIMER2
} sbc_timer_t;

// Set SBC_Modes
typedef enum {
    SBC_NORMAL_MODE,
    SBC_SLEEP_MODE,
    SBC_STOP_MODE,
    SBC_RESET
} sbc_mode_t;

// Switch VCC3
typedef enum {
    VCC3_OFF,
    VCC3_ENABLED
} sbc_vcc3_on_t;

// switch VCC2 mode
typedef enum {
    VCC2_OFF,
    VCC2_ON_NORMAL,
    VCC2_ON_NORMAL_STOP,
    VCC2_ON_ALWAYS
} sbc_vcc2_on_t;

typedef enum {
    VCC1_OV_RST_NOACTION,
    VCC1_OV_RST_RESTART_FAILSAFE
} sbc_vcc1_ov_rst_t; 

// Switch VCC1 reset threshold
typedef enum {
    VCC1_RT_VRT1,
    VCC1_RT_VRT2,
    VCC1_RT_VRT3,
    VCC1_RT_VRT4
} sbc_vcc1_tr_t;

typedef enum {
    VCC3_VOLTAGE_AS_VCC1,
    VCC3_VOLTAGE_3_3V_OR_1_8V,
} sbc_vcc3_v_cfg_t;

typedef enum {
    SOFT_RESET_RST_TRIGGER_SOFTRST,
    SOFT_RESET_RST_NOTRIGGER_SOFTRST
} sbc_soft_reset_ro_t;

typedef enum {
    FO_ON_NOT_ACTIVE,
    FO_ON_ACTIVE
} sbc_fo_on_t;

typedef enum {
    DISABLE_VCC3_AUTOMATICALLY,
    VCC3_STAYS_ENABLED
} sbc_vcc3_vs_uv_off_t;

typedef enum {
    VCC3_STANDALONE,
    VCC3_LOAD_SHARING
} sbc_vcc3_ls_t;

// enable or disable VCC3_LOAD_SHARING
typedef enum {
    VCC3_LOAD_SHARING_ENABLED,
    VCC3_LOAD_SHARING_DISABLED
} sbc_vcc3_ls_stp_on_t;

typedef enum {
    SBC_CFG1_RESTART_FAILSAFE_2WDFAIL,
    SBC_CFG1_RESTART_FAILSAFE_1WDFAIL
} sbc_cfg_t;

//enable or disable CHECKSUM bit
typedef enum {
    NO_CHECKSUM_BIT_SET,
    CHECKSUM_BIT_SET
} sbc_checksum_t;

//select type watchdog function 
typedef enum {
    TIME_OUT_WD,
    WINDOW_WD
} sbc_wd_win_t;

typedef enum {
    NO_WD_AFTER_CAN_LIN_WAKE,
    WD_STARTS_AFTER_CAN_LIN_WAKE
} sbc_wd_en_wk_bus_t;

// select watchdog timer period
typedef enum {
    WD_10MS,
    WD_20MS,
    WD_50MS,
    WD_100MS,
    WD_200MS,
    WD_500MS,
    WD_1000MS
} sbc_wd_timer_t;

typedef enum {
    SLOPE_CONTROL_ACTIVE,
    SLOPE_CONTROL_DISABLED_UP_TO_115KBAUD,
} sbc_lin_flash_t;

typedef enum {
    LIN_NORMAL_SLOPE_MODE, // TODO check name
    LIN_LOW_SLOPE_MODE
} sbc_lin_lsm_t;

typedef enum {
    TXD_TIMEOUT_FEATURE_DISABLED,
    TXD_TIMEOUT_FEATURE_ENABLED,
} sbc_lin_txd_to_t;

typedef enum {
    CAN_WAKECAPABLE_NOSWK    = 1U,
    CAN_RECEIVEONLY_NOSWK    = 2U,
    CAN_NORMAL_NOSWK         = 3U,
    CAN_OFF                  = 4U,
    CAN_WAKECAPABLE_SWK      = 5U,
    CAN_RECEIVEONLY_SWK      = 6U,
    CAN_NORMAL_SWK           = 7U
} sbc_can_t;

typedef enum {
    LOW_ACTIVE_PEAK_THRESHOLD,
    HIGH_ACTIVE_PEAK_THRESHOLD,
} sbc_i_peak_th_t;

// select LIN mode
typedef enum {
    LIN_OFF,
    LIN_WAKE_CAPABLE,
    LIN_RECEIVE_ONLY,
    LIN_NORMAL_MODE
} sbc_lin_mode_t;

// Select LINx
typedef enum {
    LIN1,
    LIN2
} sbc_lin_module_t;

// enable or disable timer wake
typedef enum {
    TIMER_WAKE_DISABLED,
    TIMER_WAKE_ENABLED
} sbc_timer_wk_en_t;

// enable or disable watchdog timer in stop mode
typedef enum {
    WATCHDOG_ACTIVE_IN_STOP_MODE,
    WATCHDOG_DEACTIVED_IN_STOP_MODE,
} sbc_wd_stm_en_t;

// select wk feature
typedef enum {
    NO_PULL_UP_PULL_DOWN,
    PULL_DOWN,
    PULL_UP,
    AUTOMATIC
} sbc_wk_pupd_t;

typedef enum {
    ONLY_WK_SOURCES_INT,
    ALL_INFORMATION_BITS_INT
} sbc_int_global_t;

typedef enum {
    WK_ENABLED_WK1_WK2,
    MEAS_ENABLED_WK1_WK1
} sbc_wk_meas_t;

typedef enum {
    FILTER_16US,
    FILTER_64US,
    FILTER_ONTIME_END_TIMER1,
    FILTER_ONTIME_END_TIMER2
} sbc_wk_flt_t;

typedef enum {
    TIMER_10MS,
    TIMER_20MS,
    TIMER_50MS,
    TIMER_100MS,
    TIMER_200MS,
    TIMER_1S,
    TIMER_2S
} sbc_timer_per_t;

//selct ontime
typedef enum {
    TIMER_ONTIME_OFF_LOW,
    TIMER_ONTIME_01MS,
    TIMER_ONTIME_03MS,
    TIMER_ONTIME_1MS,
    TIMER_ONTIME_10MS,
    TIMER_ONTIME_20MS,
    TIMER_ONTIME_OFF_HIGH
} sbc_timer_on_t;

// enable or disable overvoltage shutdown
typedef enum {
    OVERVOLTAGE_SHUTDOWN_ENABLED,
    OVERVOLTAGE_SHUTDOWN_DISABLED
} sbc_hs_ov_sd_en_t;

// enable or disable undervoltage shutdown
typedef enum {
    UNDERVOLTAGE_SHUTDOWN_ENABLED,
    UNDERVOLTAGE_SHUTDOWN_DISABLED
} sbc_hs_uv_sd_en_t;

typedef enum {
    SWITCH_RECOVERY_DISABLED,
    PREVIOUS_STATE_RECOVERY_ENABLED
} sbc_hs_ov_uv_rec_t;

// Select HSx control 
typedef enum {
    HS_OFF,
    HS_ON,
    CONTROLLED_BY_TIMER1,
    CONTROLLED_BY_TIMER2,
    CONTROLLED_BY_PWM1,
    CONTROLLED_BY_PWM2
} sbc_hs_config_t;

// select dutycycle
typedef enum {
    DUTY_CYCLE_20,
    DUTY_CYCLE_10,
    DUTY_CYCLE_5,
    DUTY_CYCLE_2_5
} sbc_fo_dc_t;

typedef enum {
    FO_SELECTED                 = 0x03U,
    GPIO_OFF                    = 0x04U,
    WAKE_INPUT_ENABLED          = 0x05U,
    LOW_SIDE_SWITCH_ON          = 0x06U,
    HIGH_SIDE_SWITCH_ON         = 0x07U
} sbc_gpio_t;

// select PWM frequency
typedef enum {
    PWM_200HZ,
    PWM_400HZ
} sbc_pwm_freq_t;

typedef enum { 
    SBC_OSC_CAL_DISABLED,
    SBC_OSC_CAL_ENABLED
} sbc_osc_cal_t;

typedef enum {
    SBC_TRIM_EN_LOCKED,
    SBC_TRIM_EN_UNLOCKED        = 0x03U
} sbc_trim_en_t;

typedef enum {
    SBC_CANTO_MASK_NOINT,
    SBC_CANTO_MASK_INT_ON_TO
} sbc_canto_mask_t;

typedef enum {
    SBC_CFG_VAL_NOTVALID,
    SBC_CFG_VAL_VALID
} sbc_cfg_val_t;

typedef enum {
    SBC_RTR_NORMAL_DATA_FRAME,
    SBC_RTR_REMOTE_TRANSMIT_REQUEST
} sbc_rtr_t;

typedef enum {
    SBC_IDE_STANDARD,
    SBC_IDE_EXTENDED
} sbc_ide_t;

// select DLC number of messages
typedef enum {
    SBC_DLC_0BYTES,
    SBC_DLC_1BYTES,
    SBC_DLC_2BYTES,
    SBC_DLC_3BYTES,
    SBC_DLC_4BYTES,
    SBC_DLC_5BYTES,
    SBC_DLC_6BYTES,
    SBC_DLC_7BYTES,
    SBC_DLC_8BYTES
} sbc_dlc_t;

typedef enum {
    SBC_DIS_ERR_CNT_ENABLED,
    SBC_DIS_ERR_CNT_DISABLED
} sbc_dis_err_cnt_t;

typedef enum {
    SBC_RX_FILT_BYP_NOTBYPASSED,
} sbc_rx_filt_byp_t;

typedef enum {
    SBC_FD_FILTER_50NS,
    SBC_FD_FILTER_100NS,
    SBC_FD_FILTER_150NS,
    SBC_FD_FILTER_200NS,
    SBC_FD_FILTER_250NS,
    SBC_FD_FILTER_300NS,
    SBC_FD_FILTER_350NS,
    SBC_FD_FILTER_775NS
} sbc_fd_filter_t;

typedef enum {
    SBC_CAN_FD_EN_DISABLED,
    SBC_CAN_FD_EN_ENABLED
} sbc_can_fd_en_t;

typedef enum { 
    SBC_RX_WK_SEL_STANDARD,
    SBC_RX_WK_SEL_LOWPOWER
} sbc_rx_wk_sel_t;

typedef enum { 
    SBC_SEL_FILT_TC8,
    SBC_SEL_FILT_TC16,
    SBC_SEL_FILT_TC32,
    SBC_SEL_FILT_ADAPT
} sbc_sel_filt_t;

typedef enum {
    SBC_CDR_EN_DISABLED,
    SBC_CDR_EN_ENABLED
} sbc_cdr_en_t;

typedef enum {
    SBC_SEL_OSC_CLK_80MHZ,
    SBC_SEL_OSC_CLK_40MHZ,
    SBC_SEL_OSC_CLK_20MHZ,
    SBC_SEL_OSC_CLK_10MHZ
} sbc_sel_osc_clk_t;

typedef enum {
    NO_VS_UV,
    VS_UV_DETECTED
} sbc_vs_uv_t;

typedef enum {
    NO_VCC3_OC,
    VCC3_OC_DETECTED
} sbc_vcc3_oc_t;

typedef enum {
    NO_VCC3_UV,
    VCC3_UV_FAIL_DETECTED
} sbc_vcc3_uv_t;

typedef enum {
    NO_VCC3_OT,
    VCC3_OT_DETECTED
} sbc_vcc3_ot_t;

typedef enum { 
    VCC1_OV_NOEVENT,
    VCC1_OV_EVENT
} sbc_vcc1_ov_t;

typedef enum {
    VCC1_UV_PREWARN_NOEVENT,
    VCC1_UV_PREWARN_EVENT
} sbc_vcc1_warn_t;

typedef enum {
    POR_NOEVENT,
    POR_EVENT
} sbc_por_t;

typedef enum {
    NO_VSHS_UV,
    VSHS_UV_DETECTED
} sbc_vshs_uv_t;

typedef enum {
    NO_VSHS_OV,
    VSHS_OV_DETECTED
} sbc_vshs_ov_t;

typedef enum {
    VCC2_OT_NOEVENT,
    VCC2_OT_EVENT
} sbc_vcc2_ot_t;

typedef enum {
    VCC2_UV_NOEVENT,
    VCC2_UV_EVENT
} sbc_vcc2_uv_t;

typedef enum {
    VCC1_SC_NOEVENT,
    VCC1_SC_TO_GND_EVENT
} sbc_vcc1_sc_t;

typedef enum {
    NO_FAIL_SAFE_ENTRY,
    FAIL_SAFE_MODE_ENTERED
} sbc_vcc1_uv_fs_t;

typedef enum {
    VCC1_UV_NOEVENT,
    VCC1_UV_EVENT
} sbc_vcc1_uv_t;

typedef enum {
    NO_TSD2_FAIL,
    TSD2_OT_DETECTED
} sbc_tsd2_t;

typedef enum {
    NO_TSD1_FAIL,
    TSD1_OT_DETECTED
} sbc_tsd1_t;

typedef enum {
    NO_THERMAL_PREWARNING,
    THERMAL_PREWARNING
} sbc_tpw_t;

typedef enum {
    DEV_CLEARED,
    DEV_RESTART_AFTER_FAILURE,
    DEV_SLEEP_MODE
} sbc_dev_stat_t;

typedef enum {
    NO_WD_FAIL,
    WD_FAIL1,
    WD_FAIL2
} sbc_wd_fail_t;

typedef enum {
    NO_SPI_FAIL,
    SPI_FAIL_INVALID_COMMAND_DETECTED
} sbc_spi_fail_t;

typedef enum {
    NO_FAILURE,
    FAILURE_OCCURED
} sbc_failure_t;

typedef enum {
    LIN_NO_ERROR,
    LIN_TSD_SHUTDOWN,
    LIN_TXD_DOM_TIMEOUT,
    LIN_BUS_DOM_TIMEOUT
} sbc_lin_fail_t;

typedef enum {
    CAN_NORMAL_OPERATION, // TODO check name
    CAN_TIMEOUT // TODO check name
} sbc_canto_t;

typedef enum {
    SWK_POSSIBLE,
    SYSERR_DETECTED_SWK_NOT_POSSIBLE
} sbc_syserr_t;

typedef enum {
    CAN_NO_ERROR,
    CAN_TSD_SHUTDOWN,
    CAN_TXD_DOM_TIMEOUT,
    CAN_BUS_DOM_TIMEOUT
} sbc_can_fail_t;

typedef enum {
    VCAN_NORMAL_OPERATION_VOLTAGE, // TODO check name
    VCAN_SUPPLY_UNDER_VOLTAGE_DETECTED // TODO check name
} sbc_vcan_uv_t;

typedef enum {
    NO_WAKE_UP,
    WAKE_UP_DETECTED
} sbc_wu_t;

typedef enum {
    USER_MODE,
    DEVELOPMENT_MODE
} sbc_dev_lvl_t;

typedef enum {
    CONFIG_2_4,
    CONFIG_1_3
} sbc_cfgp_state_t;

typedef enum {
    GPIO_LOW_LEVEL, // TODO check name
    GPIO_HIGH_LEVEL // TODO check name
} sbc_gpio_lvl_t;

typedef enum {
    WK_LOW_LEVEL, // TODO check name
    WK_HIGH_LEVEL // TODO check name
} sbc_wk_lvl_t;

typedef enum {
    NO_OC_OR_OT,
    OC_OR_OT_DETECTED
} sbc_hs_oc_ot_t;

typedef enum {
    NO_OL,
    OL_DETECTED
} sbc_hs_ol_t;

typedef enum {
    NOT_SYNCHRONOUS,
    SYNC_VALID_FRAME_RECEIVED
} sbc_sync_t;

typedef enum {
    CANSIL_NOT_EXCEEDED,
    CANSIL_EXCEEDED
} sbc_cansil_t;

typedef enum {
    SWK_NOT_ACTIVE,
    SWK_ACTIVE
} sbc_swk_set_t;

typedef enum {
    NO_WUP,
    WUP_DETECTED
} sbc_wup_t;

typedef enum {
    NO_WUF,
    WUF_DETECTED
} sbc_wuf_t;

typedef enum {
    NO_FRAME_ERROR              = 0x00U,
    ERROR_COUNTER_OVERFLOW      = 0x20U
} sbc_ecnt_t;

typedef enum {
    DRIVER_SBC_FAMILY           = 0x01U,
    DCDC_SBC_FAMILY             = 0x02U,
    MID_RANGE_SBC_FAMILY        = 0x03U,
    MULTI_CAN_SBC_FAMILY        = 0x04U,
    LITE_CAN_SBC_FAMILY         = 0x05U,
    MID_RANGE_PLUS_SBC_FAMILY   = 0x07U,
    BRIDGE_SBC_FAMILY           = 0x08U
} sbc_fam_t;

typedef enum {
    TLE9621_3QX                 = 0x06U,
    TLE9262_3QX                 = 0x0AU,
    TLE9263_3QX                 = 0x0EU
} sbc_prod_t;


/*************************** HW Types **************************/

// select HSx
typedef enum {
    HS1,
    HS2,
    HS3,
    HS4
} sbc_hsx_t;

// select GPIOx
typedef enum {
    GPIO1,
    GPIO2
} sbc_gpiox_t;

// select PWMx
typedef enum {
    PWM1,
    PWM2
} sbc_pwm_t;

// select WKx
typedef enum {
    WK1,
    WK2,
    WK3
} sbc_wk_t;
struct __SBC_ErrorCode;




#endif  /* TLE926x_DEFINES_H */
