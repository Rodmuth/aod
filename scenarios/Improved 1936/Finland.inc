#####################
# Country main data #
#####################

country =
{ tag                    = FIN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.3400 
  supply = 0.0600 
  production = 0.6000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 142
  manpower               = 34.6500  # 35 - building queue
  transports             = 96
  escorts                = 1
	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 15 }
		relation = { tag = ARG value = 20 }
		relation = { tag = AST value = 10 }
		relation = { tag = AUS value = 20 }
		relation = { tag = BEL value = 30 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 20 }
		relation = { tag = CAN value = 20 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 5 }
		relation = { tag = CHL value = 20 }
		relation = { tag = COL value = 20 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 30 }
		relation = { tag = DEN value = 35 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 15 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 50 }
		relation = { tag = EST value = 40 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FRA value = 40 }
		relation = { tag = GER value = 45 }
		relation = { tag = GRE value = 25 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 35 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 30 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 35 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 40 }
		relation = { tag = JAP value = 20 }
		relation = { tag = LAT value = 40 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 40 }
		relation = { tag = LUX value = 20 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 20 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 35 }
		relation = { tag = NZL value = 15 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 30 }
		relation = { tag = POR value = 20 }
		relation = { tag = PRU value = 15 }
		relation = { tag = ROM value = 25 }
		relation = { tag = SAF value = 10 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 20 }
		relation = { tag = SPA value = 20 }
		relation = { tag = SPR value = 20 }
		relation = { tag = SWE value = 65 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = -15 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 20 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 35 }
		relation = { tag = VEN value = 20 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 20 }
	}

	SpyInfo = { country = "FIN" NumberOfSpies = 5 }
	SpyInfo = { country = "CAN" NumberOfSpies = 1 }
	SpyInfo = { country = "DEN" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "EST" NumberOfSpies = 2 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "GER" NumberOfSpies = 1 }
	SpyInfo = { country = "LAT" NumberOfSpies = 2 }
	SpyInfo = { country = "LIT" NumberOfSpies = 2 }
	SpyInfo = { country = "POL" NumberOfSpies = 1 }
	SpyInfo = { country = "SOV" NumberOfSpies = 2 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "USA" NumberOfSpies = 1 }

  nationalprovinces      = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 135 150 152 }
  ownedprovinces         = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 }
  controlledprovinces    = { 103 141 142 140 143 138 139 137 131 130 132 136 148 147 144 145 146 149 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 9020 3140 4010  4020  4120     2010  2020  2290  2300  2310  2450  2460  2510  2400  1010  1020  1190  1110  9010  9030  5010 
                             5080  5090  5190  6010  6030  3010  3130  3400  3410  8020  8040  8050  14000
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    free_market       = 9
    freedom           = 7
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 29001 }
  headofgovernment       = { type = 9 id = 29002 }
  foreignminister        = { type = 9 id = 29003 }
  armamentminister       = { type = 9 id = 29004 }
  ministerofsecurity     = { type = 9 id = 29005 }
  ministerofintelligence = { type = 9 id = 29006 }
  chiefofstaff           = { type = 9 id = 29007 }
  chiefofarmy            = { type = 9 id = 29008 }
  chiefofnavy            = { type = 9 id = 29009 }
  chiefofair             = { type = 9 id = 29010 }
  landunit =
  { location = 146
    name     = "I Armeijakunta"
    id       = { type = 32000 id = 1 }
    division =
    { id       = { type = 32000 id = 6 }
      name     = "Päämaja"
      type     = hq
      model    = 0
      strength = 100
      extra = anti_air
    }
    division =
    { id            = { type = 32000 id = 2 }
      name          = "1. Divisioona"
      type          = infantry
      model         = 1
      extra         = artillery
      brigade_model = 2
    }
  }
  landunit =
  { location = 145
    name     = "II Armeijakunta"
    id       = { type = 32000 id = 3 }
    division =
    { id    = { type = 32000 id = 4 }
      name  = "4. Divisioona"
      type  = infantry
      model = 1
      extra = anti_air
    }
    division =
    { id    = { type = 32000 id = 5 }
      name  = "5. Divisioona"
      type  = infantry
      model = 1
      extra    = b_u9
      brigade_model = 0
    }
    division =
    { id    = { type = 32000 id = 7 }
      name  = "21. Divisioona"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { location = 145
    name     = "III Armeijakunta"
    id       = { type = 32000 id = 8 }
    division =
    { id    = { type = 32000 id = 9 }
      name  = "8. Divisioona"
      type  = infantry
      model = 1
    }
    division =
    { id    = { type = 32000 id = 10 }
      name  = "10. Divisioona"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { location = 149
    name     = "IV Armeijakunta"
    id       = { type = 32000 id = 11 }
    division =
    { id    = { type = 32000 id = 12 }
      name  = "12. Divisioona"
      type  = infantry
      model = 1
      extra = anti_air
    }
    division =
    { id    = { type = 32000 id = 13 }
      name  = "13. Divisioona"
      type  = infantry
      model = 1
      extra    = b_u10
    }
  }
  landunit =
  { location = 142
    name     = "V Armeijakunta"
    id       = { type = 32000 id = 14 }
    division =
    { id    = { type = 32000 id = 15 }
      name  = "6. Divisioona"
      type  = infantry
      model = 1
      extra = anti_air
    }
    division =
    { id    = { type = 32000 id = 16 }
      name  = "22. Divisioona"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { location = 136
    name     = "Pohjois-Karjalan Ryhmä"
    id       = { type = 32000 id = 17 }
    division =
    { id    = { type = 32000 id = 18 }
      name  = "2. Divisioona"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { location = 132
    name     = "Pohjois-Suomen Ryhmä"
    id       = { type = 32000 id = 19 }
    division =
    { id    = { type = 32000 id = 20 }
      name  = "3. Divisioona"
      type  = infantry
      model = 1
    }
  }
  landunit =
  { location = 130
    name     = "Lapin Ryhmä"
    id       = { type = 32000 id = 21 }
    division =
    { id    = { type = 32000 id = 22 }
      name  = "7. Divisioona"
      type  = bergsjaeger
      model = 0
    }
  }
  # #######################################################
  navalunit =
  { id       = { type = 32000 id = 24 }
    name     = "Suomen Laivasto"
    location = 142
    base     = 142
    division =
    { id    = { type = 32000 id = 25 }
      name  = "Ilmarinen"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = naval_fire_controll_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 32000 id = 26 }
      name  = "Väinämöinen"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = naval_fire_controll_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 32000 id = 100 }
      name  = "1. Rannikkolaivue"
      type  = destroyer
      strength = 80
      max_strength = 80 
      model = 0
      extra = naval_anti_air_s
      brigade_model = 0
    }
    division =
    { id    = { type = 32000 id = 23 }
      name  = "1. Sukellusvenelaivue"
      type  = submarine
      model = 0
    }
  } 
	province_development = { 
		id = { type = 32000 id = 28 } 
		name = "" 
		progress = 0.0000 
		location = 142 
		cost = 5.0000 
		date = { 
			year = 1939 
			month = february 
			day = 1 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 6 
		done = 0 
		days = 1469 
		days_for_first = 245 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = ic 
		} 
	province_development = { 
		id = { type = 32000 id = 27 } 
		name = "" 
		progress = 0.0000 
		location = 142 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = june 
			day = 19 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1521 
		days_for_first = 82 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 32000 id = 29 } 
		name = "" 
		progress = 0.0000 
		location = 132 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = december 
			day = 1 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2015 
		days_for_first = 82 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	brigade_development = { 
		id = { type = 32000 id = 30 } 
		name = "Capital Torpedoes" 
		progress = 0.0000 
		location = 142 
		cost = 0.4080 
		date = { 
			year = 1936 
			month = april 
			day = 18 
			hour = 0 
			} 
		manpower = 0.0500 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 28.5000 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 80 
		days_for_first = 41 
		gearing_bonus = 0.0000 
		type = naval_torpedoes_l 
		model = 0 
		} 
	brigade_development = { 
		id = { type = 32000 id = 31 } 
		name = "Torpedoes" 
		progress = 0.0000 
		location = 142 
		cost = 0.4080 
		date = { 
			year = 1936 
			month = april 
			day = 18 
			hour = 0 
			} 
		manpower = 0.0500 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 28.5000 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 41 
		days_for_first = 41 
		gearing_bonus = 0.0000 
		type = naval_torpedoes_s 
		model = 0 
		} 
	brigade_development = { 
		id = { type = 32000 id = 32 } 
		name = "Basic Sea Mines" 
		progress = 0.0000 
		location = 142 
		cost = 0.1360 
		date = { 
			year = 1936 
			month = march 
			day = 19 
			hour = 0 
			} 
		manpower = 0.0500 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 38.0000 
		total_progress = 0.0000 
		size = 1 
		done = 0 
		days = 34 
		days_for_first = 41 
		gearing_bonus = 0.0000 
		type = naval_mines 
		model = 0 
		} 
}
