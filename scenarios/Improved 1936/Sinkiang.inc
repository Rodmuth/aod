##############################
# Country definition for SIK #
##############################

country =
{ tag                    = SIK
  # Resource Reserves
  control                = SOV
  puppet                 = SOV
  energy                 = 64
  metal                  = 36
  rare_materials         = 18
  oil                    = 12
  supplies               = 8
  money                  = 5
  consumer = 0.0000 
  supply = 0.0000 
  production = 1.0000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1433 # Urumqi
  manpower               = 199.9 # 200 - building queue
  dissent                = 30
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1421 1432 1433 1435 1445 1446 1447 1430 1431 }
  ownedprovinces         = { 1435 1445 1447 1421 1432 1433 1446 1430 1431 }
  controlledprovinces    = { 1421 1432 1433 1446 1430 1431 1445 1447 1435 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 5080 }
  blueprints             = { 6210 }

	diplomacy = {
		relation = { tag = AFG value = 10 }
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
		relation = { tag = CGX value = 15 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 40 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 1 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 25 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = -50 }
		relation = { tag = CYN value = 1 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 20 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 20 }
		relation = { tag = GER value = 5 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = -15 }
		relation = { tag = IRE value = 1 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 15 }
		relation = { tag = JAP value = -15 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = -20 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 25 }
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
		relation = { tag = SAU value = 15 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SOV value = 75 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = 1 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 1 }
		relation = { tag = TAN value = 35 }
		relation = { tag = TIB value = 20 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 30 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "SIK" NumberOfSpies = 3 }
	SpyInfo = { country = "AFG" NumberOfSpies = 2 }
	SpyInfo = { country = "CHC" NumberOfSpies = 1 }
	SpyInfo = { country = "CHI" NumberOfSpies = 2 }
	SpyInfo = { country = "CXB" NumberOfSpies = 4 }
	SpyInfo = { country = "IND" NumberOfSpies = 4 }
	SpyInfo = { country = "JAP" NumberOfSpies = 1 }
	SpyInfo = { country = "MON" NumberOfSpies = 2 }
	SpyInfo = { country = "NEP" NumberOfSpies = 1 }
	SpyInfo = { country = "SOV" NumberOfSpies = 2 }
	SpyInfo = { country = "TAN" NumberOfSpies = 2 }
	SpyInfo = { country = "TIB" NumberOfSpies = 2 }

  headofstate            = { type = 9 id = 72001 }
  headofgovernment       = { type = 9 id = 72002 }
  foreignminister        = { type = 9 id = 72003 }
  armamentminister       = { type = 9 id = 72004 }
  ministerofsecurity     = { type = 9 id = 72005 }
  ministerofintelligence = { type = 9 id = 72006 }
  chiefofstaff           = { type = 9 id = 72007 }
  chiefofarmy            = { type = 9 id = 72008 }
  chiefofnavy            = { type = 9 id = 72009 }
  chiefofair             = { type = 9 id = 72010 }
  landunit =
  { location = 1433
    name     = "Xin'jiang JÅEtuan 1"
    id       = { type = 25600 id = 1 }
    division =
    { id   = { type = 25600 id = 2 }
      name = "1 Xin'jiang Shi"
      type = infantry
    }
    division =
    { id   = { type = 25600 id = 3 }
      name = "7 Xin'jiang LÅE"
      type = militia
    }
    division =
    { id   = { type = 25600 id = 4 }
      name = "8 Xin'jiang LÅE"
      type = militia
    }
  } 
	province_development = { 
		id = { type = 25600 id = 5 } 
		name = "" 
		progress = 0.0000 
		location = 1433 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = july 
			day = 7 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2914 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
