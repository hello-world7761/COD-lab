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
    xilinxcorelib_ver_m_00000000001358910285_0359770596_init();
    xilinxcorelib_ver_m_00000000001687936702_2748435483_init();
    xilinxcorelib_ver_m_00000000000456851583_2258817845_init();
    xilinxcorelib_ver_m_00000000001603977570_1887941667_init();
    work_m_00000000003617559063_2816813223_init();
    work_m_00000000000539725849_3823007873_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000539725849_3823007873");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
