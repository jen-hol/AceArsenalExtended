class CUP_M110 {
	HDR(M110);
	options[] = {"camo", "stock"};

	class camo: CUPCamo {
		values[] = {"BLK", "TAN", "WDL"};
	};

	class stock: CUPStock {
		values[] = {"Standard", "PRS"};
	};
};
