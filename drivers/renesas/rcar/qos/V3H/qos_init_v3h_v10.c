/*
 * Copyright (c) 2015-2019, Renesas Electronics Corporation
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>

#include <common/debug.h>

#include "../qos_common.h"
#include "../qos_reg.h"
#include "qos_init_v3h_v10.h"

#define RCAR_QOS_VERSION		"rev.0.14"

#define ACTIVE_OR			0xFD812030U

#include "qos_init_v3h_mstat.h"

struct rcar_gen3_dbsc_qos_settings v3h_qos[] = {
	/* BUFCAM settings */
	{ DBSC_DBCAM0CNF1,  0x00043218U },
	{ DBSC_DBCAM0CNF2,  0x000000F4U },
	{ DBSC_DBCAM0CNF3,  0x00000000U },
	{ DBSC_DBSCHCNT0,   0x000F0037U },
	{ DBSC_DBSCHSZ0,    0x00000001U },
	{ DBSC_DBSCHRW0,    0x22421111U },
	{ DBSC_DBSCHRW1,    0x00000034U },

	{ DBSC_SCFCTST2,    0x012F1123U },

	/* QoS Settings */
	{ DBSC_DBSCHQOS00,  0x00000F00U },
	{ DBSC_DBSCHQOS01,  0x00000B00U },
	{ DBSC_DBSCHQOS02,  0x00000000U },
	{ DBSC_DBSCHQOS03,  0x00000000U },
	{ DBSC_DBSCHQOS40,  0x00000300U },
	{ DBSC_DBSCHQOS41,  0x000002F0U },
	{ DBSC_DBSCHQOS42,  0x00000200U },
	{ DBSC_DBSCHQOS43,  0x00000100U },
	{ DBSC_DBSCHQOS90,  0x00000300U },
	{ DBSC_DBSCHQOS91,  0x000002F0U },
	{ DBSC_DBSCHQOS92,  0x00000200U },
	{ DBSC_DBSCHQOS93,  0x00000100U },
	{ DBSC_DBSCHQOS120, 0x00000040U },
	{ DBSC_DBSCHQOS121, 0x00000030U },
	{ DBSC_DBSCHQOS122, 0x00000020U },
	{ DBSC_DBSCHQOS123, 0x00000010U },
	{ DBSC_DBSCHQOS130, 0x00000100U },
	{ DBSC_DBSCHQOS131, 0x000000F0U },
	{ DBSC_DBSCHQOS132, 0x000000A0U },
	{ DBSC_DBSCHQOS133, 0x00000040U },
	{ DBSC_DBSCHQOS140, 0x000000C0U },
	{ DBSC_DBSCHQOS141, 0x000000B0U },
	{ DBSC_DBSCHQOS142, 0x00000080U },
	{ DBSC_DBSCHQOS143, 0x00000040U },
	{ DBSC_DBSCHQOS150, 0x00000040U },
	{ DBSC_DBSCHQOS151, 0x00000030U },
	{ DBSC_DBSCHQOS152, 0x00000020U },
	{ DBSC_DBSCHQOS153, 0x00000010U },
};

void qos_init_v3h_v10(void)
{
	rcar_qos_dbsc_setting(v3h_qos, ARRAY_SIZE(v3h_qos), false);

	/* DRAM Split Address mapping */
#if (RCAR_DRAM_SPLIT == RCAR_DRAM_SPLIT_4CH) || \
	(RCAR_DRAM_SPLIT == RCAR_DRAM_SPLIT_AUTO)
	NOTICE("BL2: DRAM Split is 4ch\n");
	io_write_32(AXI_ADSPLCR0, ADSPLCR0_ADRMODE_DEFAULT
				  | ADSPLCR0_SPLITSEL(0xFFU)
				  | ADSPLCR0_AREA(0x1BU)
				  | ADSPLCR0_SWP);
	io_write_32(AXI_ADSPLCR1, 0x00000000U);
	io_write_32(AXI_ADSPLCR2, 0xA8A90000U);
	io_write_32(AXI_ADSPLCR3, 0x00000000U);
#elif RCAR_DRAM_SPLIT == RCAR_DRAM_SPLIT_2CH
	NOTICE("BL2: DRAM Split is 2ch\n");
	io_write_32(AXI_ADSPLCR0, 0x00000000U);
	io_write_32(AXI_ADSPLCR1, ADSPLCR0_ADRMODE_DEFAULT
				  | ADSPLCR0_SPLITSEL(0xFFU)
				  | ADSPLCR0_AREA(0x1BU)
				  | ADSPLCR0_SWP);
	io_write_32(AXI_ADSPLCR2, 0x00000000U);
	io_write_32(AXI_ADSPLCR3, 0x00000000U);
#else
	NOTICE("BL2: DRAM Split is OFF\n");
#endif

#if !(RCAR_QOS_TYPE == RCAR_QOS_NONE)
#if RCAR_QOS_TYPE  == RCAR_QOS_TYPE_DEFAULT
	NOTICE("BL2: QoS is default setting(%s)\n", RCAR_QOS_VERSION);
#endif

	/* Resource Alloc setting */
	io_write_32(QOSCTRL_RAS,   0x00000044U);
	io_write_32(QOSCTRL_FIXTH, 0x000F0005U);
	io_write_32(QOSCTRL_REGGD, 0x00000000U);
	io_write_64(QOSCTRL_DANN,  0x0404010002020201U);
	io_write_32(QOSCTRL_DANT,  0x0020100AU);
	io_write_32(QOSCTRL_EC,    0x00000000U);
	io_write_64(QOSCTRL_EMS,   0x0000000000000000U);
	io_write_32(QOSCTRL_FSS,   0x000003e8U);
	io_write_32(QOSCTRL_INSFC, 0xC7840001U);
	io_write_32(QOSCTRL_BERR,  0x00000000U);
	io_write_32(QOSCTRL_EARLYR, 0x00000000U);
	io_write_32(QOSCTRL_RACNT0, 0x00010003U);

	/* GPU Boost Mode */
	io_write_32(QOSCTRL_STATGEN0, 0x00000001U);
	io_write_32(ACTIVE_OR, 0x00000000U);

	/* MSTAT setting */
	io_write_32(QOSCTRL_SL_INIT, 0x0305007DU);
	io_write_32(QOSCTRL_REF_ARS, 0x00330000U);

	/* QOSBW SRAM setting */
	uint32_t i;

	for (i = 0U; i < ARRAY_SIZE(mstat_fix); i++) {
		io_write_64(QOSBW_FIX_QOS_BANK0 + i * 8, mstat_fix[i]);
		io_write_64(QOSBW_FIX_QOS_BANK1 + i * 8, mstat_fix[i]);
	}
	for (i = 0U; i < ARRAY_SIZE(mstat_be); i++) {
		io_write_64(QOSBW_BE_QOS_BANK0 + i * 8, mstat_be[i]);
		io_write_64(QOSBW_BE_QOS_BANK1 + i * 8, mstat_be[i]);
	}

	/* AXI-IF arbitration setting */
	io_write_32(DBSC_AXARB, 0x00000000U);

	/* 3DG bus Leaf setting */
	io_write_32(0xFD820800U, 0x00000000U);
	io_write_32(0xFD821800U, 0x00000000U);
	io_write_32(0xFD822800U, 0x00000000U);
	io_write_32(0xFD823800U, 0x00000000U);
	io_write_32(0xFD824800U, 0x00000000U);
	io_write_32(0xFD825800U, 0x00000000U);
	io_write_32(0xFD826800U, 0x00000000U);
	io_write_32(0xFD827800U, 0x00000000U);

	/* VIO bus Leaf setting */
	io_write_32(0xFEB89800, 0x00000000U);
	io_write_32(0xFEB8A800, 0x00000000U);
	io_write_32(0xFEB8B800, 0x00000000U);
	io_write_32(0xFEB8C800, 0x00000000U);

	/* HSC bus Leaf setting */
	io_write_32(0xE6430800, 0x00000000U);
	io_write_32(0xE6431800, 0x00000000U);
	io_write_32(0xE6432800, 0x00000000U);
	io_write_32(0xE6433800, 0x00000000U);

	/* MP bus Leaf setting */
	io_write_32(0xEC620800, 0x00000000U);
	io_write_32(0xEC621800, 0x00000000U);

	/* PERIE bus Leaf setting */
	io_write_32(0xE7760800, 0x00000000U);
	io_write_32(0xE7768800, 0x00000000U);

	/* PERIW bus Leaf setting */
	io_write_32(0xE6760800, 0x00000000U);
	io_write_32(0xE6768800, 0x00000000U);

	/* RT bus Leaf setting */
	io_write_32(0xFFC50800U, 0x00000000U);
	io_write_32(0xFFC51800U, 0x00000000U);

	/* CCI bus Leaf setting */
	io_write_32(0xF1300800, 0x00000003U);
	io_write_32(0xF1340800, 0x00000003U);
	io_write_32(0xF1380800, 0x00000003U);
	io_write_32(0xF13C0800, 0x00000003U);

	/* Resource Alloc start */
	io_write_32(QOSCTRL_RAEN,  0x00000001U);

	/* MSTAT start */
	io_write_32(QOSCTRL_STATQC, 0x00000001U);
#else
	NOTICE("BL2: QoS is None\n");

	/* Resource Alloc setting */
	io_write_32(QOSCTRL_EC,    0x00000000U);
	/* Resource Alloc start */
	io_write_32(QOSCTRL_RAEN,  0x00000001U);
#endif /* !(RCAR_QOS_TYPE == RCAR_QOS_NONE) */
}
