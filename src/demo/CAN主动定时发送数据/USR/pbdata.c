#include "pbdata.h"

/**********************************************************************************************************
*   函 数 名: delay_us
*   功能说明: 微秒延时程序
*   形    参：nCount要延时的微秒数
*   返 回 值: 无
**********************************************************************************************************/
void delay_us(u16 nCount)
{
    nCount *=3; 
    while(--nCount);
}

/**********************************************************************************************************
*   函 数 名: delay_ms
*   功能说明: 毫秒延时程序
*   形    参：nCount要延时的毫米数
*   返 回 值: 无
**********************************************************************************************************/
void delay_ms(u16 nCount)
{
    while(nCount--)
    {
        delay_us(1000);
    }
}