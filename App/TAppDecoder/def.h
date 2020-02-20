#ifndef _DEF_H
#define _DEF_H

extern int intra_pre_mode_index;//自己定义的：第几帧数
extern long intra_pre_mode[100][35] ;//自己定义的帧内预测模式的统计数组
extern long I_PU_number[610][5];//自己定义的帧内PU划分统计 4*4------------0;8*8------------1;16*16------------2;32*32------------3;64*64------------4;
extern long P_PU_number[610][25];//自己定义的帧间PU划分统计 
extern char MessStr[100] ;//原始隐秘信息
extern int ThNum[200] ;//三进制数
extern int m ;//三进制数数组下标
extern int TotalNum ;
extern int FrameHeight;
extern int FrameWidth;
//4*4----------------0
	//8*8----------------1
	//8*4----------------2
	//4*8----------------3
	//16*16---------------4
	//16*8----------------5
	//8*16----------------6
	//16*4----------------7
	//4*16----------------8
	//16*12----------------9
	//12*16----------------10
	//32*32----------------11
	//32*16----------------12
	//16*32----------------13
	//32*24----------------14
	//24*32----------------15
	//32*8----------------16
	//8*32----------------17
	//64*64----------------18
	//64*32----------------19
	//32*64----------------20
	//64*48----------------21
	//48*64----------------22
	//64*16----------------23
	//16*64----------------24
	//*/

extern long I_CU_number[100][4];//自己定义的I帧CU划分统计8*8------------0;16*16------------1;32*32------------2;64*64------------3;
extern long P_CU_number[100][4];//自己定义的P帧CU划分统计8*8------------0;16*16------------1;32*32------------2;64*64------------3;
extern long intra[100];//intra 的PU数目
extern long inter[100];//inter 的PU数目
extern long skip[100];//skip 的PU数目
#endif