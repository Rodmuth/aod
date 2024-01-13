#####################
# Country main data #
#####################

country =
{ tag                    = VEN
  # Resource Reserves
  energy                 = 342
  metal                  = 267
  rare_materials         = 125
  oil                    = 3936
  supplies               = 303
  money                  = 30
  free                   = { energy = 15 oil = -30 }
  #oil inefficiently used for electricity
  consumer = 0.2000 
  supply = 0.0500 
  production = 0.7500 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 811
  manpower               = 2.7 # 12 - building queue
  transports             = 28
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 1
    freedom           = 5
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 804 802 810 811 869 870 871 }
  ownedprovinces         = { 804 802 810 811 869 870 }
  controlledprovinces    = { 804 802 810 811 869 870 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = {  2290 2300 2310 2400 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 6010 }

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 20 }
		relation = { tag = AST value = 25 }
		relation = { tag = AUS value = 15 }
		relation = { tag = BEL value = 25 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 20 }
		relation = { tag = BRA value = 25 }
		relation = { tag = BUL value = 15 }
		relation = { tag = CAN value = 40 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 30 }
		relation = { tag = CHL value = 20 }
		relation = { tag = COL value = -10 }
		relation = { tag = COS value = 15 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 15 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 30 }
		relation = { tag = DEN value = 15 }
		relation = { tag = DOM value = 10 }
		relation = { tag = ECU value = 20 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 65 }
		relation = { tag = EST value = 10 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 20 }
		relation = { tag = FRA value = 25 }
		relation = { tag = GER value = 25 }
		relation = { tag = GRE value = 20 }
		relation = { tag = GUA value = 10 }
		relation = { tag = HAI value = 10 }
		relation = { tag = HOL value = 25 }
		relation = { tag = HON value = 10 }
		relation = { tag = HUN value = 10 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 30 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 35 }
		relation = { tag = JAP value = 35 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 20 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 10 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 25 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 10 }
		relation = { tag = PAR value = 20 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 30 }
		relation = { tag = POR value = 10 }
		relation = { tag = PRU value = 20 }
		relation = { tag = ROM value = 10 }
		relation = { tag = SAF value = 30 }
		relation = { tag = SAL value = 10 }
		relation = { tag = SAU value = 20 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 15 }
		relation = { tag = SPA value = 15 }
		relation = { tag = SPR value = 15 }
		relation = { tag = SWE value = 20 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 20 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 20 }
		relation = { tag = USA value = 75 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "VEN" NumberOfSpies = 4 }
	SpyInfo = { country = "ARG" NumberOfSpies = 1 }
	SpyInfo = { country = "BRA" NumberOfSpies = 4 }
	SpyInfo = { country = "CAN" NumberOfSpies = 1 }
	SpyInfo = { country = "COL" NumberOfSpies = 4 }
	SpyInfo = { country = "CUB" NumberOfSpies = 1 }
	SpyInfo = { country = "ECU" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 2 }
	SpyInfo = { country = "HOL" NumberOfSpies = 2 }
	SpyInfo = { country = "MEX" NumberOfSpies = 2 }
	SpyInfo = { country = "PAN" NumberOfSpies = 2 }
	SpyInfo = { country = "PER" NumberOfSpies = 2 }
	SpyInfo = { country = "SPR" NumberOfSpies = 1 }
	SpyInfo = { country = "USA" NumberOfSpies = 1 }

  headofstate            = { type = 9 id = 38001 }
  headofgovernment       = { type = 9 id = 38002 }
  foreignminister        = { type = 9 id = 38003 }
  armamentminister       = { type = 9 id = 38004 }
  ministerofsecurity     = { type = 9 id = 38005 }
  ministerofintelligence = { type = 9 id = 38006 }
  chiefofstaff           = { type = 9 id = 38007 }
  chiefofarmy            = { type = 9 id = 38008 }
  chiefofnavy            = { type = 9 id = 38009 }
  chiefofair             = { type = 9 id = 38010 }
  # Firepower
  # Rather wild estimations
  landunit =
  { id       = { type = 15800 id = 1 }
    name     = "Ejercito de Venezuela"
    location = 811
    division =
    { id       = { type = 15800 id = 2 }
      name     = "1a Div. de Inf. 'Eduardo Blanco'"
      extra    = anti_tank
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15800 id = 3 }
      name     = "1a División de Guardia Naciónal"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 15800 id = 4 }
      name     = "Los Caballos de Venezuela"
      strength = 100
      type     = cavalry
      extra    = artillery
    }
  } 

#########################################################################
# Navy
#########################################################################

navalunit = {
	id = { type = 15800 id = 5 }
	name = "Armada Bolivariana de Venezuela"
	location = 804
	base = 804

	division = { 
		id = { type = 15800 id = 6 }
		name = "Mariscal Sucre"
		type = light_cruiser
		strength = 50
		max_strength = 50
		model = 0
		}
	}

	province_development = { 
		id = { type = 15800 id = 7 } 
		name = "" 
		progress = 0.0000 
		location = 804 
		cost = 2.0000 
		date = { 
			year = 1956 
			month = may 
			day = 16 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2373 
		days_for_first = 262 
		gearing_bonus = 0.0000
 		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 15800 id = 8 } 
		name = "" 
		progress = 0.0000 
		location = 802 
		cost = 2.0000 
		date = { 
			year = 1956 
			month = may 
			day = 16 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2373 
		days_for_first = 262 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 15800 id = 9 } 
		name = "" 
		progress = 0.0000 
		location = 811 
		cost = 2.0000 
		date = { 
			year = 1956 
			month = may 
			day = 16 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2373 
		days_for_first = 262 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
