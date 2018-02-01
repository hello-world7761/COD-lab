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
static const char *ng0 = "D:/study/COD lab/lab3/TEST1/control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {31U, 0U};
static int ng6[] = {0, 0};



static void Always_37_0(char *t0)
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

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4856);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
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

LAB13:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB17;

LAB16:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB19;

LAB18:    *((unsigned int *)t4) = 1;

LAB19:    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB23:
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

LAB12:    xsi_set_current_line(40, ng0);

LAB15:    xsi_set_current_line(41, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3368);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    goto LAB14;

LAB17:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(45, ng0);

LAB24:    xsi_set_current_line(46, ng0);
    t29 = (t0 + 3368);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng3)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 3, t31, 3, t32, 3);
    t34 = (t0 + 3368);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 3);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 6, t5, 6, t6, 6);
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 6);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB23;

}

static void Always_53_1(char *t0)
{
    char t4[8];
    char t31[8];
    char t38[8];
    char t42[8];
    char t50[8];
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
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4872);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
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

LAB13:    xsi_set_current_line(66, ng0);

LAB16:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
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
        goto LAB20;

LAB17:    if (t19 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t4) = 1;

LAB20:    memset(t31, 0, 8);
    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t23) != 0)
        goto LAB23;

LAB24:    t30 = (t31 + 4);
    t28 = *((unsigned int *)t31);
    t32 = *((unsigned int *)t30);
    t33 = (t28 || t32);
    if (t33 > 0)
        goto LAB25;

LAB26:    memcpy(t50, t31, 8);

LAB27:    t82 = (t50 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t50);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
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
        goto LAB47;

LAB44:    if (t19 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t4) = 1;

LAB47:    memset(t31, 0, 8);
    t23 = (t4 + 4);
    t22 = *((unsigned int *)t23);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t23) != 0)
        goto LAB50;

LAB51:    t30 = (t31 + 4);
    t28 = *((unsigned int *)t31);
    t32 = *((unsigned int *)t30);
    t33 = (t28 || t32);
    if (t33 > 0)
        goto LAB52;

LAB53:    memcpy(t50, t31, 8);

LAB54:    t82 = (t50 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t50);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(87, ng0);

LAB80:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB69:
LAB42:
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

LAB12:    xsi_set_current_line(56, ng0);

LAB15:    xsi_set_current_line(57, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3208);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB14;

LAB19:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t31) = 1;
    goto LAB24;

LAB23:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB24;

LAB25:    t34 = (t0 + 3368);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng3)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB29;

LAB28:    t40 = (t37 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB29;

LAB32:    if (*((unsigned int *)t36) > *((unsigned int *)t37))
        goto LAB30;

LAB31:    memset(t42, 0, 8);
    t43 = (t38 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t38);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t43) != 0)
        goto LAB35;

LAB36:    t51 = *((unsigned int *)t31);
    t52 = *((unsigned int *)t42);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t31 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB27;

LAB29:    t41 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB31;

LAB30:    *((unsigned int *)t38) = 1;
    goto LAB31;

LAB33:    *((unsigned int *)t42) = 1;
    goto LAB36;

LAB35:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB36;

LAB37:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t31 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t31);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t79 & t77);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    t81 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t81 & t77);
    goto LAB39;

LAB40:    xsi_set_current_line(68, ng0);

LAB43:    xsi_set_current_line(69, ng0);
    t88 = ((char*)((ng4)));
    t89 = (t0 + 3048);
    xsi_vlogvar_assign_value(t89, t88, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB42;

LAB46:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t31) = 1;
    goto LAB51;

LAB50:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB51;

LAB52:    t34 = (t0 + 2888);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng5)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB56;

LAB55:    t40 = (t37 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB56;

LAB59:    if (*((unsigned int *)t36) < *((unsigned int *)t37))
        goto LAB57;

LAB58:    memset(t42, 0, 8);
    t43 = (t38 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t38);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t43) != 0)
        goto LAB62;

LAB63:    t51 = *((unsigned int *)t31);
    t52 = *((unsigned int *)t42);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t31 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB54;

LAB56:    t41 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB58;

LAB57:    *((unsigned int *)t38) = 1;
    goto LAB58;

LAB60:    *((unsigned int *)t42) = 1;
    goto LAB63;

LAB62:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB63;

LAB64:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t31 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t31);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t79 & t77);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    t81 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t81 & t77);
    goto LAB66;

LAB67:    xsi_set_current_line(73, ng0);

LAB70:    xsi_set_current_line(74, ng0);
    t88 = ((char*)((ng6)));
    t89 = (t0 + 3048);
    xsi_vlogvar_assign_value(t89, t88, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB72;

LAB71:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB72;

LAB75:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB74;

LAB73:    *((unsigned int *)t4) = 1;

LAB74:    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB76;

LAB77:
LAB78:    goto LAB69;

LAB72:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB74;

LAB76:    xsi_set_current_line(79, ng0);

LAB79:    xsi_set_current_line(80, ng0);
    t29 = (t0 + 2568);
    t30 = (t29 + 56U);
    t34 = *((char **)t30);
    t35 = ((char*)((ng3)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 5, t34, 5, t35, 5);
    t36 = (t0 + 2568);
    xsi_vlogvar_assign_value(t36, t31, 0, 0, 5);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 6, t5, 6, t6, 6);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 6);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB78;

}


extern void work_m_00000000002203447453_3037777339_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Always_53_1};
	xsi_register_didat("work_m_00000000002203447453_3037777339", "isim/testtop_isim_beh.exe.sim/work/m_00000000002203447453_3037777339.didat");
	xsi_register_executes(pe);
}
