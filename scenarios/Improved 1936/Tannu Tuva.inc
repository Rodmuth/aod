##############################
# Country definition for TAN #
##############################

country =
{ tag                    = TAN
  puppet                 = SOV
  control                = SOV
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.1610 
  supply = 0.0390 
  production = 0.8000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1418
  manpower               = 0.9 # 1 - building queue
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1418 }
  ownedprovinces         = { 1418 }
  controlledprovinces    = { 1418 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 5080 }
  blueprints             = { 1020 6210 6300 2300 2310 }

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 1 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 1 }
		relation = { tag = CGX value = -25 }
		relation = { tag = CHC value = -30 }
		relation = { tag = CHI value = -25 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 1 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = -20 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = -15 }
		relation = { tag = EST value = -15 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = -15 }
		relation = { tag = FRA value = -15 }
		relation = { tag = GER value = -15 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 1 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = -15 }
		relation = { tag = JAP value = -20 }
		relation = { tag = LAT value = -15 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = -15 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = -20 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 50 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 1 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 1 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 35 }
		relation = { tag = SOV value = 175 }
		relation = { tag = SPA value = 5 }
		relation = { tag = SPR value = 15 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = -25 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "TAN" NumberOfSpies = 2 }
	SpyInfo = { country = "CHC" NumberOfSpies = 1 }
	SpyInfo = { country = "CHI" NumberOfSpies = 1 }
	SpyInfo = { country = "CXB" NumberOfSpies = 2 }
	SpyInfo = { country = "IND" NumberOfSpies = 1 }
	SpyInfo = { country = "MAN" NumberOfSpies = 2 }
	SpyInfo = { country = "MON" NumberOfSpies = 4 }
	SpyInfo = { country = "SIK" NumberOfSpies = 4 }
	SpyInfo = { country = "SOV" NumberOfSpies = 4 }

  headofstate            = { type = 9 id = 71001 }
  headofgovernment       = { type = 9 id = 71002 }
  foreignminister        = { type = 9 id = 71003 }
  armamentminister       = { type = 9 id = 71004 }
  ministerofsecurity     = { type = 9 id = 71005 }
  ministerofintelligence = { type = 9 id = 71006 }
  chiefofstaff           = { type = 9 id = 71007 }
  chiefofarmy            = { type = 9 id = 71008 }
  chiefofnavy            = { type = 9 id = 71009 }
  chiefofair             = { type = 9 id = 71010 }
  landunit =
  { location = 1418
    id       = { type = 31600 id = 1 }
    name     = "1ya Tunska Armiya"
    division =
    { id       = { type = 31600 id = 2 }
      name     = "1. Tuvanska Strelkovaya Diviziya"
      type     = infantry
      strength = 100
    }
  } 
	province_development = { 
		id = { type = 31600 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 1418 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = july 
			day = 7 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 34 
		done = 0 
		days = 3067 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
