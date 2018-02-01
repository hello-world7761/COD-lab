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
static const char *ng0 = "D:/study/COD lab/lab4/test/REG_FILE.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {32, 0};



static void Always_25_0(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
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
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    int t42;
    char *t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
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

LAB13:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(44, ng0);

LAB31:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2728);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2728);
    t23 = (t14 + 64U);
    t29 = *((char **)t23);
    t30 = (t0 + 3048);
    t33 = (t30 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_array_select_value(t4, 32, t5, t13, t29, 2, 1, t34, 32, 1);
    t35 = (t0 + 2408);
    xsi_vlogvar_assign_value(t35, t4, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2728);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2728);
    t23 = (t14 + 64U);
    t29 = *((char **)t23);
    t30 = (t0 + 3048);
    t33 = (t30 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_array_select_value(t4, 32, t5, t13, t29, 2, 1, t34, 32, 1);
    t35 = (t0 + 2568);
    xsi_vlogvar_assign_value(t35, t4, 0, 0, 32);

LAB27:
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

LAB12:    xsi_set_current_line(28, ng0);

LAB15:    xsi_set_current_line(29, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2728);
    t33 = (t0 + 2728);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 2728);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t31, t32, t35, t38, 2, 1, t39, 32, 1);
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t32 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 2728);
    t14 = (t13 + 64U);
    t23 = *((char **)t14);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t4, t31, t12, t23, 2, 1, t29, 32, 1);
    t30 = (t4 + 4);
    t7 = *((unsigned int *)t30);
    t42 = (!(t7));
    t33 = (t31 + 4);
    t8 = *((unsigned int *)t33);
    t45 = (!(t8));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB20:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB21;

LAB22:    goto LAB14;

LAB16:    t47 = *((unsigned int *)t31);
    t48 = *((unsigned int *)t32);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_assign_value(t30, t29, 0, *((unsigned int *)t32), t50);
    goto LAB17;

LAB18:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t31);
    t49 = (t9 - t10);
    t50 = (t49 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t31), t50);
    goto LAB19;

LAB21:    xsi_set_current_line(32, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 2728);
    t23 = (t0 + 2728);
    t29 = (t23 + 72U);
    t30 = *((char **)t29);
    t33 = (t0 + 2728);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 2888);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_convert_array_indices(t31, t32, t30, t35, 2, 1, t38, 32, 1);
    t39 = (t31 + 4);
    t15 = *((unsigned int *)t39);
    t42 = (!(t15));
    t40 = (t32 + 4);
    t16 = *((unsigned int *)t40);
    t45 = (!(t16));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB20;

LAB23:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t32);
    t49 = (t17 - t18);
    t50 = (t49 + 1);
    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t32), t50);
    goto LAB24;

LAB25:    xsi_set_current_line(35, ng0);

LAB28:    xsi_set_current_line(36, ng0);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    memcpy(t4, t6, 8);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 2728);
    t14 = (t13 + 64U);
    t23 = *((char **)t14);
    t29 = (t0 + 3048);
    t30 = (t29 + 56U);
    t33 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t4, t31, t12, t23, 2, 1, t33, 32, 1);
    t34 = (t4 + 4);
    t7 = *((unsigned int *)t34);
    t42 = (!(t7));
    t35 = (t31 + 4);
    t8 = *((unsigned int *)t35);
    t45 = (!(t8));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2728);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2728);
    t23 = (t14 + 64U);
    t29 = *((char **)t23);
    t30 = (t0 + 3048);
    t33 = (t30 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_array_select_value(t4, 32, t5, t13, t29, 2, 1, t34, 32, 1);
    t35 = (t0 + 2408);
    xsi_vlogvar_assign_value(t35, t4, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2728);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2728);
    t23 = (t14 + 64U);
    t29 = *((char **)t23);
    t30 = (t0 + 3048);
    t33 = (t30 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_array_select_value(t4, 32, t5, t13, t29, 2, 1, t34, 32, 1);
    t35 = (t0 + 2568);
    xsi_vlogvar_assign_value(t35, t4, 0, 0, 32);
    goto LAB27;

LAB29:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t31);
    t49 = (t9 - t10);
    t50 = (t49 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t31), t50);
    goto LAB30;

}


extern void work_m_00000000001435645663_3783644070_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000001435645663_3783644070", "isim/text_isim_beh.exe.sim/work/m_00000000001435645663_3783644070.didat");
	xsi_register_executes(pe);
}
