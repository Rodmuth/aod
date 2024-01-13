#####################
# Country main data #
#####################

country =
{ tag                    = EGY
control = ENG
  capital                = 903
  manpower               = 5.8
  # Resource Reserves
  energy                 = 100
  metal                  = 100
  rare_materials         = 50
  oil                    = 50
  supplies               = 50
  money                  = 0
  transports             = 16
  escorts                = 1

	diplomacy = {
		relation = { tag = SUD value = 200 access = yes }
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 50 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 50 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 50 }
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
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = ENG value = 100 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 45 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 50 }
		relation = { tag = GER value = 50 }
		relation = { tag = GRE value = 15 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 50 }
		relation = { tag = IRE value = 1 }
		relation = { tag = IRQ value = 65 }
		relation = { tag = ITA value = 35 }
		relation = { tag = JAP value = 20 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 50 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 50 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 50 }
		relation = { tag = OMN value = 65 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 40 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 1 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 50 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 20 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 1 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = 1 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 40 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 30 }
		relation = { tag = U27 value = 50 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 25 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 65 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "EGY" NumberOfSpies = 4 }
	SpyInfo = { country = "BEL" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 2 }
	SpyInfo = { country = "ETH" NumberOfSpies = 4 }
	SpyInfo = { country = "FRA" NumberOfSpies = 2 }
	SpyInfo = { country = "GER" NumberOfSpies = 1 }
	SpyInfo = { country = "IRQ" NumberOfSpies = 2 }
	SpyInfo = { country = "ITA" NumberOfSpies = 2 }
	SpyInfo = { country = "OMN" NumberOfSpies = 1 }
	SpyInfo = { country = "PER" NumberOfSpies = 1 }
	SpyInfo = { country = "SAF" NumberOfSpies = 1 }
	SpyInfo = { country = "SAU" NumberOfSpies = 2 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "YEM" NumberOfSpies = 1 }


  nationalprovinces      = { 900 1028 1029 1067 1068 1069 1030 1031 1040 1041 1066 1065 1032 915 914 913 912 911 910 909 908 907 906 905 904 903 902 901 4 1019 1020 1021 1022 1023 1024 1025 1026 1027 1800 1801 }

  ownedprovinces         = { 915 914 913 912 911 910 909 908 907 906 905 904 903 902 4 1019 1020 1021 1022 1023 1024 1025 1026 1027 1800 1801 }

  controlledprovinces    = { 915 914 913 912 911 910 909 908 907 906 905 904 903 902 4 1019 1020 1021 1022 1023 1024 1025 1026 1027 1800 1801 }

  techapps               = { 14000 2450 6010 5010 5080 5090 2290 2300 2310 1010 1190 8050 1310 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 1
    free_market       = 6
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 512001 }
  headofgovernment       = { type = 9 id = 512002 }
  foreignminister        = { type = 9 id = 512003 }
  armamentminister       = { type = 9 id = 512004 }
  ministerofsecurity     = { type = 9 id = 512005 }
  ministerofintelligence = { type = 9 id = 512006 }
  chiefofstaff           = { type = 9 id = 512007 }
  chiefofarmy            = { type = 9 id = 512008 }
  chiefofnavy            = { type = 9 id = 512009 }
  chiefofair             = { type = 9 id = 512010 }
  nationalidentity = "policy_identity_defensive" 
  socialpolicy = "policy_social_ethnic" 
  nationalculture = "policy_culture_enterprise"

####################################
# Egyptian Land OOB
####################################
 
landunit = {
	id = { type = 10018 id = 1 }
	name = "Al-Jayshu al-Misriyyu al-Malakiyyu"
	location = 903 # Cairo

	division = { 
		id = { type = 10018 id = 2 }
		name = "Qismu al-Mushati al-1i"
		strength = 50
		type = militia
		}
	}

####################################
# Egyptian Air OOB
####################################

  airunit =
  { location = 906
    name     = "Egyptian Army Air Force"
    base     = 906
    id       = { type = 10018 id = 3 }
    division =
    { id           = { type = 10018 id = 4 }
      name         = "EAAF"
      type         = interceptor
      model        = 0
      max_strength = 30
      strength     = 30
    }
  } 
		airdivision = { 
			id = { type = 10018 id = 5 } 
			name = "REAF" 
			model = 0
			type = interceptor
			dormant = yes
			strength = 36.0000
			} 

	province_development = { 
		id = { type = 10018 id = 6 } 
		name = "" 
		progress = 0.0000 
		location = 903 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = january 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2000 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10018 id = 7 } 
		name = "" 
		progress = 0.0000 
		location = 906 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = december 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2585 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}