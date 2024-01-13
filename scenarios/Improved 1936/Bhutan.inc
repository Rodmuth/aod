##############################
# Country definition for BHU #
##############################

country =
{ tag                    = BHU
  manpower               = 4.9 # 5 - building queue
  control                = ENG
  puppet                 = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 10
  transports		 = 16
  consumer = 0.2750 
  supply = 0.0875 
  production = 0.6375 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1455

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 50 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 50 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 5 }
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
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 175 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 1 }
		relation = { tag = GER value = 1 }
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
		relation = { tag = NEP value = -15 }
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
		relation = { tag = TIB value = 40 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 5 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "BHU" NumberOfSpies = 1 }
	SpyInfo = { country = "CHI" NumberOfSpies = 1 }
	SpyInfo = { country = "CYN" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "IND" NumberOfSpies = 2 }
	SpyInfo = { country = "NEP" NumberOfSpies = 3 }
	SpyInfo = { country = "TIB" NumberOfSpies = 2 }

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 8
    freedom           = 9
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  nationalprovinces      = { 1455 }
  ownedprovinces         = { 1455 }
  controlledprovinces    = { 1455 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 5080 1110 }
  blueprints             = { 1020 6010 6030 2300 }

  headofstate            = { type = 9 id = 74001 }
  headofgovernment       = { type = 9 id = 74002 }
  foreignminister        = { type = 9 id = 74003 }
  armamentminister       = { type = 9 id = 74004 }
  ministerofsecurity     = { type = 9 id = 74005 }
  ministerofintelligence = { type = 9 id = 74006 }
  chiefofstaff           = { type = 9 id = 74007 }
  chiefofarmy            = { type = 9 id = 74008 }
  chiefofnavy            = { type = 9 id = 74009 }
  chiefofair             = { type = 9 id = 74010 }
  landunit =
  { location = 1455
    id       = { type = 16000 id = 1 }
    name     = "Royal Bhutanese Army"
    division =
    { id       = { type = 16000 id = 2 }
      name     = "Household Division"
      type     = bergsjaeger
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 16000 id = 3 }
      name     = "Royal Division"
      type     = bergsjaeger
      model    = 0
      strength = 100
    }
  } 
	province_development = { 
		id = { type = 16000 id = 4 } 
		name = "" 
		progress = 0.0000 
		location = 1455 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = august 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2370 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
