#define DEFAULT_COLOR "#(rgb,8,8,3)color(0.1,0.1,0.1,1)"

#define DEFAULT_IMAGE image = DEFAULT_COLOR

#define DEFAULT_CLASS(NAME) label = QUOTE(NAME);\
	DEFAULT_IMAGE

#define DEF(NAME) class NAME {\
	DEFAULT_CLASS(NAME);\
}

class CamoBase;
class CUPCamo: CamoBase {
	values[] = {};

	class WHT;
	class SNW: WHT {
		label = "Snow";
	};

	class WDL {
		label = "Woodland";
		image = "#(rgb,8,8,3)color(0.02,0.39,0.30,1)";
	};

	class TAN;
	class DST: TAN {
		label = "Desert";
	};
};

#define AKMDL(NUM) class AK##NUM {\
	label = QUOTE(AK-##NUM);\
	DEFAULT_IMAGE;\
};

class CUPModel {
	label = "Weapon Model";
	changeingame = 0;
	values[] = {};

	AKMDL(101);
	AKMDL(102);
	AKMDL(103);
	AKMDL(104);
	AKMDL(105);
	AKMDL(106);
	AKMDL(107);
	AKMDL(108);
	AKMDL(109);
};

#undef AKMDL

class CUPCaliber {
	label = "Caliber";
	changeingame = 0;
	values[] = {};

	class Caliber556 {
		label = "5.56";
		description = "5.56mm";
		DEFAULT_IMAGE;
	};

	class Caliber68 {
		label = "6.8";
		description = "6.8mm SPC";
		DEFAULT_IMAGE;
	};
};

class CUPLength {
	label = "Barrel Length";
	changeingame = 0;
	values[] = {};

	DEF(Standard);
	DEF(DMR);
	DEF(Compact);
	DEF(CQC);
};

class CUPUGL {
	label = "Underbarrel";
	changeingame = 0;
	values[] = {};

	DEF(None);
	DEF(M203);
	DEF(M320);
	DEF(EGLM);
	class GP25 {
		label = "GP-25";
		DEFAULT_IMAGE;
	};
};

class CUPRail {
	label = "Rails";
	changeingame = 0;
	values[] = {};

	DEF(None);
	class RIS {
		label = "RIS";
		description = "Sight Rail";
	};
	class Zentico {
		label = "Zentico/RIS";
		description = "Sight Rail and Side Rail";
		DEFAULT_IMAGE;
	};
};

#undef DEF
#undef DEFAULT_CLASS
#undef DEFAULT_IMAGE
#undef DEFAULT_COLOR
