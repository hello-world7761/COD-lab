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
static const char *ng0 = "D:/study/COD lab/pipeline/cpupipline/MEM.v";
static int ng1[] = {4, 0};
static unsigned int ng2[] = {40U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {41U, 0U};



static void Cont_37_0(char *t0)
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

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
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
    t12 = (t0 + 5320);
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
    t25 = (t0 + 5192);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t4[8];
    char t29[8];
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
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5208);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t5 = (t0 + 2168U);
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

LAB13:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 10);

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
    t30 = (t0 + 1528U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 0);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 1023U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 1023U);
    t39 = (t0 + 3208);
    xsi_vlogvar_assign_value(t39, t29, 0, 0, 10);
    goto LAB14;

}

static void Cont_45_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_divide(t6, 32, t4, 10, t5, 32);
    t7 = (t0 + 5384);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 1023U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 9);
    t20 = (t0 + 5224);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_47_3(char *t0)
{
    char t6[8];
    char t30[8];
    char t52[8];
    char t53[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5240);
    *((int *)t2) = 1;
    t3 = (t0 + 4904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB38;

LAB35:    if (t18 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t6) = 1;

LAB38:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB41:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(50, ng0);

LAB13:    xsi_set_current_line(51, ng0);
    t28 = (t0 + 2488U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t30) = 1;

LAB17:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB24;

LAB21:    if (t18 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t6) = 1;

LAB24:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB31;

LAB28:    if (t18 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t6) = 1;

LAB31:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 16777215U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 16777215U);
    t5 = (t0 + 1848U);
    t7 = *((char **)t5);
    memset(t52, 0, 8);
    t5 = (t52 + 4);
    t8 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t52) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t5) = t18;
    t19 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t19 & 255U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 255U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t52, 8, t30, 24);
    t21 = (t0 + 3048);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);

LAB34:
LAB27:
LAB20:    goto LAB12;

LAB16:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(52, ng0);
    t54 = (t0 + 1848U);
    t55 = *((char **)t54);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t56 = (t55 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (t57 >> 0);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t56);
    t60 = (t59 >> 0);
    *((unsigned int *)t54) = t60;
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t61 & 255U);
    t62 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t62 & 255U);
    t64 = (t0 + 2328U);
    t65 = *((char **)t64);
    memset(t63, 0, 8);
    t64 = (t63 + 4);
    t66 = (t65 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (t67 >> 8);
    *((unsigned int *)t63) = t68;
    t69 = *((unsigned int *)t66);
    t70 = (t69 >> 8);
    *((unsigned int *)t64) = t70;
    t71 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t71 & 16777215U);
    t72 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t72 & 16777215U);
    xsi_vlogtype_concat(t52, 32, 32, 2U, t63, 24, t53, 8);
    t73 = (t0 + 3048);
    xsi_vlogvar_assign_value(t73, t52, 0, 0, 32);
    goto LAB20;

LAB23:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(54, ng0);
    t21 = (t0 + 2328U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t28 = (t22 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 0);
    *((unsigned int *)t52) = t34;
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 0);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t37 & 255U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 255U);
    t29 = (t0 + 1848U);
    t31 = *((char **)t29);
    memset(t53, 0, 8);
    t29 = (t53 + 4);
    t32 = (t31 + 4);
    t39 = *((unsigned int *)t31);
    t40 = (t39 >> 0);
    *((unsigned int *)t53) = t40;
    t41 = *((unsigned int *)t32);
    t42 = (t41 >> 0);
    *((unsigned int *)t29) = t42;
    t43 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t43 & 255U);
    t44 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t44 & 255U);
    t45 = (t0 + 2328U);
    t46 = *((char **)t45);
    memset(t63, 0, 8);
    t45 = (t63 + 4);
    t54 = (t46 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (t47 >> 16);
    *((unsigned int *)t63) = t48;
    t49 = *((unsigned int *)t54);
    t50 = (t49 >> 16);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t51 & 65535U);
    t57 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t57 & 65535U);
    xsi_vlogtype_concat(t30, 32, 32, 3U, t63, 16, t53, 8, t52, 8);
    t55 = (t0 + 3048);
    xsi_vlogvar_assign_value(t55, t30, 0, 0, 32);
    goto LAB27;

LAB30:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(56, ng0);
    t21 = (t0 + 2328U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t28 = (t22 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 0);
    *((unsigned int *)t52) = t34;
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 0);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t37 & 65535U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 65535U);
    t29 = (t0 + 1848U);
    t31 = *((char **)t29);
    memset(t53, 0, 8);
    t29 = (t53 + 4);
    t32 = (t31 + 4);
    t39 = *((unsigned int *)t31);
    t40 = (t39 >> 0);
    *((unsigned int *)t53) = t40;
    t41 = *((unsigned int *)t32);
    t42 = (t41 >> 0);
    *((unsigned int *)t29) = t42;
    t43 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t43 & 255U);
    t44 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t44 & 255U);
    t45 = (t0 + 2328U);
    t46 = *((char **)t45);
    memset(t63, 0, 8);
    t45 = (t63 + 4);
    t54 = (t46 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (t47 >> 24);
    *((unsigned int *)t63) = t48;
    t49 = *((unsigned int *)t54);
    t50 = (t49 >> 24);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t51 & 255U);
    t57 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t57 & 255U);
    xsi_vlogtype_concat(t30, 32, 32, 3U, t63, 8, t53, 8, t52, 16);
    t55 = (t0 + 3048);
    xsi_vlogvar_assign_value(t55, t30, 0, 0, 32);
    goto LAB34;

LAB37:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(61, ng0);

LAB42:    xsi_set_current_line(62, ng0);
    t21 = (t0 + 2488U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t33 = *((unsigned int *)t22);
    t34 = *((unsigned int *)t21);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t29);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t29);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB46;

LAB43:    if (t42 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t30) = 1;

LAB46:    t32 = (t30 + 4);
    t47 = *((unsigned int *)t32);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB53;

LAB50:    if (t18 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t6) = 1;

LAB53:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB49:    goto LAB41;

LAB45:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(63, ng0);
    t45 = (t0 + 1848U);
    t46 = *((char **)t45);
    memset(t53, 0, 8);
    t45 = (t53 + 4);
    t54 = (t46 + 4);
    t57 = *((unsigned int *)t46);
    t58 = (t57 >> 0);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t54);
    t60 = (t59 >> 0);
    *((unsigned int *)t45) = t60;
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t61 & 65535U);
    t62 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t62 & 65535U);
    t55 = (t0 + 2328U);
    t56 = *((char **)t55);
    memset(t63, 0, 8);
    t55 = (t63 + 4);
    t64 = (t56 + 4);
    t67 = *((unsigned int *)t56);
    t68 = (t67 >> 16);
    *((unsigned int *)t63) = t68;
    t69 = *((unsigned int *)t64);
    t70 = (t69 >> 16);
    *((unsigned int *)t55) = t70;
    t71 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t71 & 65535U);
    t72 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t72 & 65535U);
    xsi_vlogtype_concat(t52, 32, 32, 2U, t63, 16, t53, 16);
    t65 = (t0 + 3048);
    xsi_vlogvar_assign_value(t65, t52, 0, 0, 32);
    goto LAB49;

LAB52:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(65, ng0);
    t21 = (t0 + 2328U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t28 = (t22 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 0);
    *((unsigned int *)t52) = t34;
    t35 = *((unsigned int *)t28);
    t36 = (t35 >> 0);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t37 & 65535U);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 65535U);
    t29 = (t0 + 1848U);
    t31 = *((char **)t29);
    memset(t53, 0, 8);
    t29 = (t53 + 4);
    t32 = (t31 + 4);
    t39 = *((unsigned int *)t31);
    t40 = (t39 >> 0);
    *((unsigned int *)t53) = t40;
    t41 = *((unsigned int *)t32);
    t42 = (t41 >> 0);
    *((unsigned int *)t29) = t42;
    t43 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t43 & 65535U);
    t44 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t44 & 65535U);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t53, 16, t52, 16);
    t45 = (t0 + 3048);
    xsi_vlogvar_assign_value(t45, t30, 0, 0, 32);
    goto LAB56;

}


extern void work_m_00000000001218758587_4284950183_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Always_38_1,(void *)Cont_45_2,(void *)Always_47_3};
	xsi_register_didat("work_m_00000000001218758587_4284950183", "isim/test_isim_beh.exe.sim/work/m_00000000001218758587_4284950183.didat");
	xsi_register_executes(pe);
}
