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
static const char *ng0 = "D:/study/COD lab/pipe/cpupipline/MEM.v";
static int ng1[] = {0, 0};
static int ng2[] = {10, 0};
static int ng3[] = {1, 0};
static int ng4[] = {4, 0};
static unsigned int ng5[] = {40U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {41U, 0U};



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
    char t6[8];
    char t22[8];
    char t36[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char t103[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
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
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;

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
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t65, t22, 8);

LAB16:    t97 = (t65 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 10);

LAB33:
LAB30:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 1528U);
    t35 = *((char **)t34);
    t34 = (t0 + 1488U);
    t37 = (t34 + 72U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t36, 32, t35, t38, 2, t39, 32, 1);
    t40 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t42 = (t36 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB18;

LAB17:    if (t53 != 0)
        goto LAB19;

LAB20:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t58) != 0)
        goto LAB23;

LAB24:    t66 = *((unsigned int *)t22);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t22 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t41) = 1;
    goto LAB20;

LAB19:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB23:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB24;

LAB25:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t22 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t22);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB27;

LAB28:    xsi_set_current_line(41, ng0);
    t104 = (t0 + 1528U);
    t105 = *((char **)t104);
    memset(t103, 0, 8);
    t104 = (t103 + 4);
    t106 = (t105 + 4);
    t107 = *((unsigned int *)t105);
    t108 = (t107 >> 0);
    *((unsigned int *)t103) = t108;
    t109 = *((unsigned int *)t106);
    t110 = (t109 >> 0);
    *((unsigned int *)t104) = t110;
    t111 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t111 & 1023U);
    t112 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t112 & 1023U);
    t113 = (t0 + 3208);
    xsi_vlogvar_assign_value(t113, t103, 0, 0, 10);
    goto LAB30;

LAB31:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 10);
    goto LAB33;

}

static void Cont_47_2(char *t0)
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

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
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

static void Always_49_3(char *t0)
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

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5240);
    *((int *)t2) = 1;
    t3 = (t0 + 4904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
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

LAB11:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
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

LAB40:    xsi_set_current_line(70, ng0);
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

LAB10:    xsi_set_current_line(52, ng0);

LAB13:    xsi_set_current_line(53, ng0);
    t28 = (t0 + 2488U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng1)));
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

LAB19:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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

LAB26:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2488U);
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

LAB33:    xsi_set_current_line(60, ng0);
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

LAB18:    xsi_set_current_line(54, ng0);
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

LAB25:    xsi_set_current_line(56, ng0);
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

LAB32:    xsi_set_current_line(58, ng0);
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

LAB39:    xsi_set_current_line(63, ng0);

LAB42:    xsi_set_current_line(64, ng0);
    t21 = (t0 + 2488U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng1)));
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

LAB48:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2488U);
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

LAB47:    xsi_set_current_line(65, ng0);
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

LAB54:    xsi_set_current_line(67, ng0);
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
	static char *pe[] = {(void *)Cont_37_0,(void *)Always_38_1,(void *)Cont_47_2,(void *)Always_49_3};
	xsi_register_didat("work_m_00000000001218758587_4284950183", "isim/test_isim_beh.exe.sim/work/m_00000000001218758587_4284950183.didat");
	xsi_register_executes(pe);
}
