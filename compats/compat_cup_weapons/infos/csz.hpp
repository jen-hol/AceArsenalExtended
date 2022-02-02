class CUP_srifle_CZ550 {
	model = "CUP_CZ550";
	rail = "Scope";
};

class CUP_srifle_CZ550_rail {
	model = "CUP_CZ550";
	rail = "RIS";
};

class CUP_sgun_CZ584 {
	model = "CUP_CZ584";
	rail = "None";
};

class CUP_sgun_CZ584_RIS {
	model = "CUP_CZ584";
	rail = "RIS";
};

#define BC(SUFFIX) CUP_arifle_CZ805_##SUFFIX
#define BREN(SUFFIX,VERSION,CAMO) class BC(SUFFIX) {\
	model = "CUP_CZ805";\
	version = #VERSION;\
	camo = #CAMO;\
}

BREN(A1,A1,GRY);
BREN(A1_blk,A1,BLK);
BREN(A1_coyote,A1,CYT);

BREN(GL,A1G1,GRY);
BREN(GL_blk,A1G1,BLK);
BREN(GL_coyote,A1G1,CYT);

BREN(A2,A2,GRY);
BREN(A2_blk,A2,BLK);
BREN(A2_coyote,A2,CYT);

#undef BREN
#undef BC
