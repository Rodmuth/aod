#####################
# Country main data #
#####################

country =
{ tag                    = PAN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.1800 
  supply = 0.0200 
  production = 0.8000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 888
  manpower               = 0.9 # 3 - building queue
  transports             = 32
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 4
  }
  nationalprovinces      = { 889 888 }
  ownedprovinces         = { 888 }
  controlledprovinces    = { 888 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 5010 5080 5090 }

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 10 }
		relation = { tag = AST value = 30 }
		relation = { tag = AUS value = 10 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 10 }
		relation = { tag = BRA value = 25 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 30 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = 1 }
		relation = { tag = CHI value = 5 }
		relation = { tag = CHL value = 10 }
		relation = { tag = COL value = -30 }
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
		relation = { tag = ENG value = 50 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 40 }
		relation = { tag = GER value = 15 }
		relation = { tag = GRE value = 10 }
		relation = { tag = GUA value = 20 }
		relation = { tag = HAI value = 20 }
		relation = { tag = HOL value = 35 }
		relation = { tag = HON value = 20 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 10 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 35 }
		relation = { tag = JAP value = 30 }
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
		relation = { tag = NOR value = 25 }
		relation = { tag = NZL value = 20 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAR value = 10 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 25 }
		relation = { tag = PRU value = 10 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 20 }
		relation = { tag = SAL value = 20 }
		relation = { tag = SAU value = 15 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 20 }
		relation = { tag = SPA value = 15 }
		relation = { tag = SPR value = 15 }
		relation = { tag = SWE value = 20 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 25 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 10 }
		relation = { tag = USA value = 100 }
		relation = { tag = VEN value = 10 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "PAN" NumberOfSpies = 2 }
	SpyInfo = { country = "CAN" NumberOfSpies = 1 }
	SpyInfo = { country = "COL" NumberOfSpies = 4 }
	SpyInfo = { country = "COS" NumberOfSpies = 4 }
	SpyInfo = { country = "CUB" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "HOL" NumberOfSpies = 1 }
	SpyInfo = { country = "MEX" NumberOfSpies = 1 }
	SpyInfo = { country = "NIC" NumberOfSpies = 2 }
	SpyInfo = { country = "USA" NumberOfSpies = 2 }

  headofstate            = { type = 9 id = 95001 }
  headofgovernment       = { type = 9 id = 95002 }
  foreignminister        = { type = 9 id = 95003 }
  armamentminister       = { type = 9 id = 95004 }
  ministerofsecurity     = { type = 9 id = 95005 }
  ministerofintelligence = { type = 9 id = 95006 }
  chiefofstaff           = { type = 9 id = 95007 }
  chiefofarmy            = { type = 9 id = 95008 }
  chiefofnavy            = { type = 9 id = 95009 }
  chiefofair             = { type = 9 id = 95010 }
  # Improved Construction Engineering
  landunit =
  { id       = { type = 14600 id = 50 }
    name     = "Ejercito de Panama"
    location = 888
    division =
    { id       = { type = 14600 id = 5000 }
      name     = "1a Brigada de Infantería"
      strength = 60
      type     = infantry
    }
  } 
	province_development = { 
		id = { type = 14600 id = 51 } 
		name = "" 
		progress = 0.0000 
		location = 888 
		cost = 2.0000 
		date = { 
			year = 1955 
			month = november 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2308 
		days_for_first = 255 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
