#####################
# Country main data #
#####################

country =
{ tag                    = MON
  puppet                 = SOV
  control                = SOV
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 500
  money                  = 10
  consumer = 0.2000 
  supply = 0.0880 
  production = 0.7120 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 6.9 # 7 - building queue
  capital                = 1404

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 1 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 1 }
		relation = { tag = CGX value = -25 }
		relation = { tag = CHC value = -25 }
		relation = { tag = CHI value = -25 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 1 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = -25 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = -30 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = -15 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = -15 }
		relation = { tag = GER value = -15 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 1 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = -15 }
		relation = { tag = JAP value = -20 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = -30 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 1 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 1 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 25 }
		relation = { tag = SOV value = 150 }
		relation = { tag = SPA value = 10 }
		relation = { tag = SPR value = 10 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 1 }
		relation = { tag = TAN value = 50 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = -15 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "MON" NumberOfSpies = 2 }
	SpyInfo = { country = "CHC" NumberOfSpies = 1 }
	SpyInfo = { country = "CHI" NumberOfSpies = 2 }
	SpyInfo = { country = "CSX" NumberOfSpies = 4 }
	SpyInfo = { country = "CXB" NumberOfSpies = 4 }
	SpyInfo = { country = "MAN" NumberOfSpies = 4 }
	SpyInfo = { country = "SIK" NumberOfSpies = 2 }
	SpyInfo = { country = "SOV" NumberOfSpies = 4 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "TAN" NumberOfSpies = 4 }	
	
  nationalprovinces      = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  ownedprovinces         = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  controlledprovinces    = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 5080 }
  blueprints             = { 1020 6210 6300 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 7
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 94001 }
  headofgovernment       = { type = 9 id = 94002 }
  foreignminister        = { type = 9 id = 94003 }
  armamentminister       = { type = 9 id = 94004 }
  ministerofsecurity     = { type = 9 id = 94005 }
  ministerofintelligence = { type = 9 id = 94006 }
  chiefofstaff           = { type = 9 id = 94007 }
  chiefofarmy            = { type = 9 id = 94008 }
  chiefofnavy            = { type = 9 id = 94009 }
  chiefofair             = { type = 9 id = 94010 }
  landunit =
  { location = 1404
    name     = "Armija Mongol Nayramdakh"
    id       = { type = 30500 id = 1 }
    division =
    { id    = { type = 30500 id = 2 }
      name  = "1. Mongol Strelkovaya Div."
      type  = infantry
      extra = b_u9
    }
    division =
    { id   = { type = 30500 id = 3 }
      name = "1. Nayramdakh Kavaleriyskaya Div."
      type = cavalry
      extra = b_u9
    }
    division =
    { id   = { type = 30500 id = 4 }
      name = "2. Nayramdakh Kavaleriyskaya Div."
      type = cavalry
      extra = b_u9
    }
    division =
    { id   = { type = 30500 id = 5 }
      name = "3. Nayramdakh Kavaleriyskaya Div."
      type = cavalry
      extra = b_u9
    }
    division =
    { id   = { type = 30500 id = 6 }
      name = "1. Nayramdakh Opolcheniya Div."
      type = militia
      extra = b_u9
    }
    division =
    { id   = { type = 30500 id = 7 }
      name = "2. Nayramdakh Opolcheniya Div."
      type = militia
      extra = b_u9
    }
    division =
    { id   = { type = 30500 id = 8 }
      name = "3. Nayramdakh Opolcheniya Div."
      type = militia
      extra = b_u9
    }
  } 
	province_development = { 
		id = { type = 30500 id = 9 } 
		name = "" 
		progress = 0.0000 
		location = 1404 
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
		size = 32 
		done = 0 
		days = 3362 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
