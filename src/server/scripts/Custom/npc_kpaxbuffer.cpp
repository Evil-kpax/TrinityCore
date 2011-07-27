#include "ScriptPCH.h"

class npc_kpaxbuffer : public CreatureScript
{
public:
    npc_kpaxbuffer() : CreatureScript("npc_kpaxbuffer") { }

    bool OnGossipHello(Player* pPlayer, Creature* pCreature)
    {
        if (pCreature->isQuestGiver())  
            pPlayer->PrepareQuestMenu(pCreature->GetGUID());
		
		pCreature->MonsterWhisper("Добро пожаловать в систему 'buffer'", pPlayer->GetGUID(), false);	
		
		if (pPlayer->GetTeam() == ALLIANCE ) {
		
			pPlayer->ADD_GOSSIP_ITEM(9, "Исцели меня!"						, GOSSIP_SENDER_MAIN, 1202);
			pPlayer->ADD_GOSSIP_ITEM(5, "Слово тьмы: Стойкость."			, GOSSIP_SENDER_MAIN, 2202);
			pPlayer->ADD_GOSSIP_ITEM(5, "Божественный дух."					, GOSSIP_SENDER_MAIN, 2203);
			pPlayer->ADD_GOSSIP_ITEM(5, "Молитва защиты от темной магии."	, GOSSIP_SENDER_MAIN, 2204);
			pPlayer->ADD_GOSSIP_ITEM(5, "Дар дикой природы."				, GOSSIP_SENDER_MAIN, 2205);
			pPlayer->ADD_GOSSIP_ITEM(5, "Чародейская гениальность."			, GOSSIP_SENDER_MAIN, 2206);
			pPlayer->ADD_GOSSIP_ITEM(5, "Великое благословение мудрости."	, GOSSIP_SENDER_MAIN, 2207);
			pPlayer->ADD_GOSSIP_ITEM(5, "Великое благословение королей."	, GOSSIP_SENDER_MAIN, 2208);
			pPlayer->ADD_GOSSIP_ITEM(5, "Великое благословение неприкосновенности."	, GOSSIP_SENDER_MAIN, 2209);
			pPlayer->ADD_GOSSIP_ITEM(5, "Шипы."								, GOSSIP_SENDER_MAIN, 2210);
			pPlayer->ADD_GOSSIP_ITEM(5, "Командирский крик."				, GOSSIP_SENDER_MAIN, 2211);
			pPlayer->ADD_GOSSIP_ITEM(5, "Зимний горн"						, GOSSIP_SENDER_MAIN, 2212);
		}	else {
		
			pPlayer->ADD_GOSSIP_ITEM(9, "Исцели меня!"						, GOSSIP_SENDER_MAIN, 1202);
			pPlayer->ADD_GOSSIP_ITEM(5, "Слово тьмы: Стойкость."			, GOSSIP_SENDER_MAIN, 2202);
			pPlayer->ADD_GOSSIP_ITEM(5, "Божественный дух."					, GOSSIP_SENDER_MAIN, 2203);
			pPlayer->ADD_GOSSIP_ITEM(5, "Молитва защиты от темной магии."	, GOSSIP_SENDER_MAIN, 2204);
			pPlayer->ADD_GOSSIP_ITEM(5, "Дар дикой природы."				, GOSSIP_SENDER_MAIN, 2205);
			pPlayer->ADD_GOSSIP_ITEM(5, "Чародейская гениальность."			, GOSSIP_SENDER_MAIN, 2206);
			pPlayer->ADD_GOSSIP_ITEM(5, "Великое благословение мудрости."	, GOSSIP_SENDER_MAIN, 2207);
			pPlayer->ADD_GOSSIP_ITEM(5, "Великое благословение королей."	, GOSSIP_SENDER_MAIN, 2208);
			pPlayer->ADD_GOSSIP_ITEM(5, "Великое благословение неприкосновенности."	, GOSSIP_SENDER_MAIN, 2209);
			pPlayer->ADD_GOSSIP_ITEM(5, "Шипы."								, GOSSIP_SENDER_MAIN, 2210);
			pPlayer->ADD_GOSSIP_ITEM(5, "Командирский крик."				, GOSSIP_SENDER_MAIN, 2211);
			pPlayer->ADD_GOSSIP_ITEM(5, "Зимний горн"						, GOSSIP_SENDER_MAIN, 2212);
		}
		
		pPlayer->SEND_GOSSIP_MENU(pPlayer->GetGossipTextId(pCreature), pCreature->GetGUID());
        return true;
	}	
		
		bool OnGossipSelect(Player* pPlayer, Creature* pCreature, uint32 /*uiSender*/, uint32 uiAction)
    {
        pPlayer->PlayerTalkClass->ClearMenus();
        switch(uiAction)
        {
			case 1202: // Heal me!
                if (pPlayer->HasAura(45523) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но сейчас я не могу этого сделать, попробуй позже.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 39321, true);
                    pPlayer->CastSpell(pPlayer, 45523, true);
                }
                break;
				
			case 2202: // Priest Stamina
                if (pPlayer->HasAura(1243) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но на тебе уже есть этот бафф.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 1243, true);
                }
                break;
				
			case 2203: // Priest Spirit
                if (pPlayer->HasAura(48073) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но на тебе уже есть этот бафф.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 48073, true);
                }
                break;
				
			case 2204: // Priest Shadow Resist
                if (pPlayer->HasAura(48170) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но на тебе уже есть этот бафф.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 48170, true);
                }
                break;	
				
			case 2205: // Druid lapa
                if (pPlayer->HasAura(48470) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но на тебе уже есть этот бафф.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 48470, true);
                }
                break;		
				
			case 2206: // Mage Intellect
                if (pPlayer->HasAura(43002) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но на тебе уже есть этот бафф.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 43002, true);
                }
                break;		

			case 2207: // Paladin manareg
                if (pPlayer->HasAura(48938) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но на тебе уже есть этот бафф.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 48938, true);
                }
                break;			
				
			case 2208: // Paladin 10%
                if (pPlayer->HasAura(25898) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но на тебе уже есть этот бафф.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 25898, true);
                }
                break;			
				
			case 2209: // Paladin protobuff
                if (pPlayer->HasAura(25899) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но на тебе уже есть этот бафф.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 25899, true);
                }
                break;				
				
			case 2210: // Druid spikes
                if (pPlayer->HasAura(53307) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но на тебе уже есть этот бафф.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 53307, true);
                }
                break;			

			case 2211: // Commanding Shout
                if (pPlayer->HasAura(47440) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но на тебе уже есть этот бафф.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 47440, true);
                }
                break;				
				
			case 2212: // glacial horn
                if (pPlayer->HasAura(57623) )
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pCreature->MonsterSay("Извини, но на тебе уже есть этот бафф.", LANG_UNIVERSAL, NULL);
                }
                else
                {
                    pPlayer->CLOSE_GOSSIP_MENU();
                    pPlayer->CastSpell(pPlayer, 57623, true);
                }
                break;		
		}
		
		return true;			
	}
};
	
void AddSC_npc_kpaxbuffer()
{
    new npc_kpaxbuffer;
}
				
		