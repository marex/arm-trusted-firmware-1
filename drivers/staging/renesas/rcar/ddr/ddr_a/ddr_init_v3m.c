/*
 * Copyright (c) 2015-2016, Renesas Electronics Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   - Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *
 *   - Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 *   - Neither the name of Renesas nor the names of its contributors may be
 *     used to endorse or promote products derived from this software without
 *     specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdint.h>
#include "boot_init_dram.h"
#include "boot_init_dram_regdef_v3m.h"

static void WriteReg_32(uintptr_t a, uint32_t v)
{
	*(volatile uint32_t*)a = v;
}

static uint32_t ReadReg_32(uintptr_t a)
{
	uint32_t w = *(volatile uint32_t*)a;
	return w;
}

static uint32_t init_ddr_v3m_1600(void)
{
	// last modified 2016.12.16

	uint32_t RegVal_R2, RegVal_R5, RegVal_R6, RegVal_R7, RegVal_R12;

   WriteReg_32(DBSC_V3M_DBSYSCNT0,0x00001234);
   WriteReg_32(DBSC_V3M_DBKIND,0x00000007);
#if RCAR_DRAM_DDR3L_MEMCONF == 0
   WriteReg_32(DBSC_V3M_DBMEMCONF00,0x0f030a02); // 1GB: Eagle
#else
   WriteReg_32(DBSC_V3M_DBMEMCONF00,0x10030a02); // 2GB: V3MSK
#endif
   WriteReg_32(DBSC_V3M_DBPHYCONF0,0x00000001);
   WriteReg_32(DBSC_V3M_DBTR0,0x0000000B);
   WriteReg_32(DBSC_V3M_DBTR1,0x00000008);
   WriteReg_32(DBSC_V3M_DBTR3,0x0000000B);
   WriteReg_32(DBSC_V3M_DBTR4,0x000B000B);
   WriteReg_32(DBSC_V3M_DBTR5,0x00000027);
   WriteReg_32(DBSC_V3M_DBTR6,0x0000001C);
   WriteReg_32(DBSC_V3M_DBTR7,0x00060006);
   WriteReg_32(DBSC_V3M_DBTR8,0x00000020);
   WriteReg_32(DBSC_V3M_DBTR9,0x00000006);
   WriteReg_32(DBSC_V3M_DBTR10,0x0000000C);
   WriteReg_32(DBSC_V3M_DBTR11,0x0000000B);
   WriteReg_32(DBSC_V3M_DBTR12,0x00120012);
   WriteReg_32(DBSC_V3M_DBTR13,0x01180118);
   WriteReg_32(DBSC_V3M_DBTR14,0x00140005);
   WriteReg_32(DBSC_V3M_DBTR15,0x00050004);
   WriteReg_32(DBSC_V3M_DBTR16,0x071D0305);
   WriteReg_32(DBSC_V3M_DBTR17,0x040C0010);
   WriteReg_32(DBSC_V3M_DBTR18,0x00000200);
   WriteReg_32(DBSC_V3M_DBTR19,0x01000040);
   WriteReg_32(DBSC_V3M_DBTR20,0x02000120);
   WriteReg_32(DBSC_V3M_DBTR21,0x00040004);
   WriteReg_32(DBSC_V3M_DBBL,0x00000000);
   WriteReg_32(DBSC_V3M_DBODT0,0x00000001);
   WriteReg_32(DBSC_V3M_DBADJ0,0x00000001);
   WriteReg_32(DBSC_V3M_DBCAM0CNF1,0x00082010);
   WriteReg_32(DBSC_V3M_DBCAM0CNF2,0x00002000);
   WriteReg_32(DBSC_V3M_DBSCHCNT0,0x080f003f);
   WriteReg_32(DBSC_V3M_DBSCHCNT1,0x00001010);
   WriteReg_32(DBSC_V3M_DBSCHSZ0,0x00000001);
   WriteReg_32(DBSC_V3M_DBSCHRW0,0x00000200);
   WriteReg_32(DBSC_V3M_DBSCHRW1,0x00000040);
   WriteReg_32(DBSC_V3M_DBSCHQOS40,0x00000600);
   WriteReg_32(DBSC_V3M_DBSCHQOS41,0x00000480);
   WriteReg_32(DBSC_V3M_DBSCHQOS42,0x00000300);
   WriteReg_32(DBSC_V3M_DBSCHQOS43,0x00000180);
   WriteReg_32(DBSC_V3M_DBSCHQOS90,0x00000400);
   WriteReg_32(DBSC_V3M_DBSCHQOS91,0x00000300);
   WriteReg_32(DBSC_V3M_DBSCHQOS92,0x00000200);
   WriteReg_32(DBSC_V3M_DBSCHQOS93,0x00000100);
   WriteReg_32(DBSC_V3M_DBSCHQOS130,0x00000300);
   WriteReg_32(DBSC_V3M_DBSCHQOS131,0x00000240);
   WriteReg_32(DBSC_V3M_DBSCHQOS132,0x00000180);
   WriteReg_32(DBSC_V3M_DBSCHQOS133,0x000000c0);
   WriteReg_32(DBSC_V3M_DBSCHQOS140,0x00000200);
   WriteReg_32(DBSC_V3M_DBSCHQOS141,0x00000180);
   WriteReg_32(DBSC_V3M_DBSCHQOS142,0x00000100);
   WriteReg_32(DBSC_V3M_DBSCHQOS143,0x00000080);
   WriteReg_32(DBSC_V3M_DBSCHQOS150,0x00000100);
   WriteReg_32(DBSC_V3M_DBSCHQOS151,0x000000c0);
   WriteReg_32(DBSC_V3M_DBSCHQOS152,0x00000080);
   WriteReg_32(DBSC_V3M_DBSCHQOS153,0x00000040);
   WriteReg_32(DBSC_V3M_DBSYSCONF1,0x00000002);
   WriteReg_32(DBSC_V3M_DBCAM0CNF1,0x00040C04);
   WriteReg_32(DBSC_V3M_DBCAM0CNF2,0x000001c4);
   WriteReg_32(DBSC_V3M_DBSCHSZ0,0x00000003);
   WriteReg_32(DBSC_V3M_DBSCHRW1,0x001a0080);
   WriteReg_32(DBSC_V3M_DBDFICNT0,0x00000010);

   WriteReg_32(DBSC_V3M_DBPDLK0,0X0000A55A);
   WriteReg_32(DBSC_V3M_DBCMD,0x01000001);
   WriteReg_32(DBSC_V3M_DBCMD,0x08000000);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000001);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X80010000);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000006);
   while ( (BIT0 & ReadReg_32(DBSC_V3M_DBPDRGD0)) == 0 );

   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000008);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X000B8000);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000090);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X04058904);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000091);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0007BB6D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000095);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0007BB6B);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000099);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0007BB6D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000090);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X04058900);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000021);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0024641E);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000001);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X00010073);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000006);
   while ( (BIT0 & ReadReg_32(DBSC_V3M_DBPDRGD0)) == 0 );

   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000090);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0C058900);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000090);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X04058900);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000006);
   while ( (BIT0 & ReadReg_32(DBSC_V3M_DBPDRGD0)) == 0 );

   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000003);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0780C700);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000007);
   while ( (BIT30& ReadReg_32(DBSC_V3M_DBPDRGD0)) == 0 );

   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000004);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X08C0C170);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000022);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X1000040B);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000023);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X2D9C0B66);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000024);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X2A88C400);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000025);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X30005200);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000026);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0014A9C9);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000027);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X00000D70);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000028);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X00000004);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000029);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X00000018);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X0000002C);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X81003047);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000020);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X00181884);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X0000001A);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X13C03C10);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000006);
   while ( (BIT0 & ReadReg_32(DBSC_V3M_DBPDRGD0)) == 0 );

   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000A7);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0D0D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000A8);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0D0D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000A9);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X000D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000C7);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0D0D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000C8);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0D0D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000C9);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X000D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000E7);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0D0D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000E8);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0D0D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000E9);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X000D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000107);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0D0D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000108);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0D0D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000109);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X000D0D0D);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000001);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X00010181);
   WriteReg_32(DBSC_V3M_DBCMD,0x08000001);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000006);
   while ( (BIT0 & ReadReg_32(DBSC_V3M_DBPDRGD0)) == 0 );

   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000001);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X00010601);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000006);
   while ( (BIT0 & ReadReg_32(DBSC_V3M_DBPDRGD0)) == 0 );

   for (uint32_t i = 0; i<4; i++)
   {
      WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000B1 + i*0x20);
      RegVal_R5 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0x0000FF00 ) >> 8;
      WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000B4 + i*0x20);
      RegVal_R6 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0x000000FF ) ;
      WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000B3 + i*0x20);
      RegVal_R7 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0x00000007 ) ;
      if ( RegVal_R6 > 0 )
      {
         WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000B2 + i*0x20);
         RegVal_R2 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0XFFFFFFF8 ) ;

         WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000B2 + i*0x20);
         WriteReg_32(DBSC_V3M_DBPDRGD0,((RegVal_R7+1)&0X00000007) | RegVal_R2);
         WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000B0 + i*0x20);
         RegVal_R2 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0XFFFFFF00 ) ;
         WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000B0 + i*0x20);
         WriteReg_32(DBSC_V3M_DBPDRGD0,RegVal_R2 | RegVal_R6);
      } else {
         WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000B2 + i*0x20);
         RegVal_R2 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0XFFFFFFF8 ) ;
         WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000B2 + i*0x20);
         WriteReg_32(DBSC_V3M_DBPDRGD0,RegVal_R2 | RegVal_R7);

         WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000B0 + i*0x20);
         RegVal_R2 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0XFFFFFF00 ) ;
         WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000B0 + i*0x20);
         WriteReg_32(DBSC_V3M_DBPDRGD0,(((RegVal_R5<<1) + RegVal_R6 ) & 0X000000FF )| RegVal_R2);
      }
   }

   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000005);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0XC1AA00A0);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000A0);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C0002C5);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000C0);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C0002C5);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000E0);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C0002C5);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000100);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C0002C5);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000001);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X00010801);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000006);
   while ( (BIT0 & ReadReg_32(DBSC_V3M_DBPDRGD0)) == 0 );

   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000005);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0XC1AA00B8);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000001);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0001F001);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000006);
   while ( (BIT0 & ReadReg_32(DBSC_V3M_DBPDRGD0)) == 0 );

   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000A0);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C000285);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000C0);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C000285);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000E0);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C000285);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000100);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C000285);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X0000002C);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X81003087);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000001);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X00010401);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000006);
   while ( (BIT0 & ReadReg_32(DBSC_V3M_DBPDRGD0)) == 0 );

   for (uint32_t i = 0; i < 4; i++)
   {
	   WriteReg_32(DBSC_V3M_DBPDRGA0, 0X000000B1 + i * 0x20);
	   RegVal_R5 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0x0000FF00) >> 8;
	   WriteReg_32(DBSC_V3M_DBPDRGA0, 0X000000B4 + i * 0x20);
	   RegVal_R6 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0x000000FF);

	   WriteReg_32(DBSC_V3M_DBPDRGA0, 0X000000B3 + i * 0x20);
	   RegVal_R7 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0x00000007);
	   RegVal_R12 = (RegVal_R5 >> 2);
	   if (RegVal_R6 - RegVal_R12 > 0)
	   {
		   WriteReg_32(DBSC_V3M_DBPDRGA0, 0X000000B2 + i * 0x20);
		   RegVal_R2 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0XFFFFFFF8);

		   WriteReg_32(DBSC_V3M_DBPDRGA0, 0X000000B2 + i * 0x20);
		   WriteReg_32(DBSC_V3M_DBPDRGD0, ((RegVal_R7 + 1) & 0X00000007) | RegVal_R2);
		   WriteReg_32(DBSC_V3M_DBPDRGA0, 0X000000B0 + i * 0x20);
		   RegVal_R2 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0XFFFFFF00);

		   WriteReg_32(DBSC_V3M_DBPDRGA0, 0X000000B0 + i * 0x20);
		   WriteReg_32(DBSC_V3M_DBPDRGD0, ((RegVal_R6 - RegVal_R12) & 0X000000FF) | RegVal_R2);
	   }
	   else
	   {
		   WriteReg_32(DBSC_V3M_DBPDRGA0, 0X000000B2 + i * 0x20);
		   RegVal_R2 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0XFFFFFFF8);
		   WriteReg_32(DBSC_V3M_DBPDRGA0, 0X000000B2 + i * 0x20);
		   WriteReg_32(DBSC_V3M_DBPDRGD0, (RegVal_R7 & 0X00000007) | RegVal_R2);
		   WriteReg_32(DBSC_V3M_DBPDRGA0, 0X000000B0 + i * 0x20);
		   RegVal_R2 = (ReadReg_32(DBSC_V3M_DBPDRGD0) & 0XFFFFFF00);
		   WriteReg_32(DBSC_V3M_DBPDRGA0, 0X000000B0 + i * 0x20);
		   WriteReg_32(DBSC_V3M_DBPDRGD0, ((RegVal_R6 + RegVal_R5 + (RegVal_R5 >> 1) + RegVal_R12) & 0X000000FF) | RegVal_R2);
	   }
   }

   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000A0);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C0002C5);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000C0);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C0002C5);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X000000E0);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C0002C5);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000100);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X7C0002C5);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000001);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X00015001);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000006);
   while ( (BIT0 & ReadReg_32(DBSC_V3M_DBPDRGD0)) == 0 );

   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000003);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0380C700);
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000007);
   while ( (BIT30& ReadReg_32(DBSC_V3M_DBPDRGD0)) != 0 );
   WriteReg_32(DBSC_V3M_DBPDRGA0,0X00000021);
   WriteReg_32(DBSC_V3M_DBPDRGD0,0X0024643E);

   WriteReg_32(DBSC_V3M_DBBUS0CNF1,0x00000000);
   WriteReg_32(DBSC_V3M_DBBUS0CNF0,0x00010001);
   WriteReg_32(DBSC_V3M_DBCALCNF,0x0100200E);
   WriteReg_32(DBSC_V3M_DBRFCNF1,0x00081860);
   WriteReg_32(DBSC_V3M_DBRFCNF2,0x00010000);
   WriteReg_32(DBSC_V3M_DBDFICUPDCNF,0x40100001);
   WriteReg_32(DBSC_V3M_DBRFEN,0x00000001);
   WriteReg_32(DBSC_V3M_DBACEN,0x00000001);
   WriteReg_32(DBSC_V3M_DBPDLK0,0X00000000);
   WriteReg_32(0xE67F0024, 0x00000001);
   WriteReg_32(DBSC_V3M_DBSYSCNT0,0x00000000);

   return 1;
}

int32_t rcar_dram_init(void)
{
	return init_ddr_v3m_1600() ? INITDRAM_OK : INITDRAM_NG;
}
