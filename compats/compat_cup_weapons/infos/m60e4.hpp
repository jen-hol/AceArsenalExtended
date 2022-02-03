#define C(SUFFIX) CUP_lmg_M60E4_##SUFFIX
#define M model = "CUP_M60E4"
#define CLS(SUFFIX,CAMO,RIS) class C(SUFFIX) {\
	M;\
	camo = #CAMO;\
	rail = #RIS;\
}

class CUP_lmg_M60E4 {
	M;
	camo = "BLK";
	rail = "RIS";
};

CLS(norail,BLK,None);
CLS(norail_desert,DST,None);
CLS(norail_jungle,JUNG,None);
CLS(norail_wood,WDL,None);

CLS(desert,DST,None);
CLS(jungle,JUNG,None);
CLS(wood,WDL,None);

#undef CLS
#undef M
#undef C
