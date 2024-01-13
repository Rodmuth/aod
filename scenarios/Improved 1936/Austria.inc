#####################
# Country main data #
#####################

country =
{ tag                    = AUS
  # HACK to make sure that Germany gets the whole manpower pool, all units and resources on annex.
  # Unwanted side-effect: Will never accept peace with Germany.
  regular_id             = GER
  intrinsic_gov_type     = social_liberal
  manpower               = 174.6000  # 175 - building queue
  capital                = 463
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2584 
  supply = 0.2000 
  production = 0.4166 
  reinforcement = 0.1250 
  upgrading = 0.0000 

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = -15 }
		relation = { tag = ARG value = 15 }
		relation = { tag = AST value = 10 }
		relation = { tag = BEL value = 30 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 15 }
		relation = { tag = BUL value = 20 }
		relation = { tag = CAN value = 10 }
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
		relation = { tag = DEN value = 20 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 15 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 30 }
		relation = { tag = EST value = 20 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 20 }
		relation = { tag = FRA value = 35 }
		relation = { tag = GER value = 65 }
		relation = { tag = GRE value = 20 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 20 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 40 guaranteed = { day = 17 month = march year = 1934 } }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 25 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 75 }
		relation = { tag = JAP value = 25 }
		relation = { tag = LAT value = 20 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 20 }
		relation = { tag = LUX value = 20 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 15 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 20 }
		relation = { tag = NZL value = 10 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 10 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 30 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 25 }
		relation = { tag = POR value = 20 }
		relation = { tag = PRU value = 15 }
		relation = { tag = ROM value = 30 }
		relation = { tag = SAF value = 20 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 10 }
		relation = { tag = SPA value = 30 }
		relation = { tag = SPR value = 20 }
		relation = { tag = SWE value = 30 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 10 }
		relation = { tag = TUR value = 25 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 5 }
		relation = { tag = VEN value = 15 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = -20 }
	}

	SpyInfo = { country = "AUS" NumberOfSpies = 4 }
	SpyInfo = { country = "CZE" NumberOfSpies = 2 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "GER" NumberOfSpies = 3 }
	SpyInfo = { country = "HUN" NumberOfSpies = 2 }
	SpyInfo = { country = "ITA" NumberOfSpies = 2 }
	SpyInfo = { country = "ROM" NumberOfSpies = 1 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "YUG" NumberOfSpies = 3 }

  nationalprovinces      = { 373 377 460 461 462 463 464 465 467 371 }
  ownedprovinces         = { 373 377 460 461 462 463 464 465 }
  controlledprovinces    = { 373 377 460 461 462 463 464 465 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4020  4120     2010  2020  2290  2300  2310  2450  2460  2510  1010  1190  1110  1310  9010  5010  5020  5080 
                             5090  5190  6010  6020  14000
                           }
  blueprints             = { 2150 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    free_market       = 8
    freedom           = 7
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 23001 }
  headofgovernment       = { type = 9 id = 23002 }
  foreignminister        = { type = 9 id = 23003 }
  armamentminister       = { type = 9 id = 23004 }
  ministerofsecurity     = { type = 9 id = 23005 }
  ministerofintelligence = { type = 9 id = 23006 }
  chiefofstaff           = { type = 9 id = 23007 }
  chiefofarmy            = { type = 9 id = 23008 }
  chiefofnavy            = { type = 9 id = 23009 }
  chiefofair             = { type = 9 id = 23010 }

  nationalidentity = "policy_identity_parochial" 
  socialpolicy = "policy_social_militaristic" 
  nationalculture = "policy_culture_conformist"

  landunit =
  { id       = { type = 14000 id = 9000 }
    location = 463
    name     = "I. Korps"
    division =
    { id       = { type = 14000 id = 9015 }
      name     = "HQ des Generalstabs"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 14000 id = 9001 }
      name     = "1. Kavallerie-Division"
      type     = cavalry
      model    = 0
      strength = 70
    }
    division =
    { id       = { type = 14000 id = 9002 }
      name     = "1. Infanterie-Division"
      type     = infantry
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 14000 id = 9003 }
      name     = "2. Infanterie-Division"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 14000 id = 9004 }
      name     = "3. Infanterie-Division"
      type     = infantry
      extra    = artillery
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9005 }
    location = 463
    name     = "II. Korps"
    division =
    { id       = { type = 14000 id = 9006 }
      name     = "4. Infanterie-Division"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9007 }
    location = 463
    name     = "III. Korps"
    division =
    { id       = { type = 14000 id = 9009 }
      name     = "5. Infanterie-Division"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9008 }
    location = 463
    name     = "IV. Korps"
    division =
    { id       = { type = 14000 id = 9011 }
      name     = "6. Infanterie-Division"
      type     = infantry
      extra    = engineer
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9010 }
    location = 463
    name     = "V. Korps"
    division =
    { id       = { type = 14000 id = 9012 }
      name     = "7. Infanterie-Division"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9013 }
    location = 463
    name     = "VI. Korps"
    division =
    { id       = { type = 14000 id = 9014 }
      name     = "1. Alpenjäger-Division"
      type     = bergsjaeger
      strength = 30
      model    = 0
    }
  } 

#########################################################################
# Airforce
#########################################################################

  airunit =
  { id       = { type = 14000 id = 9016 }
    name = "Fliegerkorps"
    location = 463
    base     = 463
    division =
    { id       = { type = 14000 id = 9017 }
      name = "1. Fliegerregiment"
      strength = 60
      model    = 0
      type     = interceptor
    }
  }

#########################################################################
# Constructions
#########################################################################

	province_development = { 
		id = { type = 14000 id = 202 } 
		name = "" 
		progress = 0.0000 
		location = 460 
		cost = 2.0000 
		date = { 
			year = 1938 
			month = october 
			day = 16 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1649 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		speed_step = 2 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14000 id = 203 } 
		name = "" 
		progress = 0.0000 
		location = 463 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = november 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1649 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14000 id = 204 } 
		name = "" 
		progress = 0.0000 
		location = 461 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = october 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1969 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 14000 id = 205 } 
		name = "" 
		progress = 0.0000 
		location = 464 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = july 
			day = 23 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1649 
		days_for_first = 100 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
