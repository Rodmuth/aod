#####################
# Country main data #
#####################

country =
{ tag                    = IRE
  manpower               = 24.9 # 30 - building queue -5 for HQ
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2500 
  supply = 0.0334 
  production = 0.6666 
  reinforcement = 0.0500 
  upgrading = 0.0000 
  capital                = 30
  transports             = 40

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 5 }
		relation = { tag = ARG value = 15 }
		relation = { tag = AST value = 40 }
		relation = { tag = AUS value = 25 }
		relation = { tag = BEL value = 25 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 10 }
		relation = { tag = BRA value = 20 }
		relation = { tag = BUL value = 10 }
		relation = { tag = CAN value = 40 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 1 }
		relation = { tag = CHL value = 10 }
		relation = { tag = COL value = 20 }
		relation = { tag = COS value = 5 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 15 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 35 }
		relation = { tag = DEN value = 35 }
		relation = { tag = DOM value = 10 }
		relation = { tag = ECU value = 20 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 50 }
		relation = { tag = EST value = 15 }
		relation = { tag = ETH value = 35 }
		relation = { tag = FIN value = 35 }
		relation = { tag = FRA value = 40 }
		relation = { tag = GER value = 30 }
		relation = { tag = GRE value = 25 }
		relation = { tag = GUA value = 10 }
		relation = { tag = HAI value = 10 }
		relation = { tag = HOL value = 40 }
		relation = { tag = HON value = 10 }
		relation = { tag = HUN value = 20 }
		relation = { tag = IND value = 15 }
		relation = { tag = IRQ value = 15 }
		relation = { tag = ITA value = 30 }
		relation = { tag = JAP value = 20 }
		relation = { tag = LAT value = 15 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 15 }
		relation = { tag = LUX value = 35 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 35 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 10 }
		relation = { tag = NOR value = 30 }
		relation = { tag = NZL value = 40 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 10 }
		relation = { tag = PAR value = 10 }
		relation = { tag = PER value = 25 }
		relation = { tag = PHI value = 15 }
		relation = { tag = POL value = 15 }
		relation = { tag = POR value = 35 }
		relation = { tag = PRU value = 30 }
		relation = { tag = ROM value = 30 }
		relation = { tag = SAF value = 40 }
		relation = { tag = SAL value = 10 }
		relation = { tag = SAU value = 10 }
		relation = { tag = SIA value = 10 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 25 }
		relation = { tag = SPA value = 25 }
		relation = { tag = SPR value = 35 }
		relation = { tag = SWE value = 40 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 20 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 75 }
		relation = { tag = VEN value = 30 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 20 }
	}

	SpyInfo = { country = "IRE" NumberOfSpies = 2 }
	SpyInfo = { country = "ARG" NumberOfSpies = 1 }
	SpyInfo = { country = "AST" NumberOfSpies = 1 }
	SpyInfo = { country = "CAN" NumberOfSpies = 2 }
	SpyInfo = { country = "EGY" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 4 }
	SpyInfo = { country = "FIN" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 4 }
	SpyInfo = { country = "GER" NumberOfSpies = 2 }
	SpyInfo = { country = "IND" NumberOfSpies = 1 }
	SpyInfo = { country = "MEX" NumberOfSpies = 1 }
	SpyInfo = { country = "MLY" NumberOfSpies = 1 }
	SpyInfo = { country = "NZL" NumberOfSpies = 1 }
	SpyInfo = { country = "POR" NumberOfSpies = 1 }
	SpyInfo = { country = "SAF" NumberOfSpies = 1 }
	SpyInfo = { country = "SPR" NumberOfSpies = 2 }
	SpyInfo = { country = "SWE" NumberOfSpies = 1 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "USA" NumberOfSpies = 1 }

  nationalprovinces      = { 27 26 25 24 30 29 28 }
  ownedprovinces         = { 27 26 25 24 30 }
  controlledprovinces    = { 27 26 25 24 30 }
  # Western Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010  2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    freedom           = 8
    free_market       = 7
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 25001 }
  headofgovernment       = { type = 9 id = 25002 }
  foreignminister        = { type = 9 id = 25003 }
  armamentminister       = { type = 9 id = 25004 }
  ministerofsecurity     = { type = 9 id = 25005 }
  ministerofintelligence = { type = 9 id = 25006 }
  chiefofstaff           = { type = 9 id = 25007 }
  chiefofarmy            = { type = 9 id = 25008 }
  chiefofnavy            = { type = 9 id = 25009 }
  chiefofair             = { type = 9 id = 25010 }
  # Firepower
  landunit =
  { id       = { type = 21500 id = 1 }
    name     = "Regiment of Rifle"
    location = 30
    division =
    { id           = { type = 21500 id = 2 }
      name         = "1st Irish Army"
      strength     = 100
      type         = hq
    }
    division =
    { id           = { type = 21500 id = 3 }
      name         = "1/2/3/4/5 Rifle Battalions"
      strength     = 50
      type         = infantry
    }
  }
  navalunit =
  { id       = { type = 21500 id = 4 }
    name     = "Irish Republic Navy"
    location = 30
    base     = 30
    division =
    { id    = { type = 21500 id = 5 }
      name  = "1st Transport Flotilla"
      type  = transport
      model = 0
    }
  } 

#########################################################################
# Airforce
#########################################################################

  airunit =
  { id       = { type = 21500 id = 6 }
    name = "Irish Air Force"
    location = 30
    base     = 30
    division =
    { id       = { type = 21500 id = 7 }
      name = "1st Fighter Wing" 
      strength = 30
      model    = 0
      type     = interceptor
    }
  }

#########################################################################
# Constructions
#########################################################################

	province_development = { 
		id = { type = 21500 id = 8 } 
		name = "" 
		progress = 0.0000 
		location = 30 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = may 
			day = 21 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1531 
		days_for_first = 141 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
