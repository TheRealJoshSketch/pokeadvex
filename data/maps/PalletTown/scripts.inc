# 1 "data/maps/PalletTown/scripts.pory"

# 2 "data/maps/PalletTown/scripts.pory"
PalletTown_MapScripts::
# 3 "data/maps/PalletTown/scripts.pory"
	.byte 0

PalletTown_EventScript_OakTriggerLeft::
# 12 "data/maps/PalletTown/scripts.pory"
	lockall
# 13 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 14 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTriggerRight::
# 19 "data/maps/PalletTown/scripts.pory"
	lockall
# 20 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTrigger::
# 27 "data/maps/PalletTown/scripts.pory"
	textcolor 0
# 28 "data/maps/PalletTown/scripts.pory"
	delay 30
# 29 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_RG_OAK, 0
# 30 "data/maps/PalletTown/scripts.pory"
	message PalletTown_EventScript_OakTrigger_Text_0
# 32 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 33 "data/maps/PalletTown/scripts.pory"
	delay 85
# 34 "data/maps/PalletTown/scripts.pory"
	closemessage
# 35 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 36 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 37 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 38 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ExclamationMark
# 39 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 40 "data/maps/PalletTown/scripts.pory"
	delay 30
# 41 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PROF_OAK
# 42 "data/maps/PalletTown/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PalletTown_EventScript_OakTrigger_2
# 47 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterRight
# 48 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
PalletTown_EventScript_OakTrigger_1:
# 50 "data/maps/PalletTown/scripts.pory"
	delay 30
# 51 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_OakTrigger_Text_1
# 57 "data/maps/PalletTown/scripts.pory"
	closemessage
# 58 "data/maps/PalletTown/scripts.pory"
	delay 30
# 59 "data/maps/PalletTown/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PalletTown_EventScript_OakTrigger_6
# 65 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 66 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 67 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
PalletTown_EventScript_OakTrigger_5:
# 69 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 70 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 71 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLab
# 72 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 73 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 75 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 77 "data/maps/PalletTown/scripts.pory"
	clearflag VAR_TEMP_2
# 78 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 79 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 80 "data/maps/PalletTown/scripts.pory"
	setflag VAR_TEMP_3
# 81 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 255, 6, 12
# 82 "data/maps/PalletTown/scripts.pory"
	waitstate
# 83 "data/maps/PalletTown/scripts.pory"
	releaseall
	end

PalletTown_EventScript_OakTrigger_2:
# 43 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 44 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	goto PalletTown_EventScript_OakTrigger_1

PalletTown_EventScript_OakTrigger_6:
# 60 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 61 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 62 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	goto PalletTown_EventScript_OakTrigger_5


PalletTown_EventScript_SignLady::
# 88 "data/maps/PalletTown/scripts.pory"
	lock
# 89 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_SignLady_Text_0, MSGBOX_NPC
# 92 "data/maps/PalletTown/scripts.pory"
	release
	end


# 96 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft:
# 97 "data/maps/PalletTown/scripts.pory"
	walk_down
# 99 "data/maps/PalletTown/scripts.pory"
	walk_left
# 100 "data/maps/PalletTown/scripts.pory"
	walk_down
# 101 "data/maps/PalletTown/scripts.pory"
	walk_down
# 102 "data/maps/PalletTown/scripts.pory"
	walk_down
# 103 "data/maps/PalletTown/scripts.pory"
	walk_down
# 104 "data/maps/PalletTown/scripts.pory"
	walk_down
# 105 "data/maps/PalletTown/scripts.pory"
	walk_down
# 106 "data/maps/PalletTown/scripts.pory"
	walk_down
# 107 "data/maps/PalletTown/scripts.pory"
	walk_down
# 108 "data/maps/PalletTown/scripts.pory"
	walk_down
# 109 "data/maps/PalletTown/scripts.pory"
	walk_down
# 110 "data/maps/PalletTown/scripts.pory"
	walk_down
# 111 "data/maps/PalletTown/scripts.pory"
	walk_right
# 112 "data/maps/PalletTown/scripts.pory"
	walk_right
# 113 "data/maps/PalletTown/scripts.pory"
	walk_right
# 114 "data/maps/PalletTown/scripts.pory"
	walk_right
# 116 "data/maps/PalletTown/scripts.pory"
	walk_right
# 118 "data/maps/PalletTown/scripts.pory"
	step_end

# 121 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight:
# 122 "data/maps/PalletTown/scripts.pory"
	walk_down
# 123 "data/maps/PalletTown/scripts.pory"
	walk_left
# 125 "data/maps/PalletTown/scripts.pory"
	walk_left
# 126 "data/maps/PalletTown/scripts.pory"
	walk_down
# 127 "data/maps/PalletTown/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown/scripts.pory"
	walk_down
# 130 "data/maps/PalletTown/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown/scripts.pory"
	walk_down
# 133 "data/maps/PalletTown/scripts.pory"
	walk_down
# 134 "data/maps/PalletTown/scripts.pory"
	walk_down
# 135 "data/maps/PalletTown/scripts.pory"
	walk_down
# 136 "data/maps/PalletTown/scripts.pory"
	walk_down
# 137 "data/maps/PalletTown/scripts.pory"
	walk_right
# 138 "data/maps/PalletTown/scripts.pory"
	walk_right
# 139 "data/maps/PalletTown/scripts.pory"
	walk_right
# 140 "data/maps/PalletTown/scripts.pory"
	walk_right
# 142 "data/maps/PalletTown/scripts.pory"
	walk_right
# 144 "data/maps/PalletTown/scripts.pory"
	step_end

# 147 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab:
# 148 "data/maps/PalletTown/scripts.pory"
	walk_up
# 149 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 150 "data/maps/PalletTown/scripts.pory"
	step_end

# 153 "data/maps/PalletTown/scripts.pory"
Movement_ExclamationMark:
# 154 "data/maps/PalletTown/scripts.pory"
	emote_exclamation_mark
# 155 "data/maps/PalletTown/scripts.pory"
	step_end

# 158 "data/maps/PalletTown/scripts.pory"
Movement_WalkInPlaceFastestDown:
# 160 "data/maps/PalletTown/scripts.pory"
	step_end

# 163 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft:
# 164 "data/maps/PalletTown/scripts.pory"
	walk_down
# 165 "data/maps/PalletTown/scripts.pory"
	walk_down
# 167 "data/maps/PalletTown/scripts.pory"
	walk_left
# 168 "data/maps/PalletTown/scripts.pory"
	walk_down
# 169 "data/maps/PalletTown/scripts.pory"
	walk_down
# 170 "data/maps/PalletTown/scripts.pory"
	walk_down
# 171 "data/maps/PalletTown/scripts.pory"
	walk_down
# 172 "data/maps/PalletTown/scripts.pory"
	walk_down
# 173 "data/maps/PalletTown/scripts.pory"
	walk_down
# 174 "data/maps/PalletTown/scripts.pory"
	walk_down
# 175 "data/maps/PalletTown/scripts.pory"
	walk_down
# 176 "data/maps/PalletTown/scripts.pory"
	walk_down
# 177 "data/maps/PalletTown/scripts.pory"
	walk_down
# 178 "data/maps/PalletTown/scripts.pory"
	walk_down
# 179 "data/maps/PalletTown/scripts.pory"
	walk_right
# 180 "data/maps/PalletTown/scripts.pory"
	walk_right
# 181 "data/maps/PalletTown/scripts.pory"
	walk_right
# 182 "data/maps/PalletTown/scripts.pory"
	walk_right
# 183 "data/maps/PalletTown/scripts.pory"
	step_end

# 186 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight:
# 187 "data/maps/PalletTown/scripts.pory"
	walk_down
# 188 "data/maps/PalletTown/scripts.pory"
	walk_down
# 189 "data/maps/PalletTown/scripts.pory"
	walk_left
# 191 "data/maps/PalletTown/scripts.pory"
	walk_left
# 192 "data/maps/PalletTown/scripts.pory"
	walk_down
# 193 "data/maps/PalletTown/scripts.pory"
	walk_down
# 194 "data/maps/PalletTown/scripts.pory"
	walk_down
# 195 "data/maps/PalletTown/scripts.pory"
	walk_down
# 196 "data/maps/PalletTown/scripts.pory"
	walk_down
# 197 "data/maps/PalletTown/scripts.pory"
	walk_down
# 198 "data/maps/PalletTown/scripts.pory"
	walk_down
# 199 "data/maps/PalletTown/scripts.pory"
	walk_down
# 200 "data/maps/PalletTown/scripts.pory"
	walk_down
# 201 "data/maps/PalletTown/scripts.pory"
	walk_down
# 202 "data/maps/PalletTown/scripts.pory"
	walk_down
# 203 "data/maps/PalletTown/scripts.pory"
	walk_right
# 204 "data/maps/PalletTown/scripts.pory"
	walk_right
# 205 "data/maps/PalletTown/scripts.pory"
	walk_right
# 206 "data/maps/PalletTown/scripts.pory"
	walk_right
# 207 "data/maps/PalletTown/scripts.pory"
	step_end

# 210 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab:
# 211 "data/maps/PalletTown/scripts.pory"
	walk_right
# 212 "data/maps/PalletTown/scripts.pory"
	walk_up
# 213 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 214 "data/maps/PalletTown/scripts.pory"
	step_end

# 217 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft:
# 218 "data/maps/PalletTown/scripts.pory"
	walk_up
# 219 "data/maps/PalletTown/scripts.pory"
	walk_up
# 220 "data/maps/PalletTown/scripts.pory"
	walk_right
# 221 "data/maps/PalletTown/scripts.pory"
	walk_up
# 222 "data/maps/PalletTown/scripts.pory"
	walk_up
# 223 "data/maps/PalletTown/scripts.pory"
	walk_right
# 224 "data/maps/PalletTown/scripts.pory"
	walk_up
# 225 "data/maps/PalletTown/scripts.pory"
	walk_up
# 226 "data/maps/PalletTown/scripts.pory"
	step_end

# 229 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight:
# 230 "data/maps/PalletTown/scripts.pory"
	walk_right
# 231 "data/maps/PalletTown/scripts.pory"
	walk_up
# 232 "data/maps/PalletTown/scripts.pory"
	walk_up
# 233 "data/maps/PalletTown/scripts.pory"
	walk_right
# 234 "data/maps/PalletTown/scripts.pory"
	walk_up
# 235 "data/maps/PalletTown/scripts.pory"
	walk_up
# 236 "data/maps/PalletTown/scripts.pory"
	walk_right
# 237 "data/maps/PalletTown/scripts.pory"
	walk_up
# 238 "data/maps/PalletTown/scripts.pory"
	walk_up
# 239 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_FatMan::
# 243 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_FatMan_Text_0, MSGBOX_NPC
	end


PalletTown_EventScript_OaksLabSign::
# 250 "data/maps/PalletTown/scripts.pory"
	lockall
# 252 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_OaksLabSign_Text_0
# 253 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_DebugCall::
# 258 "data/maps/PalletTown/scripts.pory"
	lockall
# 259 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_DebugCall_Text_0
# 260 "data/maps/PalletTown/scripts.pory"
	givemon SPECIES_DRATINI, 50, ITEM_DRAGON_FANG
# 261 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 262 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_OakTrigger_Text_0:
# 30 "data/maps/PalletTown/scripts.pory"
	.string "OAK: Hey! Wait!\n"
	.string "Don't go out!$"

PalletTown_EventScript_OakTrigger_Text_1:
# 51 "data/maps/PalletTown/scripts.pory"
	.string "OAK: It's unsafe!\n"
	.string "Wild POKéMON live in tall grass!\p"
	.string "You need your own POKéMON for\n"
	.string "your protection.\p"
	.string "I know!\n"
	.string "Here, come with me!$"

PalletTown_EventScript_SignLady_Text_0:
# 89 "data/maps/PalletTown/scripts.pory"
	.string "I'm raising POKéMON, too.\p"
	.string "When they get strong, they can\n"
	.string "protect me$"

PalletTown_EventScript_FatMan_Text_0:
# 243 "data/maps/PalletTown/scripts.pory"
	.string "Technology is incredible!\p"
	.string "You can now store and recall items\n"
	.string "and POKéMON as data via PC.$"

PalletTown_EventScript_OaksLabSign_Text_0:
# 252 "data/maps/PalletTown/scripts.pory"
	.string "OAK POKéMON RESEARCH LAB$"

PalletTown_EventScript_DebugCall_Text_0:
# 259 "data/maps/PalletTown/scripts.pory"
	.string "We are testing this game, have this\n"
	.string "Pokemon$"
