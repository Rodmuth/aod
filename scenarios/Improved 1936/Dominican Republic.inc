#####################
# Country main data #
#####################

country =
{ tag                    = DOM
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.3167 
  supply = 0.0167 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 1.9 # 8 - building queue
  capital                = 894
  transports             = 16
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 893 894 }
  ownedprovinces         = { 893 894 }
  controlledprovinces    = { 893 894 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 1 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 25 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 10 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 1 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 1 }
		relation = { tag = COS value = 20 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 30 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = ECU value = 10 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 25 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 15 }
		relation = { tag = GER value = 15 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 20 }
		relation = { tag = HAI value = -25 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 20 }
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
		relation = { tag = MEX value = 20 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 20 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 1 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 20 }
		relation = { tag = PAR value = 10 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 1 }
		relation = { tag = PRU value = 10 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 20 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 10 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = 1 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 10 }
		relation = { tag = USA value = 75 }
		relation = { tag = VEN value = 10 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "DOM" NumberOfSpies = 1 }
	SpyInfo = { country = "CUB" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "HAI" NumberOfSpies = 4 }
	SpyInfo = { country = "HOL" NumberOfSpies = 1 }

  headofstate            = { type = 9 id = 49001 }
  headofgovernment       = { type = 9 id = 49002 }
  foreignminister        = { type = 9 id = 49003 }
  armamentminister       = { type = 9 id = 49004 }
  ministerofsecurity     = { type = 9 id = 49005 }
  ministerofintelligence = { type = 9 id = 49006 }
  chiefofstaff           = { type = 9 id = 49007 }
  chiefofarmy            = { type = 9 id = 49008 }
  chiefofnavy            = { type = 9 id = 49009 }
  chiefofair             = { type = 9 id = 49010 }
  landunit =
  { id       = { type = 28000 id = 75 }
    name     = "Ejercito de Rep. Dominicana"
    location = 894
    division =
    { id       = { type = 28000 id = 7500 }
      name     = "I Brigada de Infantería"
      strength = 50
      type     = infantry
      model    = 0
      extra    = anti_air
    }
  } 
	province_development = { 
		id = { type = 28000 id = 7501 } 
		name = "" 
		progress = 0.0000 
		location = 894 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = august 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2270 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
