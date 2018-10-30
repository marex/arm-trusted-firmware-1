/*
 * Copyright (c) 2015-2019, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef PFC_REGS_H
#define PFC_REGS_H

/* GPIO base address */
#define GPIO_BASE		(0xE6050000U)

/* GPIO registers */
#define GPIO_IOINTSEL0		(GPIO_BASE + 0x0000U)
#define GPIO_INOUTSEL0		(GPIO_BASE + 0x0004U)
#define GPIO_OUTDT0		(GPIO_BASE + 0x0008U)
#define GPIO_INDT0		(GPIO_BASE + 0x000CU)
#define GPIO_INTDT0		(GPIO_BASE + 0x0010U)
#define GPIO_INTCLR0		(GPIO_BASE + 0x0014U)
#define GPIO_INTMSK0		(GPIO_BASE + 0x0018U)
#define GPIO_MSKCLR0		(GPIO_BASE + 0x001CU)
#define GPIO_POSNEG0		(GPIO_BASE + 0x0020U)
#define GPIO_EDGLEVEL0		(GPIO_BASE + 0x0024U)
#define GPIO_FILONOFF0		(GPIO_BASE + 0x0028U)
#define GPIO_INTMSKS0		(GPIO_BASE + 0x0038U)
#define GPIO_MSKCLRS0		(GPIO_BASE + 0x003CU)
#define GPIO_OUTDTSEL0		(GPIO_BASE + 0x0040U)
#define GPIO_OUTDTH0		(GPIO_BASE + 0x0044U)
#define GPIO_OUTDTL0		(GPIO_BASE + 0x0048U)
#define GPIO_BOTHEDGE0		(GPIO_BASE + 0x004CU)
#define GPIO_IOINTSEL1		(GPIO_BASE + 0x1000U)
#define GPIO_INOUTSEL1		(GPIO_BASE + 0x1004U)
#define GPIO_OUTDT1		(GPIO_BASE + 0x1008U)
#define GPIO_INDT1		(GPIO_BASE + 0x100CU)
#define GPIO_INTDT1		(GPIO_BASE + 0x1010U)
#define GPIO_INTCLR1		(GPIO_BASE + 0x1014U)
#define GPIO_INTMSK1		(GPIO_BASE + 0x1018U)
#define GPIO_MSKCLR1		(GPIO_BASE + 0x101CU)
#define GPIO_POSNEG1		(GPIO_BASE + 0x1020U)
#define GPIO_EDGLEVEL1		(GPIO_BASE + 0x1024U)
#define GPIO_FILONOFF1		(GPIO_BASE + 0x1028U)
#define GPIO_INTMSKS1		(GPIO_BASE + 0x1038U)
#define GPIO_MSKCLRS1		(GPIO_BASE + 0x103CU)
#define GPIO_OUTDTSEL1		(GPIO_BASE + 0x1040U)
#define GPIO_OUTDTH1		(GPIO_BASE + 0x1044U)
#define GPIO_OUTDTL1		(GPIO_BASE + 0x1048U)
#define GPIO_BOTHEDGE1		(GPIO_BASE + 0x104CU)
#define GPIO_IOINTSEL2		(GPIO_BASE + 0x2000U)
#define GPIO_INOUTSEL2		(GPIO_BASE + 0x2004U)
#define GPIO_OUTDT2		(GPIO_BASE + 0x2008U)
#define GPIO_INDT2		(GPIO_BASE + 0x200CU)
#define GPIO_INTDT2		(GPIO_BASE + 0x2010U)
#define GPIO_INTCLR2		(GPIO_BASE + 0x2014U)
#define GPIO_INTMSK2		(GPIO_BASE + 0x2018U)
#define GPIO_MSKCLR2		(GPIO_BASE + 0x201CU)
#define GPIO_POSNEG2		(GPIO_BASE + 0x2020U)
#define GPIO_EDGLEVEL2		(GPIO_BASE + 0x2024U)
#define GPIO_FILONOFF2		(GPIO_BASE + 0x2028U)
#define GPIO_INTMSKS2		(GPIO_BASE + 0x2038U)
#define GPIO_MSKCLRS2		(GPIO_BASE + 0x203CU)
#define GPIO_OUTDTSEL2		(GPIO_BASE + 0x2040U)
#define GPIO_OUTDTH2		(GPIO_BASE + 0x2044U)
#define GPIO_OUTDTL2		(GPIO_BASE + 0x2048U)
#define GPIO_BOTHEDGE2		(GPIO_BASE + 0x204CU)
#define GPIO_IOINTSEL3		(GPIO_BASE + 0x3000U)
#define GPIO_INOUTSEL3		(GPIO_BASE + 0x3004U)
#define GPIO_OUTDT3		(GPIO_BASE + 0x3008U)
#define GPIO_INDT3		(GPIO_BASE + 0x300CU)
#define GPIO_INTDT3		(GPIO_BASE + 0x3010U)
#define GPIO_INTCLR3		(GPIO_BASE + 0x3014U)
#define GPIO_INTMSK3		(GPIO_BASE + 0x3018U)
#define GPIO_MSKCLR3		(GPIO_BASE + 0x301CU)
#define GPIO_POSNEG3		(GPIO_BASE + 0x3020U)
#define GPIO_EDGLEVEL3		(GPIO_BASE + 0x3024U)
#define GPIO_FILONOFF3		(GPIO_BASE + 0x3028U)
#define GPIO_INTMSKS3		(GPIO_BASE + 0x3038U)
#define GPIO_MSKCLRS3		(GPIO_BASE + 0x303CU)
#define GPIO_OUTDTSEL3		(GPIO_BASE + 0x3040U)
#define GPIO_OUTDTH3		(GPIO_BASE + 0x3044U)
#define GPIO_OUTDTL3		(GPIO_BASE + 0x3048U)
#define GPIO_BOTHEDGE3		(GPIO_BASE + 0x304CU)
#define GPIO_IOINTSEL4		(GPIO_BASE + 0x4000U)
#define GPIO_INOUTSEL4		(GPIO_BASE + 0x4004U)
#define GPIO_OUTDT4		(GPIO_BASE + 0x4008U)
#define GPIO_INDT4		(GPIO_BASE + 0x400CU)
#define GPIO_INTDT4		(GPIO_BASE + 0x4010U)
#define GPIO_INTCLR4		(GPIO_BASE + 0x4014U)
#define GPIO_INTMSK4		(GPIO_BASE + 0x4018U)
#define GPIO_MSKCLR4		(GPIO_BASE + 0x401CU)
#define GPIO_POSNEG4		(GPIO_BASE + 0x4020U)
#define GPIO_EDGLEVEL4		(GPIO_BASE + 0x4024U)
#define GPIO_FILONOFF4		(GPIO_BASE + 0x4028U)
#define GPIO_INTMSKS4		(GPIO_BASE + 0x4038U)
#define GPIO_MSKCLRS4		(GPIO_BASE + 0x403CU)
#define GPIO_OUTDTSEL4		(GPIO_BASE + 0x4040U)
#define GPIO_OUTDTH4		(GPIO_BASE + 0x4044U)
#define GPIO_OUTDTL4		(GPIO_BASE + 0x4048U)
#define GPIO_BOTHEDGE4		(GPIO_BASE + 0x404CU)
#define GPIO_IOINTSEL5		(GPIO_BASE + 0x5000U)
#define GPIO_INOUTSEL5		(GPIO_BASE + 0x5004U)
#define GPIO_OUTDT5		(GPIO_BASE + 0x5008U)
#define GPIO_INDT5		(GPIO_BASE + 0x500CU)
#define GPIO_INTDT5		(GPIO_BASE + 0x5010U)
#define GPIO_INTCLR5		(GPIO_BASE + 0x5014U)
#define GPIO_INTMSK5		(GPIO_BASE + 0x5018U)
#define GPIO_MSKCLR5		(GPIO_BASE + 0x501CU)
#define GPIO_POSNEG5		(GPIO_BASE + 0x5020U)
#define GPIO_EDGLEVEL5		(GPIO_BASE + 0x5024U)
#define GPIO_FILONOFF5		(GPIO_BASE + 0x5028U)
#define GPIO_INTMSKS5		(GPIO_BASE + 0x5038U)
#define GPIO_MSKCLRS5		(GPIO_BASE + 0x503CU)
#define GPIO_OUTDTSEL5		(GPIO_BASE + 0x5040U)
#define GPIO_OUTDTH5		(GPIO_BASE + 0x5044U)
#define GPIO_OUTDTL5		(GPIO_BASE + 0x5048U)
#define GPIO_BOTHEDGE5		(GPIO_BASE + 0x504CU)
#define GPIO_IOINTSEL6		(GPIO_BASE + 0x5400U)
#define GPIO_INOUTSEL6		(GPIO_BASE + 0x5404U)
#define GPIO_OUTDT6		(GPIO_BASE + 0x5408U)
#define GPIO_INTDT6		(GPIO_BASE + 0x5410U)
#define GPIO_INTCLR6		(GPIO_BASE + 0x5414U)
#define GPIO_INTMSK6		(GPIO_BASE + 0x5418U)
#define GPIO_MSKCLR6		(GPIO_BASE + 0x541CU)
#define GPIO_POSNEG6		(GPIO_BASE + 0x5420U)
#define GPIO_EDGLEVEL6		(GPIO_BASE + 0x5424U)
#define GPIO_FILONOFF6		(GPIO_BASE + 0x5428U)
#define GPIO_INTMSKS6		(GPIO_BASE + 0x5438U)
#define GPIO_MSKCLRS6		(GPIO_BASE + 0x543CU)
#define GPIO_OUTDTSEL6		(GPIO_BASE + 0x5440U)
#define GPIO_OUTDTH6		(GPIO_BASE + 0x5444U)
#define GPIO_OUTDTL6		(GPIO_BASE + 0x5448U)
#define GPIO_BOTHEDGE6		(GPIO_BASE + 0x544CU)
#define GPIO_IOINTSEL7		(GPIO_BASE + 0x5800U)
#define GPIO_INOUTSEL7		(GPIO_BASE + 0x5804U)
#define GPIO_OUTDT7		(GPIO_BASE + 0x5808U)
#define GPIO_INDT7		(GPIO_BASE + 0x580CU)
#define GPIO_INTDT7		(GPIO_BASE + 0x5810U)
#define GPIO_INTCLR7		(GPIO_BASE + 0x5814U)
#define GPIO_INTMSK7		(GPIO_BASE + 0x5818U)
#define GPIO_MSKCLR7		(GPIO_BASE + 0x581CU)
#define GPIO_POSNEG7		(GPIO_BASE + 0x5820U)
#define GPIO_EDGLEVEL7		(GPIO_BASE + 0x5824U)
#define GPIO_FILONOFF7		(GPIO_BASE + 0x5828U)
#define GPIO_INTMSKS7		(GPIO_BASE + 0x5838U)
#define GPIO_MSKCLRS7		(GPIO_BASE + 0x583CU)
#define GPIO_OUTDTSEL7		(GPIO_BASE + 0x5840U)
#define GPIO_OUTDTH7		(GPIO_BASE + 0x5844U)
#define GPIO_OUTDTL7		(GPIO_BASE + 0x5848U)
#define GPIO_BOTHEDGE7		(GPIO_BASE + 0x584CU)

/* Pin functon base address */
#define PFC_BASE		(0xE6060000U)

/* Pin functon registers */
#define PFC_PMMR		(PFC_BASE + 0x0000U)
#define PFC_GPSR0		(PFC_BASE + 0x0100U)
#define PFC_GPSR1		(PFC_BASE + 0x0104U)
#define PFC_GPSR2		(PFC_BASE + 0x0108U)
#define PFC_GPSR3		(PFC_BASE + 0x010CU)
#define PFC_GPSR4		(PFC_BASE + 0x0110U)
#define PFC_GPSR5		(PFC_BASE + 0x0114U)
#define PFC_GPSR6		(PFC_BASE + 0x0118U)
#define PFC_GPSR7		(PFC_BASE + 0x011CU)
#define PFC_IPSR0		(PFC_BASE + 0x0200U)
#define PFC_IPSR1		(PFC_BASE + 0x0204U)
#define PFC_IPSR2		(PFC_BASE + 0x0208U)
#define PFC_IPSR3		(PFC_BASE + 0x020CU)
#define PFC_IPSR4		(PFC_BASE + 0x0210U)
#define PFC_IPSR5		(PFC_BASE + 0x0214U)
#define PFC_IPSR6		(PFC_BASE + 0x0218U)
#define PFC_IPSR7		(PFC_BASE + 0x021CU)
#define PFC_IPSR8		(PFC_BASE + 0x0220U)
#define PFC_IPSR9		(PFC_BASE + 0x0224U)
#define PFC_IPSR10		(PFC_BASE + 0x0228U)
#define PFC_IPSR11		(PFC_BASE + 0x022CU)
#define PFC_IPSR12		(PFC_BASE + 0x0230U)
#define PFC_IPSR13		(PFC_BASE + 0x0234U)
#define PFC_IPSR14		(PFC_BASE + 0x0238U)
#define PFC_IPSR15		(PFC_BASE + 0x023CU)
#define PFC_IPSR16		(PFC_BASE + 0x0240U)
#define PFC_IPSR17		(PFC_BASE + 0x0244U)
#define PFC_IPSR18		(PFC_BASE + 0x0248U)
#define PFC_DRVCTRL0		(PFC_BASE + 0x0300U)
#define PFC_DRVCTRL1		(PFC_BASE + 0x0304U)
#define PFC_DRVCTRL2		(PFC_BASE + 0x0308U)
#define PFC_DRVCTRL3		(PFC_BASE + 0x030CU)
#define PFC_DRVCTRL4		(PFC_BASE + 0x0310U)
#define PFC_DRVCTRL5		(PFC_BASE + 0x0314U)
#define PFC_DRVCTRL6		(PFC_BASE + 0x0318U)
#define PFC_DRVCTRL7		(PFC_BASE + 0x031CU)
#define PFC_DRVCTRL8		(PFC_BASE + 0x0320U)
#define PFC_DRVCTRL9		(PFC_BASE + 0x0324U)
#define PFC_DRVCTRL10		(PFC_BASE + 0x0328U)
#define PFC_DRVCTRL11		(PFC_BASE + 0x032CU)
#define PFC_DRVCTRL12		(PFC_BASE + 0x0330U)
#define PFC_DRVCTRL13		(PFC_BASE + 0x0334U)
#define PFC_DRVCTRL14		(PFC_BASE + 0x0338U)
#define PFC_DRVCTRL15		(PFC_BASE + 0x033CU)
#define PFC_DRVCTRL16		(PFC_BASE + 0x0340U)
#define PFC_DRVCTRL17		(PFC_BASE + 0x0344U)
#define PFC_DRVCTRL18		(PFC_BASE + 0x0348U)
#define PFC_DRVCTRL19		(PFC_BASE + 0x034CU)
#define PFC_DRVCTRL20		(PFC_BASE + 0x0350U)
#define PFC_DRVCTRL21		(PFC_BASE + 0x0354U)
#define PFC_DRVCTRL22		(PFC_BASE + 0x0358U)
#define PFC_DRVCTRL23		(PFC_BASE + 0x035CU)
#define PFC_DRVCTRL24		(PFC_BASE + 0x0360U)
#define PFC_POCCTRL0		(PFC_BASE + 0x0380U)
#define PFC_IOCTRL31		(PFC_BASE + 0x0384U)
#define PFC_POCCTRL2		(PFC_BASE + 0x0388U)
#define PFC_IOCTRL33		(PFC_BASE + 0x038CU)
#define PFC_TDSELCTRL0		(PFC_BASE + 0x03C0U)
#define PFC_IOCTRL		(PFC_BASE + 0x03E0U)
#define PFC_TSREG		(PFC_BASE + 0x03E4U)
#define PFC_PUEN0		(PFC_BASE + 0x0400U)
#define PFC_PUEN1		(PFC_BASE + 0x0404U)
#define PFC_PUEN2		(PFC_BASE + 0x0408U)
#define PFC_PUEN3		(PFC_BASE + 0x040CU)
#define PFC_PUEN4		(PFC_BASE + 0x0410U)
#define PFC_PUEN5		(PFC_BASE + 0x0414U)
#define PFC_PUEN6		(PFC_BASE + 0x0418U)
#define PFC_PUD0		(PFC_BASE + 0x0440U)
#define PFC_PUD1		(PFC_BASE + 0x0444U)
#define PFC_PUD2		(PFC_BASE + 0x0448U)
#define PFC_PUD3		(PFC_BASE + 0x044CU)
#define PFC_PUD4		(PFC_BASE + 0x0450U)
#define PFC_PUD5		(PFC_BASE + 0x0454U)
#define PFC_PUD6		(PFC_BASE + 0x0458U)
#define PFC_MOD_SEL0		(PFC_BASE + 0x0500U)
#define PFC_MOD_SEL1		(PFC_BASE + 0x0504U)
#define PFC_MOD_SEL2		(PFC_BASE + 0x0508U)

#endif /* PFC_REGS_H */
