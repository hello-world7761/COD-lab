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
static const char *ng0 = "E:/cpupipline/WB.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {35U, 0U};
static unsigned int ng4[] = {32U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {36U, 0U};
static unsigned int ng9[] = {33U, 0U};
static unsigned int ng10[] = {37U, 0U};



static void Cont_32_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = (t0 + 3992);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 3U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 1);
    t25 = (t0 + 3896);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t10[8];
    char t31[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t11;
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
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3912);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 1);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 1);
    if (t6 == 1)
        goto LAB8;

LAB9:
LAB11:
LAB10:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB12:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);
    t7 = (t0 + 1528U);
    t8 = *((char **)t7);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB12;

LAB8:    xsi_set_current_line(38, ng0);

LAB13:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);

LAB14:    t3 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB27:    goto LAB12;

LAB15:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 1688U);
    t8 = *((char **)t7);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB27;

LAB17:    xsi_set_current_line(42, ng0);

LAB28:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2008U);
    t7 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    t8 = (t7 + 4);
    t11 = (t3 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB32;

LAB29:    if (t21 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t10) = 1;

LAB32:    t25 = (t10 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t10, 0, 8);
    t7 = (t3 + 4);
    t8 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB39;

LAB36:    if (t21 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t10) = 1;

LAB39:    t24 = (t10 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t10, 0, 8);
    t7 = (t3 + 4);
    t8 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB46;

LAB43:    if (t21 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t10) = 1;

LAB46:    t24 = (t10 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 24);
    *((unsigned int *)t31) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 24);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    xsi_vlogtype_sign_extend(t10, 32, t31, 8);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);

LAB49:
LAB42:
LAB35:    goto LAB27;

LAB19:    xsi_set_current_line(53, ng0);

LAB50:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 2008U);
    t7 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    t8 = (t7 + 4);
    t11 = (t3 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB54;

LAB51:    if (t21 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t10) = 1;

LAB54:    t25 = (t10 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t10, 0, 8);
    t7 = (t3 + 4);
    t8 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB61;

LAB58:    if (t21 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t10) = 1;

LAB61:    t24 = (t10 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t10, 0, 8);
    t7 = (t3 + 4);
    t8 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB68;

LAB65:    if (t21 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t10) = 1;

LAB68:    t24 = (t10 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 24);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 24);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);

LAB71:
LAB64:
LAB57:    goto LAB27;

LAB21:    xsi_set_current_line(64, ng0);

LAB72:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 2008U);
    t7 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    t8 = (t7 + 4);
    t11 = (t3 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB76;

LAB73:    if (t21 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t10) = 1;

LAB76:    t25 = (t10 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 16);
    *((unsigned int *)t31) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 16);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t16 & 65535U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 65535U);
    xsi_vlogtype_sign_extend(t10, 32, t31, 16);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);

LAB79:    goto LAB27;

LAB23:    xsi_set_current_line(71, ng0);

LAB80:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2008U);
    t7 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    t8 = (t7 + 4);
    t11 = (t3 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB84;

LAB81:    if (t21 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t10) = 1;

LAB84:    t25 = (t10 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 16);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 16);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 65535U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 65535U);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);

LAB87:    goto LAB27;

LAB31:    t24 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(44, ng0);
    t33 = (t0 + 1688U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t33) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 255U);
    xsi_vlogtype_sign_extend(t31, 32, t32, 8);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t31, 0, 0, 32);
    goto LAB35;

LAB38:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(46, ng0);
    t25 = (t0 + 1688U);
    t33 = *((char **)t25);
    memset(t32, 0, 8);
    t25 = (t32 + 4);
    t34 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 8);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 8);
    *((unsigned int *)t25) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t41 & 255U);
    xsi_vlogtype_sign_extend(t31, 32, t32, 8);
    t35 = (t0 + 2408);
    xsi_vlogvar_assign_value(t35, t31, 0, 0, 32);
    goto LAB42;

LAB45:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(48, ng0);
    t25 = (t0 + 1688U);
    t33 = *((char **)t25);
    memset(t32, 0, 8);
    t25 = (t32 + 4);
    t34 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 16);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 16);
    *((unsigned int *)t25) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t41 & 255U);
    xsi_vlogtype_sign_extend(t31, 32, t32, 8);
    t35 = (t0 + 2408);
    xsi_vlogvar_assign_value(t35, t31, 0, 0, 32);
    goto LAB49;

LAB53:    t24 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(55, ng0);
    t33 = (t0 + 1688U);
    t34 = *((char **)t33);
    memset(t31, 0, 8);
    t33 = (t31 + 4);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t33) = t39;
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 255U);
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 255U);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t31, 0, 0, 32);
    goto LAB57;

LAB60:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(57, ng0);
    t25 = (t0 + 1688U);
    t33 = *((char **)t25);
    memset(t31, 0, 8);
    t25 = (t31 + 4);
    t34 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 8);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 8);
    *((unsigned int *)t25) = t39;
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 255U);
    t41 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t41 & 255U);
    t35 = (t0 + 2408);
    xsi_vlogvar_assign_value(t35, t31, 0, 0, 32);
    goto LAB64;

LAB67:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(59, ng0);
    t25 = (t0 + 1688U);
    t33 = *((char **)t25);
    memset(t31, 0, 8);
    t25 = (t31 + 4);
    t34 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 16);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 16);
    *((unsigned int *)t25) = t39;
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 255U);
    t41 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t41 & 255U);
    t35 = (t0 + 2408);
    xsi_vlogvar_assign_value(t35, t31, 0, 0, 32);
    goto LAB71;

LAB75:    t24 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(66, ng0);
    t33 = (t0 + 1688U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t33) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 65535U);
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 65535U);
    xsi_vlogtype_sign_extend(t31, 32, t32, 16);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t31, 0, 0, 32);
    goto LAB79;

LAB83:    t24 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(73, ng0);
    t33 = (t0 + 1688U);
    t34 = *((char **)t33);
    memset(t31, 0, 8);
    t33 = (t31 + 4);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t33) = t39;
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 65535U);
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 65535U);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t31, 0, 0, 32);
    goto LAB87;

}


extern void work_m_00000000003196765251_1595836845_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000003196765251_1595836845", "isim/test_isim_beh.exe.sim/work/m_00000000003196765251_1595836845.didat");
	xsi_register_executes(pe);
}
