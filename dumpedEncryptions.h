#include <cstdint>

// Generated encryption functions

struct OWORD {
	uint32_t Data[4];
};

namespace oPlayerWalkMovement 
{

	uint64_t encrypt_0x70(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 12) | (eax << 20)) - 1321411259;
		eax = ((eax >> 11) | (eax << 21)) - 1592011300;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x70(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 1592011300;
		eax = ((eax << 11) | (eax >> 21)) + 1321411259;
		eax = ((eax << 12) | (eax >> 20));

		return eax;
	}

	uint64_t encrypt_0x78(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax + 2982251215;
		eax = ((eax >> 25) | (eax << 7)) - 156254153;
		eax = ((eax >> 19) | (eax << 13));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x78(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax << 19) | (eax >> 13)) + 156254153;
		eax = ((eax << 25) | (eax >> 7)) - 2982251215;

		return eax;
	}

	uint64_t encrypt_0x80(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = (eax ^ 383666110) + 1552488437;
		eax = ((eax >> 13) | (eax << 19)) - 3473124;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x80(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 3473124;
		eax = (((eax << 13) | (eax >> 19)) - 1552488437) ^ 383666110;

		return eax;
	}

	uint64_t encrypt_0x88(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax + 3071505235) ^ 2888058212) + 2145544369;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x88(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax - 2145544369) ^ 2888058212) - 3071505235;

		return eax;
	}

	uint64_t encrypt_0x90(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 25) | (eax << 7)) ^ 1527167681;
		eax = ((eax >> 6) | (eax << 26));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x90(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax << 6) | (eax >> 26)) ^ 1527167681;
		eax = ((eax << 25) | (eax >> 7));

		return eax;
	}

	uint64_t encrypt_0x98(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax ^ 4001451163;
		eax = (((eax >> 19) | (eax << 13)) ^ 1818214674) + 1594314570;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x98(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = (eax - 1594314570) ^ 1818214674;
		eax = ((eax << 19) | (eax >> 13)) ^ 4001451163;

		return eax;
	}

	uint64_t encrypt_0xA0(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = (((eax >> 14) | (eax << 18)) + 90882013) ^ 2999415833;
		eax = ((eax >> 19) | (eax << 13));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0xA0(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = (((eax << 19) | (eax >> 13)) ^ 2999415833) - 90882013;
		eax = ((eax << 14) | (eax >> 18));

		return eax;
	}

	uint64_t encrypt_0xA8(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 3) | (eax << 29)) ^ 3044099172;
		eax = ((eax >> 17) | (eax << 15)) - 273188659;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0xA8(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 273188659;
		eax = ((eax << 17) | (eax >> 15)) ^ 3044099172;
		eax = ((eax << 3) | (eax >> 29));

		return eax;
	}

	uint64_t encrypt_0xB0(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = (eax + 1242231664) ^ 2563519285;
		eax = ((eax >> 25) | (eax << 7)) + 1623904195;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0xB0(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax - 1623904195;
		eax = (((eax << 25) | (eax >> 7)) ^ 2563519285) - 1242231664;

		return eax;
	}

	uint64_t encrypt_0xB8(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 28) | (eax << 4)) ^ 2229934378;
		eax = ((eax >> 26) | (eax << 6)) + 1880767401;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0xB8(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax - 1880767401;
		eax = ((eax << 26) | (eax >> 6)) ^ 2229934378;
		eax = ((eax << 28) | (eax >> 4));

		return eax;
	}

	uint64_t encrypt_0xC0(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 17) | (eax << 15)) - 1710795853;
		eax = ((eax >> 19) | (eax << 13)) ^ 2035076575;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0xC0(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax ^ 2035076575;
		eax = ((eax << 19) | (eax >> 13)) + 1710795853;
		eax = ((eax << 17) | (eax >> 15));

		return eax;
	}

	uint64_t encrypt_0xC8(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t ecx = unencrypted;

		ecx = (ecx + 305761006) ^ 4038868563;
		ecx = ((ecx >> 21) | (ecx << 11));

		*(uint32_t*)&rbp = ecx;
		return rbp;
	}

	uint32_t decrypt_0xC8(uint64_t unencrypted) 
	{
		uint32_t ecx = static_cast<uint32_t>(unencrypted);

		ecx = (((ecx << 21) | (ecx >> 11)) ^ 4038868563) - 305761006;

		return ecx;
	}

	uint64_t encrypt_0xD0(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = (((eax >> 21) | (eax << 11)) ^ 3416178288) - 1931560680;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0xD0(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = (eax + 1931560680) ^ 3416178288;
		eax = ((eax << 21) | (eax >> 11));

		return eax;
	}

	uint64_t encrypt_0xF8(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = (eax ^ 4106686817) + 2354287184;
		eax = ((eax >> 9) | (eax << 23));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0xF8(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = (((eax << 9) | (eax >> 23)) - 2354287184) ^ 4106686817;

		return eax;
	}

	uint64_t encrypt_0x100(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax ^ 1685416721;
		eax = ((eax >> 17) | (eax << 15)) + 585604166;
		eax = ((eax >> 10) | (eax << 22));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x100(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax << 10) | (eax >> 22)) - 585604166;
		eax = ((eax << 17) | (eax >> 15)) ^ 1685416721;

		return eax;
	}

	uint64_t encrypt_0x108(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax + 1633364426;
		eax = (((eax >> 23) | (eax << 9)) ^ 133194055) + 1996069932;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x108(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = (eax - 1996069932) ^ 133194055;
		eax = ((eax << 23) | (eax >> 9)) - 1633364426;

		return eax;
	}

	uint64_t encrypt_0x110(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 31) | (eax * 2)) + 830450128;
		eax = ((eax >> 1) | (eax << 31)) - 577950214;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x110(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 577950214;
		eax = ((eax << 1) | (eax >> 31)) - 830450128;
		eax = ((eax << 31) | eax) - eax;

		return eax;
	}

	uint64_t encrypt_0x118(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((((eax >> 4) | (eax << 28)) + 156933033) ^ 3144127914) + 1010327746;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x118(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax - 1010327746) ^ 3144127914) - 156933033;
		eax = ((eax << 4) | (eax >> 28));

		return eax;
	}

	uint64_t encrypt_0x120(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax + 2405425638;
		eax = ((eax >> 10) | (eax << 22)) ^ 3034717569;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x120(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax ^ 3034717569;
		eax = ((eax << 10) | (eax >> 22)) - 2405425638;

		return eax;
	}

	OWORD encrypt_0x128(OWORD unencrypted) 
	{
		OWORD rbp = unencrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = ((ecx >> 8) | (ecx << 24)) + 2025247206;
			ecx = ((ecx >> 15) | (ecx << 17));

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD decrypt_0x128(OWORD encrypted) 
	{
		OWORD rbp = encrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = ((ecx << 15) | (ecx >> 17)) - 2025247206;
			ecx = ((ecx << 8) | (ecx >> 24));

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD encrypt_0x138(OWORD unencrypted) 
	{
		OWORD rbp = unencrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = (ecx + 1164829335) ^ 2072890939;
			ecx = ((ecx >> 2) | (ecx << 30)) + 1487325520;

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD decrypt_0x138(OWORD encrypted) 
	{
		OWORD rbp = encrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = ecx - 1487325520;
			ecx = (((ecx << 2) | (ecx >> 30)) ^ 2072890939) - 1164829335;

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD encrypt_0x148(OWORD unencrypted) 
	{
		OWORD rbp = unencrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = ecx ^ 2889467411;
			ecx = ((ecx >> 10) | (ecx << 22)) + 3325786744;
			ecx = ((ecx >> 2) | (ecx << 30));

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD decrypt_0x148(OWORD encrypted) 
	{
		OWORD rbp = encrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = ((ecx << 2) | (ecx >> 30)) - 3325786744;
			ecx = ((ecx << 10) | (ecx >> 22)) ^ 2889467411;

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD encrypt_0x158(OWORD unencrypted) 
	{
		OWORD rbp = unencrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = ((ecx >> 4) | (ecx << 28)) + 1739726439;
			ecx = ((ecx >> 17) | (ecx << 15));

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD decrypt_0x158(OWORD encrypted) 
	{
		OWORD rbp = encrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = ((ecx << 17) | (ecx >> 15)) - 1739726439;
			ecx = ((ecx << 4) | (ecx >> 28));

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD encrypt_0x168(OWORD unencrypted) 
	{
		OWORD rbp = unencrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = (((ecx << 22) | (ecx >> 10)) ^ 1850414775) + 2475069480;
			ecx = ((ecx >> 19) | (ecx << 13));

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD decrypt_0x168(OWORD encrypted) 
	{
		OWORD rbp = encrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = (((ecx << 19) | (ecx >> 13)) - 2475069480) ^ 1850414775;
			ecx = ((ecx >> 22) | (ecx << 10));

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD encrypt_0x178(OWORD unencrypted) 
	{
		OWORD rbp = unencrypted;
		OWORD* r8 = &rbp;
		int esi = 3;

		uint32_t edx;
		do
		{
			edx = *(uint32_t*)&r8;
			r8 = (OWORD*)((char*)r8 + 4);

			edx = (((edx >> 27) | (edx << 5)) - 36879493) ^ 3318139622;
			edx = ((edx >> 20) | (edx << 12));

			*((uint32_t*)r8 - 1) = edx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD decrypt_0x178(OWORD encrypted) 
	{
		OWORD rbp = encrypted;
		OWORD* r8 = &rbp;
		int esi = 3;

		uint32_t edx;
		do
		{
			edx = *(uint32_t*)&r8;
			r8 = (OWORD*)((char*)r8 + 4);

			edx = (((edx << 20) | (edx >> 12)) ^ 3318139622) + 36879493;
			edx = ((edx << 27) | (edx >> 5));

			*((uint32_t*)r8 - 1) = edx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD encrypt_0x188(OWORD unencrypted) 
	{
		OWORD rbp = unencrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = ((ecx >> 8) | (ecx << 24)) + 2313321056;
			ecx = ((ecx >> 24) | (ecx << 8));

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD decrypt_0x188(OWORD encrypted) 
	{
		OWORD rbp = encrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = ((ecx << 24) | (ecx >> 8)) - 2313321056;
			ecx = ((ecx << 8) | (ecx >> 24));

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	uint64_t encrypt_0x198(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax + 4167038539;
		eax = ((eax >> 17) | (eax << 15)) - 45175145;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x198(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 45175145;
		eax = ((eax << 17) | (eax >> 15)) - 4167038539;

		return eax;
	}

	uint64_t encrypt_0x1A0(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 28) | (eax << 4)) - 1154591808;
		eax = ((eax >> 22) | (eax << 10)) - 367159395;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x1A0(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 367159395;
		eax = ((eax << 22) | (eax >> 10)) + 1154591808;
		eax = ((eax << 28) | (eax >> 4));

		return eax;
	}

	uint64_t encrypt_0x1A8(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax + 653210016;
		eax = (((eax >> 12) | (eax << 20)) ^ 3020262702) + 1854289036;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x1A8(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = (eax - 1854289036) ^ 3020262702;
		eax = ((eax << 12) | (eax >> 20)) - 653210016;

		return eax;
	}

	uint64_t encrypt_0x1BC(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 26) | (eax << 6)) + 509795546;
		eax = ((eax >> 10) | (eax << 22)) - 1904831498;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x1BC(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 1904831498;
		eax = ((eax << 10) | (eax >> 22)) - 509795546;
		eax = ((eax << 26) | (eax >> 6));

		return eax;
	}

	uint64_t encrypt_0x1C4(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax ^ 2830329204) - 598507538) ^ 2324097316;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x1C4(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax ^ 2324097316) + 598507538) ^ 2830329204;

		return eax;
	}

	uint64_t encrypt_0x1CC(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = (((eax >> 8) | (eax << 24)) ^ 1135710066) - 1371800152;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x1CC(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = (eax + 1371800152) ^ 1135710066;
		eax = ((eax << 8) | (eax >> 24));

		return eax;
	}

	uint64_t encrypt_0x1D4(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = (eax ^ 3781162764) + 2034833316;
		eax = ((eax >> 7) | (eax << 25));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x1D4(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = (((eax << 7) | (eax >> 25)) - 2034833316) ^ 3781162764;

		return eax;
	}

	uint64_t encrypt_0x1DC(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((((eax >> 2) | (eax << 30)) + 2099762798) ^ 4171383144) - 2044823546;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x1DC(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax + 2044823546) ^ 4171383144) - 2099762798;
		eax = ((eax << 2) | (eax >> 30));

		return eax;
	}

	uint64_t encrypt_0x1E4(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = (((eax >> 6) | (eax << 26)) - 426344132) ^ 4101587222;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x1E4(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = (eax ^ 4101587222) + 426344132;
		eax = ((eax << 6) | (eax >> 26));

		return eax;
	}

	uint64_t encrypt_0x1EC(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax ^ 1332052910;
		eax = ((eax >> 5) | (eax << 27)) ^ 3326449320;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x1EC(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax ^ 3326449320;
		eax = ((eax << 5) | (eax >> 27)) ^ 1332052910;

		return eax;
	}

	uint64_t encrypt_0x1F4(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 3) | (eax << 29)) - 668995366;
		eax = ((eax >> 3) | (eax << 29)) + 1694836246;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x1F4(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax - 1694836246;
		eax = ((eax << 3) | (eax >> 29)) + 668995366;
		eax = ((eax << 3) | (eax >> 29));

		return eax;
	}

	uint64_t encrypt_0x1FC(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax ^ 820899676;
		eax = ((eax >> 8) | (eax << 24)) + 2023258036;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x1FC(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax - 2023258036;
		eax = ((eax << 8) | (eax >> 24)) ^ 820899676;

		return eax;
	}

	uint64_t encrypt_0x204(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax ^ 1443881088;
		eax = ((eax >> 23) | (eax << 9)) - 1501295788;
		eax = ((eax >> 24) | (eax << 8));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x204(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax << 24) | (eax >> 8)) + 1501295788;
		eax = ((eax << 23) | (eax >> 9)) ^ 1443881088;

		return eax;
	}

	uint64_t encrypt_0x20C(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 25) | (eax << 7)) - 251068774;
		eax = ((eax >> 13) | (eax << 19)) - 1475931230;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x20C(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 1475931230;
		eax = ((eax << 13) | (eax >> 19)) + 251068774;
		eax = ((eax << 25) | (eax >> 7));

		return eax;
	}

	uint64_t encrypt_0x214(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax + 2430552232;
		eax = ((eax >> 8) | (eax << 24)) - 1627248146;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x214(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 1627248146;
		eax = ((eax << 8) | (eax >> 24)) - 2430552232;

		return eax;
	}

}

namespace oPostProcessAttribute 
{

	uint64_t encrypt_0x10(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;


		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x10(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);


		return eax;
	}

}

namespace ox87f6bba66052fda2ef236e6d3eb8454357a31ac0 
{

	uint64_t encrypt_0x18(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t edx = unencrypted;


		*(uint32_t*)&rbp = edx;
		return rbp;
	}

	uint32_t decrypt_0x18(uint64_t unencrypted) 
	{
		uint32_t edx = static_cast<uint32_t>(unencrypted);


		return edx;
	}

	uint64_t encrypt_0x28(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t edx = unencrypted;


		*(uint32_t*)&rbp = edx;
		return rbp;
	}

	uint32_t decrypt_0x28(uint64_t unencrypted) 
	{
		uint32_t edx = static_cast<uint32_t>(unencrypted);


		return edx;
	}

}

namespace oPlayerInput 
{

	OWORD encrypt_0x80(OWORD unencrypted) 
	{
		OWORD rbp = unencrypted;
		OWORD* rdx = &rbp;
		int esi = 0;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = ((ecx >> 10) | (ecx << 22)) + 1332135425;
			ecx = ((ecx >> 13) | (ecx << 19)) ^ 1056706166;

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD decrypt_0x80(OWORD encrypted) 
	{
		OWORD rbp = encrypted;
		OWORD* rdx = &rbp;
		int esi = 0;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			ecx = ecx ^ 1056706166;
			ecx = ((ecx << 13) | (ecx >> 19)) - 1332135425;
			ecx = ((ecx << 10) | (ecx >> 22));

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

}

namespace oxf502f58599ac85d19066745413bf4a15cd262919 
{

	uint64_t encrypt_0x10(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t edx = unencrypted;


		*(uint32_t*)&rbp = edx;
		return rbp;
	}

	uint32_t decrypt_0x10(uint64_t unencrypted) 
	{
		uint32_t edx = static_cast<uint32_t>(unencrypted);


		return edx;
	}

}

namespace oAttackEntity 
{

	uint64_t encrypt_0x288(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 23) | (eax << 9)) ^ 3400112772;
		eax = ((eax >> 9) | (eax << 23));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x288(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax << 9) | (eax >> 23)) ^ 3400112772;
		eax = ((eax << 23) | (eax >> 9));

		return eax;
	}

	uint64_t encrypt_0x290(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax ^ 4203315730;
		eax = (((eax >> 18) | (eax << 14)) + 1326076988) ^ 3265526809;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x290(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = (eax ^ 3265526809) - 1326076988;
		eax = ((eax << 18) | (eax >> 14)) ^ 4203315730;

		return eax;
	}

	uint64_t encrypt_0x298(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = ((eax >> 20) | (eax << 12)) - 153428223;
		eax = ((eax >> 10) | (eax << 22));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x298(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax << 10) | (eax >> 22)) + 153428223;
		eax = ((eax << 20) | (eax >> 12));

		return eax;
	}

	uint64_t encrypt_0x2A0(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax + 934982045;
		eax = ((eax >> 1) | (eax << 31)) - 1550933940;
		eax = ((eax >> 13) | (eax << 19));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x2A0(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax << 13) | (eax >> 19)) + 1550933940;
		eax = ((eax << 1) | (eax >> 31)) - 934982045;

		return eax;
	}

}

namespace oShield 
{

	uint64_t encrypt_0x26C(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = (eax ^ 1653017322) + 2047855720;
		eax = ((eax >> 27) | (eax << 5));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x26C(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = (((eax << 27) | (eax >> 5)) - 2047855720) ^ 1653017322;

		return eax;
	}

}

namespace oPlayerEyes 
{

	OWORD encrypt_0x40(OWORD unencrypted) 
	{
		OWORD rbp = unencrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t eax;
		do
		{
			eax = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			eax = eax ^ 350815467;
			eax = ((eax >> 16) | (eax << 16)) + 486728490;

			*((uint32_t*)rdx - 1) = eax;
			esi--;
		} while(esi);

		return rbp;
	}

	OWORD decrypt_0x40(OWORD encrypted) 
	{
		OWORD rbp = encrypted;
		OWORD* rdx = &rbp;
		int esi = 3;

		uint32_t eax;
		do
		{
			eax = *(uint32_t*)&rdx;
			rdx = (OWORD*)((char*)rdx + 4);

			eax = eax - 486728490;
			eax = ((eax << 16) | (eax >> 16)) ^ 350815467;

			*((uint32_t*)rdx - 1) = eax;
			esi--;
		} while(esi);

		return rbp;
	}

}

namespace oxd375194a5cd063c4d31b93ade437ea3357642a73 
{

	uint64_t encrypt_0x18(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t ecx = unencrypted;


		*(uint32_t*)&rbp = ecx;
		return rbp;
	}

	uint32_t decrypt_0x18(uint64_t unencrypted) 
	{
		uint32_t ecx = static_cast<uint32_t>(unencrypted);


		return ecx;
	}

}

namespace ox500725944786dcbf70d11a02e9aac4450ad9a0be_x1dfc93fec9dacb3340094af4b8729720b0f84968 
{

	uint64_t encrypt_0x318(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax + 684050477;
		eax = ((eax >> 30) | eax) - 1824369392;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x318(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 1824369392;
		eax = ((eax * 4) << 30) - 684050477;

		return eax;
	}

}

namespace oBaseProjectile 
{

	uint64_t encrypt_0x38C(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = (eax ^ 874502654) + 213574694;
		eax = ((eax >> 12) | (eax << 20)) - 661308844;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x38C(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 661308844;
		eax = (((eax << 12) | (eax >> 20)) - 213574694) ^ 874502654;

		return eax;
	}

	uint64_t encrypt_0x394(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t ecx = unencrypted;

		ecx = ecx ^ 350815459;
		ecx = ((ecx >> 16) | (ecx << 16)) + 486728490;

		*(uint32_t*)&rbp = ecx;
		return rbp;
	}

	uint32_t decrypt_0x394(uint64_t unencrypted) 
	{
		uint32_t ecx = static_cast<uint32_t>(unencrypted);

		ecx = ecx - 486728490;
		ecx = ((ecx << 16) | (ecx >> 16)) ^ 350815459;

		return ecx;
	}

	uint64_t encrypt_0x3C0(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax + 1121872957;
		eax = ((eax >> 17) | (eax << 15)) + 1824541882;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x3C0(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax - 1824541882;
		eax = ((eax << 17) | (eax >> 15)) - 1121872957;

		return eax;
	}

}

namespace oxe486f727e1814797161c89f630e77fa51e2043f6_xced47c2abbc538f6c27909f4c205ca063805ece9 
{

	uint64_t encrypt_0x3C(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax + 684050477;
		eax = ((eax >> 30) | eax) - 1824369392;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x3C(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 1824369392;
		eax = ((eax * 4) << 30) - 684050477;

		return eax;
	}

}

namespace oBasePlayer 
{

	uint64_t encrypt_0x440(uint64_t unencrypted) 
	{
		uint64_t rbp = unencrypted;
		uint64_t* rdx = &rbp;
		int esi = 2;

		uint32_t eax;
		do
		{
			eax = *(uint32_t*)&rdx;
			rdx = (uint64_t*)((char*)rdx + 4);

			eax = (eax ^ 3781162757) + 2034833323;
			eax = ((eax >> 7) | (eax << 25));

			*((uint32_t*)rdx - 1) = eax;
			esi--;
		} while(esi);

		return rbp;
	}

	uint64_t decrypt_0x440(uint64_t encrypted) 
	{
		uint64_t rbp = encrypted;
		uint64_t* rdx = &rbp;
		int esi = 2;

		uint32_t eax;
		do
		{
			eax = *(uint32_t*)&rdx;
			rdx = (uint64_t*)((char*)rdx + 4);

			eax = (((eax << 7) | (eax >> 25)) - 2034833323) ^ 3781162757;

			*((uint32_t*)rdx - 1) = eax;
			esi--;
		} while(esi);

		return rbp;
	}

	uint64_t encrypt_0x4F4(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax ^ 2427512785;
		eax = ((eax >> 28) | (eax << 4)) - 105066582;
		eax = ((eax >> 1) | (eax << 31));

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x4F4(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = ((eax << 1) | (eax >> 31)) + 105066582;
		eax = ((eax << 28) | (eax >> 4)) ^ 2427512785;

		return eax;
	}

	uint64_t encrypt_0x580(uint64_t unencrypted) 
	{
		uint64_t rbp = unencrypted;
		uint64_t* rdx = &rbp;
		int esi = 2;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (uint64_t*)((char*)rdx + 4);

			ecx = ((((ecx >> 13) | (ecx << 19)) ^ 1801142733) - 1131811119) ^ 3544183867;

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

	uint64_t decrypt_0x580(uint64_t encrypted) 
	{
		uint64_t rbp = encrypted;
		uint64_t* rdx = &rbp;
		int esi = 2;

		uint32_t ecx;
		do
		{
			ecx = *(uint32_t*)&rdx;
			rdx = (uint64_t*)((char*)rdx + 4);

			ecx = ((ecx ^ 3544183867) + 1131811119) ^ 1801142733;
			ecx = ((ecx << 13) | (ecx >> 19));

			*((uint32_t*)rdx - 1) = ecx;
			esi--;
		} while(esi);

		return rbp;
	}

}

namespace ox1c423d9165d81e05fc2833eb851dcce36bf19392_x5594a7d3fd607bd9dd19be5bbd1dd03dd6a07e9a 
{

	uint64_t encrypt_0x160(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t eax = unencrypted;

		eax = eax + 684050477;
		eax = ((eax >> 30) | eax) - 1824369392;

		*(uint32_t*)&rbp = eax;
		return rbp;
	}

	uint32_t decrypt_0x160(uint64_t unencrypted) 
	{
		uint32_t eax = static_cast<uint32_t>(unencrypted);

		eax = eax + 1824369392;
		eax = ((eax * 4) << 30) - 684050477;

		return eax;
	}

}

namespace ox57d98c79e0cc47fe86d5b2a2e573d4c27b04127f_xa327a78ecdbd19b9ef2c5fbd9d18da5887c8dfdd 
{

	uint64_t encrypt_0x20(uint32_t unencrypted) 
	{
		uint64_t rbp{};
		uint32_t ecx = unencrypted;


		*(uint32_t*)&rbp = ecx;
		return rbp;
	}

	uint32_t decrypt_0x20(uint64_t unencrypted) 
	{
		uint32_t ecx = static_cast<uint32_t>(unencrypted);


		return ecx;
	}

}

