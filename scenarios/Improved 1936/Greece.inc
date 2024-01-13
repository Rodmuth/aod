##############################
# Country definition for GRE #
##############################

province =
{ id         = 396
  supplypool = 100
}              # Crete

#####################
# Country main data #
#####################

country =
{ tag                    = GRE
  manpower               = 64.5000 # 70 - building queue -5 for HQ
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 400
  money                  = 10
  consumer = 0.2400 
  supply = 0.1600 
  production = 0.6000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 401
  transports             = 360
  escorts                = 4
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 5
    freedom           = 4
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 4
  }
  nationalprovinces      = { 392 393 394 395 396 400 401 402 403 405 410 411 412 398 399 413 444 }
  ownedprovinces         = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }
  controlledprovinces    = { 392 393 394 395 396 400 401 402 403 405 410 411 412 }
  # Western Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010  2290 2300 2310 1010 1190 1110 2450 2460 2400 2510 5010 5080 5090 6010 3010 3020 3070 3130 3400 8020 8040
                             8050
                           }
	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = -20 }
		relation = { tag = ARG value = 10 }
		relation = { tag = AST value = 25 }
		relation = { tag = AUS value = 20 }
		relation = { tag = BEL value = 30 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 15 }
		relation = { tag = BUL value = -25 }
		relation = { tag = CAN value = 30 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 1 }
		relation = { tag = CHL value = 10 }
		relation = { tag = COL value = 20 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 30 }
		relation = { tag = DEN value = 30 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 15 }
		relation = { tag = EGY value = 15 }
		relation = { tag = ENG value = 65 }
		relation = { tag = EST value = 15 }
		relation = { tag = ETH value = 20 }
		relation = { tag = FIN value = 25 }
		relation = { tag = FRA value = 40 }
		relation = { tag = GER value = 45 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 30 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 25 }
		relation = { tag = IND value = 15 }
		relation = { tag = IRE value = 25 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = -5 }
		relation = { tag = JAP value = 20 }
		relation = { tag = LAT value = 15 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 15 }
		relation = { tag = LUX value = 20 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 10 }
		relation = { tag = MLY value = 15 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 30 }
		relation = { tag = NZL value = 30 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 10 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 30 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 5 }
		relation = { tag = POR value = 25 }
		relation = { tag = PRU value = 20 }
		relation = { tag = ROM value = 30 guaranteed = { day = 30 month = august year = 1934 } }
		relation = { tag = SAF value = 35 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 20 }
		relation = { tag = SIA value = 10 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 30 }
		relation = { tag = SPA value = 30 }
		relation = { tag = SPR value = 30 }
		relation = { tag = SWE value = 35 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = -15 guaranteed = { day = 30 month = august year = 1934 } }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 35 }
		relation = { tag = VEN value = 20 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = -10 guaranteed = { day = 30 month = august year = 1934 } }
	}

	SpyInfo = { country = "GRE" NumberOfSpies = 4 }
	SpyInfo = { country = "ALB" NumberOfSpies = 4 }
	SpyInfo = { country = "BUL" NumberOfSpies = 4 }
	SpyInfo = { country = "CAN" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 2 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "GER" NumberOfSpies = 1 }
	SpyInfo = { country = "ITA" NumberOfSpies = 2 }
	SpyInfo = { country = "ROM" NumberOfSpies = 1 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "TUR" NumberOfSpies = 4 }
	SpyInfo = { country = "YUG" NumberOfSpies = 2 }

  headofstate            = { type = 9 id = 18001 }
  headofgovernment       = { type = 9 id = 18002 }
  foreignminister        = { type = 9 id = 18003 }
  armamentminister       = { type = 9 id = 18004 }
  ministerofsecurity     = { type = 9 id = 18005 }
  ministerofintelligence = { type = 9 id = 18006 }
  chiefofstaff           = { type = 9 id = 18007 }
  chiefofarmy            = { type = 9 id = 18008 }
  chiefofnavy            = { type = 9 id = 18009 }
  chiefofair             = { type = 9 id = 18010 }

  nationalidentity = "policy_identity_defensive" 
  socialpolicy = "policy_social_religious" 
  nationalculture = "policy_culture_absolut"

  landunit =
  { id       = { type = 15500 id = 1 }
    location = 401
    name     = "1. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 100 }
      name     = "Geniko Epiteleio Stratou"
      strength = 100
      type     = hq
      extra    = anti_air
    }
    division =
    { id       = { type = 15500 id = 2 }
      name     = "2. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 3 }
      name     = "3. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 4 }
      name     = "4. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 15500 id = 5 }
    location = 403
    name     = "2. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 6 }
      name     = "1. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 7 }
      name     = "9. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 15500 id = 8 }
    location = 411
    name     = "3. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 9 }
      name     = "6. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 15500 id = 10 }
      name     = "10. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 11 }
      name     = "11. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 12 }
      name     = "17. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 15500 id = 13 }
    location = 403
    name     = "4. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 14 }
      name     = "7. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 15 }
      name     = "14. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      extra    = anti_tank
    }
  }
  landunit =
  { id       = { type = 15500 id = 16 }
    location = 392
    name     = "5. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 17 }
      name     = "12. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      extra    = b_u9
    }
    division =
    { id       = { type = 15500 id = 18 }
      name     = "13. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      extra    = b_u9
    }
  }
  landunit =
  { id       = { type = 15500 id = 19 }
    location = 396
    name     = "6. Stratos Ellenas"
    division =
    { id       = { type = 15500 id = 20 }
      name     = "5. Stratiotis Diairesi"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15500 id = 21 }
      name     = "8. Stratiotis Diairesi"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 15500 id = 22 }
      name     = "1. Ippiko Diairesi"
      strength = 100
      type     = cavalry
      extra    = artillery
    }
  }
  # #######################################################
  navalunit =
  { id       = { type = 15500 id = 23 }
    location = 401 #Athens
    base     = 401
    name     = "Basilikos Stolos Ellenas"
    division =
    { id    = { type = 15500 id = 26 }
      name  = "Georgios Averof"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 15500 id = 27 }
      name  = "Elli"
      type  = light_cruiser
      model = 0
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id       = { type = 15500 id = 28 }
      name     = "1. Torpilli Naftiko"
      strength = 100
      model    = 0
      type     = destroyer
    }
    division =
    { id       = { type = 15500 id = 30 }
      name     = "2. Torpilli Naftiko"
      strength = 100
      model    = 0
      type     = destroyer
    }
    division =
    { id       = { type = 15500 id = 29 }
      name     = "1. Ypobrychio Naftiko"
      strength = 100
      model    = 0
      type     = submarine
    }
    division =
    { id       = { type = 15500 id = 31 }
      name     = "2. Ypobrychio Naftiko"
      strength = 100
      model    = 0
      type     = submarine
    }
    division =
    { id   = { type = 15500 id = 24 }
      name = "1. Metafero Naftiko"
      type = transport
    }
    division =
    { id   = { type = 15500 id = 25 }
      name = "2. Metafero Naftiko"
      type = transport
    }
  } 

#########################################################################
# Airforce
#########################################################################

  airunit =
  { id       = { type = 15500 id = 32 }
    name = "I. Elliniki Polemiki Aeroporia"
    location = 401
    base     = 401
    division =
    { id       = { type = 15500 id = 33 }
      name = "1. Machitis Sygkrotima"
      strength = 60
      model    = 0
      type     = interceptor
    }
  }

#########################################################################
# Constructions
#########################################################################

	province_development = { 
		id = { type = 15500 id = 34 } 
		name = "" 
		progress = 0.0000 
		location = 401 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = july 
			day = 14 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2355 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 15500 id = 35 } 
		name = "" 
		progress = 0.0000 
		location = 403 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = october 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2355 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	brigade_development = { 
		id = { type = 15500 id = 36 } 
		name = "36' AA" 
		progress = 0.0000 
		location = 401 
		cost = 0.8000 
		date = { 
			year = 1936 
			month = august 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 36.0000 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 185 
		days_for_first = 95 
		gearing_bonus = 0.0000 
		type = naval_anti_air_s 
		model = 1 
		} 
	brigade_development = { 
		id = { type = 15500 id = 37 } 
		name = "18' Secondary Armament" 
		progress = 0.0000 
		location = 401 
		cost = 0.5000 
		date = { 
			year = 1936 
			month = may 
			day = 1 
			hour = 0 
			} 
		manpower = 0.2000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 36.0000 
		total_progress = 0.0000 
		size = 1 
		done = 0 
		days = 85 
		days_for_first = 85 
		gearing_bonus = 0.0000 
		type = naval_sa_l 
		model = 0 
		} 
}
