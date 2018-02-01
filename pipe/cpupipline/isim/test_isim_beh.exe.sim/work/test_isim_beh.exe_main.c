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
    xilinxcorelib_ver_m_00000000001067635404_3518267349_init();
    work_m_00000000003452451064_0317860448_init();
    work_m_00000000000325627569_2352116331_init();
    work_m_00000000004210793731_0345418465_init();
    work_m_00000000002032954658_3783644070_init();
    work_m_00000000001667869210_1648104263_init();
    work_m_00000000002957116655_0103510313_init();
    work_m_00000000003022528845_0886308060_init();
    work_m_00000000003454191196_3210399350_init();
    work_m_00000000000087917967_3666345988_init();
    work_m_00000000001626079773_4024466370_init();
    xilinxcorelib_ver_m_00000000001067635404_3104411853_init();
    work_m_00000000004259014342_0354673034_init();
    work_m_00000000001218758587_4284950183_init();
    work_m_00000000002249756446_2520395732_init();
    work_m_00000000003196765251_1595836845_init();
    work_m_00000000001709797547_2336320059_init();
    work_m_00000000003396313332_0282434308_init();
    work_m_00000000002879077671_2619904330_init();
    work_m_00000000001756291678_3823007873_init();
    work_m_00000000000945586452_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000945586452_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
