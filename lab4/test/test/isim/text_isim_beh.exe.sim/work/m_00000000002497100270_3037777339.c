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
static const char *ng0 = "D:/study/COD lab/lab4/test/control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {4294967295U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {100U, 0U};
static unsigned int ng7[] = {199U, 0U};
static int ng8[] = {0, 0};
static int ng9[] = {1, 0};
static int ng10[] = {2, 0};



static void Always_39_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 5808);
    *((int *)t2) = 1;
    t3 = (t0 + 5024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(41, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 2, 0LL);
    goto LAB14;

}

static void Always_45_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5824);
    *((int *)t2) = 1;
    t3 = (t0 + 5272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(49, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 2, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB19;

LAB16:    if (t21 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t11) = 1;

LAB19:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB22:    goto LAB15;

LAB11:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    goto LAB15;

LAB18:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(52, ng0);
    t29 = ((char*)((ng4)));
    t30 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 2, 0LL);
    goto LAB22;

}

static void Always_59_2(char *t0)
{
    char t4[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5840);
    *((int *)t2) = 1;
    t3 = (t0 + 5520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(75, ng0);

LAB16:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB17:    t6 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t31 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t31 == 1)
        goto LAB24;

LAB25:
LAB26:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(62, ng0);

LAB15:    xsi_set_current_line(63, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2792);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 5);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB14;

LAB18:    xsi_set_current_line(78, ng0);

LAB27:    xsi_set_current_line(79, ng0);
    t12 = ((char*)((ng8)));
    t13 = (t0 + 2952);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    t14 = (t12 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB31;

LAB28:    if (t19 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t4) = 1;

LAB31:    t29 = (t4 + 4);
    t22 = *((unsigned int *)t29);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(82, ng0);

LAB35:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 5, t12, 32);
    t13 = (t0 + 2792);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 5);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 5, t12, 32);
    t13 = (t0 + 2472);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 5);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 5, t12, 32);
    t13 = (t0 + 2632);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 5);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB34:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    t14 = (t12 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB39;

LAB36:    if (t19 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t4) = 1;

LAB39:    t29 = (t4 + 4);
    t22 = *((unsigned int *)t29);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 8, t12, 32);
    t13 = (t0 + 3912);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 8);

LAB42:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 3432);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    goto LAB26;

LAB20:    xsi_set_current_line(93, ng0);

LAB43:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 2952);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 8, t12, 32);
    t13 = (t0 + 3912);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 8);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 3432);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    t14 = (t12 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB45;

LAB44:    if (t19 != 0)
        goto LAB46;

LAB47:    t29 = (t4 + 4);
    t22 = *((unsigned int *)t29);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB26;

LAB22:    xsi_set_current_line(102, ng0);

LAB51:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 2792);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t12, 5, t13, 32);
    t14 = (t0 + 2792);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 5);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 8, t12, 32);
    t13 = (t0 + 4072);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 3432);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 8, t12, 32);
    t13 = (t0 + 3272);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 8);
    goto LAB26;

LAB24:    xsi_set_current_line(111, ng0);

LAB52:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng8)));
    t6 = (t0 + 2952);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB26;

LAB30:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(80, ng0);
    t30 = (t0 + 2792);
    t32 = (t30 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 2792);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 5);
    goto LAB34;

LAB38:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(88, ng0);
    t30 = ((char*)((ng1)));
    t32 = (t0 + 3912);
    xsi_vlogvar_assign_value(t32, t30, 0, 0, 8);
    goto LAB42;

LAB45:    *((unsigned int *)t4) = 1;
    goto LAB47;

LAB46:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(99, ng0);
    t30 = (t0 + 1912U);
    t32 = *((char **)t30);
    memset(t35, 0, 8);
    t30 = (t35 + 4);
    t33 = (t32 + 4);
    t28 = *((unsigned int *)t32);
    t36 = (t28 >> 0);
    *((unsigned int *)t35) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 0);
    *((unsigned int *)t30) = t38;
    t39 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t39 & 31U);
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 31U);
    t34 = (t0 + 2312);
    xsi_vlogvar_assign_value(t34, t35, 0, 0, 5);
    goto LAB50;

}


extern void work_m_00000000002497100270_3037777339_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Always_45_1,(void *)Always_59_2};
	xsi_register_didat("work_m_00000000002497100270_3037777339", "isim/text_isim_beh.exe.sim/work/m_00000000002497100270_3037777339.didat");
	xsi_register_executes(pe);
}
