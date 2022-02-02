#define M4C(SUFFIX) CUP_arifle_M4A1_SOMMOD_##SUFFIX
#define M4(SUFFIX,CAMO,UGL) class M4C(SUFFIX) {\
	model = "CUP_M4A1_SOPMOD";\
	camo = #CAMO;\
	ugl = #UGL;\
};
#define M4V(SUFFIX,CAMO) M4(SUFFIX,CAMO,AFG)
#define M4A(SUFFIX,CAMO) M4(Grip_##SUFFIX,CAMO,FG)
#define M4S(SUFFIX,CAMO) M4V(SUFFIX,CAMO)\
	M4A(SUFFIX,CAMO)

M4S(black,BLK)
M4S(ctrg,CTRG)
M4S(ctrgt,CTRGT)
M4S(tan,TAN)
M4S(hex,UHEX)
M4S(snow,WNT)
M4S(green,WDL)

#undef M4S
#undef M4A
#undef M4V
#undef M4
#undef M4C
