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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000624848084_2725559894_init();
    work_m_00000000001435645663_3783644070_init();
    work_m_00000000002497100270_3037777339_init();
    xilinxcorelib_ver_m_00000000001358910285_1942005516_init();
    xilinxcorelib_ver_m_00000000001687936702_3218604958_init();
    xilinxcorelib_ver_m_00000000000277421008_0926029952_init();
    xilinxcorelib_ver_m_00000000001603977570_3909600484_init();
    work_m_00000000003617559063_2816813223_init();
    work_m_00000000000539725849_3823007873_init();
    work_m_00000000000622514640_2511204236_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000622514640_2511204236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
