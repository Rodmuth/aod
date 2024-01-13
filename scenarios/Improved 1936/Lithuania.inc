#####################
# Country main data #
#####################

country =
{ tag                    = LIT
  capital                = 207
  manpower               = 27.9 # 28 - building queue
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2390 
  supply = 0.0610 
  production = 0.7000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  transports             = 36
  escorts                = 1

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 15 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 10 }
		relation = { tag = AUS value = 20 }
		relation = { tag = BEL value = 15 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 20 }
		relation = { tag = CAN value = 10 }
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
		relation = { tag = CZE value = 20 }
		relation = { tag = DEN value = 20 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 20 }
		relation = { tag = EST value = 50 guaranteed = { day = 12 month = september year = 1934 } }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 40 }
		relation = { tag = FRA value = 20 }
		relation = { tag = GER value = 30 }
		relation = { tag = GRE value = 15 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 20 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 25 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 15 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 25 }
		relation = { tag = JAP value = 15 }
		relation = { tag = LAT value = 50 guaranteed = { day = 12 month = september year = 1934 } }
		relation = { tag = LIB value = 1 }
		relation = { tag = LUX value = 20 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 30 }
		relation = { tag = NZL value = 10 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = -25 }
		relation = { tag = POR value = 20 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 30 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = -25 }
		relation = { tag = SPA value = 20 }
		relation = { tag = SPR value = 20 }
		relation = { tag = SWE value = 40 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = -15 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 15 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 15 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "LIT" NumberOfSpies = 3 }
	SpyInfo = { country = "DEN" NumberOfSpies = 1 }
	SpyInfo = { country = "EST" NumberOfSpies = 4 }
	SpyInfo = { country = "FIN" NumberOfSpies = 2 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "GER" NumberOfSpies = 2 }
	SpyInfo = { country = "LAT" NumberOfSpies = 4 }
	SpyInfo = { country = "POL" NumberOfSpies = 6 }
	SpyInfo = { country = "SOV" NumberOfSpies = 4 }
	SpyInfo = { country = "SWE" NumberOfSpies = 1 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }

  nationalprovinces      = { 206 207 511 208 209 577 }
  ownedprovinces         = { 206 207 511 577 }
  controlledprovinces    = { 206 207 511 577 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = {  2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    freedom           = 5
    free_market       = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 28001 }
  headofgovernment       = { type = 9 id = 28002 }
  foreignminister        = { type = 9 id = 28003 }
  armamentminister       = { type = 9 id = 28004 }
  ministerofsecurity     = { type = 9 id = 28005 }
  ministerofintelligence = { type = 9 id = 28006 }
  chiefofstaff           = { type = 9 id = 28007 }
  chiefofarmy            = { type = 9 id = 28008 }
  chiefofnavy            = { type = 9 id = 28009 }
  chiefofair             = { type = 9 id = 28010 }

  nationalidentity = "policy_identity_parochial" 
  socialpolicy = "policy_social_militaristic" 
  nationalculture = "policy_culture_conformist"

  # Firepower
  # ###########################################
  # ###Lithuanian Army#########################
  # ###########################################
  landunit =
  { id       = { type = 26500 id = 1 }
    location = 207
    name     = "1. Lietuvas Kariuomenes Korpusas"
    division =
    { id       = { type = 26500 id = 2 }
      name     = "I Pestininkai Brigata"
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 26500 id = 3 }
      name     = "II Pestininkai Brigata"
      type     = infantry
      extra    = artillery
      strength = 100
    }
    division =
    { id       = { type = 26500 id = 4 }
      name     = "III Pestininkai Brigata"
      type     = infantry
      strength = 100
    }
  }
  navalunit =
  { id       = { type = 26500 id = 7 }
    name     = "Lietuvas Navinkas Juru"
    location = 206
    base     = 206
    division =
    { id    = { type = 26500 id = 8 }
      name  = "1. Transportavimas"
      type  = transport
      model = 0
    }
  }
  airunit =
  { id       = { type = 26500 id = 5 }
    location = 207
    base     = 207
    name     = "Lietuvas Karines Oro Pajegos"
    division =
    { id       = { type = 26500 id = 6 }
      name     = "1. Naikintuvas Aviacijos Grupo"
      type     = interceptor
      model    = 0
      strength = 45
    }
  } 
	province_development = { 
		id = { type = 26500 id = 9 } 
		name = "" 
		progress = 0.0000 
		location = 207 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = july 
			day = 14 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2579 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
