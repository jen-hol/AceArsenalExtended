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
}
#define AKMDLD(NUM,DESC) class AK##NUM {\
	label = QUOTE(AK-##NUM);\
	description = DESC;\
	DEFAULT_IMAGE;\
}

class CUPModel {
	label = "Weapon Model";
	changeingame = 0;
	values[] = {};

	AKMDLD(101, "5.56 NATO");
	AKMDLD(102, "5.56 NATO / Carbine");
	AKMDLD(103, "7.62x39mm");
	AKMDLD(104, "7.62x39mm / Carbine");
	AKMDLD(105, "5.45x39mm / Carbine");
	AKMDL(106);
	AKMDLD(107, "5.45x39mm / 3rnd Burst");
	AKMDLD(108, "5.56 NATO / 3rnd Burst");
	AKMDLD(109, "7.62x39mm / 3rnd Burst");
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
		DEFAULT_IMAGE;
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
