##############################
# Country definition for AFG #
##############################

country =
{ tag                    = AFG
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.0000 
  supply = 0.1000 
  production = 0.8000 
  reinforcement = 0.1000 
  upgrading = 0.0000 
  manpower               = 109.9 # 110 - building queue
  capital                = 1486
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    free_market       = 7
    freedom           = 6
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  nationalprovinces      = { 1486 1493 1492 1484 }
  ownedprovinces         = { 1486 1493 1492 1484 }
  controlledprovinces    = { 1486 1493 1492 1484 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # Basic Armoured Car
  techapps               = { 1010 1190 5080 }
  blueprints             = { 6010 }
	diplomacy = {
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 10 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 1 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = -10 }
		relation = { tag = CHI value = 15 }
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
		relation = { tag = ENG value = 25 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = -10 }
		relation = { tag = GER value = 50 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = -20 }
		relation = { tag = IRE value = 1 }
		relation = { tag = IRQ value = 20 }
		relation = { tag = ITA value = 1 }
		relation = { tag = JAP value = 5 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 1 }
		relation = { tag = OMN value = 20 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 45 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 1 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 20 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 10 }
		relation = { tag = SOV value = -20 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = 1 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 10 }
		relation = { tag = TUR value = 20 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = -15 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 20 }
		relation = { tag = YUG value = 1 }
	}
	SpyInfo = { country = "AFG" NumberOfSpies = 1 }
	SpyInfo = { country = "IND" NumberOfSpies = 4 }
	SpyInfo = { country = "PER" NumberOfSpies = 4 }
	SpyInfo = { country = "SIK" NumberOfSpies = 4 }
	SpyInfo = { country = "SOV" NumberOfSpies = 2 }

  headofstate            = { type = 9 id = 54001 }
  headofgovernment       = { type = 9 id = 54002 }
  foreignminister        = { type = 9 id = 54003 }
  armamentminister       = { type = 9 id = 54004 }
  ministerofsecurity     = { type = 9 id = 54005 }
  ministerofintelligence = { type = 9 id = 54006 }
  chiefofstaff           = { type = 9 id = 54007 }
  chiefofarmy            = { type = 9 id = 54008 }
  chiefofnavy            = { type = 9 id = 54009 }
  chiefofair             = { type = 9 id = 54010 }

  # ####################
  # ##AFGHANISTAN OOB###
  # ####################
  landunit =
  { id       = { type = 10000 id = 1 }
    location = 1486
    name     = "Royal Afghani Army"
    division =
    { id       = { type = 10000 id = 10 }
      name     = "Royal Guard"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 10000 id = 2 }
      name     = "Faizabad Militia"
      strength = 80
      type     = militia
    }
    division =
    { id       = { type = 10000 id = 3 }
      name     = "Ghazni Militia"
      strength = 70
      type     = militia
    }
  }
  # #########################
  # #########################
  landunit =
  { id       = { type = 10000 id = 4 }
    location = 1486
    name     = "Herat Army"
    division =
    { id       = { type = 10000 id = 5 }
      name     = "Herat Militia"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 10000 id = 6 }
      name     = "Herat Cavalry"
      strength = 30
      type     = cavalry
    }
  }
  # ##########################
  # ###########################
  landunit =
  { id       = { type = 10000 id = 7 }
    location = 1493 # Various Mixed Divisions, each based at different city humped in one landunit#
    name     = "Kandahar Army"
    division =
    { id       = { type = 10000 id = 8 }
      name     = "Jalalabad Militia"
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 10000 id = 9 }
      name     = "Kandahar Militia"
      strength = 100
      type     = militia
    }
  } 

#########################################################################
# Airforce
#########################################################################

  airunit =
  { id       = { type = 10000 id = 11 }
    name = "Afghan Air Force"
    location = 1486
    base     = 1486
    division =
    { id       = { type = 10000 id = 12 }
      name = "I. Tactical Group"
      strength = 30
      model    = 0
      type     = interceptor
    }
  }

#########################################################################
# Constructions
#########################################################################

	province_development = { 
		id = { type = 10000 id = 13 } 
		name = "" 
		progress = 0.0000 
		location = 1486 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = november 
			day = 3 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 985 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
