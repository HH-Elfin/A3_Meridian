class CfgPatches
{
	#include "\Data_F_Meridian\macros_urls.hpp"
	class A3_Meridian_Data_F_Meridian
	{
		author = $STR_A3_Meridian_ConvairDigital;
		name = "Arma 3 Meridian - Main Configuration";
		url = linkMeridian;
		requiredAddons[] =
		{
			"A3_3DEN",
			"A3_Data_F",
			"A3_Data_F_Enoch",
			"A3_Data_F_Enoch_Loadorder",
			"A3_Data_F_Exp"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};