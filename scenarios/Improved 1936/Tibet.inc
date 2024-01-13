##############################
# Country definition for TIB #
##############################

country =
{ tag                    = TIB
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.4000 
  supply = 0.2000 
  production = 0.4000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1453
  manpower               = 9.9 # 10 - building queue

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  ownedprovinces         = { 1283 1448 1450 1451 1452 1453 }
  controlledprovinces    = { 1283 1448 1450 1451 1452 1453 }

  techapps               = { 1010 1190 5080 }

	diplomacy = {
		relation = { tag = AFG value = 10 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 1 }
		relation = { tag = AUS value = 10 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 40 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 1 }
		relation = { tag = CGX value = -25 }
		relation = { tag = CHC value = -10 }
		relation = { tag = CHI value = 25 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 1 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = -10 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 15 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 20 }
		relation = { tag = GER value = 10 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 20 }
		relation = { tag = IRE value = 1 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 5 }
		relation = { tag = JAP value = 10 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = -20 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 20 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 1 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 1 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 15 }
		relation = { tag = SIK value = 20 }
		relation = { tag = SOV value = 35 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = 1 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 5 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "TIB" NumberOfSpies = 1 }
	SpyInfo = { country = "BHU" NumberOfSpies = 2 }
	SpyInfo = { country = "CHC" NumberOfSpies = 1 }
	SpyInfo = { country = "CHI" NumberOfSpies = 2 }
	SpyInfo = { country = "CXB" NumberOfSpies = 2 }
	SpyInfo = { country = "CYN" NumberOfSpies = 2 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "GER" NumberOfSpies = 1 }
	SpyInfo = { country = "IND" NumberOfSpies = 2 }
	SpyInfo = { country = "MLY" NumberOfSpies = 1 }
	SpyInfo = { country = "NEP" NumberOfSpies = 2 }
	SpyInfo = { country = "SIK" NumberOfSpies = 1 }
	SpyInfo = { country = "SOV" NumberOfSpies = 1 }	
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }

  nationalprovinces      = { 1283 1448 1450 1451 1452 1453
				1442 1443 1444 #Amdo
				1282 #Eastern Kham (optional, half-national: Ya'an 1281)
				1877 1878 1454 1284 #South Tibet (optional, half-national: Dimapur 1284)
				 }
  headofstate            = { type = 9 id = 73001 }
  headofgovernment       = { type = 9 id = 73002 }
  foreignminister        = { type = 9 id = 73003 }
  armamentminister       = { type = 9 id = 73004 }
  ministerofsecurity     = { type = 9 id = 73005 }
  ministerofintelligence = { type = 9 id = 73006 }
  chiefofstaff           = { type = 9 id = 73007 }
  chiefofarmy            = { type = 9 id = 73008 }
  chiefofnavy            = { type = 9 id = 73009 }
  chiefofair             = { type = 9 id = 73010 }

  nationalidentity = "policy_identity_parochial" 
  socialpolicy = "policy_social_conformism" 
  nationalculture = "policy_culture_conformist"

landunit = {
	location = 1453 # Lhasa
	name = "Xi'zang Jüntuan 1"
	id = { type = 10700 id = 1001 }

	division = {
		id = { type = 10700 id = 1 }
		name = "1 Xi'zang Shi"
		type = militia
		model = 0
		}

	division = {
		id = { type = 10700 id = 2 }
		name = "10 Xi'zang Lü"
		type = militia
		model = 0
		}

	division = {
		id = { type = 10700 id = 3 }
		name = "17 Xi'zang Lü"
		type = militia
		model = 0
		}
	}

	province_development = { 
		id = { type = 10700 id = 4 } 
		name = "" 
		progress = 0.0000 
		location = 1453 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = july 
			day = 7 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2914 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
