#####################
# Country main data #
#####################

country =
{ tag                    = LAT
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 197
  manpower               = 19.9 # 20 - building queue
  consumer = 0.2222 
  supply = 0.0888 
  production = 0.6890 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  transports             = 32
  escorts                = 3

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
		relation = { tag = GER value = 50 }
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
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 50 guaranteed = { day = 12 month = september year = 1934 } }
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
		relation = { tag = POL value = 20 }
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
		relation = { tag = YUG value = 20 }
	}

	SpyInfo = { country = "LAT" NumberOfSpies = 3 }
	SpyInfo = { country = "DEN" NumberOfSpies = 1 }
	SpyInfo = { country = "EST" NumberOfSpies = 4 }
	SpyInfo = { country = "FIN" NumberOfSpies = 2 }
	SpyInfo = { country = "GER" NumberOfSpies = 1 }
	SpyInfo = { country = "LIT" NumberOfSpies = 4 }
	SpyInfo = { country = "POL" NumberOfSpies = 4 }
	SpyInfo = { country = "SOV" NumberOfSpies = 4 }
	SpyInfo = { country = "SWE" NumberOfSpies = 2 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }

  nationalprovinces      = { 205 204 203 197 202 198 }
  ownedprovinces         = { 205 204 203 197 202 198 }
  controlledprovinces    = { 205 204 203 197 202 198 }
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = {  2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 6010 3400 8040 }
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
  headofstate            = { type = 9 id = 27001 }
  headofgovernment       = { type = 9 id = 27002 }
  foreignminister        = { type = 9 id = 27003 }
  armamentminister       = { type = 9 id = 27004 }
  ministerofsecurity     = { type = 9 id = 27005 }
  ministerofintelligence = { type = 9 id = 27006 }
  chiefofstaff           = { type = 9 id = 27007 }
  chiefofarmy            = { type = 9 id = 27008 }
  chiefofnavy            = { type = 9 id = 27009 }
  chiefofair             = { type = 9 id = 27010 }
  landunit =
  { id       = { type = 24500 id = 1 }
    location = 197
    name     = "Latvijas Armija"
    division =
    { id       = { type = 24500 id = 2 }
      name     = "Kurzemes Divizija"
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 24500 id = 3 }
      name     = "Vidzemes Divizija"
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 24500 id = 4 }
      name     = "Zemgales Divizija"
      extra    = artillery
      type     = infantry
      strength = 100
    }
    division =
    { id       = { type = 24500 id = 5 }
      name     = "Latgales Divizija"
      type     = infantry
      strength = 100
    }
  }
  navalunit =
  { id       = { type = 24500 id = 6 }
    location = 197
    base     = 197
    name     = "Latvijas Juras Speki"
    division =
    { id       = { type = 24500 id = 7 }
      name     = "1. Zemudens flotile"
      type     = submarine
      model    = 0
      strength = 40
    }
  } 

#########################################################################
# Airforce
#########################################################################

  airunit =
  { id       = { type = 24500 id = 8 }
    name = "II. Vzdusné Síly Armády"
    location = 197
    base     = 197
    division =
    { id       = { type = 24500 id = 9 }
      name     = "2. stihaci letecky pluk"
      strength = 30
      model    = 0
      type     = interceptor
    }
  }

#########################################################################
# Constructions
#########################################################################

	province_development = { 
		id = { type = 24500 id = 10 } 
		name = "" 
		progress = 0.0000 
		location = 197 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = june 
			day = 26 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2220 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
