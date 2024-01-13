#####################
# Country main data #
#####################

country =
{ tag                    = ECU
  # Resource Reserves
  energy                 = 143
  metal                  = 56
  rare_materials         = 55
  oil                    = 42
  supplies               = 97
  money                  = 6
  consumer = 0.3034 
  supply = 0.0300 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 815
  manpower               = 2.9 # 8 - building queue
  transports             = 16
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 814 815 817 818 }
  ownedprovinces         = { 814 815 817 818 }
  controlledprovinces    = { 814 815 817 818 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 20 }
		relation = { tag = AST value = 10 }
		relation = { tag = AUS value = 15 }
		relation = { tag = BEL value = 10 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 20 }
		relation = { tag = BRA value = 35 }
		relation = { tag = BUL value = 15 }
		relation = { tag = CAN value = 25 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 15 }
		relation = { tag = CHL value = 20 }
		relation = { tag = COL value = 20 }
		relation = { tag = COS value = 15 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 15 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 15 }
		relation = { tag = DEN value = 15 }
		relation = { tag = DOM value = 10 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 35 }
		relation = { tag = EST value = 10 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 15 }
		relation = { tag = FRA value = 35 }
		relation = { tag = GER value = 35 }
		relation = { tag = GRE value = 15 }
		relation = { tag = GUA value = 10 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 20 }
		relation = { tag = HON value = 10 }
		relation = { tag = HUN value = 10 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 20 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 30 }
		relation = { tag = JAP value = 30 }
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
		relation = { tag = NZL value = 20 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 10 }
		relation = { tag = PAR value = 20 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 10 }
		relation = { tag = POR value = 10 }
		relation = { tag = PRU value = -30 }
		relation = { tag = ROM value = 10 }
		relation = { tag = SAF value = 20 }
		relation = { tag = SAL value = 10 }
		relation = { tag = SAU value = 20 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 10 }
		relation = { tag = SPA value = 15 }
		relation = { tag = SPR value = 15 }
		relation = { tag = SWE value = 10 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 20 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 20 }
		relation = { tag = USA value = 65 }
		relation = { tag = VEN value = 20 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "ECU" NumberOfSpies = 2 }
	SpyInfo = { country = "BRA" NumberOfSpies = 1 }
	SpyInfo = { country = "CHL" NumberOfSpies = 1 }
	SpyInfo = { country = "COL" NumberOfSpies = 2 }
	SpyInfo = { country = "PRU" NumberOfSpies = 4 }
	SpyInfo = { country = "SPR" NumberOfSpies = 1 }
	SpyInfo = { country = "VEN" NumberOfSpies = 2 }

  headofstate            = { type = 9 id = 40001 }
  headofgovernment       = { type = 9 id = 40002 }
  foreignminister        = { type = 9 id = 40003 }
  armamentminister       = { type = 9 id = 40004 }
  ministerofsecurity     = { type = 9 id = 40005 }
  ministerofintelligence = { type = 9 id = 40006 }
  chiefofstaff           = { type = 9 id = 40007 }
  chiefofarmy            = { type = 9 id = 40008 }
  chiefofnavy            = { type = 9 id = 40009 }
  chiefofair             = { type = 9 id = 40010 }
  landunit =
  { id       = { type = 29000 id = 50 }
    name     = "Ejercito de Ecuador"
    location = 815
    division =
    { id       = { type = 29000 id = 5000 }
      name     = "1a Brigada de Infantería"
      strength = 100
      type     = infantry
      model    = 0
      extra    = anti_air
    }
  } 
	province_development = { 
		id = { type = 29000 id = 5001 } 
		name = "" 
		progress = 0.0000 
		location = 815 
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
		days = 2389 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
