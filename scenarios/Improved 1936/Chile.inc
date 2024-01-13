#####################
# Country main data #
#####################

country =
{ tag                    = CHL
  # Resource Reserves
  energy                 = 591
  metal                  = 1134
  rare_materials         = 132
  oil                    = 48
  supplies               = 305
  money                  = 20
  consumer = 0.2583 
  supply = 0.0833 
  production = 0.6584 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 840
  manpower               = 3.7000 # 15 - building queue
  transports             = 28

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = -15 }
		relation = { tag = AST value = 10 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 30 }
		relation = { tag = BRA value = 10 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 15 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 15 }
		relation = { tag = COL value = 20 }
		relation = { tag = COS value = 10 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 10 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 10 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 20 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 30 }
		relation = { tag = EST value = 10 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 20 }
		relation = { tag = FRA value = 30 }
		relation = { tag = GER value = 40 }
		relation = { tag = GRE value = 10 }
		relation = { tag = GUA value = 10 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 20 }
		relation = { tag = HON value = 10 }
		relation = { tag = HUN value = 10 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 10 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 20 }
		relation = { tag = JAP value = 15 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 15 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 10 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 20 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 10 }
		relation = { tag = PAR value = 20 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 10 }
		relation = { tag = PRU value = 20 }
		relation = { tag = ROM value = 10 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 10 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 10 }
		relation = { tag = SPA value = 15 }
		relation = { tag = SPR value = 15 }
		relation = { tag = SWE value = 10 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 20 }
		relation = { tag = USA value = 50 }
		relation = { tag = VEN value = 20 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "CHL" NumberOfSpies = 3 }
	SpyInfo = { country = "ARG" NumberOfSpies = 2 }
	SpyInfo = { country = "BOL" NumberOfSpies = 4 }
	SpyInfo = { country = "BRA" NumberOfSpies = 2 }
	SpyInfo = { country = "ECU" NumberOfSpies = 1 }
	SpyInfo = { country = "PAR" NumberOfSpies = 1 }
	SpyInfo = { country = "PRU" NumberOfSpies = 4 }
	SpyInfo = { country = "SPR" NumberOfSpies = 1 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 864 861 860 856 840 839 841 842 }
  ownedprovinces         = { 864 861 860 856 840 839 841 842 }
  controlledprovinces    = { 864 861 860 856 840 839 841 842 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010  2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 3020 3260 3410 6210 6300 3010 3070 3130
                             3250 3400 8010 8020 8040 8050
                           }

  headofstate            = { type = 9 id = 44001 }
  headofgovernment       = { type = 9 id = 44002 }
  foreignminister        = { type = 9 id = 44003 }
  armamentminister       = { type = 9 id = 44004 }
  ministerofsecurity     = { type = 9 id = 44005 }
  ministerofintelligence = { type = 9 id = 44006 }
  chiefofstaff           = { type = 9 id = 44007 }
  chiefofarmy            = { type = 9 id = 44008 }
  chiefofnavy            = { type = 9 id = 44009 }
  chiefofair             = { type = 9 id = 44010 }
  landunit =
  { id       = { type = 12500 id = 1 }
    name     = "Ejercito de Chile"
    location = 840
    division =
    { id       = { type = 12500 id = 2 }
      name     = "1. División de Infantería"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 12500 id = 3 }
      name     = "2. División de Infantería"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 12500 id = 4 }
      name     = "1. División de Montaña de Chile"
      strength = 100
      type     = bergsjaeger
      model    = 0
    }
    division =
    { id       = { type = 12500 id = 5 }
      name     = "División Caballería nro. 1"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
  navalunit =
  { id       = { type = 12500 id = 6 }
    name     = "Armada de Chile"
    location = 840
    base     = 840
    division =
    { id    = { type = 12500 id = 7 }
      name  = "Flotilla des Destructores nro. 1"
      type  = destroyer
      model = 1
      extra1 = naval_anti_air_s
      brigade_model1 = 0
    }
    division =
    { id    = { type = 12500 id = 9 }
      name  = "BACH Almirante Latorre"
      type  = battleship
      model = 1
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      extra4 = none
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 12500 id = 8 }
      name  = "BACH General O'Higgins"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 12500 id = 10 }
      name  = "BACH  Blanco Encalada"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 12500 id = 11 }
      name  = "BACH  Chacabuco"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 12500 id = 12 }
      name  = "Flotilla des Submarinos nro. 1"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 12500 id = 13 }
      name  = "Flotilla des Submarinos nro. 2"
      type  = submarine
      model = 1
    }
  } 
	province_development = { 
		id = { type = 12500 id = 14 } 
		name = "" 
		progress = 0.0000 
		location = 839 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = november 
			day = 4 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2389 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		speed_step = 2 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 12500 id = 15 } 
		name = "" 
		progress = 0.0000 
		location = 840 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = august 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2389 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 12500 id = 16 } 
		name = "" 
		progress = 0.0000 
		location = 856 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = august 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2389 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	brigade_development = { 
		id = { type = 12500 id = 17 } 
		name = "Basic Sea Mines" 
		progress = 0.0000 
		location = 840 
		cost = 0.1760 
		date = { 
			year = 1936 
			month = october 
			day = 8 
			hour = 0 
			} 
		manpower = 0.0500 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 40.0000 
		total_progress = 0.0000 
		size = 5 
		done = 0 
		days = 86 
		days_for_first = 53 
		gearing_bonus = 0.0000 
		type = naval_mines 
		model = 0 
		} 
	brigade_development = { 
		id = { type = 12500 id = 18 } 
		name = "Capital Torpedoes" 
		progress = 0.0000 
		location = 840 
		cost = 0.5280 
		date = { 
			year = 1936 
			month = may 
			day = 13 
			hour = 0 
			} 
		manpower = 0.0500 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 30.0000 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 103 
		days_for_first = 53 
		gearing_bonus = 0.0000 
		type = naval_torpedoes_l 
		model = 0 
		} 
}
