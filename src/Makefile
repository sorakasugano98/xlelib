CC = g++

BASE_OBJECTS = table.cpp ttable.cpp

FF_OBJECTS = fantasy_frontier/s_ability.cpp fantasy_frontier/s_achievement.cpp fantasy_frontier/s_activity.cpp fantasy_frontier/s_adventureroad.cpp fantasy_frontier/s_ai.cpp fantasy_frontier/s_battlefield.cpp fantasy_frontier/s_biology.cpp fantasy_frontier/s_card.cpp fantasy_frontier/s_cardenchant.cpp fantasy_frontier/s_cardfight.cpp fantasy_frontier/s_cardgrow.cpp fantasy_frontier/s_cardpvpfight.cpp fantasy_frontier/s_cardspell.cpp fantasy_frontier/s_cardspellformula.cpp  fantasy_frontier/s_charcolor.cpp fantasy_frontier/s_class.cpp fantasy_frontier/s_classbase.cpp fantasy_frontier/s_classes.cpp fantasy_frontier/s_collect.cpp fantasy_frontier/s_collection.cpp fantasy_frontier/s_collectlist.cpp fantasy_frontier/s_collectscore.cpp fantasy_frontier/s_combine.cpp fantasy_frontier/s_coupleevent.cpp fantasy_frontier/s_coupletitle.cpp fantasy_frontier/s_customequip.cpp fantasy_frontier/s_cutscene.cpp fantasy_frontier/s_diagramgroup.cpp fantasy_frontier/s_diagramnode.cpp fantasy_frontier/s_dialogue.cpp fantasy_frontier/s_divination.cpp fantasy_frontier/s_dropitem.cpp fantasy_frontier/s_dyeingitems.cpp fantasy_frontier/s_enchant.cpp fantasy_frontier/s_equipset.cpp fantasy_frontier/s_eudemonbackground.cpp fantasy_frontier/s_eudemonbattle.cpp fantasy_frontier/s_eudemonbattlebiology.cpp fantasy_frontier/s_eudemonbattleenchant.cpp fantasy_frontier/s_eudemonbattleitem.cpp fantasy_frontier/s_eudemonbattlemap.cpp fantasy_frontier/s_eudemonbattlemission.cpp fantasy_frontier/s_eudemonbattlespell.cpp fantasy_frontier/s_eudemoncollect.cpp fantasy_frontier/s_eudemonrank.cpp fantasy_frontier/s_exchange.cpp fantasy_frontier/s_familygame.cpp fantasy_frontier/s_festival.cpp fantasy_frontier/s_fight.cpp fantasy_frontier/s_fightaddon.cpp fantasy_frontier/s_fightbalance.cpp fantasy_frontier/s_fighter.cpp fantasy_frontier/s_fightevent.cpp fantasy_frontier/s_furniture.cpp fantasy_frontier/s_furnituredisplay.cpp fantasy_frontier/s_goods.cpp fantasy_frontier/s_growequip.cpp fantasy_frontier/s_hunter.cpp fantasy_frontier/s_item.cpp fantasy_frontier/s_itemcombo.cpp fantasy_frontier/s_itemmall.cpp fantasy_frontier/s_itemmallenchant.cpp fantasy_frontier/s_level.cpp fantasy_frontier/s_lifeplan.cpp fantasy_frontier/s_lottery.cpp fantasy_frontier/s_mage.cpp fantasy_frontier/s_mask.cpp fantasy_frontier/s_mission.cpp fantasy_frontier/s_missionlist.cpp fantasy_frontier/s_monsterstep.cpp fantasy_frontier/s_node.cpp fantasy_frontier/s_parameter.cpp fantasy_frontier/s_partner.cpp fantasy_frontier/s_partnercombo.cpp fantasy_frontier/s_partnergrow.cpp fantasy_frontier/s_partnermemories.cpp fantasy_frontier/s_partnermission.cpp fantasy_frontier/s_partnertalk.cpp fantasy_frontier/s_party.cpp fantasy_frontier/s_produce.cpp fantasy_frontier/s_producerank.cpp fantasy_frontier/s_pvp.cpp fantasy_frontier/s_questions.cpp fantasy_frontier/s_races.cpp fantasy_frontier/s_ranch.cpp fantasy_frontier/s_rankaward.cpp fantasy_frontier/s_recommendactivity.cpp fantasy_frontier/s_recommendevents.cpp fantasy_frontier/s_rentobject.cpp fantasy_frontier/s_reward.cpp fantasy_frontier/s_ridestep.cpp fantasy_frontier/s_rogue.cpp fantasy_frontier/s_schedule.cpp fantasy_frontier/s_spell.cpp fantasy_frontier/s_spellformula.cpp fantasy_frontier/s_statedependence.cpp fantasy_frontier/s_store.cpp fantasy_frontier/s_strengthenchant.cpp fantasy_frontier/s_syssetup.cpp fantasy_frontier/s_textindex.cpp fantasy_frontier/s_textlimit.cpp fantasy_frontier/s_title.cpp fantasy_frontier/s_toxiccircle.cpp fantasy_frontier/s_transport.cpp fantasy_frontier/s_treasureindex.cpp fantasy_frontier/s_warrior.cpp fantasy_frontier/s_weaponexpert.cpp fantasy_frontier/s_weaponskill.cpp fantasy_frontier/s_wizzard.cpp

all:
	$(CC) -c $(BASE_OBJECTS) $(FF_OBJECTS)
ifeq ($(OS),Windows_NT)
	if exist libxlelib.a del libxlelib.a
	if exist ..\build rmdir /s /q ..\build
	mkdir ..\build
	mkdir ..\build\lib
	mkdir ..\build\include
	mkdir ..\build\include\xlelib
	mkdir ..\build\include\xlelib\fantasy_frontier
	copy *.hpp ..\build\include\xlelib
	copy fantasy_frontier\*.hpp ..\build\include\xlelib\fantasy_frontier
else
	rm -f xlelib.a
	rm -r ../build
	mkdir -p ../build/lib
	mkdir -p ../build/include/xlelib/fantasy_frontier
	cp *.hpp ../build/include/xlelib
	cp fantasy_frontier/*.hpp ../build/include/xlelib/fantasy_frontier
endif
	ar -cvq ../build/lib/libxlelib.a *.o
ifeq ($(OS),Windows_NT)
	del *.o
else
	rm *.o
endif
