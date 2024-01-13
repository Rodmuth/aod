##############################
# Country definition for NEP #
##############################

country =
{ tag                    = NEP
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 10
  consumer = 0.3286 
  supply = 0.1000 
  production = 0.5714 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1473
  manpower               = 6.9 # 7 - building queue
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 6
    free_market       = 5
    professional_army = 9
    defense_lobby     = 2
    interventionism   = 2
  }
  nationalprovinces      = { 1473 }
  ownedprovinces         = { 1473 }
  controlledprovinces    = { 1473 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 5080 1110 }
  blueprints             = { 1020 6010 6030 2300 }

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 50 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = -15 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 50 }
		relation = { tag = CGX value = -10 }
		relation = { tag = CHC value = -10 }
		relation = { tag = CHI value = -10 }
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
		relation = { tag = EGY value = 50 }
		relation = { tag = ENG value = 175 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 1 }
		relation = { tag = GER value = 10 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 50 }
		relation = { tag = IRE value = 1 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 1 }
		relation = { tag = JAP value = 1 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 50 }
		relation = { tag = MON value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 50 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 1 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 50 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 1 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = 1 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 1 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 20 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 25 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "NEP" NumberOfSpies = 1 }
	SpyInfo = { country = "BHU" NumberOfSpies = 4 }
	SpyInfo = { country = "CHI" NumberOfSpies = 1 }
	SpyInfo = { country = "CXB" NumberOfSpies = 1 }
	SpyInfo = { country = "CYN" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 2 }
	SpyInfo = { country = "IND" NumberOfSpies = 4 }
	SpyInfo = { country = "MLY" NumberOfSpies = 1 }
	SpyInfo = { country = "SIK" NumberOfSpies = 2 }
	SpyInfo = { country = "TIB" NumberOfSpies = 2 }

  headofstate            = { type = 9 id = 75001 }
  headofgovernment       = { type = 9 id = 75002 }
  foreignminister        = { type = 9 id = 75003 }
  armamentminister       = { type = 9 id = 75004 }
  ministerofsecurity     = { type = 9 id = 75005 }
  ministerofintelligence = { type = 9 id = 75006 }
  chiefofstaff           = { type = 9 id = 75007 }
  chiefofarmy            = { type = 9 id = 75008 }
  chiefofnavy            = { type = 9 id = 75009 }
  chiefofair             = { type = 9 id = 75010 }
  landunit =
  { location = 1473
    name     = "Royal Nepalese Army"
    id       = { type = 31500 id = 1 }
    division =
    { id   = { type = 31500 id = 2 }
      name = "Royal Nepalese Lifeguard Div."
      type = bergsjaeger
    }
    division =
    { id   = { type = 31500 id = 3 }
      name = "Royal Household Division"
      type = bergsjaeger
    }
  } 
	province_development = { 
		id = { type = 31500 id = 4 } 
		name = "" 
		progress = 0.0000 
		location = 1473 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = october 
			day = 4 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2654 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
