#####################
# Country main data #
#####################

country =
{ tag                    = BOL
  manpower               = 2.8 # 8 - building queue
  # Resource Reserves
  energy                 = 142
  metal                  = 72
  rare_materials         = 330
  oil                    = 12
  supplies               = 232
  money                  = 8
  transports		 = 10
  consumer = 0.2186 
  supply = 0.0757 
  production = 0.7057 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 832

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = -15 }
		relation = { tag = AST value = 1 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BRA value = -15 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 1 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 1 }
		relation = { tag = CHL value = 30 }
		relation = { tag = COL value = 20 }
		relation = { tag = COS value = 10 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 10 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 20 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 15 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 15 }
		relation = { tag = GER value = 15 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 10 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 10 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 10 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 15 }
		relation = { tag = JAP value = 15 }
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
		relation = { tag = NZL value = 1 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 10 }
		relation = { tag = PAR value = -25 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 1 }
		relation = { tag = PRU value = -30 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 10 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 5 }
		relation = { tag = SPA value = 15 }
		relation = { tag = SPR value = 15 }
		relation = { tag = SWE value = 10 }
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

	SpyInfo = { country = "BOL" NumberOfSpies = 4 }
	SpyInfo = { country = "ARG" NumberOfSpies = 1 }
	SpyInfo = { country = "BRA" NumberOfSpies = 1 }
	SpyInfo = { country = "CHL" NumberOfSpies = 3 }
	SpyInfo = { country = "PAR" NumberOfSpies = 2 }
	SpyInfo = { country = "PRU" NumberOfSpies = 3 }

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 7
    professional_army = 7
    defense_lobby     = 8
    interventionism   = 5
  }
  nationalprovinces      = { 836 833 838 832 828 827 837 822 839 }
  ownedprovinces         = { 836 833 838 832 828 827 }
  controlledprovinces    = { 836 833 838 832 828 827 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6210 6300 }

  headofstate            = { type = 9 id = 43001 }
  headofgovernment       = { type = 9 id = 43002 }
  foreignminister        = { type = 9 id = 43003 }
  armamentminister       = { type = 9 id = 43004 }
  ministerofsecurity     = { type = 9 id = 43005 }
  ministerofintelligence = { type = 9 id = 43006 }
  chiefofstaff           = { type = 9 id = 43007 }
  chiefofarmy            = { type = 9 id = 43008 }
  chiefofnavy            = { type = 9 id = 43009 }
  chiefofair             = { type = 9 id = 43010 }
  # Human Wave
  landunit =
  { id       = { type = 17000 id = 40 }
    name     = "Ejercito de Bolivia"
    location = 832
    division =
    { id       = { type = 17000 id = 4000 }
      name     = "1. Brigada de Infantería 'Bolivar'"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 17000 id = 4001 }
      name     = "1. Brigada de Milicia de Bolivia"
      strength = 100
      type     = militia
      model    = 0
    }
    division =
    { id       = { type = 17000 id = 4002 }
      name     = "2. Brigada de Milicia de Bolivia"
      strength = 100
      type     = militia
      model    = 0
    }
    division =
    { id       = { type = 17000 id = 4003 }
      name     = "1. Brigada de Caballería 'Chaco'"
      strength = 100
      type     = cavalry
      model    = 0
    }
  } 
	province_development = { 
		id = { type = 17000 id = 2 } 
		name = "" 
		progress = 0.0000 
		location = 832 
		cost = 2.0000 
		date = { 
			year = 1949 
			month = february 
			day = 23 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 1895 
		days_for_first = 205 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 17000 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 838 
		cost = 2.0000 
		date = { 
			year = 1954 
			month = march 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2161 
		days_for_first = 205 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
