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
    xilinxcorelib_ver_m_00000000001358910285_1420689212_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000456851583_3222720676_init();
    xilinxcorelib_ver_m_00000000001603977570_2682478761_init();
    work_m_00000000003617559063_0450250084_init();
    work_m_00000000002203447453_3037777339_init();
    work_m_00000000000624848084_2725559894_init();
    work_m_00000000001435645663_3783644070_init();
    work_m_00000000001369083753_3823007873_init();
    work_m_00000000001218914305_1041121107_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001218914305_1041121107");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
