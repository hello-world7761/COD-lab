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
static const char *ng0 = "D:/study/COD lab/lab5/single_cycle_cpu/control.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {4, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {8U, 0U};
static int ng9[] = {15, 0};
static unsigned int ng10[] = {65535U, 0U};
static unsigned int ng11[] = {1U, 0U};
static unsigned int ng12[] = {35U, 0U};
static unsigned int ng13[] = {43U, 0U};



static void Always_47_0(char *t0)
{
    char t4[8];
    char t33[8];
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
    char *t31;
    char *t32;
    char *t34;

LAB0:    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6952);
    *((int *)t2) = 1;
    t3 = (t0 + 5920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 1208U);
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

LAB13:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB18;

LAB15:    if (t19 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t4) = 1;

LAB18:    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB14:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t6 = ((char*)((ng4)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_lshift(t33, 18, t4, 18, t6, 32);
    t12 = (t0 + 4648);
    xsi_vlogvar_assign_value(t12, t33, 0, 0, 18);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4808);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 18, t5, 18, t13, 18);
    t14 = (t0 + 4168);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 18);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 67108863U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 67108863U);
    t6 = ((char*)((ng4)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_lshift(t33, 28, t4, 28, t6, 32);
    t12 = (t0 + 4968);
    xsi_vlogvar_assign_value(t12, t33, 0, 0, 28);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(49, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 4808);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 18);
    goto LAB14;

LAB17:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(50, ng0);
    t29 = (t0 + 2408);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng3)));
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t31, 8, t32, 32);
    t34 = (t0 + 4808);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 18);
    goto LAB21;

}

static void Always_55_1(char *t0)
{
    char t4[8];
    char t31[8];
    char t37[8];
    char t48[8];
    char t49[8];
    char t54[8];
    char t92[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 6968);
    *((int *)t2) = 1;
    t3 = (t0 + 6168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 1208U);
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

LAB13:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 26);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t6 = ((char*)((ng6)));
    memset(t31, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t6);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t22 & t27);
    if (t28 != 0)
        goto LAB19;

LAB16:    if (t26 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t31) = 1;

LAB19:    t23 = (t31 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 26);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t6 = ((char*)((ng7)));
    memset(t31, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t6);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t22 & t27);
    if (t28 != 0)
        goto LAB26;

LAB23:    if (t26 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t31) = 1;

LAB26:    memset(t37, 0, 8);
    t23 = (t31 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t23) != 0)
        goto LAB29;

LAB30:    t30 = (t37 + 4);
    t41 = *((unsigned int *)t37);
    t42 = *((unsigned int *)t30);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB31;

LAB32:    memcpy(t54, t37, 8);

LAB33:    t86 = (t54 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t54);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(65, ng0);

LAB44:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB43:
LAB22:
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

LAB12:    xsi_set_current_line(58, ng0);

LAB15:    xsi_set_current_line(59, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 2408);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB14;

LAB18:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(62, ng0);
    t29 = (t0 + 4968);
    t30 = (t29 + 56U);
    t38 = *((char **)t30);
    memset(t37, 0, 8);
    t39 = (t37 + 4);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 255U);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 255U);
    t47 = (t0 + 2408);
    xsi_vlogvar_assign_value(t47, t37, 0, 0, 8);
    goto LAB22;

LAB25:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t37) = 1;
    goto LAB30;

LAB29:    t29 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB30;

LAB31:    t38 = (t0 + 4488);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t47 = ((char*)((ng1)));
    memset(t48, 0, 8);
    xsi_vlog_signed_greater(t48, 32, t40, 32, t47, 32);
    memset(t49, 0, 8);
    t50 = (t48 + 4);
    t44 = *((unsigned int *)t50);
    t45 = (~(t44));
    t46 = *((unsigned int *)t48);
    t51 = (t46 & t45);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t50) != 0)
        goto LAB36;

LAB37:    t55 = *((unsigned int *)t37);
    t56 = *((unsigned int *)t49);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t58 = (t37 + 4);
    t59 = (t49 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB33;

LAB34:    *((unsigned int *)t49) = 1;
    goto LAB37;

LAB36:    t53 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB37;

LAB38:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t37 + 4);
    t69 = (t49 + 4);
    t70 = *((unsigned int *)t37);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t49);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t78 = (t71 & t73);
    t79 = (t75 & t77);
    t80 = (~(t78));
    t81 = (~(t79));
    t82 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t82 & t80);
    t83 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t83 & t81);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    t85 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t85 & t81);
    goto LAB40;

LAB41:    xsi_set_current_line(63, ng0);
    t93 = (t0 + 4168);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    memset(t92, 0, 8);
    t96 = (t92 + 4);
    t97 = (t95 + 4);
    t98 = *((unsigned int *)t95);
    t99 = (t98 >> 0);
    *((unsigned int *)t92) = t99;
    t100 = *((unsigned int *)t97);
    t101 = (t100 >> 0);
    *((unsigned int *)t96) = t101;
    t102 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t102 & 255U);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t103 & 255U);
    t104 = (t0 + 2408);
    xsi_vlogvar_assign_value(t104, t92, 0, 0, 8);
    goto LAB43;

}

static void Always_70_2(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;

LAB0:    t1 = (t0 + 6384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6984);
    *((int *)t2) = 1;
    t3 = (t0 + 6416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_rshift(t8, 8, t6, 8, t7, 32);
    t9 = (t0 + 3368);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 6);
    goto LAB2;

}

static void Always_74_3(char *t0)
{
    char t4[8];
    char t31[8];
    char t37[8];
    char t42[8];
    char t64[8];
    char t65[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;

LAB0:    t1 = (t0 + 6632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 7000);
    *((int *)t2) = 1;
    t3 = (t0 + 6664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t5 = (t0 + 1208U);
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

LAB13:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 26);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t6 = ((char*)((ng8)));
    memset(t31, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t6);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t22 & t27);
    if (t28 != 0)
        goto LAB19;

LAB16:    if (t26 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t31) = 1;

LAB19:    t23 = (t31 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 26);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t6 = ((char*)((ng5)));
    memset(t31, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t6);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t22 & t27);
    if (t28 != 0)
        goto LAB43;

LAB40:    if (t26 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t31) = 1;

LAB43:    t23 = (t31 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 26);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t6 = ((char*)((ng12)));
    memset(t31, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t6);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t22 & t27);
    if (t28 != 0)
        goto LAB60;

LAB57:    if (t26 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t31) = 1;

LAB60:    t23 = (t31 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 26);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t6 = ((char*)((ng13)));
    memset(t31, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t6);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t22 & t27);
    if (t28 != 0)
        goto LAB77;

LAB74:    if (t26 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t31) = 1;

LAB77:    t23 = (t31 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 26);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t6 = ((char*)((ng7)));
    memset(t31, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t6);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t22 & t27);
    if (t28 != 0)
        goto LAB94;

LAB91:    if (t26 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t31) = 1;

LAB94:    t23 = (t31 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB95;

LAB96:
LAB97:
LAB80:
LAB63:
LAB46:
LAB22:
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

LAB12:    xsi_set_current_line(77, ng0);

LAB15:    xsi_set_current_line(78, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 4008);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB14;

LAB18:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(84, ng0);

LAB23:    xsi_set_current_line(85, ng0);
    t29 = (t0 + 1368U);
    t30 = *((char **)t29);
    t29 = (t0 + 1328U);
    t38 = (t29 + 72U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t37, 32, t30, t39, 2, t40, 32, 1);
    t41 = ((char*)((ng2)));
    memset(t42, 0, 8);
    t43 = (t37 + 4);
    t44 = (t41 + 4);
    t45 = *((unsigned int *)t37);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB27;

LAB24:    if (t54 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t42) = 1;

LAB27:    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t31) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t11 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t6 = ((char*)((ng5)));
    xsi_vlogtype_concat(t4, 32, 32, 2U, t6, 16, t31, 16);
    t12 = (t0 + 3688);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);

LAB30:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 21);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 21);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 16);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t2) == 0)
        goto LAB31;

LAB33:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB34:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB36;

LAB35:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB39:    goto LAB22;

LAB26:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(86, ng0);
    t66 = (t0 + 1368U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (t69 >> 0);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 0);
    *((unsigned int *)t66) = t72;
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 65535U);
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 65535U);
    t75 = ((char*)((ng10)));
    xsi_vlogtype_concat(t64, 32, 32, 2U, t75, 16, t65, 16);
    t76 = (t0 + 3688);
    xsi_vlogvar_assign_value(t76, t64, 0, 0, 32);
    goto LAB30;

LAB31:    *((unsigned int *)t4) = 1;
    goto LAB34;

LAB36:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t19 | t20);
    goto LAB35;

LAB37:    xsi_set_current_line(92, ng0);
    t14 = ((char*)((ng2)));
    t23 = (t0 + 4008);
    xsi_vlogvar_assign_value(t23, t14, 0, 0, 1);
    goto LAB39;

LAB42:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(96, ng0);

LAB47:    xsi_set_current_line(97, ng0);
    t29 = (t0 + 1368U);
    t30 = *((char **)t29);
    memset(t37, 0, 8);
    t29 = (t37 + 4);
    t38 = (t30 + 4);
    t45 = *((unsigned int *)t30);
    t46 = (t45 >> 21);
    *((unsigned int *)t37) = t46;
    t47 = *((unsigned int *)t38);
    t48 = (t47 >> 21);
    *((unsigned int *)t29) = t48;
    t49 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t49 & 31U);
    t50 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t50 & 31U);
    t39 = (t0 + 2568);
    xsi_vlogvar_assign_value(t39, t37, 0, 0, 5);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 16);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 11);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 11);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t2) == 0)
        goto LAB48;

LAB50:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB51:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB53;

LAB52:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB56:    goto LAB46;

LAB48:    *((unsigned int *)t4) = 1;
    goto LAB51;

LAB53:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t19 | t20);
    goto LAB52;

LAB54:    xsi_set_current_line(103, ng0);
    t14 = ((char*)((ng2)));
    t23 = (t0 + 4008);
    xsi_vlogvar_assign_value(t23, t14, 0, 0, 1);
    goto LAB56;

LAB59:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(107, ng0);

LAB64:    xsi_set_current_line(108, ng0);
    t29 = (t0 + 1368U);
    t30 = *((char **)t29);
    memset(t37, 0, 8);
    t29 = (t37 + 4);
    t38 = (t30 + 4);
    t45 = *((unsigned int *)t30);
    t46 = (t45 >> 21);
    *((unsigned int *)t37) = t46;
    t47 = *((unsigned int *)t38);
    t48 = (t47 >> 21);
    *((unsigned int *)t29) = t48;
    t49 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t49 & 31U);
    t50 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t50 & 31U);
    t39 = (t0 + 2568);
    xsi_vlogvar_assign_value(t39, t37, 0, 0, 5);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t31) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t11 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t6 = ((char*)((ng5)));
    xsi_vlogtype_concat(t4, 32, 32, 2U, t6, 16, t31, 16);
    t12 = (t0 + 3688);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 2);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t6 = (t0 + 3528);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 6);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 16);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB68;

LAB66:    if (*((unsigned int *)t2) == 0)
        goto LAB65;

LAB67:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB68:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB70;

LAB69:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB73:    goto LAB63;

LAB65:    *((unsigned int *)t4) = 1;
    goto LAB68;

LAB70:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t19 | t20);
    goto LAB69;

LAB71:    xsi_set_current_line(114, ng0);
    t14 = ((char*)((ng2)));
    t23 = (t0 + 4008);
    xsi_vlogvar_assign_value(t23, t14, 0, 0, 1);
    goto LAB73;

LAB76:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(118, ng0);

LAB81:    xsi_set_current_line(119, ng0);
    t29 = (t0 + 1368U);
    t30 = *((char **)t29);
    memset(t37, 0, 8);
    t29 = (t37 + 4);
    t38 = (t30 + 4);
    t45 = *((unsigned int *)t30);
    t46 = (t45 >> 21);
    *((unsigned int *)t37) = t46;
    t47 = *((unsigned int *)t38);
    t48 = (t47 >> 21);
    *((unsigned int *)t29) = t48;
    t49 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t49 & 31U);
    t50 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t50 & 31U);
    t39 = (t0 + 2568);
    xsi_vlogvar_assign_value(t39, t37, 0, 0, 5);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 16);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t31) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t11 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t6 = ((char*)((ng5)));
    xsi_vlogtype_concat(t4, 32, 32, 2U, t6, 16, t31, 16);
    t12 = (t0 + 3688);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 2);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t6 = (t0 + 3528);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 6);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB85;

LAB83:    if (*((unsigned int *)t2) == 0)
        goto LAB82;

LAB84:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB85:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB87;

LAB86:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB90:    goto LAB80;

LAB82:    *((unsigned int *)t4) = 1;
    goto LAB85;

LAB87:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t19 | t20);
    goto LAB86;

LAB88:    xsi_set_current_line(125, ng0);
    t14 = ((char*)((ng2)));
    t23 = (t0 + 3208);
    xsi_vlogvar_assign_value(t23, t14, 0, 0, 1);
    goto LAB90;

LAB93:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB94;

LAB95:    xsi_set_current_line(129, ng0);

LAB98:    xsi_set_current_line(130, ng0);
    t29 = (t0 + 1368U);
    t30 = *((char **)t29);
    memset(t37, 0, 8);
    t29 = (t37 + 4);
    t38 = (t30 + 4);
    t45 = *((unsigned int *)t30);
    t46 = (t45 >> 21);
    *((unsigned int *)t37) = t46;
    t47 = *((unsigned int *)t38);
    t48 = (t47 >> 21);
    *((unsigned int *)t29) = t48;
    t49 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t49 & 31U);
    t50 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t50 & 31U);
    t39 = (t0 + 2568);
    xsi_vlogvar_assign_value(t39, t37, 0, 0, 5);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB97;

}


extern void work_m_00000000004205882798_3037777339_init()
{
	static char *pe[] = {(void *)Always_47_0,(void *)Always_55_1,(void *)Always_70_2,(void *)Always_74_3};
	xsi_register_didat("work_m_00000000004205882798_3037777339", "isim/test_isim_beh.exe.sim/work/m_00000000004205882798_3037777339.didat");
	xsi_register_executes(pe);
}
