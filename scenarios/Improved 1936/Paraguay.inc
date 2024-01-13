#####################
# Country main data #
#####################

country =
{ tag                    = PAR
  # Resource Reserves
  energy                 = 72
  metal                  = 67
  rare_materials         = 34
  oil                    = 12
  supplies               = 82
  money                  = 4
  transports		 = 16
  consumer = 0.2917 
  supply = 0.0417 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 837
  manpower               = 0.9 # 5 - building queue
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  nationalprovinces      = { 837 846 }
  ownedprovinces         = { 837 846 }
  controlledprovinces    = { 837 846 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = -15 }
		relation = { tag = AST value = 1 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = -25 }
		relation = { tag = BRA value = -15 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 10 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 1 }
		relation = { tag = CHL value = 20 }
		relation = { tag = COL value = 20 }
		relation = { tag = COS value = 10 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 10 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 10 }
		relation = { tag = ECU value = 20 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 10 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 15 }
		relation = { tag = GER value = 30 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 10 }
		relation = { tag = HAI value = 10 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 10 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 10 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 25 }
		relation = { tag = JAP value = 15 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 10 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 10 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 1 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 10 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 1 }
		relation = { tag = PRU value = 20 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 10 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 10 }
		relation = { tag = SPA value = 15 }
		relation = { tag = SPR value = 15 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 20 }
		relation = { tag = USA value = 25 }
		relation = { tag = VEN value = 20 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "PAR" NumberOfSpies = 4 }
	SpyInfo = { country = "ARG" NumberOfSpies = 2 }
	SpyInfo = { country = "BOL" NumberOfSpies = 4 }
	SpyInfo = { country = "BRA" NumberOfSpies = 2 }
	SpyInfo = { country = "CHL" NumberOfSpies = 2 }
	SpyInfo = { country = "PRU" NumberOfSpies = 4 }
	SpyInfo = { country = "URU" NumberOfSpies = 1 }

  headofstate            = { type = 9 id = 42001 }
  headofgovernment       = { type = 9 id = 42002 }
  foreignminister        = { type = 9 id = 42003 }
  armamentminister       = { type = 9 id = 42004 }
  ministerofsecurity     = { type = 9 id = 42005 }
  ministerofintelligence = { type = 9 id = 42006 }
  chiefofstaff           = { type = 9 id = 42007 }
  chiefofarmy            = { type = 9 id = 42008 }
  chiefofnavy            = { type = 9 id = 42009 }
  chiefofair             = { type = 9 id = 42010 }
  landunit =
  { id       = { type = 15600 id = 60 }
    name     = "Ejercito de Paraguay"
    location = 837
    division =
    { id       = { type = 15600 id = 6000 }
      name     = "I División de Infantería"
      strength = 50
      type     = infantry
      extra    = b_u9
    }
  } 
	province_development = { 
		id = { type = 15600 id = 61 } 
		name = "" 
		progress = 0.0000 
		location = 846 
		cost = 2.0000 
		date = { 
			year = 1949 
			month = august 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 38 
		done = 0 
		days = 3249 
		days_for_first = 159 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
