#####################
# Country main data #
#####################

country =
{ tag                    = CUB
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 3.8000 # 15 - building queue
  consumer = 0.2857 
  supply = 0.0477 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 654
  transports             = 16
  escorts                = 2

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 10 }
		relation = { tag = AST value = 1 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 10 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 10 }
		relation = { tag = BRA value = 30 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 15 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 5 }
		relation = { tag = CHL value = 10 }
		relation = { tag = COL value = 10 }
		relation = { tag = COS value = 20 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 30 }
		relation = { tag = ECU value = 15 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 50 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 40 }
		relation = { tag = GER value = 25 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 20 }
		relation = { tag = HAI value = 30 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 20 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 15 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 10 }
		relation = { tag = JAP value = 15 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 30 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 20 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 1 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 20 }
		relation = { tag = PAR value = 10 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 1 }
		relation = { tag = PRU value = 15 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 20 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = -10 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = -10 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 10 }
		relation = { tag = USA value = 175 }
		relation = { tag = VEN value = 15 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "CUB" NumberOfSpies = 2 }
	SpyInfo = { country = "ARG" NumberOfSpies = 1 }
	SpyInfo = { country = "BRA" NumberOfSpies = 1 }
	SpyInfo = { country = "CAN" NumberOfSpies = 1 }
	SpyInfo = { country = "COL" NumberOfSpies = 1 }
	SpyInfo = { country = "DOM" NumberOfSpies = 2 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "HAI" NumberOfSpies = 2 }
	SpyInfo = { country = "HOL" NumberOfSpies = 1 }
	SpyInfo = { country = "MEX" NumberOfSpies = 1 }
	SpyInfo = { country = "PAN" NumberOfSpies = 1 }
	SpyInfo = { country = "SPR" NumberOfSpies = 1 }
	SpyInfo = { country = "USA" NumberOfSpies = 2 }
	SpyInfo = { country = "VEN" NumberOfSpies = 2 }

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 654 655 656 657 }
  ownedprovinces         = { 654 655 656 657 }
  controlledprovinces    = { 654 655 656 657 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 3010 8050 }

  headofstate            = { type = 9 id = 33001 }
  headofgovernment       = { type = 9 id = 33002 }
  foreignminister        = { type = 9 id = 33003 }
  armamentminister       = { type = 9 id = 33004 }
  ministerofsecurity     = { type = 9 id = 33005 }
  ministerofintelligence = { type = 9 id = 33006 }
  chiefofstaff           = { type = 9 id = 33007 }
  chiefofarmy            = { type = 9 id = 33008 }
  chiefofnavy            = { type = 9 id = 33009 }
  chiefofair             = { type = 9 id = 33010 }
  # Firepower
  landunit =
  { id       = { type = 26000 id = 4000 }
    name     = "Ejercito de Cuba"
    location = 654
    division =
    { id       = { type = 26000 id = 4001 }
      name     = "1a Brigada de Ejercito"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 4002 }
      name     = "1a Brigada de Caballería 'Floridita'"
      strength = 100
      type     = cavalry
      model    = 0
      extra    = artillery
    }
  } 

#########################################################################
# Navy
#########################################################################

navalunit = {
	id = { type = 26000 id = 3000 }
	name = "Marina de Cuba"
	location = 654
	base = 654

	division = { 
		id = { type = 26000 id = 3001 }
		name = "Cuba"
		type = light_cruiser
		strength = 75
		max_strength = 75
		model = 0
		}
	}

	province_development = { 
		id = { type = 26000 id = 4003 } 
		name = "" 
		progress = 0.0000 
		location = 654 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = july 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2031 
		days_for_first = 135 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 26000 id = 4004 } 
		name = "" 
		progress = 0.0000 
		location = 657 
		cost = 2.0000 
		date = { 
			year = 1953 
			month = july 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2031 
		days_for_first = 225 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}