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
    work_m_00000000003645084834_3783644070_init();
    work_m_00000000001883506334_2725559894_init();
    work_m_00000000004205882798_3037777339_init();
    xilinxcorelib_ver_m_00000000001067635404_0974488534_init();
    work_m_00000000003452451064_0962987305_init();
    xilinxcorelib_ver_m_00000000001067635404_3141769128_init();
    work_m_00000000004259014342_2816813223_init();
    work_m_00000000003690673425_3823007873_init();
    work_m_00000000000184620625_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000184620625_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
