#####################
# Country main data #
#####################

country =
{ tag                    = TUR
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  consumer = 0.2380 
  supply = 0.1190 
  production = 0.6430 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 448
  manpower               = 159.5500 # 165 - building queue -5 for HQ
  transports = 100
  escorts = 2
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  nationalprovinces      = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 444 }
  ownedprovinces         = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  controlledprovinces    = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4120   2010  2020  2290  2300  2310  2450  2460  2400  2510  1010  1190  1110  9010  5010  5080  5090 
                             3190  6210  6300  3010  3020  3070  3130  3400  8010  8020  8040  8050  14000
                           }
	diplomacy = {
		relation = { tag = AFG value = 20 }
		relation = { tag = ALB value = 20 }
		relation = { tag = ARG value = 15 }
		relation = { tag = AST value = 20 }
		relation = { tag = AUS value = 25 }
		relation = { tag = BEL value = 30 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 25 }
		relation = { tag = BUL value = -25 }
		relation = { tag = CAN value = 25 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 20 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 15 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 30 }
		relation = { tag = DEN value = 25 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 20 }
		relation = { tag = EGY value = 30 }
		relation = { tag = ENG value = 40 }
		relation = { tag = EST value = 15 }
		relation = { tag = ETH value = 35 }
		relation = { tag = FIN value = 20 }
		relation = { tag = FRA value = 40 }
		relation = { tag = GER value = 40 }
		relation = { tag = GRE value = -15 guaranteed = { day = 30 month = august year = 1934 } }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 30 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 25 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 20 }
		relation = { tag = IRQ value = -20 }
		relation = { tag = ITA value = 40 }
		relation = { tag = JAP value = 30 }
		relation = { tag = LAT value = 15 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 15 }
		relation = { tag = LUX value = 15 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 20 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 15 }
		relation = { tag = NZL value = 20 }
		relation = { tag = OMN value = 20 }
		relation = { tag = PAN value = 25 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 40 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 45 }
		relation = { tag = POR value = 25 }
		relation = { tag = PRU value = 15 }
		relation = { tag = ROM value = 25 guaranteed = { day = 30 month = august year = 1934 } }
		relation = { tag = SAF value = 20 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 25 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 40 }
		relation = { tag = SPA value = 15 }
		relation = { tag = SPR value = 15 }
		relation = { tag = SWE value = 20 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 30 }
		relation = { tag = VEN value = 20 }
		relation = { tag = YEM value = 20 }
		relation = { tag = YUG value = -20 guaranteed = { day = 30 month = august year = 1934 } }
	}

	SpyInfo = { country = "TUR" NumberOfSpies = 4 }
	SpyInfo = { country = "AFG" NumberOfSpies = 1 }
	SpyInfo = { country = "AUS" NumberOfSpies = 1 }
	SpyInfo = { country = "BUL" NumberOfSpies = 1 }
	SpyInfo = { country = "EGY" NumberOfSpies = 2 }
	SpyInfo = { country = "ENG" NumberOfSpies = 2 }
	SpyInfo = { country = "ETH" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 2 }
	SpyInfo = { country = "GER" NumberOfSpies = 2 }
	SpyInfo = { country = "GRE" NumberOfSpies = 4 }
	SpyInfo = { country = "HUN" NumberOfSpies = 1 }
	SpyInfo = { country = "IND" NumberOfSpies = 1 }
	SpyInfo = { country = "IRQ" NumberOfSpies = 4 }
	SpyInfo = { country = "ITA" NumberOfSpies = 1 }
	SpyInfo = { country = "OMN" NumberOfSpies = 1 }
	SpyInfo = { country = "PER" NumberOfSpies = 2 }
	SpyInfo = { country = "SAU" NumberOfSpies = 2 }
	SpyInfo = { country = "SOV" NumberOfSpies = 2 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "USA" NumberOfSpies = 1 }
	SpyInfo = { country = "YEM" NumberOfSpies = 2 }
	SpyInfo = { country = "YUG" NumberOfSpies = 2 }

  headofstate            = { type = 9 id = 12001 }
  headofgovernment       = { type = 9 id = 12002 }
  foreignminister        = { type = 9 id = 12003 }
  armamentminister       = { type = 9 id = 12004 }
  ministerofsecurity     = { type = 9 id = 12005 }
  ministerofintelligence = { type = 9 id = 12006 }
  chiefofstaff           = { type = 9 id = 12007 }
  chiefofarmy            = { type = 9 id = 12008 }
  chiefofnavy            = { type = 9 id = 12009 }
  chiefofair             = { type = 9 id = 12010 }
	nationalidentity = "policy_identity_parochial"
	socialpolicy = "policy_social_enterprise"
	nationalculture = "policy_culture_enterprise"
	### Turkey Land OOB ###
  landunit =
  { location = 448
    name     = "I. Topluluk"
    id       = { type = 11700 id = 8 }
    division =
    { id           = { type = 11700 id = 101 }
      type         = hq
      strength     = 100
      name         = "1. Ordu Karargahi"
      extra        = anti_air
    }
    division =
    { id           = { type = 11700 id = 9 }
      type         = infantry
      strength     = 100
      name         = "1. Piyade Dagitim"
    }
    division =
    { id           = { type = 11700 id = 10 }
      type         = infantry
      extra        = artillery
      strength     = 100
      name         = "3. Piyade Dagitim"
    }
  }
  landunit =
  { location = 409
    name     = "II. Topluluk"
    id       = { type = 11700 id = 11 }
    division =
    { id           = { type = 11700 id = 12 }
      type         = infantry
      strength     = 100
      name         = "5. Piyade Dagitim"
    }
  }
  landunit =
  { location = 408
    name     = "III. Topluluk"
    id       = { type = 11700 id = 13 }
    division =
    { id           = { type = 11700 id = 14 }
      type         = infantry
      strength     = 100
      name         = "7. Piyade Dagitim"
    }
  }
  landunit =
  { location = 445
    name     = "IV. Topluluk"
    id       = { type = 11700 id = 15 }
    division =
    { id           = { type = 11700 id = 16 }
      type         = infantry
      strength     = 100
      name         = "9. Piyade Dagitim"
    }
  }
  landunit =
  { location = 450
    name     = "V. Topluluk"
    id       = { type = 11700 id = 17 }
    division =
    { id           = { type = 11700 id = 18 }
      type         = infantry
      strength     = 100
      name         = "11. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1851
    name     = "VI. Topluluk"
    id       = { type = 11700 id = 19 }
    division =
    { id           = { type = 11700 id = 20 }
      type         = infantry
      extra        = anti_air
      strength     = 100
      name         = "13. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1855
    name     = "VII. Topluluk"
    id       = { type = 11700 id = 21 }
    division =
    { id           = { type = 11700 id = 22 }
      type         = infantry
      strength     = 100
      name         = "15. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1854
    name     = "VIII. Topluluk"
    id       = { type = 11700 id = 23 }
    division =
    { id           = { type = 11700 id = 24 }
      type         = infantry
      strength     = 100
      name         = "17. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1852
    name     = "IX. Topluluk"
    id       = { type = 11700 id = 25 }
    division =
    { id           = { type = 11700 id = 26 }
      type         = infantry
      strength     = 100
      name         = "19. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1853
    name     = "X. Topluluk"
    id       = { type = 11700 id = 27 }
    division =
    { id           = { type = 11700 id = 28 }
      type         = bergsjaeger
      extra        = anti_tank
      strength     = 80
      name         = "1. Dagci Tugay"
    }
  }
  landunit =
  { location = 442
    name     = "Türkce Süvari Topluluk"
    id       = { type = 11700 id = 29 }
    division =
    { id           = { type = 11700 id = 30 }
      type         = cavalry
      extra        = artillery
      strength     = 100
      name         = "1. Süvari Dagitim"
    }
    division =
    { id           = { type = 11700 id = 31 }
      type         = cavalry
      strength     = 100
      name         = "3. Süvari Dagitim"
    }
    division =
    { id           = { type = 11700 id = 32 }
      type         = cavalry
      strength     = 50
      name         = "5. Yedek Süvari Dagitim"
    }
  }
  # #####Turkey `36 ######
  navalunit =
  { location = 409
    base     = 409
    name     = "Türkce Deniz Filosu"
    id       = { type = 11700 id = 1 }
    division =
    { id    = { type = 11700 id = 3 }
      name  = "TCG Yavuz"
      type  = battlecruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      extra4 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division =
    { id    = { type = 11700 id = 4 }
      name  = "TCG Hamidieh"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 11700 id = 5 }
      name  = "TCG Medjidieh"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 11700 id = 7 }
      name  = "1. Filotilla Torpido Ve Denizalti"
      type  = destroyer
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
    division =
    { id    = { type = 11700 id = 100 }
      name  = "2. Filotilla Torpido Ve Denizalti"
      type  = destroyer
      model = 0
      extra1 = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 11700 id = 6 }
      name  = "1. Filotilla Denizalti Kücük"
      type  = submarine
      model = 0
    }
    division =
    { id   = { type = 11700 id = 2 }
      name = "Reschid Pasha Kücük Filotilla"
      type = transport
    }
  }
  airunit =
  { location = 448
    base     = 448
    name     = "I. Türkce Hava Topluluk"
    id       = { type = 11700 id = 33 }
    division =
    { id           = { type = 11700 id = 34 }
      type         = interceptor
      model        = 0
      strength     = 48
      name         = "1. Avci Ucagi Grup"
    }
    division =
    { id           = { type = 11700 id = 35 }
      type         = tactical_bomber
      model        = 0
      strength     = 52
      name         = "1. Taktik Bombardiman Ucagi Grup"
    }
  } 
	province_development = { 
		id = { type = 11700 id = 36 } 
		name = "" 
		progress = 0.0000 
		location = 448 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = december 
			day = 18 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2518 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 37 } 
		name = "" 
		progress = 0.0000 
		location = 438 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = december 
			day = 18 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2518 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 38 } 
		name = "" 
		progress = 0.0000 
		location = 446 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = october 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2870 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	brigade_development = { 
		id = { type = 11700 id = 39 } 
		name = "36' AA" 
		progress = 0.0000 
		location = 448 
		cost = 0.7360 
		date = { 
			year = 1936 
			month = november 
			day = 16 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 40.0000 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 87 
		days_for_first = 97 
		gearing_bonus = 0.0000 
		type = naval_anti_air_s 
		model = 1 
		} 
	brigade_development = { 
		id = { type = 11700 id = 40 } 
		name = "Capital Torpedoes" 
		progress = 0.0000 
		location = 448 
		cost = 0.5520 
		date = { 
			year = 1936 
			month = march 
			day = 25 
			hour = 0 
			} 
		manpower = 0.0500 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 30.0000 
		total_progress = 0.0000 
		size = 1 
		done = 0 
		days = 55 
		days_for_first = 55 
		gearing_bonus = 0.0000 
		type = naval_torpedoes_l 
		model = 0 
		} 
}
