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
static const char *ng0 = "D:/study/COD lab/lab5/test/lab05/NEXT_PC.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {7, 0};
static int ng5[] = {2, 0};
static int ng6[] = {4, 0};
static unsigned int ng7[] = {0U, 0U};
static int ng8[] = {1, 0};



static void Always_35_0(char *t0)
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

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
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

LAB13:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);

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

LAB12:    xsi_set_current_line(38, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 8, 0LL);
    goto LAB14;

}

static void Always_44_1(char *t0)
{
    char t4[8];
    char t38[8];
    char t62[8];
    char t72[8];
    char t85[8];
    char t86[8];
    char t96[8];
    char t98[8];
    char t99[8];
    char t100[8];
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    int t108;
    char *t109;
    unsigned int t110;
    int t111;
    int t112;
    char *t113;
    unsigned int t114;
    int t115;
    int t116;
    unsigned int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    int t121;
    int t122;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4552);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
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

LAB13:    xsi_set_current_line(58, ng0);

LAB36:    xsi_set_current_line(59, ng0);
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
    *((unsigned int *)t4) = (t11 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t6 = (t0 + 2728);
    t12 = (t0 + 2728);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t23 = ((char*)((ng4)));
    t29 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t38, t62, t72, ((int*)(t14)), 2, t23, 32, 1, t29, 32, 1);
    t30 = (t38 + 4);
    t16 = *((unsigned int *)t30);
    t108 = (!(t16));
    t36 = (t62 + 4);
    t17 = *((unsigned int *)t36);
    t111 = (!(t17));
    t112 = (t108 && t111);
    t37 = (t72 + 4);
    t18 = *((unsigned int *)t37);
    t115 = (!(t18));
    t116 = (t112 && t115);
    if (t116 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng8)));
    t14 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t38, t62, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t108 = (!(t7));
    t29 = (t38 + 4);
    t8 = *((unsigned int *)t29);
    t111 = (!(t8));
    t112 = (t108 && t111);
    t30 = (t62 + 4);
    t9 = *((unsigned int *)t30);
    t115 = (!(t9));
    t116 = (t112 && t115);
    if (t116 == 1)
        goto LAB39;

LAB40:
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

LAB12:    xsi_set_current_line(47, ng0);
    t29 = (t0 + 1528U);
    t30 = *((char **)t29);
    t29 = (t30 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (~(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 8, t6, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);

LAB17:    goto LAB14;

LAB15:    xsi_set_current_line(48, ng0);

LAB18:    xsi_set_current_line(49, ng0);
    t36 = (t0 + 1048U);
    t37 = *((char **)t36);
    t36 = ((char*)((ng2)));
    memset(t38, 0, 8);
    t39 = (t37 + 4);
    t40 = (t36 + 4);
    t41 = *((unsigned int *)t37);
    t42 = *((unsigned int *)t36);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB22;

LAB19:    if (t50 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t38) = 1;

LAB22:    t54 = (t38 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t38);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB23;

LAB24:
LAB25:    goto LAB17;

LAB21:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(50, ng0);
    t60 = (t0 + 1688U);
    t61 = *((char **)t60);
    t60 = ((char*)((ng1)));
    memset(t62, 0, 8);
    t63 = (t61 + 4);
    if (*((unsigned int *)t63) != 0)
        goto LAB27;

LAB26:    t64 = (t60 + 4);
    if (*((unsigned int *)t64) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t61) > *((unsigned int *)t60))
        goto LAB28;

LAB29:    t66 = (t62 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 8, t6, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);

LAB33:    goto LAB25;

LAB27:    t65 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t62) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(51, ng0);
    t73 = (t0 + 2568);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    memset(t72, 0, 8);
    t76 = (t72 + 4);
    t77 = (t75 + 4);
    t78 = *((unsigned int *)t75);
    t79 = (t78 >> 2);
    *((unsigned int *)t72) = t79;
    t80 = *((unsigned int *)t77);
    t81 = (t80 >> 2);
    *((unsigned int *)t76) = t81;
    t82 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t82 & 63U);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t83 & 63U);
    t84 = ((char*)((ng3)));
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 6, t72, 6, t84, 6);
    t87 = (t0 + 1848U);
    t88 = *((char **)t87);
    memset(t86, 0, 8);
    t87 = (t86 + 4);
    t89 = (t88 + 4);
    t90 = *((unsigned int *)t88);
    t91 = (t90 >> 0);
    *((unsigned int *)t86) = t91;
    t92 = *((unsigned int *)t89);
    t93 = (t92 >> 0);
    *((unsigned int *)t87) = t93;
    t94 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t94 & 63U);
    t95 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t95 & 63U);
    memset(t96, 0, 8);
    xsi_vlog_unsigned_add(t96, 6, t85, 6, t86, 6);
    t97 = (t0 + 2728);
    t101 = (t0 + 2728);
    t102 = (t101 + 72U);
    t103 = *((char **)t102);
    t104 = ((char*)((ng4)));
    t105 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t98, t99, t100, ((int*)(t103)), 2, t104, 32, 1, t105, 32, 1);
    t106 = (t98 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (!(t107));
    t109 = (t99 + 4);
    t110 = *((unsigned int *)t109);
    t111 = (!(t110));
    t112 = (t108 && t111);
    t113 = (t100 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (!(t114));
    t116 = (t112 && t115);
    if (t116 == 1)
        goto LAB34;

LAB35:    goto LAB33;

LAB34:    t117 = *((unsigned int *)t100);
    t118 = (t117 + 0);
    t119 = *((unsigned int *)t98);
    t120 = *((unsigned int *)t99);
    t121 = (t119 - t120);
    t122 = (t121 + 1);
    xsi_vlogvar_assign_value(t97, t96, t118, *((unsigned int *)t99), t122);
    goto LAB35;

LAB37:    t19 = *((unsigned int *)t72);
    t118 = (t19 + 0);
    t20 = *((unsigned int *)t38);
    t21 = *((unsigned int *)t62);
    t121 = (t20 - t21);
    t122 = (t121 + 1);
    xsi_vlogvar_assign_value(t6, t4, t118, *((unsigned int *)t62), t122);
    goto LAB38;

LAB39:    t10 = *((unsigned int *)t62);
    t118 = (t10 + 0);
    t11 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t38);
    t121 = (t11 - t15);
    t122 = (t121 + 1);
    xsi_vlogvar_assign_value(t3, t2, t118, *((unsigned int *)t38), t122);
    goto LAB40;

}


extern void work_m_00000000004075517364_4035220345_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_44_1};
	xsi_register_didat("work_m_00000000004075517364_4035220345", "isim/testofall_isim_beh.exe.sim/work/m_00000000004075517364_4035220345.didat");
	xsi_register_executes(pe);
}
