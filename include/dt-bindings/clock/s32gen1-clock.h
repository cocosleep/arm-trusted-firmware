/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright 2020, 2024 NXP
 */
#ifndef __DT_BINDINGS_CLOCK_S32GEN1_H
#define __DT_BINDINGS_CLOCK_S32GEN1_H

#include <dt-bindings/clock/s32gen1-clock-freq.h>

#define S32GEN1_CLK_ID_BASE			10000
#define S32GEN1_CC_CLK(N)			((N) + S32GEN1_CLK_ID_BASE)
#define S32GEN1_CC_ARRAY_INDEX(N)		((N) - S32GEN1_CLK_ID_BASE)
#define CC_ARR_CLK(N)				S32GEN1_CC_ARRAY_INDEX(N)

/* Clock source / Clock selector index */
#define S32GEN1_CLK_FIRC			S32GEN1_CC_CLK(0)
#define S32GEN1_CLK_SIRC			S32GEN1_CC_CLK(1)
#define S32GEN1_CLK_FXOSC			S32GEN1_CC_CLK(2)
#define S32GEN1_CLK_ARM_PLL_PHI0		S32GEN1_CC_CLK(4)
#define S32GEN1_CLK_ARM_PLL_PHI1		S32GEN1_CC_CLK(5)
#define S32GEN1_CLK_ARM_PLL_PHI2		S32GEN1_CC_CLK(6)
#define S32GEN1_CLK_ARM_PLL_PHI3		S32GEN1_CC_CLK(7)
#define S32GEN1_CLK_ARM_PLL_PHI4		S32GEN1_CC_CLK(8)
#define S32GEN1_CLK_ARM_PLL_PHI5		S32GEN1_CC_CLK(9)
#define S32GEN1_CLK_ARM_PLL_PHI6		S32GEN1_CC_CLK(10)
#define S32GEN1_CLK_ARM_PLL_PHI7		S32GEN1_CC_CLK(11)
#define S32GEN1_CLK_ARM_PLL_DFS1		S32GEN1_CC_CLK(12)
#define S32GEN1_CLK_ARM_PLL_DFS2		S32GEN1_CC_CLK(13)
#define S32GEN1_CLK_ARM_PLL_DFS3		S32GEN1_CC_CLK(14)
#define S32GEN1_CLK_ARM_PLL_DFS4		S32GEN1_CC_CLK(15)
#define S32GEN1_CLK_ARM_PLL_DFS5		S32GEN1_CC_CLK(16)
#define S32GEN1_CLK_ARM_PLL_DFS6		S32GEN1_CC_CLK(17)
#define S32GEN1_CLK_PERIPH_PLL_PHI0		S32GEN1_CC_CLK(18)
#define S32GEN1_CLK_PERIPH_PLL_PHI1		S32GEN1_CC_CLK(19)
#define S32GEN1_CLK_PERIPH_PLL_PHI2		S32GEN1_CC_CLK(20)
#define S32GEN1_CLK_PERIPH_PLL_PHI3		S32GEN1_CC_CLK(21)
#define S32GEN1_CLK_PERIPH_PLL_PHI4		S32GEN1_CC_CLK(22)
#define S32GEN1_CLK_PERIPH_PLL_PHI5		S32GEN1_CC_CLK(23)
#define S32GEN1_CLK_PERIPH_PLL_PHI6		S32GEN1_CC_CLK(24)
#define S32GEN1_CLK_PERIPH_PLL_PHI7		S32GEN1_CC_CLK(25)
#define S32GEN1_CLK_PERIPH_PLL_DFS1		S32GEN1_CC_CLK(26)
#define S32GEN1_CLK_PERIPH_PLL_DFS2		S32GEN1_CC_CLK(27)
#define S32GEN1_CLK_PERIPH_PLL_DFS3		S32GEN1_CC_CLK(28)
#define S32GEN1_CLK_PERIPH_PLL_DFS4		S32GEN1_CC_CLK(29)
#define S32GEN1_CLK_PERIPH_PLL_DFS5		S32GEN1_CC_CLK(30)
#define S32GEN1_CLK_PERIPH_PLL_DFS6		S32GEN1_CC_CLK(31)
#define S32GEN1_CLK_FTM0_EXT_REF		S32GEN1_CC_CLK(34)
#define S32GEN1_CLK_FTM1_EXT_REF		S32GEN1_CC_CLK(35)
#define S32GEN1_CLK_DDR_PLL_PHI0		S32GEN1_CC_CLK(36)
#define S32GEN1_CLK_GMAC0_EXT_TX		S32GEN1_CC_CLK(37)
#define S32GEN1_CLK_GMAC0_EXT_RX		S32GEN1_CC_CLK(38)
#define S32GEN1_CLK_GMAC0_RMII_REF		S32GEN1_CC_CLK(39)
#define S32GEN1_CLK_SERDES0_LANE0_TX		S32GEN1_CC_CLK(40)
#define S32GEN1_CLK_SERDES0_LANE0_CDR		S32GEN1_CC_CLK(41)
#define S32GEN1_CLK_GMAC0_EXT_TS		S32GEN1_CC_CLK(44)
#define S32GEN1_CLK_GMAC0_REF_DIV		S32GEN1_CC_CLK(45)

/* Total number of clocks sources listed in RM */
#define S32GEN1_CLK_NUM_PROVIDERS		(64)
#define S32GEN1_PERIPH_CLK(N)			(S32GEN1_CLK_NUM_PROVIDERS + \
						 (N) + S32GEN1_CLK_ID_BASE)
#define S32GEN1_PLAT_CLK_ID_BASE		(20000)
#define S32GEN1_PLAT_CLK(N)			(S32GEN1_PLAT_CLK_ID_BASE + (N))
#define S32GEN1_PLAT_ARRAY_INDEX(N)		((N) - S32GEN1_PLAT_CLK_ID_BASE)

/* Software defined clocks */
/* ARM PLL */
#define S32GEN1_CLK_ARM_PLL_MUX			S32GEN1_PERIPH_CLK(0)
#define S32GEN1_CLK_ARM_PLL_VCO			S32GEN1_PERIPH_CLK(1)

/* ARM CGM1 clocks */
#define S32GEN1_CLK_MC_CGM1_MUX0		S32GEN1_PERIPH_CLK(2)
#define S32GEN1_CLK_A53_CORE			S32GEN1_PERIPH_CLK(3)
#define S32GEN1_CLK_A53_CORE_DIV2		S32GEN1_PERIPH_CLK(4)
#define S32GEN1_CLK_A53_CORE_DIV10		S32GEN1_PERIPH_CLK(5)

/* ARM CGM0 clocks */
#define S32GEN1_CLK_MC_CGM0_MUX0		S32GEN1_PERIPH_CLK(6)
#define S32GEN1_CLK_XBAR_2X			S32GEN1_PERIPH_CLK(7)
#define S32GEN1_CLK_XBAR			S32GEN1_PERIPH_CLK(8)
#define S32GEN1_CLK_XBAR_DIV2			S32GEN1_PERIPH_CLK(9)
#define S32GEN1_CLK_XBAR_DIV3			S32GEN1_PERIPH_CLK(10)
#define S32GEN1_CLK_XBAR_DIV4			S32GEN1_PERIPH_CLK(11)
#define S32GEN1_CLK_XBAR_DIV6			S32GEN1_PERIPH_CLK(12)

/* PERIPH PLL */
#define S32GEN1_CLK_PERIPH_PLL_MUX		S32GEN1_PERIPH_CLK(13)
#define S32GEN1_CLK_PERIPH_PLL_VCO		S32GEN1_PERIPH_CLK(14)

/* PERIPH CGM0 clocks */
#define S32GEN1_CLK_SERDES_REF			S32GEN1_PERIPH_CLK(15)
#define S32GEN1_CLK_MC_CGM0_MUX3		S32GEN1_PERIPH_CLK(16)
#define S32GEN1_CLK_PER				S32GEN1_PERIPH_CLK(17)
#define S32GEN1_CLK_MC_CGM0_MUX4		S32GEN1_PERIPH_CLK(18)
#define S32GEN1_CLK_FTM0_REF			S32GEN1_PERIPH_CLK(19)
#define S32GEN1_CLK_MC_CGM0_MUX5		S32GEN1_PERIPH_CLK(20)
#define S32GEN1_CLK_FTM1_REF			S32GEN1_PERIPH_CLK(21)
#define S32GEN1_CLK_MC_CGM0_MUX6		S32GEN1_PERIPH_CLK(22)
#define S32GEN1_CLK_FLEXRAY_PE			S32GEN1_PERIPH_CLK(23)
#define S32GEN1_CLK_MC_CGM0_MUX7		S32GEN1_PERIPH_CLK(24)
#define S32GEN1_CLK_CAN_PE			S32GEN1_PERIPH_CLK(25)
#define S32GEN1_CLK_MC_CGM0_MUX8		S32GEN1_PERIPH_CLK(26)
#define S32GEN1_CLK_LIN_BAUD			S32GEN1_PERIPH_CLK(27)
#define S32GEN1_CLK_LINFLEXD			S32GEN1_PERIPH_CLK(28)
#define S32GEN1_CLK_MC_CGM0_MUX1		S32GEN1_PERIPH_CLK(29)
#define S32GEN1_CLK_MC_CGM0_MUX2		S32GEN1_PERIPH_CLK(30)
#define S32GEN1_CLK_MC_CGM0_MUX9		S32GEN1_PERIPH_CLK(31)
#define S32GEN1_CLK_MC_CGM0_MUX10		S32GEN1_PERIPH_CLK(32)
#define S32GEN1_CLK_MC_CGM0_MUX11		S32GEN1_PERIPH_CLK(33)
#define S32GEN1_CLK_MC_CGM0_MUX12		S32GEN1_PERIPH_CLK(34)
#define S32GEN1_CLK_MC_CGM0_MUX13		S32GEN1_PERIPH_CLK(35)
#define S32GEN1_CLK_MC_CGM0_MUX14		S32GEN1_PERIPH_CLK(36)
#define S32GEN1_CLK_MC_CGM0_MUX15		S32GEN1_PERIPH_CLK(37)
#define S32GEN1_CLK_MC_CGM0_MUX16		S32GEN1_PERIPH_CLK(38)
#define S32GEN1_CLK_SPI				S32GEN1_PERIPH_CLK(39)
#define S32GEN1_CLK_QSPI_2X			S32GEN1_PERIPH_CLK(40)
#define S32GEN1_CLK_QSPI			S32GEN1_PERIPH_CLK(41)
#define S32GEN1_CLK_SDHC			S32GEN1_PERIPH_CLK(42)

/* DDR PLL */
#define S32GEN1_CLK_DDR_PLL_MUX			S32GEN1_PERIPH_CLK(43)
#define S32GEN1_CLK_DDR_PLL_VCO			S32GEN1_PERIPH_CLK(44)
#define S32GEN1_CLK_MC_CGM5_MUX0		S32GEN1_PERIPH_CLK(45)
#define S32GEN1_CLK_DDR				S32GEN1_PERIPH_CLK(46)

/* ACCEL PLL */
#define S32GEN1_CLK_ACCEL_PLL_MUX		S32GEN1_PERIPH_CLK(47)
#define S32GEN1_CLK_ACCEL_PLL_VCO		S32GEN1_PERIPH_CLK(48)

/* CLKOUT */
#define S32GEN1_CLK_CLKOUT0			S32GEN1_PERIPH_CLK(49)
#define S32GEN1_CLK_CLKOUT1			S32GEN1_PERIPH_CLK(50)

/* GMAC0 */
#define S32GEN1_CLK_GMAC0_TS			S32GEN1_PERIPH_CLK(51)
#define S32GEN1_CLK_GMAC0_TX			S32GEN1_PERIPH_CLK(52)
#define S32GEN1_CLK_GMAC0_RX			S32GEN1_PERIPH_CLK(53)
#define S32GEN1_CLK_GMAC0_REF			S32GEN1_PERIPH_CLK(54)

#endif
