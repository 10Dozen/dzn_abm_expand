class CfgPatches
{
	class dzn_Action_Button_Mod_Expand
	{		
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CBA_MAIN", "Action_Button_Mod"};
		author[] = {"10Dozen"};
	};
};

class Extended_PostInit_EventHandlers
{
	class dzn_Action_Button_Mod_Expand
	{
		init = "call ('\dzn_Action_Button_Mod_Expand\init.sqf' call SLX_XEH_COMPILE)";
	};
};
