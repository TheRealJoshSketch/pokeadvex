Route22_MapScripts::
	.byte 0


Route22_Game_Intro::
# 7 "data/maps/Route22/scripts.pory"
	lockall
# 8 "data/maps/Route22/scripts.pory"
	addobject LOCALID_GREEN_INTRO
# 9 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_GREEN_INTRO, Route22_Game_Intro_Movement_0
# 13 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 15 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 16 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ExclamationMark
# 18 "data/maps/Route22/scripts.pory"
	playse SE_PIN
# 19 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route22/scripts.pory"
	delay 30
# 22 "data/maps/Route22/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 23 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Text_0
# 25 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Text_1
# 27 "data/maps/Route22/scripts.pory"
	closemessage
# 29 "data/maps/Route22/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 30 "data/maps/Route22/scripts.pory"
	showobjectat LOCALID_DRATINI_INTRO, MAP_ROUTE22
# 31 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_DRATINI_INTRO, Route22_Game_Intro_Movement_1
# 36 "data/maps/Route22/scripts.pory"
	waitmovement LOCALID_DRATINI_INTRO, MAP_ROUTE22
# 37 "data/maps/Route22/scripts.pory"
	playmoncry SPECIES_DRATINI, 0
# 40 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ExclamationMark
# 41 "data/maps/Route22/scripts.pory"
	playse SE_PIN
# 42 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 44 "data/maps/Route22/scripts.pory"
	delay 30
# 46 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Text_2
# 48 "data/maps/Route22/scripts.pory"
	closemessage
# 50 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_GREEN_INTRO, Route22_Game_Intro_Movement_2
# 55 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Text_3
# 58 "data/maps/Route22/scripts.pory"
	closemessage
# 60 "data/maps/Route22/scripts.pory"
	hideobjectat LOCALID_GREEN_INTRO, MAP_ROUTE22
# 61 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_GREEN_INTRO, MAP_ROUTE22
# 65 "data/maps/Route22/scripts.pory"
	fadenewbgm MUS_RG_VS_WILD
# 66 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_DRATINI_INTRO, Movement_ExclamationMark
# 67 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route22/scripts.pory"
	playmoncry SPECIES_DRATINI, 0
# 70 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route22_Game_Intro_Movement_3
# 75 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_DRATINI_INTRO, Route22_Game_Intro_Movement_4
# 81 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_DRATINI_INTRO, Movement_ExclamationMark
# 83 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route22/scripts.pory"
	playmoncry SPECIES_DRATINI, 0
# 86 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_RED_INTRO, Route22_Game_Intro_Movement_5
# 90 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Text_4
# 95 "data/maps/Route22/scripts.pory"
	closemessage
# 96 "data/maps/Route22/scripts.pory"
	special SavePlayerParty
# 97 "data/maps/Route22/scripts.pory"
	special LoadWallyZigzagoon
# 99 "data/maps/Route22/scripts.pory"
	special StartWallyTutorialBattle
# 100 "data/maps/Route22/scripts.pory"
	hideobjectat LOCALID_DRATINI_INTRO, MAP_ROUTE22
# 101 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_DRATINI_INTRO, MAP_ROUTE22
# 102 "data/maps/Route22/scripts.pory"
	waitstate
# 104 "data/maps/Route22/scripts.pory"
	fadenewbgm MUS_RG_PALLET
# 105 "data/maps/Route22/scripts.pory"
	special LoadPlayerParty
# 108 "data/maps/Route22/scripts.pory"
	goto Route22_Game_Intro_Part2
# 109 "data/maps/Route22/scripts.pory"
	release
	end


Route22_Game_Intro_Part2::
# 114 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_RED_INTRO, Route22_Game_Intro_Movement_1, MAP_ROUTE22
# 119 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route22_Game_Intro_Part2_Movement_0
# 125 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Part2_Text_0
# 128 "data/maps/Route22/scripts.pory"
	closemessage
# 129 "data/maps/Route22/scripts.pory"
	delay 10
# 131 "data/maps/Route22/scripts.pory"
	playse SE_USE_ITEM
# 132 "data/maps/Route22/scripts.pory"
	waitse
# 133 "data/maps/Route22/scripts.pory"
	delay 30
# 135 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_RED_INTRO, Route22_Game_Intro_Part2_Movement_0
# 139 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Part2_Text_1
# 142 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Part2_Text_2
# 144 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_RED_INTRO, Route22_Game_Intro_Part2_Movement_1
# 148 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 149 "data/maps/Route22/scripts.pory"
	delay 10
# 151 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Part2_Text_3
# 153 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Part2_Text_4
# 155 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Part2_Text_5
# 157 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Part2_Text_6
# 158 "data/maps/Route22/scripts.pory"
	delay 30
# 159 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Part2_Text_7
# 160 "data/maps/Route22/scripts.pory"
	setflag FLAG_SYS_PLAYER_NAMING_SCREEN
# 162 "data/maps/Route22/scripts.pory"
	special ChangePokemonNickname
# 163 "data/maps/Route22/scripts.pory"
	waitstate
# 165 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Part2_Text_8
# 166 "data/maps/Route22/scripts.pory"
	msgbox Route22_Game_Intro_Part2_Text_9
# 168 "data/maps/Route22/scripts.pory"
	setvar VAR_GAME_INTRO, 1
# 169 "data/maps/Route22/scripts.pory"
	releaseall
	end


# 9 "data/maps/Route22/scripts.pory"
Route22_Game_Intro_Movement_0:
# 10 "data/maps/Route22/scripts.pory"
	walk_right
# 10 "data/maps/Route22/scripts.pory"
	walk_right
# 10 "data/maps/Route22/scripts.pory"
	walk_right
# 10 "data/maps/Route22/scripts.pory"
	walk_right
# 10 "data/maps/Route22/scripts.pory"
	walk_right
# 10 "data/maps/Route22/scripts.pory"
	walk_right
# 10 "data/maps/Route22/scripts.pory"
	walk_right
# 10 "data/maps/Route22/scripts.pory"
	walk_right
# 11 "data/maps/Route22/scripts.pory"
	step_end

# 31 "data/maps/Route22/scripts.pory"
Route22_Game_Intro_Movement_1:
# 32 "data/maps/Route22/scripts.pory"
	walk_up
# 33 "data/maps/Route22/scripts.pory"
	face_left
# 34 "data/maps/Route22/scripts.pory"
	step_end

# 50 "data/maps/Route22/scripts.pory"
Route22_Game_Intro_Movement_2:
# 51 "data/maps/Route22/scripts.pory"
	walk_up
# 52 "data/maps/Route22/scripts.pory"
	walk_right
# 52 "data/maps/Route22/scripts.pory"
	walk_right
# 52 "data/maps/Route22/scripts.pory"
	walk_right
# 52 "data/maps/Route22/scripts.pory"
	walk_right
# 52 "data/maps/Route22/scripts.pory"
	walk_right
# 52 "data/maps/Route22/scripts.pory"
	walk_right
# 52 "data/maps/Route22/scripts.pory"
	walk_right
# 52 "data/maps/Route22/scripts.pory"
	walk_right
# 52 "data/maps/Route22/scripts.pory"
	walk_right
# 52 "data/maps/Route22/scripts.pory"
	walk_right
# 53 "data/maps/Route22/scripts.pory"
	step_end

# 70 "data/maps/Route22/scripts.pory"
Route22_Game_Intro_Movement_3:
# 71 "data/maps/Route22/scripts.pory"
	walk_up
# 71 "data/maps/Route22/scripts.pory"
	walk_up
# 71 "data/maps/Route22/scripts.pory"
	walk_up
# 72 "data/maps/Route22/scripts.pory"
	face_down
# 73 "data/maps/Route22/scripts.pory"
	step_end

# 77 "data/maps/Route22/scripts.pory"
Route22_Game_Intro_Movement_4:
# 78 "data/maps/Route22/scripts.pory"
	walk_left
# 79 "data/maps/Route22/scripts.pory"
	walk_up
# 79 "data/maps/Route22/scripts.pory"
	walk_up
	step_end

# 86 "data/maps/Route22/scripts.pory"
Route22_Game_Intro_Movement_5:
# 87 "data/maps/Route22/scripts.pory"
	walk_left
# 87 "data/maps/Route22/scripts.pory"
	walk_left
# 87 "data/maps/Route22/scripts.pory"
	walk_left
# 87 "data/maps/Route22/scripts.pory"
	walk_left
# 87 "data/maps/Route22/scripts.pory"
	walk_left
# 87 "data/maps/Route22/scripts.pory"
	walk_left
# 87 "data/maps/Route22/scripts.pory"
	walk_left
# 88 "data/maps/Route22/scripts.pory"
	step_end

# 121 "data/maps/Route22/scripts.pory"
Route22_Game_Intro_Part2_Movement_0:
# 122 "data/maps/Route22/scripts.pory"
	face_right
# 123 "data/maps/Route22/scripts.pory"
	step_end

# 144 "data/maps/Route22/scripts.pory"
Route22_Game_Intro_Part2_Movement_1:
# 145 "data/maps/Route22/scripts.pory"
	face_left
# 146 "data/maps/Route22/scripts.pory"
	step_end

Route22_Game_Intro_Text_0:
# 23 "data/maps/Route22/scripts.pory"
	.string "???: Hey! Watch it, kid!\n"
	.string "Learn how to fish!$"

Route22_Game_Intro_Text_1:
# 25 "data/maps/Route22/scripts.pory"
	.string "You almost knocked my\n"
	.string "Pokemon off my belt!$"

Route22_Game_Intro_Text_2:
# 46 "data/maps/Route22/scripts.pory"
	.string "Tck! Learn how to fight on\n"
	.string "own, shrimp!$"

Route22_Game_Intro_Text_3:
# 56 "data/maps/Route22/scripts.pory"
	.string "Consider this payback for\n"
	.string "getting me wet!$"

Route22_Game_Intro_Text_4:
# 93 "data/maps/Route22/scripts.pory"
	.string "???: WOAH! Hold on!\n"
	.string "I’ll save you!$"

Route22_Game_Intro_Part2_Text_0:
# 127 "data/maps/Route22/scripts.pory"
	.string "???: Phew…are you alright?$"

Route22_Game_Intro_Part2_Text_1:
# 141 "data/maps/Route22/scripts.pory"
	.string "???: BLUE…that jerk.$"

Route22_Game_Intro_Part2_Text_2:
# 142 "data/maps/Route22/scripts.pory"
	.string "He didn’t even notice you had no\n"
	.string "Pokemon on you…$"

Route22_Game_Intro_Part2_Text_3:
# 151 "data/maps/Route22/scripts.pory"
	.string "I’m really sorry about my…\n"
	.string "…well, I hardly call him a friend.$"

Route22_Game_Intro_Part2_Text_4:
# 153 "data/maps/Route22/scripts.pory"
	.string "He has a big ego, but that’ll\n"
	.string "come back to hurt him someday…$"

Route22_Game_Intro_Part2_Text_5:
# 155 "data/maps/Route22/scripts.pory"
	.string "Oh! I’m sorry. I’m so rude.\n"
	.string "My name is RED.$"

Route22_Game_Intro_Part2_Text_6:
# 157 "data/maps/Route22/scripts.pory"
	.string "RED: I just started my journey as a\n"
	.string "Pokemon Trainer. I want to be the very\l"
	.string "best…like no one ever was.$"

Route22_Game_Intro_Part2_Text_7:
# 159 "data/maps/Route22/scripts.pory"
	.string "And you are…?$"

Route22_Game_Intro_Part2_Text_8:
# 165 "data/maps/Route22/scripts.pory"
	.string "RED: {PLAYER} Ah, that’s a cool name!$"

Route22_Game_Intro_Part2_Text_9:
# 166 "data/maps/Route22/scripts.pory"
	.string "Speaking of cool!$"
