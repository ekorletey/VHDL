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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ekorletey/first_presentation/addition.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1546549061_3212880686_p_0(char *t0)
{
    char t1[16];
    char t9[16];
    char t21[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 4472U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 4488U);
    t6 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t0 + 4544);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (7 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t6, t1, t7, t9);
    if (t14 != 0)
        goto LAB3;

LAB4:
LAB5:    t22 = (t0 + 1032U);
    t23 = *((char **)t22);
    t22 = (t0 + 4472U);
    t24 = (t0 + 1192U);
    t25 = *((char **)t24);
    t24 = (t0 + 4488U);
    t26 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t21, t23, t22, t25, t24);
    t27 = (t21 + 12U);
    t13 = *((unsigned int *)t27);
    t28 = (1U * t13);
    t29 = (8U != t28);
    if (t29 == 1)
        goto LAB7;

LAB8:    t30 = (t0 + 2904);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t26, 8U);
    xsi_driver_first_trans_fast_port(t30);

LAB2:    t35 = (t0 + 2824);
    *((int *)t35) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 4552);
    t16 = (t0 + 2904);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 8U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(8U, t28, 0);
    goto LAB8;

}


extern void work_a_1546549061_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1546549061_3212880686_p_0};
	xsi_register_didat("work_a_1546549061_3212880686", "isim/addition_isim_beh.exe.sim/work/a_1546549061_3212880686.didat");
	xsi_register_executes(pe);
}
