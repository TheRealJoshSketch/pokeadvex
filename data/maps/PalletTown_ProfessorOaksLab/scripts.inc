PalletTown_ProfessorOaksLab_MapScripts::
	.byte 0


PalletTown_ProfessorOaksLab_MapScripts2::
# 12 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_MapScripts2_MAP_SCRIPT_ON_TRANSITION
# 23 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_MapScripts2_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_ProfessorOaksLab_MapScripts2_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_TEMP_1
	return

PalletTown_ProfessorOaksLab_MapScripts2_MAP_SCRIPT_ON_FRAME_TABLE:
	return


PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 30 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 31 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor 0
# 32 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK_LAB, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 33 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 34 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PROF_OAK_LAB
# 35 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK_LAB, 6, 3
# 36 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK_LAB, MOVEMENT_TYPE_FACE_DOWN
# 37 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_TEMP_2
# 38 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 39 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 40 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 41 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 42 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 43 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 44 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 45 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_ChooseStarterScene_Text_0
# 47 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 48 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 49 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_ChooseStarterScene_Text_1
# 64 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 65 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 66 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 67 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 68 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_ChooseStarterScene_Text_2
# 70 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_ChooseStarterScene_Text_3
# 72 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 2
# 73 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


# 77 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter:
# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 79 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 80 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 81 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 82 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 83 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 84 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter:
# 89 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 90 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 91 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 92 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 93 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 94 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 95 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 96 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 99 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact:
# 100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK_LAB, 6, 11
# 107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK_LAB, MOVEMENT_TYPE_FACE_UP
# 108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_RG_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 0
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK_LAB, Common_Movement_FaceRight
# 149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	switch VAR_TEMP_2
# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	case 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_3
# 166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	case 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_4
# 180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	case 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_5
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_1:
	end

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_3:
# 152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor 0
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_Text_0, MSGBOX_YESNO
# 158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_7
# 162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_6:
# 164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_1

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_4:
# 167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor 0
# 169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_Text_1, MSGBOX_YESNO
# 173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_11
# 177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_10:
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_1

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_5:
# 181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor 0
# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_Text_2, MSGBOX_YESNO
# 187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_15
# 191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_14:
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_1

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_7:
# 159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_6

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_11:
# 174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_10

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_15:
# 188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_14


PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
	end


PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_LastPokeBall_Text_0
# 211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_ChooseStarterScene_Text_0:
# 45 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Gramps!\n"
	.string "I'm fed up with waiting!$"

PalletTown_ProfessorOaksLab_ChooseStarterScene_Text_1:
# 49 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: {RIVAL}?\n"
	.string "Let me think…\p"
	.string "Oh, that's right, I told you to\n"
	.string "come! Just wait!\p"
	.string "Here, {PLAYER}.\p"
	.string "There are three POKéMON here.\p"
	.string "Haha!\p"
	.string "The POKéMON are held inside\n"
	.string "these POKé BALLS.\p"
	.string "When I was young, I was a serious\n"
	.string "POKéMON TRAINER.\p"
	.string "But now, in my old age, I have\n"
	.string "only these three left.\p"
	.string "You can have one.\n"
	.string "Go on, choose!$"

PalletTown_ProfessorOaksLab_ChooseStarterScene_Text_2:
# 68 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Hey! Gramps! No fair!\n"
	.string "What about me?$"

PalletTown_ProfessorOaksLab_ChooseStarterScene_Text_3:
# 70 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Be patient, {RIVAL}.\n"
	.string "You can have one, too!$"

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_Text_0:
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "I see! BULBASAUR is your choice.\n"
	.string "It's very easy to raise.\p"
	.string "So, {PLAYER}, you want to go with\n"
	.string "the GRASS POKéMON BULBASAUR?$"

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_Text_1:
# 169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Hm! SQUIRTLE is your choice.\n"
	.string "It's one worth raising.\p"
	.string "So, {PLAYER}, you've decided on the\n"
	.string "WATER POKéMON SQUIRTLE?$"

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_Text_2:
# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah! CHARMANDER is your choice.\n"
	.string "You should raise it patiently.\p"
	.string "So, {PLAYER}, you're claiming the\n"
	.string "FIRE POKéMON CHARMANDER?$"

PalletTown_ProfessorOaksLab_EventScript_LastPokeBall_Text_0:
# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "That's PROF. OAK's last POKéMON.$"
