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
    work_m_00000000001328717180_1119861224_init();
    work_m_00000000000679726559_3140611384_init();
    work_m_00000000001235755285_3783644070_init();
    work_m_00000000000624848084_0886308060_init();
    work_m_00000000003472138772_1947578403_init();
    work_m_00000000002375598851_0540039446_init();
    xilinxcorelib_ver_m_00000000001067635404_2273823285_init();
    work_m_00000000004259014342_2201830860_init();
    work_m_00000000004075517364_4035220345_init();
    xilinxcorelib_ver_m_00000000001067635404_2027600937_init();
    work_m_00000000004259014342_3557525629_init();
    work_m_00000000000209515433_3823007873_init();
    work_m_00000000003459154908_0362999728_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003459154908_0362999728");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
