#####################
# Country main data #
#####################

country =
{ tag                    = SAU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2066 
  supply = 0.0600 
  production = 0.7534 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1807
  manpower               = 26.8 # 27 - building queue
  transports             = 16
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 1821 1818 1809 1808 1807 1805 1804 }
  ownedprovinces         = { 1821 1818 1809 1808 1807 1805 1804 }
  controlledprovinces    = { 1821 1818 1809 1808 1807 1805 1804 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 5080 }

	diplomacy = {
		relation = { tag = AFG value = 20 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 20 }
		relation = { tag = AST value = 20 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 15 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 15 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 20 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 15 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 20 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 10 }
		relation = { tag = DEN value = 10 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 20 }
		relation = { tag = EGY value = 20 }
		relation = { tag = ENG value = 35 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 25 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 25 }
		relation = { tag = GER value = 20 }
		relation = { tag = GRE value = 20 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 25 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 10 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 10 }
		relation = { tag = IRQ value = 40 }
		relation = { tag = ITA value = 30 }
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
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 10 }
		relation = { tag = NZL value = 15 }
		relation = { tag = OMN value = 45 }
		relation = { tag = PAN value = 15 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 35 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 10 }
		relation = { tag = POR value = 15 }
		relation = { tag = PRU value = 20 }
		relation = { tag = ROM value = 20 }
		relation = { tag = SAF value = 10 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SIA value = 10 }
		relation = { tag = SIK value = 15 }
		relation = { tag = SOV value = 15 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = 1 }
		relation = { tag = SWE value = 15 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 25 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 50 }
		relation = { tag = VEN value = 20 }
		relation = { tag = YEM value = 35 }
		relation = { tag = YUG value = 10 }
	}

	SpyInfo = { country = "SAU" NumberOfSpies = 2 }
	SpyInfo = { country = "AFG" NumberOfSpies = 1 }
	SpyInfo = { country = "EGY" NumberOfSpies = 2 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "ETH" NumberOfSpies = 2 }
	SpyInfo = { country = "GER" NumberOfSpies = 1 }
	SpyInfo = { country = "IRQ" NumberOfSpies = 4 }
	SpyInfo = { country = "OMN" NumberOfSpies = 4 }
	SpyInfo = { country = "PER" NumberOfSpies = 2 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "TUR" NumberOfSpies = 2 }
	SpyInfo = { country = "YEM" NumberOfSpies = 4 }

  headofstate            = { type = 9 id = 63001 }
  headofgovernment       = { type = 9 id = 63002 }
  foreignminister        = { type = 9 id = 63003 }
  armamentminister       = { type = 9 id = 63004 }
  ministerofsecurity     = { type = 9 id = 63005 }
  ministerofintelligence = { type = 9 id = 63006 }
  chiefofstaff           = { type = 9 id = 63007 }
  chiefofarmy            = { type = 9 id = 63008 }
  chiefofnavy            = { type = 9 id = 63009 }
  chiefofair             = { type = 9 id = 63010 }
  landunit =
  { location = 1807
    name     = "Royal Saudi Army"
    id       = { type = 22600 id = 1 }
    division =
    { id   = { type = 22600 id = 2 }
      name = "1. Royal Saudi Inf.Div."
      type = infantry
    }
    division =
    { id   = { type = 22600 id = 3 }
      name = "Royal Lifeguard"
      type = militia
    }
    division =
    { id   = { type = 22600 id = 4 }
      name = "Royal Saudi Cav. 'Medina'"
      type = cavalry
    }
  } 
	province_development = { 
		id = { type = 22600 id = 200 } 
		name = "" 
		progress = 0.0000 
		location = 1821 
		cost = 2.0000 
		date = { 
			year = 1953 
			month = march 
			day = 18 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 27 
		done = 0 
		days = 2926 
		days_for_first = 285 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22600 id = 201 } 
		name = "" 
		progress = 0.0000 
		location = 1807 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = august 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 36 
		done = 0 
		days = 844 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
