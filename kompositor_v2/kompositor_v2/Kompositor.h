#pragma once

	/**
	* A class representing a point in a three-dimensional plane.
	*
	* This class represents a point in a three-dimensional plane with an x-axes,
	* y-axes and z-axes.
	*/
	class Kompositor
	{

	public:
	
		Kompositor();
		Kompositor(int notTyp);

		int notTypVal;

		void mousePressEvent();
		void pixelToH�jd();
		void ritaOm();
		void fj�rdedelsnotKlickad();
		void paintEvent();

	//private:
	
	};




