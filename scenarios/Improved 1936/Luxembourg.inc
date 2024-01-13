##############################
# Country definition for LUX #
##############################

country =
{ tag                    = LUX
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.3234 
  supply = 0.0100 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 0
  capital                = 71

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 15 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 10 }
		relation = { tag = AUS value = 20 }
		relation = { tag = BEL value = 45 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 20 }
		relation = { tag = CAN value = 10 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 1 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 1 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 35 }
		relation = { tag = DEN value = 20 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 40 }
		relation = { tag = EST value = 20 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 20 }
		relation = { tag = FRA value = 75 }
		relation = { tag = GER value = 35 }
		relation = { tag = GRE value = 20 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 20 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 20 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 35 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 35 }
		relation = { tag = JAP value = 15 }
		relation = { tag = LAT value = 20 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 20 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 20 }
		relation = { tag = NZL value = 10 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 10 }
		relation = { tag = POR value = 20 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 20 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 20 }
		relation = { tag = SPA value = 20 }
		relation = { tag = SPR value = 20 }
		relation = { tag = SWE value = 20 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 15 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 35 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 20 }
	}

	SpyInfo = { country = "LUX" NumberOfSpies = 1 }
	SpyInfo = { country = "BEL" NumberOfSpies = 2 }
	SpyInfo = { country = "CZE" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 4 }
	SpyInfo = { country = "GER" NumberOfSpies = 4 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }

  nationalprovinces      = { 71 }
  ownedprovinces         = { 71 }
  controlledprovinces    = { 71 }
  # Western Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010   2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 14000 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    freedom           = 9
    free_market       = 8
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 66001 }
  headofgovernment       = { type = 9 id = 66002 }
  foreignminister        = { type = 9 id = 66003 }
  armamentminister       = { type = 9 id = 66004 }
  ministerofsecurity     = { type = 9 id = 66005 }
  ministerofintelligence = { type = 9 id = 66006 }
  chiefofstaff           = { type = 9 id = 66007 }
  chiefofarmy            = { type = 9 id = 66008 }
  chiefofnavy            = { type = 9 id = 66009 }
  chiefofair             = { type = 9 id = 66010 }
  landunit =
  { id       = { type = 27500 id = 1 }
    name     = "Luxembourger Schützen"
    location = 71
    division =
    { id       = { type = 27500 id = 2 }
      name     = "1. Landesschützen-Division"
      strength = 30
      type     = infantry
    }
  } 
	province_development = { 
		id = { type = 27500 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 71 
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
}
