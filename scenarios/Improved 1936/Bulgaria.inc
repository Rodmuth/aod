#####################
# Country main data #
#####################

country =
{ tag                    = BUL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  consumer = 0.3455 
  supply = 0.1091 
  production = 0.5454 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 4.9000 # -140 event #150 - building queue -5 for HQ
  capital                = 417
  transports             = 20
  escorts                = 1

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 15 }
		relation = { tag = ARG value = 10 }
		relation = { tag = AST value = 10 }
		relation = { tag = AUS value = 20 }
		relation = { tag = BEL value = 25 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 20 }
		relation = { tag = CAN value = 10 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 10 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 15 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 25 }
		relation = { tag = DEN value = 20 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 15 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 15 }
		relation = { tag = EST value = 20 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 20 }
		relation = { tag = FRA value = 30 }
		relation = { tag = GER value = 45 }
		relation = { tag = GRE value = -25 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 20 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 20 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 10 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 25 }
		relation = { tag = JAP value = 20 }
		relation = { tag = LAT value = 20 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 20 }
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
		relation = { tag = POL value = 25 }
		relation = { tag = POR value = 20 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 15 }
		relation = { tag = SAF value = 10 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = -10 }
		relation = { tag = SPA value = 20 }
		relation = { tag = SPR value = 20 }
		relation = { tag = SWE value = 20 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = -25 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = -15 }
		relation = { tag = VEN value = 15 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 20 }
	}

	SpyInfo = { country = "BUL" NumberOfSpies = 6 }
	SpyInfo = { country = "ALB" NumberOfSpies = 1 }
	SpyInfo = { country = "CZE" NumberOfSpies = 2 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "GER" NumberOfSpies = 1 }
	SpyInfo = { country = "GRE" NumberOfSpies = 4 }
	SpyInfo = { country = "HUN" NumberOfSpies = 1 }
	SpyInfo = { country = "ITA" NumberOfSpies = 1 }
	SpyInfo = { country = "POR" NumberOfSpies = 1 }
	SpyInfo = { country = "ROM" NumberOfSpies = 4 }
	SpyInfo = { country = "SOV" NumberOfSpies = 2 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "TUR" NumberOfSpies = 2 }
	SpyInfo = { country = "YUG" NumberOfSpies = 2 }

  nationalprovinces      = { 419 420 422 421 417 416 413 414 412 410 423 411 }
  ownedprovinces         = { 419 420 422 421 417 416 }
  controlledprovinces    = { 419 420 422 421 417 416 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010  2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 6
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 9
  }
  headofstate            = { type = 9 id = 19001 }
  headofgovernment       = { type = 9 id = 19002 }
  foreignminister        = { type = 9 id = 19003 }
  armamentminister       = { type = 9 id = 19004 }
  ministerofsecurity     = { type = 9 id = 19005 }
  ministerofintelligence = { type = 9 id = 19006 }
  chiefofstaff           = { type = 9 id = 19007 }
  chiefofarmy            = { type = 9 id = 19008 }
  chiefofnavy            = { type = 9 id = 19009 }
  chiefofair             = { type = 9 id = 19010 }
  # Firepower
  landunit =
  { id       = { type = 19000 id = 1 }
    location = 417
    name     = "1-va Armija"
    division =
    { id       = { type = 19000 id = 100 }
      name     = "Bulgarian glavni štab"
      strength = 100
      type     = hq
      extra    = artillery
    }
    division =
    { id       = { type = 19000 id = 2 }
      name     = "1-va Sofiiska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 3 }
      name     = "7-ma Rilska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 4 }
      name     = "1-va Konna divizija"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 19000 id = 5 }
    location = 422
    name     = "2-ra Armija"
    division =
    { id       = { type = 19000 id = 6 }
      name     = "2-ra Trakiiska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 7 }
      name     = "8-a Tundzhanska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 8 }
      name     = "2-ra Konna divizija"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 19000 id = 9 }
    location = 421
    name     = "3-ta Armija"
    division =
    { id       = { type = 19000 id = 10 }
      name     = "3-ta Balkanska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 11 }
      name     = "4-ta Preslavska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 19000 id = 12 }
    location = 420
    name     = "4-ta Armija"
    division =
    { id       = { type = 19000 id = 13 }
      name     = "5-ta Dunavska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 14 }
      name     = "6-ta Bdinska pekhotna divizija"
      strength = 100
      type     = infantry
      model    = 0
    }
  } 

#########################################################################
# Airforce
#########################################################################

  airunit =
  { id       = { type = 19000 id = 15 }
    name = "Kralski Voenno Vyzdushni Sily"
    location = 417
    base     = 417
    division =
    { id       = { type = 19000 id = 16 }
      name = "Kralski Voenno Vyzdushni Sily"
      strength = 50
      model    = 0
      type     = interceptor
    }
  }

#########################################################################
# Constructions
#########################################################################

	province_development = { 
		id = { type = 19000 id = 17 } 
		name = "" 
		progress = 0.0000 
		location = 417 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = january 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2412 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
