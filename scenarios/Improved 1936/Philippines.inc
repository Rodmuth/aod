province =
{ id          = 1747
  supplypool  = 10
}               # Negros

province =
{ id          = 1750
  supplypool  = 10
}               # Davao

#####################
# Country main data #
#####################

country =
{ tag                    = PHI
  control                = USA
  puppet                 = USA
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 200
  oil                    = 200
  supplies               = 480
  money                  = 10
  consumer = 0.0000 
  supply = 0.0000 
  production = 1.0000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 0.0 # 0 - "building queue"
  transports             = 56
  capital                = 1737
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 5
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 1
  }
  nationalprovinces      = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  ownedprovinces         = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  controlledprovinces    = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 5080 5090 }
  blueprints             = { 6010 6020 }

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 35 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 20 }
		relation = { tag = CGX value = 10 }
		relation = { tag = CHC value = -10 }
		relation = { tag = CHI value = 20 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 1 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 45 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 35 }
		relation = { tag = GER value = 10 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 30 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 15 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 15 }
		relation = { tag = JAP value = 10 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 50 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 20 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 30 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 20 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 10 }
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
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 175 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "PHI" NumberOfSpies = 2 }
	SpyInfo = { country = "AST" NumberOfSpies = 2 }
	SpyInfo = { country = "CAN" NumberOfSpies = 1 }
	SpyInfo = { country = "CGX" NumberOfSpies = 2 }
	SpyInfo = { country = "CHI" NumberOfSpies = 2 }
	SpyInfo = { country = "CYN" NumberOfSpies = 1 }
	SpyInfo = { country = "HOL" NumberOfSpies = 1 }
	SpyInfo = { country = "IND" NumberOfSpies = 3 }
	SpyInfo = { country = "JAP" NumberOfSpies = 2 }
	SpyInfo = { country = "MLY" NumberOfSpies = 2 }
	SpyInfo = { country = "NZL" NumberOfSpies = 1 }
	SpyInfo = { country = "SAU" NumberOfSpies = 1 }
	SpyInfo = { country = "SIA" NumberOfSpies = 2 }
	SpyInfo = { country = "USA" NumberOfSpies = 2 }

  headofstate            = { type = 9 id = 50001 }
  headofgovernment       = { type = 9 id = 50002 }
  foreignminister        = { type = 9 id = 50003 }
  armamentminister       = { type = 9 id = 50004 }
  ministerofsecurity     = { type = 9 id = 50005 }
  ministerofintelligence = { type = 9 id = 50006 }
  chiefofstaff           = { type = 9 id = 50007 }
  chiefofarmy            = { type = 9 id = 50008 }
  chiefofnavy            = { type = 9 id = 50009 }
  chiefofair             = { type = 9 id = 50010 }
  landunit =
  { id       = { type = 11804 id = 1 }
    location = 1737
    name     = "Manila Garrison"
    division =
    { id       = { type = 11804 id = 2 }
      strength = 30
      name     = "Philippine Constabulary"
      type     = garrison
    }
  } 
	province_development = { 
		id = { type = 11804 id = 3 } 
		name = "" 
		progress = 0.0000 
		location = 1737 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = june 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2424 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	division_development = { 
		id = { type = 11804 id = 4 } 
		name = "11th Philipine Infantry Div." 
		progress = 0.0000 
		location = 1737 
		cost = 7.0000 
		date = { 
			year = 1956 
			month = october 
			day = 2 
			hour = 0 
			} 
		manpower = 10.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 80.0000 
		total_progress = 0.0000 
		size = 99 
		done = 0 
		days = 7393 
		days_for_first = 95 
		gearing_bonus = 0.0000 
		type = infantry 
		extra = none 
		extra1 = none 
		extra2 = none 
		extra3 = none 
		extra4 = none 
		model = 0 
		brigade_model = 0 
		brigade_model1 = 0 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	province_development = { 
		id = { type = 11804 id = 5 } 
		name = "" 
		progress = 0.0000 
		location = 1740 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = february 
			day = 5 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2424 
		days_for_first = 162 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11804 id = 6 } 
		name = "" 
		progress = 0.0000 
		location = 1748 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = july 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2760 
		days_for_first = 162 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11804 id = 7 } 
		name = "" 
		progress = 0.0000 
		location = 1739 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = september 
			day = 23 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2424 
		days_for_first = 108 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
