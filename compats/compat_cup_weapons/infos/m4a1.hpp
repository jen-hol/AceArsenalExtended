#define M4(SUFFIX,CAMO,LENGTH,HG,UGL) class CUP_arifle_M4##SUFFIX {\
	model = "CUP_M4A1";\
	camo = #CAMO;\
	length = #LENGTH;\
	handguard = #HG;\
	ugl = #UGL;\
}

#define M4A1(SUFFIX,CAMO,LENGTH,HG,UGL) M4(A1_##SUFFIX,CAMO,LENGTH,HG,UGL)
#define M4A3(SUFFIX,CAMO,LENGTH,HG,UGL) M4(A3_##SUFFIX,CAMO,LENGTH,HG,UGL)

#define MOEB(SUFFIX,CAMO,LENGTH) M4A1(MOE_##SUFFIX,CAMO,LENGTH,MOE,None)
#define MOES(SUFFIX,CAMO) MOEB(short_##SUFFIX,CAMO,M4Short)
#define MOEL(SUFFIX,CAMO) MOEB(SUFFIX,CAMO,M4Long)
#define MOELS(SUFFIX,CAMO) MOES(SUFFIX,CAMO);\
	MOEL(SUFFIX,CAMO)

#define QUAD(SUFFIX,CAMO,LENGTH) M4A1(standard_##SUFFIX,CAMO,LENGTH,Quad,None)
#define QUADS(SUFFIX,CAMO) QUAD(short_##SUFFIX,CAMO,M4Short)
#define QUADL(SUFFIX,CAMO) QUAD(SUFFIX,CAMO,M4Long)
#define QUADLS(SUFFIX,CAMO) QUADS(SUFFIX,CAMO);\
	QUADL(SUFFIX,CAMO)

// Standard M4s
M4A1(black,BLK,M4Long,RC,None);
M4A1(desert,DST,M4Long,RC,None);
M4A1(camo,WDL,M4Long,RC,None);

// Grip M4s
M4A3(black,BLK,M4Long,RC,FG);
M4A3(desert,DST,M4Long,RC,FG);
M4A3(camo,WDL,M4Long,RC,FG);

// 203 GL M4s
// Quad Rail
M4A1(BUIS_gl,BLK,M4Long,Quad,M203);
M4A1(BUIS_desert_gl,DST,M4Long,Quad,M203);
M4A1(BUIS_camo_gl,WDL,M4Long,Quad,M203);
// Factory
M4A1(GL_carryhandle,BLK,M4Long,Factory,M203);
M4A1(GL_carryhandle_desert,DST,M4Long,Factory,M203);
M4A1(GL_carryhandle_camo,WDL,M4Long,Factory,M203);

// Carryhandle M4s
M4(A1,BLK,M4Long,Factory,None);
M4A1(desert_carryhandle,DST,M4Long,Factory,None);
M4A1(camo_carryhandle,WDL,M4Long,Factory,None);

// MOE M4s
MOELS(black,BLK);
MOELS(desert,DST);
MOELS(winter,WNT);
MOELS(wdl,WDL);

// Quad Rail M4s
QUADLS(black,BLK);
QUADLS(dsrt,DST);
QUADLS(winter,WNT);
QUADLS(wdl,WDL);

#undef MOEB
#undef MOES
#undef MOEL
#undef MOELS

#undef QUAD
#undef QUADS
#undef QUADL
#undef QUADLS

#undef M4A3
#undef M4A1
#undef M4
