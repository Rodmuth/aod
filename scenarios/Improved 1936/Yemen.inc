##############################
# Country definition for YEM #
##############################

country =
{ tag                    = YEM

  energy                 = 200
  metal                  = 200
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 10
  transports		 = 16
  consumer = 0.3134 
  supply = 0.0200 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 4.9 # 5 - building queue
  capital                = 1812
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 1
    defense_lobby     = 2
    interventionism   = 1
  }
  nationalprovinces      = { 1812 1813 1814 1815 }
  ownedprovinces         = { 1812 }
  controlledprovinces    = { 1812 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 5080 }

	diplomacy = {
		relation = { tag = AFG value = 20 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 50 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 50 }
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
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 65 }
		relation = { tag = ENG value = 175 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 20 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 50 }
		relation = { tag = GER value = 15 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 50 }
		relation = { tag = IRE value = 1 }
		relation = { tag = IRQ value = 65 }
		relation = { tag = ITA value = 1 }
		relation = { tag = JAP value = 1 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 50 }
		relation = { tag = OMN value = 65 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 20 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 1 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 50 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 35 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 1 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = 1 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 1 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 20 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 15 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "YEM" NumberOfSpies = 1 }
	SpyInfo = { country = "AFG" NumberOfSpies = 1 }
	SpyInfo = { country = "EGY" NumberOfSpies = 2 }
	SpyInfo = { country = "ENG" NumberOfSpies = 2 }
	SpyInfo = { country = "IND" NumberOfSpies = 1 }
	SpyInfo = { country = "IRQ" NumberOfSpies = 2 }
	SpyInfo = { country = "MLY" NumberOfSpies = 1 }
	SpyInfo = { country = "OMN" NumberOfSpies = 4 }
	SpyInfo = { country = "PER" NumberOfSpies = 2 }
	SpyInfo = { country = "SAU" NumberOfSpies = 4 }

  headofstate            = { type = 9 id = 93001 }
  headofgovernment       = { type = 9 id = 93002 }
  foreignminister        = { type = 9 id = 93003 }
  armamentminister       = { type = 9 id = 93004 }
  ministerofsecurity     = { type = 9 id = 93005 }
  ministerofintelligence = { type = 9 id = 93006 }
  chiefofstaff           = { type = 9 id = 93007 }
  chiefofarmy            = { type = 9 id = 93008 }
  chiefofnavy            = { type = 9 id = 93009 }
  chiefofair             = { type = 9 id = 93010 }
  landunit =
  { id       = { type = 16800 id = 1 }
    name     = "Royal Yemenite Army"
    location = 1812
    division =
    { id           = { type = 16800 id = 2 }
      name         = "Royal Division"
      type         = cavalry
      strength     = 15
      #max_strength = 15
    }
  } 
	province_development = { 
		id = { type = 16800 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 1812 
		cost = 2.0000 
		date = { 
			year = 1948 
			month = may 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2974 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
