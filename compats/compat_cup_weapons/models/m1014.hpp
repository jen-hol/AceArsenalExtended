class CUP_M1014 {
	HDR(M1014);
	options[] = {"length", "ugl", "stock"};

	class length: CUPLength {
		values[] = {"Standard", "Entry"};
	};

	class ugl: CUPUGL {
		values[] = {"None", "FG"};
	};

	class stock: CUPStock {
		values[] = {"Standard", "Solid"};
	};
};
