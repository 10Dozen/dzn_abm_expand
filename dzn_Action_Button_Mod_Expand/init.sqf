[] spawn {
	waitUntil { !isNil "ABM_trainedVeh" };
	ABM_trainedVeh = ABM_trainedVeh
		+ (call compile ("[" + preProcessFile "\dzn_Action_Button_Mod_Expand\ABM_ExpandData.sqf" + "]"));
};