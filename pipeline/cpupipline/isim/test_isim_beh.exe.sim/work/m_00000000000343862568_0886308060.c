/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/study/COD lab/pipeline/cpupipline/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static int ng13[] = {1, 0};
static int ng14[] = {0, 0};
static unsigned int ng15[] = {12U, 0U};



static void Always_42_0(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5344);
    *((int *)t2) = 1;
    t3 = (t0 + 4808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 2816U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 33, 33, 2U, t5, 1, t6, 32);
    t7 = (t0 + 3696);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 33);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2976U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 33, 33, 2U, t2, 1, t3, 32);
    t5 = (t0 + 3856);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 33);
    goto LAB2;

}

static void Always_48_1(char *t0)
{
    char t9[8];
    char t10[8];
    char t18[8];
    char t28[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 5024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5360);
    *((int *)t2) = 1;
    t3 = (t0 + 5056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 3136U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(51, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 3536);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB35;

LAB9:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 2816U);
    t4 = *((char **)t3);
    t3 = (t0 + 2976U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 3536);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB35;

LAB11:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 2816U);
    t4 = *((char **)t3);
    t3 = (t0 + 2976U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 3536);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB35;

LAB13:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 2816U);
    t4 = *((char **)t3);
    t3 = (t0 + 2976U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_and(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 3536);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB35;

LAB15:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2816U);
    t4 = *((char **)t3);
    t3 = (t0 + 2976U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_or(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 3536);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB35;

LAB17:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2816U);
    t4 = *((char **)t3);
    t3 = (t0 + 2976U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_xor(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 3536);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB35;

LAB19:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 2816U);
    t4 = *((char **)t3);
    t3 = (t0 + 2976U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_or(t10, 32, t4, 32, t7, 32);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t8 = (t10 + 4);
    memcpy(t9, t10, 8);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t12 | t13);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    t17 = (t0 + 3536);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);
    goto LAB35;

LAB21:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 2976U);
    t4 = *((char **)t3);
    t3 = (t0 + 2816U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t10, 0, 8);
    xsi_vlog_signed_lshift(t10, 32, t4, 32, t9, 5);
    t17 = (t0 + 3536);
    xsi_vlogvar_assign_value(t17, t10, 0, 0, 32);
    goto LAB35;

LAB23:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2976U);
    t4 = *((char **)t3);
    t3 = (t0 + 2816U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t10, 0, 8);
    xsi_vlog_signed_rshift(t10, 32, t4, 32, t9, 5);
    t17 = (t0 + 3536);
    xsi_vlogvar_assign_value(t17, t10, 0, 0, 32);
    goto LAB35;

LAB25:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2976U);
    t4 = *((char **)t3);
    t3 = (t0 + 2816U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t18, 0, 8);
    xsi_vlog_signed_arith_rshift(t18, 32, t4, 32, t10, 5);
    t17 = (t0 + 3536);
    xsi_vlogvar_assign_value(t17, t18, 0, 0, 32);
    goto LAB35;

LAB27:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2976U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 65535U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 65535U);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t10, 16, t3, 16);
    t17 = (t0 + 3536);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);
    goto LAB35;

LAB29:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 2816U);
    t4 = *((char **)t3);
    t3 = (t0 + 2976U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t4, 32, t7, 32);
    memset(t10, 0, 8);
    t3 = (t18 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t3) != 0)
        goto LAB38;

LAB39:    t17 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t17);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB40;

LAB41:    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t17) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t10) > 0)
        goto LAB46;

LAB47:    memcpy(t9, t26, 8);

LAB48:    t27 = (t0 + 3536);
    xsi_vlogvar_assign_value(t27, t9, 0, 0, 32);
    goto LAB35;

LAB31:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 3696);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3856);
    t17 = (t8 + 56U);
    t21 = *((char **)t17);
    xsi_vlog_unsigned_less(t28, 33, t7, 33, t21, 33);
    memset(t10, 0, 8);
    t26 = (t28 + 4);
    t11 = *((unsigned int *)t26);
    t12 = (~(t11));
    t13 = *((unsigned int *)t28);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t26) != 0)
        goto LAB51;

LAB52:    t29 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t29);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB53;

LAB54:    t22 = *((unsigned int *)t10);
    t23 = (~(t22));
    t24 = *((unsigned int *)t29);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t29) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t10) > 0)
        goto LAB59;

LAB60:    memcpy(t9, t31, 8);

LAB61:    t32 = (t0 + 3536);
    xsi_vlogvar_assign_value(t32, t9, 0, 0, 32);
    goto LAB35;

LAB36:    *((unsigned int *)t10) = 1;
    goto LAB39;

LAB38:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB39;

LAB40:    t21 = ((char*)((ng13)));
    goto LAB41;

LAB42:    t26 = ((char*)((ng14)));
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t9, 32, t21, 32, t26, 32);
    goto LAB48;

LAB46:    memcpy(t9, t21, 8);
    goto LAB48;

LAB49:    *((unsigned int *)t10) = 1;
    goto LAB52;

LAB51:    t27 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB52;

LAB53:    t30 = ((char*)((ng13)));
    goto LAB54;

LAB55:    t31 = ((char*)((ng14)));
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t9, 32, t30, 32, t31, 32);
    goto LAB61;

LAB59:    memcpy(t9, t30, 8);
    goto LAB61;

}


extern void work_m_00000000000343862568_0886308060_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_48_1};
	xsi_register_didat("work_m_00000000000343862568_0886308060", "isim/test_isim_beh.exe.sim/work/m_00000000000343862568_0886308060.didat");
	xsi_register_executes(pe);
}
