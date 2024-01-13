#####################
# Country main data #
#####################

country =
{ tag                    = SAL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2667 
  supply = 0.0133 
  production = 0.7200 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 1.9 # 5 - building queue
  capital                = 759
  transports             = 16
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 759 }
  ownedprovinces         = { 759 }
  controlledprovinces    = { 759 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 6010 }

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 10 }
		relation = { tag = AST value = 10 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 10 }
		relation = { tag = BRA value = 15 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 10 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 1 }
		relation = { tag = CHL value = 10 }
		relation = { tag = COL value = 10 }
		relation = { tag = COS value = 20 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 20 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 20 }
		relation = { tag = ECU value = 10 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 30 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 20 }
		relation = { tag = GER value = 15 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 20 }
		relation = { tag = HAI value = 20 }
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
		relation = { tag = MEX value = 30 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 20 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 10 }
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
		relation = { tag = URU value = 10 }
		relation = { tag = USA value = 45 }
		relation = { tag = VEN value = 10 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "SAL" NumberOfSpies = 2 }
	SpyInfo = { country = "COS" NumberOfSpies = 1 }
	SpyInfo = { country = "GUA" NumberOfSpies = 4 }
	SpyInfo = { country = "HON" NumberOfSpies = 4 }
	SpyInfo = { country = "MEX" NumberOfSpies = 1 }
	SpyInfo = { country = "NIC" NumberOfSpies = 1 }

  headofstate            = { type = 9 id = 77001 }
  headofgovernment       = { type = 9 id = 77002 }
  foreignminister        = { type = 9 id = 77003 }
  armamentminister       = { type = 9 id = 77004 }
  ministerofsecurity     = { type = 9 id = 77005 }
  ministerofintelligence = { type = 9 id = 77006 }
  chiefofstaff           = { type = 9 id = 77007 }
  chiefofarmy            = { type = 9 id = 77008 }
  chiefofnavy            = { type = 9 id = 77009 }
  chiefofair             = { type = 9 id = 77010 }
  landunit =
  { id       = { type = 21600 id = 70 }
    name     = "Ejercito del Salvador"
    location = 759
    division =
    { id       = { type = 21600 id = 7000 }
      name     = "I Brigada de Infantería"
      strength = 40
      type     = infantry
      extra    = anti_air
    }
  } 
	province_development = { 
		id = { type = 21600 id = 71 } 
		name = "" 
		progress = 0.0000 
		location = 759 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = august 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2737 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
