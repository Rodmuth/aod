#####################
# Country main data #
#####################

country =
{ tag                    = HUN
  manpower               = 3.5  # 225 -event building queue -5 for HQ
  capital                = 457
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  transports		 = 20
  consumer = 0.2356 
  supply = 0.0607 
  production = 0.7037 
  reinforcement = 0.0000 
  upgrading = 0.0000 

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 15 }
		relation = { tag = ARG value = 10 }
		relation = { tag = AST value = 10 }
		relation = { tag = AUS value = 40 guaranteed = { day = 17 month = march year = 1934 } }
		relation = { tag = BEL value = 20 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 10 }
		relation = { tag = BUL value = 20 }
		relation = { tag = CAN value = 10 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 10 }
		relation = { tag = CHL value = 10 }
		relation = { tag = COL value = 10 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 35 }
		relation = { tag = DEN value = 20 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 10 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 10 }
		relation = { tag = EST value = 25 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 30 }
		relation = { tag = FRA value = 20 }
		relation = { tag = GER value = 50 }
		relation = { tag = GRE value = 25 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 20 }
		relation = { tag = HON value = 1 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 20 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 40 }
		relation = { tag = JAP value = 20 }
		relation = { tag = LAT value = 25 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 25 }
		relation = { tag = LUX value = 20 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 10 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 20 }
		relation = { tag = NZL value = 10 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 10 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 30 }
		relation = { tag = POR value = 20 }
		relation = { tag = PRU value = 10 }
		relation = { tag = ROM value = 30 }
		relation = { tag = SAF value = 10 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 10 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 15 }
		relation = { tag = SPA value = 20 }
		relation = { tag = SPR value = 20 }
		relation = { tag = SWE value = 30 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 25 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = -5 }
		relation = { tag = VEN value = 10 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = -10 }
	}

	SpyInfo = { country = "HUN" NumberOfSpies = 5 }
	SpyInfo = { country = "AUS" NumberOfSpies = 4 }
	SpyInfo = { country = "BUL" NumberOfSpies = 2 }
	SpyInfo = { country = "CZE" NumberOfSpies = 4 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "GER" NumberOfSpies = 2 }
	SpyInfo = { country = "ITA" NumberOfSpies = 2 }
	SpyInfo = { country = "LIT" NumberOfSpies = 1 }
	SpyInfo = { country = "POL" NumberOfSpies = 4 }
	SpyInfo = { country = "ROM" NumberOfSpies = 2 }
	SpyInfo = { country = "SOV" NumberOfSpies = 4 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "TUR" NumberOfSpies = 1 }
	SpyInfo = { country = "YUG" NumberOfSpies = 4 }

	SpyInfo = { country = "VIC" NumberOfSpies = 1 }
	SpyInfo = { country = "SLO" NumberOfSpies = 3 }
	SpyInfo = { country = "CRO" NumberOfSpies = 2 }

  nationalprovinces      = { 456 457 458 491 492 497 428 496 498 476 477 478 490 499 493 }
  ownedprovinces         = { 456 457 458 491 492 497 }
  controlledprovinces    = { 456 457 458 491 492 497 }
  # Eastern Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4020  4120     2010  2020  2290  2300  2310  2450  2460  2400  2510  1010  1190  1110  9010  5010  5020  5080 
                             5090  5190  6010  6030 14000
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 1
    free_market       = 4
    freedom           = 3
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 21001 }
  headofgovernment       = { type = 9 id = 21002 }
  foreignminister        = { type = 9 id = 21003 }
  armamentminister       = { type = 9 id = 21004 }
  ministerofsecurity     = { type = 9 id = 21005 }
  ministerofintelligence = { type = 9 id = 21006 }
  chiefofstaff           = { type = 9 id = 21125 }
  chiefofarmy            = { type = 9 id = 21140 }
  chiefofnavy            = { type = 9 id = 21010 }
  chiefofair             = { type = 9 id = 21009 }
  landunit =
  { id       = { type = 20500 id = 1 }
    name     = "Magyar Hadsereg"
    location = 457
    division =
    { id       = { type = 20500 id = 100 }
      name     = "1. hadsereg"
      strength = 100
      type     = hq
      extra    = anti_air
    }
    division =
    { id       = { type = 20500 id = 2 }
      name     = "6. gyaloghadosztály"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 20500 id = 3 }
      name     = "7. gyaloghadosztály"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 20500 id = 4 }
      name     = "10. gyaloghadosztály"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
  }
  landunit =
  { id       = { type = 20500 id = 5 }
    name     = "I Hadtest"
    location = 457
    division =
    { id       = { type = 20500 id = 6 }
      name     = "12. gyalog hadosztály"
      strength = 100
      type     = infantry
      extra    = b_u9
    }
    division =
    { id       = { type = 20500 id = 7 }
      name     = "13. gyaloghadosztály"
      strength = 100
      type     = infantry
      extra    = b_u9
    }
    division =
    { id       = { type = 20500 id = 8 }
      name     = "16. gyaloghadosztály"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 20500 id = 9 }
    name     = "II Hadtest"
    location = 457
    division =
    { id       = { type = 20500 id = 10 }
      name     = "20. gyaloghadosztály"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 20500 id = 11 }
      name     = "24. gyaloghadosztály"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 20500 id = 12 }
      name     = "25. gyaloghadosztály"
      strength = 100
      type     = infantry
    }
  }
  airunit =
  { id       = { type = 20500 id = 13 }
    name     = "I Légihadsereg"
    location = 457
    base     = 457
    division =
    { id       = { type = 20500 id = 14 }
      name     = "I.Vadászosztály"
      type     = interceptor
      model    = 0
      strength = 30
    }
    division =
    { id       = { type = 20500 id = 15 }
      name     = "I.Vadászbombázó Osztály"
      type     = tactical_bomber
      model    = 0
      strength = 30
    }
  } 
	province_development = { 
		id = { type = 20500 id = 201 } 
		name = "" 
		progress = 0.0000 
		location = 458 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = june 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2150 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		speed_step = 2 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20500 id = 203 } 
		name = "" 
		progress = 0.0000 
		location = 458 
		cost = 5.0000 
		date = { 
			year = 1939 
			month = november 
			day = 24 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 6 
		done = 0 
		days = 1987 
		days_for_first = 331 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = ic 
		} 
	province_development = { 
		id = { type = 20500 id = 200 } 
		name = "" 
		progress = 0.0000 
		location = 457 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = march 
			day = 14 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2150 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20500 id = 202 } 
		name = "" 
		progress = 0.0000 
		location = 456 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = december 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2150 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20500 id = 204 } 
		name = "" 
		progress = 0.0000 
		location = 491 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = december 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2150 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 20500 id = 205 } 
		name = "" 
		progress = 0.0000 
		location = 492 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = december 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2150 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
