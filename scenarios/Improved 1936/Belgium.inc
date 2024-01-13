##############################
# Country definition for BEL #
##############################

province =
{ id         = 1095
  oilpool    = 1
  supplypool = 50
}              # Banana

#####################
# Country main data #
#####################

country =
{ tag                    = BEL
  capital                = 51
  manpower               = 36.4000 # 40 - building queue
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  consumer = 0.2880 
  supply = 0.1060 
  production = 0.6060 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  transports             = 78

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 10 }
		relation = { tag = ARG value = 25 }
		relation = { tag = AST value = 30 }
		relation = { tag = AUS value = 30 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 20 }
		relation = { tag = BUL value = 25 }
		relation = { tag = CAN value = 35 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 25 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 10 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 10 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 35 }
		relation = { tag = DEN value = 30 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 10 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 45 }
		relation = { tag = EST value = 15 }
		relation = { tag = ETH value = 20 }
		relation = { tag = FIN value = 30 }
		relation = { tag = FRA value = 50 }
		relation = { tag = GER value = 30 }
		relation = { tag = GRE value = 30 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 45 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 20 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 25 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 25 }
		relation = { tag = JAP value = 25 }
		relation = { tag = LAT value = 15 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 15 }
		relation = { tag = LUX value = 45 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 20 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 20 }
		relation = { tag = NZL value = 30 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 20 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 30 }
		relation = { tag = POR value = 30 }
		relation = { tag = PRU value = 20 }
		relation = { tag = ROM value = 35 }
		relation = { tag = SAF value = 30 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 15 }
		relation = { tag = SIA value = 15 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 20 }
		relation = { tag = SPA value = 35 }
		relation = { tag = SPR value = 35 }
		relation = { tag = SWE value = 40 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 30 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 25 }
		relation = { tag = VEN value = 25 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 25 }
	}

	SpyInfo = { country = "BEL" NumberOfSpies = 2 }
	SpyInfo = { country = "CAN" NumberOfSpies = 1 }
	SpyInfo = { country = "EGY" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 4 }
	SpyInfo = { country = "GER" NumberOfSpies = 2 }
	SpyInfo = { country = "HOL" NumberOfSpies = 3 }
	SpyInfo = { country = "IRE" NumberOfSpies = 1 }
	SpyInfo = { country = "LUX" NumberOfSpies = 3 }
	SpyInfo = { country = "POR" NumberOfSpies = 1 }
	SpyInfo = { country = "SPR" NumberOfSpies = 1 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "TUR" NumberOfSpies = 1 }
	SpyInfo = { country = "IND" NumberOfSpies = 4 }

  nationalprovinces      = { 
		 45 50 51 52 65 68 69 70 
		 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 
		 }
  ownedprovinces         = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  controlledprovinces    = { 45 50 51 52 65 68 69 70 1095 1142 1071 1072 1073 1074 1143 1144 1127 1098 1063 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4020  4120     2010  2020  2290  2300  2310  2450  2460  2510  1010  1020  1310  1190  1200  1110  9010  5010 
                             5020  5080  5090  5190  6010  6020  14000
                           }
  blueprints             = { 2150 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 3
    free_market       = 9
    freedom           = 10
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 15001 }
  headofgovernment       = { type = 9 id = 15002 }
  foreignminister        = { type = 9 id = 15003 }
  armamentminister       = { type = 9 id = 15004 }
  ministerofsecurity     = { type = 9 id = 15005 }
  ministerofintelligence = { type = 9 id = 15006 }
  chiefofstaff           = { type = 9 id = 15007 }
  chiefofarmy            = { type = 9 id = 15008 }
  chiefofnavy            = { type = 9 id = 15009 }
  chiefofair             = { type = 9 id = 15010 }

#ARMY OOB

landunit = {
	id = { type = 11500 id = 1000 }
	name = "GHQ"
	location = 51 # Brussels

	division = {
		id = { type = 11500 id = 1001 }
		name = "GHQ"
		type = hq
		model = 0
		strength = 60
		extra = artillery
		brigade_model = 0
	}
}

landunit = {
	id = { type = 11500 id = 1002 }
	location = 50 # Antwerp (Tongeren)
	name = "I Corps"

	division = {
		id = { type = 11500 id = 1003 }
		name = "4ème Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = artillery
		brigade_model = 1
	}
	division = {
		id = { type = 11500 id = 1004 }
		name = "7ème Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = engineer
		brigade_model = 0
	}
}

landunit = {
	id = { type = 11500 id = 1005 }
	location = 50 # Antwerp (Aarschot)
	name = "II Corps"
	division = {
		id = { type = 11500 id = 1006 }
		name = "6ème Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = artillery
		brigade_model = 1
	}

	division = {
		id = { type = 11500 id = 1007 }
		name = "9ème Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = engineer
		brigade_model = 0
	}

	division = {
		id = { type = 11500 id = 1008 }
		name = "11ème Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = b_u9
		brigade_model = 0
	}
}

landunit = {
	id = { type = 11500 id = 1009 }
	location = 68 # Liége
	name = "III Corps"

	division = {
		id = { type = 11500 id = 1010 }
		name = "2ème Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = artillery
		brigade_model = 1
	}

	division = {
		id = { type = 11500 id = 1011 }
		name = "3ème Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = b_u9
		brigade_model = 0
	}
}

landunit = {
	id = { type = 11500 id = 1012 }
	location = 50 # Antwerp (Lier)
	name = "IV Corps"

	division = {
		id = { type = 11500 id = 1013 }
		name = "12ème Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = artillery
			brigade_model = 0
	}
}

landunit = {
	id = { type = 11500 id = 1014 }
	location = 51 # Brussels
	name = "VI Corps"

	division = {
		id = { type = 11500 id = 1015 }
		name = "5ème Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = anti_air
		brigade_model = 0
	}

	division = {
		id = { type = 11500 id = 1016 }
		name = "10ème Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = engineer
		brigade_model = 0
	}
}

landunit = {
	id = { type = 11500 id = 1017 }
	location = 65 # Namur
	name = "VII Corps"

	division = {
		id = { type = 11500 id = 1018 }
		name = "8ème Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = anti_air
		brigade_model = 0
	}

	division = {
		id = { type = 11500 id = 1019 }
		name = "2ème Chasseurs Ardennais"
		type = bergsjaeger
		model = 0
		strength = 60
		extra = b_u9
		brigade_model = 0
	}
}

landunit = {
	id = { type = 11500 id = 1020 }
	location = 50 # Antwerp (Sint-Truiden)
	name = "Cavalerie Corps"

	division = {
		id = { type = 11500 id = 1021 }
		name = "1ère Division d'Infanterie"
		type = infantry
		model = 0
		strength = 60
		extra = b_u9
		brigade_model = 0
	}

	division = {
		id = { type = 11500 id = 1022 }
		name = "2ème Division d' Cavalerie"
		type = cavalry
		model = 0
		strength = 60
		extra = b_u9
		brigade_model = 0
	}
}

landunit = {
	id = { type = 11500 id = 1023 }
	location = 70 # Arlon (Saint-Hubert)
	name = "Groupement K"

	division = {
		id = { type = 11500 id = 1024 }
		name = "1ère Division d' Cavalerie"
		type = cavalry
		model = 0
		strength = 60
	}

	division = {
		id = { type = 11500 id = 1025 }
		name = "1ère Chasseurs Ardennais"
		type = bergsjaeger
		model = 0
		strength = 60
	}
}

landunit = {
	id = { type = 11500 id = 1026 }
	name = "P.F. de Anvers"
	location = 50 # Antwerp

	division = {
		id = { type = 11500 id = 1027 }
		name = "P.F. de Anvers"
		type = garrison
		model = 0
	}
}

landunit = {
	id = { type = 11500 id = 1028 }
	name = "P.F. de Liége"
	location = 68 # Liége

	division = {
		id = { type = 11500 id = 1029 }
		name = "P.F. de Liége I"
		type = garrison
		model = 0
		extra = artillery
		brigade_model = 1
	}

	division = {
		id = { type = 11500 id = 1030 }
		name = "P.F. de Liége II"
		type = garrison
		model = 0
		extra = artillery
		brigade_model = 1
	}
}

landunit = {
	id = { type = 11500 id = 1031 }
	name = "P.F. de Namur"
	location = 65 # Namur

	division = {
		id = { type = 11500 id = 1032 }
		name = "P.F. de Namur"
		type = garrison
		model = 0
		extra = artillery
		brigade_model = 1
	}
}

landunit = {
	id = { type = 11500 id = 1033 }
	location = 1095 # Banana
	name = "Garde Royale Coloniale"

	division = {
		id = { type = 11500 id = 1034 }
		name = "1ère Garde Coloniale"
		type = garrison
		model = 0
		strength = 30
		max_strength = 30
	}
}

#NAVAL OOB

  navalunit =
  { id       = { type = 11500 id = 23 }
    location = 45
    base     = 45
    name     = "1ste Transportatie Smaldeel"
    division =
    { id   = { type = 11500 id = 24 }
      name = "1ère Transporte Naval"
      type = transport
    }
    division =
    { id   = { type = 11500 id = 25 }
      name = "2de Smaldeel"
      type = transport
    }
  } 

#########################################################################
# Airforce
#########################################################################

  airunit =
  { id       = { type = 11500 id = 33 }
    name = "Aéronautique Militaire"
    location = 51
    base     = 51
    division =
    { id       = { type = 11500 id = 34 }
      name = "Aéronautique Militaire"
      strength = 60
      model    = 0
      type     = interceptor
    }
  }

#########################################################################
# Constructions
#########################################################################

	province_development = { 
		id = { type = 11500 id = 27 } 
		name = "" 
		progress = 0.0000 
		location = 51 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = august 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1657 
		days_for_first = 101 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11500 id = 31 } 
		name = "" 
		progress = 0.0000 
		location = 51 
		cost = 5.0000 
		date = { 
			year = 1937 
			month = september 
			day = 4 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 28123 
		days_for_first = 302 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 11500 id = 32 } 
		name = "" 
		progress = 0.0000 
		location = 50 
		cost = 5.0000 
		date = { 
			year = 1937 
			month = september 
			day = 4 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 605 
		days_for_first = 302 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 11500 id = 36 } 
		name = "" 
		progress = 0.0000 
		location = 50 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = april 
			day = 4 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1657 
		days_for_first = 101 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11500 id = 30 } 
		name = "" 
		progress = 0.0000 
		location = 1127 
		cost = 5.0000 
		date = { 
			year = 2019 
			month = january 
			day = 18 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 99 
		done = 0 
		days = 29938 
		days_for_first = 302 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 11500 id = 28 } 
		name = "" 
		progress = 0.0000 
		location = 1127 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = april 
			day = 15 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2620 
		days_for_first = 101 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11500 id = 29 } 
		name = "" 
		progress = 0.0000 
		location = 65 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = august 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1657 
		days_for_first = 101 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11500 id = 35 } 
		name = "" 
		progress = 0.0000 
		location = 68 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = august 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1657 
		days_for_first = 101 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11500 id = 37 } 
		name = "" 
		progress = 0.0000 
		location = 52 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = august 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1657 
		days_for_first = 101 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
