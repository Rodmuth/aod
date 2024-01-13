#####################
# Country main data #
#####################

country =
{ tag                    = DEN
  manpower               = 2.8500 # 3 - building queue
  capital                = 294
  transports             = 228
  escorts                = 4
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.4000 
  supply = 0.0667 
  production = 0.5333 
  reinforcement = 0.0000 
  upgrading = 0.0000 

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 15 }
		relation = { tag = ARG value = 10 }
		relation = { tag = AST value = 15 }
		relation = { tag = AUS value = 20 }
		relation = { tag = BEL value = 30 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 30 }
		relation = { tag = BUL value = 20 }
		relation = { tag = CAN value = 20 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 10 }
		relation = { tag = CHL value = 10 }
		relation = { tag = COL value = 15 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 35 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 15 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 50 }
		relation = { tag = EST value = 20 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 35 }
		relation = { tag = FRA value = 40 }
		relation = { tag = GER value = 45 }
		relation = { tag = GRE value = 30 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 30 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 20 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 35 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 30 }
		relation = { tag = JAP value = 20 }
		relation = { tag = LAT value = 20 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 20 }
		relation = { tag = LUX value = 20 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 15 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 40 }
		relation = { tag = NZL value = 20 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 20 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 35 }
		relation = { tag = POR value = 20 }
		relation = { tag = PRU value = 15 }
		relation = { tag = ROM value = 20 }
		relation = { tag = SAF value = 10 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 10 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 25 }
		relation = { tag = SPA value = 20 }
		relation = { tag = SPR value = 20 }
		relation = { tag = SWE value = 40 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 25 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 50 }
		relation = { tag = VEN value = 15 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 20 }
		relation = { tag = ICL value = 200 access = yes }
		relation = { tag = U28 value = 200 access = yes }
	}

	SpyInfo = { country = "DEN" NumberOfSpies = 2 }
	SpyInfo = { country = "CUB" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "EST" NumberOfSpies = 1 }
	SpyInfo = { country = "FIN" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "GER" NumberOfSpies = 2 }
	SpyInfo = { country = "HOL" NumberOfSpies = 1 }
	SpyInfo = { country = "LAT" NumberOfSpies = 1 }
	SpyInfo = { country = "LIT" NumberOfSpies = 1 }
	SpyInfo = { country = "NOR" NumberOfSpies = 2 }
	SpyInfo = { country = "POL" NumberOfSpies = 1 }
	SpyInfo = { country = "POR" NumberOfSpies = 1 }
	SpyInfo = { country = "SWE" NumberOfSpies = 2 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }

  nationalprovinces      = { 91 92 292 293 294 295 }
  ownedprovinces         = { 91 92 292 293 294 295 }
  controlledprovinces    = { 91 92 292 293 294 295 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2290 2300 2310 2450 2460 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190 5470 6010 6020 3010 3070
                             3130 3400 3410 8020 8040 8050
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    free_market       = 6
    freedom           = 8
    professional_army = 3
    defense_lobby     = 1
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 16001 }
  headofgovernment       = { type = 9 id = 16002 }
  foreignminister        = { type = 9 id = 16003 }
  armamentminister       = { type = 9 id = 16004 }
  ministerofsecurity     = { type = 9 id = 16005 }
  ministerofintelligence = { type = 9 id = 16006 }
  chiefofstaff           = { type = 9 id = 16007 }
  chiefofarmy            = { type = 9 id = 16008 }
  chiefofnavy            = { type = 9 id = 16009 }
  chiefofair             = { type = 9 id = 16010 }
  landunit =
  { location = 92
    name     = "Den Danske Hær"
    id       = { type = 27000 id = 40 }
    division =
    { id       = { type = 27000 id = 41 }
      name     = "1. Jydske Division"
      type     = infantry
      model    = 0
      strength = 15
    }
  }

#########################################################################
# Navy
#########################################################################

navalunit = {
	name = "Den Danske Flåde"
	id = { type = 27000 id = 3000 } 
	location = 294
	base = 294

	division = {
		id = { type = 27000 id = 3001 }
		name = "Niels Juel"
		type = heavy_cruiser 
		model = 0
		extra1 = naval_anti_air_l
		extra2 = naval_sa_l
		brigade_model1 = 0
		brigade_model2 = 0
	}
	division = {
		id = { type = 27000 id = 3002 }
		name = "Peder Skram"
		type = heavy_cruiser 
		model = 0
		extra1 = naval_anti_air_l
		extra2 = naval_sa_l
		brigade_model1 = 0
		brigade_model2 = 0
	}
	division = {
		id = { type = 27000 id = 3003 }
		name = "1. Destroyer Flotille"
		type = destroyer
		model = 0
		extra = naval_anti_air_s
		brigade_model = 0
	}
}

navalunit = {
	id = { type = 27000 id = 3004 }
	name = "1. Torpedobådsgruppe"
	location = 294 # Copenhagen
	base = 294

	division = {
		id = { type = 12019 id = 3005 }
		name = "1. Torpedobådsgruppe"
		type = destroyer
		strength = 50
		max_strength = 50
		model = 0
		extra = naval_anti_air_s
		brigade_model = 0
	}
}

navalunit = {
	id = { type = 27000 id = 3006 }
	name = "1. U-bådsgruppe"
	location = 294 # Copenhagen
	base = 294

	division = {
		id = { type = 12019 id = 3007 } 
		name = "1. U-bådsgruppe" # Daphne, Dryaden, Flora, Bellona & Rota
		type = submarine
		model = 0
	}
}

navalunit = {
	id = { type = 27000 id = 3008 }
	name = "2. U-bådsgruppe"
	location = 294
	base = 294 

	division = {
		id = { type = 12019 id = 3009 }
		name = "2. U-bådsgruppe" # Galathea, Triton & Ran
		type = submarine
		strength = 50
		max_strength = 50
		model = 0
	}
}

#########################################################################
# Airforce
#########################################################################

  airunit =
  { id       = { type = 27000 id = 47 }
    name = "Hærens Flyvertropper"
    location = 294
    base     = 294
    division =
    { id       = { type = 27000 id = 48 }
      name = "Hærens Flyvertropper" 
      strength = 50
      model    = 0
      type     = interceptor
    }
  }

#########################################################################
# Constructions
#########################################################################
	brigade_development = { 
		id = { type = 27000 id = 50 } 
		name = "Basic Sea Mines" 
		progress = 0.0000 
		location = 294 
		cost = 0.1920 
		date = { 
			year = 1936 
			month = may 
			day = 7 
			hour = 0 
			} 
		manpower = 0.0500 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 34.0000 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 94 
		days_for_first = 48 
		gearing_bonus = 0.0000 
		type = naval_mines 
		model = 0 
		} 
	province_development = { 
		id = { type = 27000 id = 49 } 
		name = "" 
		progress = 0.0000 
		location = 294 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = january 
			day = 3 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1880 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		speed_step = 2 
		type = infrastructure 
		} 
}
