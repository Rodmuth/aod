#####################
# Country main data #
#####################

country =
{ tag                    = COL
  # Resource Reserves
  energy                 = 384
  metal                  = 357
  rare_materials         = 142
  oil                    = 360
  supplies               = 445
  money                  = 20
  consumer = 0.3300 
  supply = 0.0327 
  production = 0.6373 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 7.8 # 28 - building queue
  capital                = 813
  transports             = 16
  escorts                = 1

	diplomacy= {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 25 }
		relation = { tag = AST value = 10 }
		relation = { tag = AUS value = 15 }
		relation = { tag = BEL value = 10 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 20 }
		relation = { tag = BRA value = 25 }
		relation = { tag = BUL value = 15 }
		relation = { tag = CAN value = 15 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 15 }
		relation = { tag = CHL value = 20 }
		relation = { tag = COS value = 10 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 10 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 15 }
		relation = { tag = DEN value = 15 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 20 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 40 }
		relation = { tag = EST value = 10 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 20 }
		relation = { tag = FRA value = 40 }
		relation = { tag = GER value = 15 }
		relation = { tag = GRE value = 20 }
		relation = { tag = GUA value = 10 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 20 }
		relation = { tag = HON value = 10 }
		relation = { tag = HUN value = 10 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 20 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 25 }
		relation = { tag = JAP value = 25 }
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
		relation = { tag = PAN value = -30 }
		relation = { tag = PAR value = 20 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 10 }
		relation = { tag = POR value = 10 }
		relation = { tag = PRU value = -10 }
		relation = { tag = ROM value = 10 }
		relation = { tag = SAF value = 20 }
		relation = { tag = SAL value = 10 }
		relation = { tag = SAU value = 20 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 10 }
		relation = { tag = SPA value = 15 }
		relation = { tag = SPR value = 15 }
		relation = { tag = SWE value = 10 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 15 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 20 }
		relation = { tag = USA value = 50 }
		relation = { tag = VEN value = -10 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "COL" NumberOfSpies = 2 }
	SpyInfo = { country = "BRA" NumberOfSpies = 2 }
	SpyInfo = { country = "COS" NumberOfSpies = 1 }
	SpyInfo = { country = "CUB" NumberOfSpies = 1 }
	SpyInfo = { country = "DOM" NumberOfSpies = 1 }
	SpyInfo = { country = "ECU" NumberOfSpies = 2 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "HAI" NumberOfSpies = 1 }
	SpyInfo = { country = "HOL" NumberOfSpies = 1 }
	SpyInfo = { country = "PAN" NumberOfSpies = 4 }
	SpyInfo = { country = "PRU" NumberOfSpies = 4 }
	SpyInfo = { country = "VEN" NumberOfSpies = 4 }

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    free_market       = 8
    freedom           = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 803 812 813 890 867 819 868 }
  ownedprovinces         = { 803 812 813 890 867 819 868 }
  controlledprovinces    = { 803 812 813 890 867 819 868 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = {  2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6210 6300 3010 8050 }

  headofstate            = { type = 9 id = 37001 }
  headofgovernment       = { type = 9 id = 37002 }
  foreignminister        = { type = 9 id = 37003 }
  armamentminister       = { type = 9 id = 37004 }
  ministerofsecurity     = { type = 9 id = 37005 }
  ministerofintelligence = { type = 9 id = 37006 }
  chiefofstaff           = { type = 9 id = 37007 }
  chiefofarmy            = { type = 9 id = 37008 }
  chiefofnavy            = { type = 9 id = 37009 }
  chiefofair             = { type = 9 id = 37010 }
  landunit =
  { id       = { type = 23000 id = 1 }
    name     = "Ejercito de Colombia"
    location = 813
    division =
    { id       = { type = 23000 id = 2 }
      name     = "1a División"
      strength = 25
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 23000 id = 3 }
      name     = "2a División"
      strength = 25
      type     = infantry
      model    = 0
      extra    = b_u9
    }
    division =
    { id       = { type = 23000 id = 4 }
      name     = "3a División"
      strength = 25
      type     = infantry
      model    = 0
      extra    = engineer
    }
  }
  navalunit =
  { id       = { type = 23000 id = 5 }
    name     = "Armada de Colombia"
    location = 803
    base     = 803
    division =
    { id    = { type = 23000 id = 6 }
      name  = "1a Flotilla de Torpedillos"
      type  = destroyer
      model = 0
    }
  } 
	province_development = { 
		id = { type = 23000 id = 7 } 
		name = "" 
		progress = 0.0000 
		location = 813 
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
		id = { type = 23000 id = 8 } 
		name = "36' AA" 
		progress = 0.0000 
		location = 813 
		cost = 0.7040 
		date = { 
			year = 1936 
			month = may 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 36.0000 
		total_progress = 0.0000 
		size = 1 
		done = 0 
		days = 84 
		days_for_first = 84 
		gearing_bonus = 0.0000 
		type = naval_anti_air_s 
		model = 1 
		} 
	province_development = { 
		id = { type = 23000 id = 9 } 
		name = "" 
		progress = 0.0000 
		location = 803 
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

}