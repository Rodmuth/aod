#####################
# Country main data #
#####################

country =
{ tag                    = IND
  capital                = 1469
  peacetime_ic_mod       = 0.55
  puppet = ENG
  manpower               = 2.4
  # Resource Reserves

  free                   = { }
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 700 #+200
  supplies               = 650 #+400
  money                  = 20
  transports             = 72 #10
  escorts                = 0
	diplomacy = {
		relation = { tag = AFG value = -20 guaranteed = { day = 30 month = december year = 1935 } }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 50 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 50 access = yes }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 5 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 50 }
		relation = { tag = CGX value = 1 }
		relation = { tag = CHC value = -10 }
		relation = { tag = CHI value = 5 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 1 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 40 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 50 }
		relation = { tag = ENG value = 100 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 50 }
		relation = { tag = GER value = 1 }
		relation = { tag = GRE value = 15 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IRE value = 15 }
		relation = { tag = IRQ value = 50 }
		relation = { tag = ITA value = 1 }
		relation = { tag = JAP value = -20 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 75 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 50 access = yes }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 50 }
		relation = { tag = OMN value = 50 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = -20 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 1 }
		relation = { tag = POR value = 20 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 50 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 1 }
		relation = { tag = SIA value = -15 }
		relation = { tag = SIK value = -15 }
		relation = { tag = SOV value = 1 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = 1 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 1 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 20 }
		relation = { tag = TUR value = 1 }
#		relation = { tag = U01 value = 1 }
		relation = { tag = U02 value = 50 }
		relation = { tag = U69 value = -25 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = -5 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 50 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "IND" NumberOfSpies = 2 }
	SpyInfo = { country = "AFG" NumberOfSpies = 4 }
	SpyInfo = { country = "AST" NumberOfSpies = 1 }
	SpyInfo = { country = "BHU" NumberOfSpies = 4 }
	SpyInfo = { country = "CGX" NumberOfSpies = 2 }
	SpyInfo = { country = "CHC" NumberOfSpies = 1 }
	SpyInfo = { country = "CHI" NumberOfSpies = 4 }
	SpyInfo = { country = "CXB" NumberOfSpies = 2 }
	SpyInfo = { country = "CYN" NumberOfSpies = 2 }
	SpyInfo = { country = "EGY" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 4 }
	SpyInfo = { country = "ETH" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 2 }
	SpyInfo = { country = "GER" NumberOfSpies = 2 }
	SpyInfo = { country = "HOL" NumberOfSpies = 1 }
	SpyInfo = { country = "IRQ" NumberOfSpies = 1 }
	SpyInfo = { country = "ITA" NumberOfSpies = 1 }
	SpyInfo = { country = "JAP" NumberOfSpies = 2 }
	SpyInfo = { country = "MLY" NumberOfSpies = 2 }
	SpyInfo = { country = "NEP" NumberOfSpies = 4 }
	SpyInfo = { country = "NZL" NumberOfSpies = 1 }
	SpyInfo = { country = "PER" NumberOfSpies = 2 }
	SpyInfo = { country = "PHI" NumberOfSpies = 1 }
	SpyInfo = { country = "POR" NumberOfSpies = 1 }
	SpyInfo = { country = "SAF" NumberOfSpies = 2 }
	SpyInfo = { country = "SIA" NumberOfSpies = 2 }
	SpyInfo = { country = "SIK" NumberOfSpies = 2 }
	SpyInfo = { country = "SOV" NumberOfSpies = 1 }
	SpyInfo = { country = "TIB" NumberOfSpies = 2 }

  nationalprovinces      = { 1494
                             1481 1480 1465 1466 1479 1482 1483 1475 1476 1478 1477 1469 1470 1471 1472 1456 1468 1467 1464 1463 1474 1460 1459 1457
                             1458 1461 1508 1462 1505 1506 1507 1509 1510 1511 1512 1513 1514 1515 1518 1519 1284 1285 1286 1287 1288 1289
                             1290 1291 1898 1304 1295 1296 1301 1302 1346 1299 1298 1300 1292 1454 1297 1878 1877 }

  ownedprovinces         = { 1494
                             1481 1480 1465 1466 1479 1482 1483 1475 1476 1478 1477 1469 1470 1471 1472 1456 1468 1467 1464 1463 1474 1460 1459 1457
                             1458 1461 1508 1462 1505 1506 1507 1509 1510 1511 1512 1513 1514 1515 1518 1519 1284 1285 1286 1287 1288 1289 
                             1290 1291 1898 1304 1295 1296 1301 1302 1346 1299 1298 1300 1292 1454 1297 1878 1877 }

  controlledprovinces    = { 1494
                             1481 1480 1465 1466 1479 1482 1483 1475 1476 1478 1477 1469 1470 1471 1472 1456 1468 1467 1464 1463 1474 1460 1459 1457
                             1458 1461 1508 1462 1505 1506 1507 1509 1510 1511 1512 1513 1514 1515 1518 1519 1284 1285 1286 1287 1288 1289
                             1290 1291 1898 1304 1295 1296 1301 1302 1346 1299 1298 1300 1292 1454 1297 1878 1877 }

  techapps               = { 3010 8050 1010 1020 1110 1190 1200 1210 1220 1310 2290 2300 2310  2450 5080 5090 6010 6030  6120 14000 4010 4120 9010 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 8
    free_market       = 6
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 59001 }
  headofgovernment       = { type = 9 id = 59002 }
  foreignminister        = { type = 9 id = 59003 }
  armamentminister       = { type = 9 id = 59004 }
  ministerofsecurity     = { type = 9 id = 59005 }
  ministerofintelligence = { type = 9 id = 59006 }
  chiefofstaff           = { type = 9 id = 59007 }
  chiefofarmy            = { type = 9 id = 59008 }
  chiefofnavy            = { type = 9 id = 59009 }
  chiefofair             = { type = 9 id = 59010 }
  nationalidentity = "policy_identity_conciliatory" 
	socialpolicy = "policy_social_enterprise" 
	nationalculture = "policy_culture_conformist"

#ARMY UNITS
  landunit =
  { name     = "I Indian Corps"
    location = 1469
    id       = { type = 10029 id = 100 }
    division =
    { id       = { type = 10029 id = 101 }
      name     = "1st Indian Army"
      type     = hq
      strength = 100
      extra = engineer
    }
  }
landunit = {
	id = { type = 10029 id = 1000 }
	name = "Western District"
	location = 1494 # Karachi

	division = {
		id = { type = 10029 id = 1001 }
		name = "Sind Area"
		type = garrison
		model = 0
		strength = 30
		experience = 25
		extra = police
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1002 }
	name = "Quetta Area"
	location = 1482 # Multan

	division = {
		id = { type = 10029 id = 1003 }
		name = "Quetta Area"
		type = garrison
		model = 0
		strength = 30
		experience = 25
		extra = artillery
		brigade_model = 0
		}
	}


landunit = {
	id = { type = 10029 id = 1004 }
	name = "Waziristan District"
	location = 1482 # Multan

	division = {
		id = { type = 10029 id = 1005 }
		name = "Waziristan District"
		type = militia
		model = 0
		strength = 30
		experience = 25
		}
	}

landunit = {
	id = { type = 10029 id = 1006 }
	name = "Peshawar District"
	location = 1483 # Peshawar

	division = {
		id = { type = 10029 id = 1007 }
		name = "Peshawar District"
		type = militia
		model = 0
		strength = 30
		experience = 25
		extra = b_u9
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1008 }
	name = "Kohat District"
	location = 1483 # Peshawar

	division = {
		id = { type = 10029 id = 1009 }
		name = "Kohat District"
		type = garrison
		model = 0
		strength = 30
		experience = 25
		}
	}

landunit = {
	id = { type = 10029 id = 1010 }
	name = "Lahore District"
	location = 1475 # Lahore

	division = {
		id = { type = 10029 id = 1011 }
		name = "Lahore District"
		type = militia
		model = 0
		strength = 30
		experience = 25
		}
	}

landunit = {
	id = { type = 10029 id = 1012 }
	name = "Rawalpindi District"
	location = 1475 # Lahore

	division = {
		id = { type = 10029 id = 1013 }
		name = "2nd Brigade"
		type = garrison
		model = 0
		strength = 30
		experience = 25
		}

	division = {
		id = { type = 10029 id = 1014 }
		name = "3rd Brigade"
		type = garrison
		model = 0
		strength = 30
		experience = 25
		}
	}

landunit = {
	id = { type = 10029 id = 1015 }
	name = "Patiala State Forces"
	location = 1476 # Ludhiana

	division = {
		id = { type = 10029 id = 1016 }
		name = "Patiala State Forces"
		type = garrison
		model = 0
		strength = 50
		experience = 15
		}
	}

landunit = {
	id = { type = 10029 id = 1017 }
	name = "Kapurthala State Forces"
	location = 1476 # Ludhiana

	division = {
		id = { type = 10029 id = 1018 }
		name = "Kapurthala State Forces"
		type = garrison
		model = 0
		strength = 30
		experience = 20
		}
	}

landunit = {
	id = { type = 10029 id = 1019 }
	name = "Jammu State Forces"
	location = 1474 # Srinagar

	division = {
		id = { type = 10029 id = 1020 }
		name = "Jammu State Forces"
		type = garrison
		model = 0
		strength = 50
		experience = 15
		}
	}

landunit = {
	id = { type = 10029 id = 1021 }
	name = "3rd Indian Infantry Division"
	location = 1477 # Meerut

	division = {
		id = { type = 10029 id = 1022 }
		name = "3rd Indian Infantry Division"
		type = militia
		model = 0
		strength = 50
		experience = 20
		}
	}

landunit = {
	id = { type = 10029 id = 1023 }
	name = "Gwalior State Forces"
	location = 1467 # Indore

	division = {
		id = { type = 10029 id = 1024 }
		name = "Gwalior State Forces"
		type = garrison
		model = 0
		strength = 50
		experience = 15
		}
	}

landunit = {
	id = { type = 10029 id = 1025 }
	name = "6th Brigade"
	location = 1471 # Lucknow

	division = {
		id = { type = 10029 id = 1026 }
		name = "6th Brigade"
		type = garrison
		model = 0
		strength = 30
		experience = 30
		}
	}

landunit = {
	id = { type = 10029 id = 1027 }
	name = "Delhi Area"
	location = 1469 # Delhi

	division = {
		id = { type = 10029 id = 1028 }
		name = "Delhi Area"
		type = garrison
		model = 0
		strength = 30
		experience = 20
		extra = police
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1029 }
	name = "Eastern Bengal Area"
	location = 1284 # Dimapur

	division = {
		id = { type = 10029 id = 1030 }
		name = "Eastern Bengal Area"
		type = garrison
		model = 0
		strength = 30
		experience = 20
		extra = police
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1031 }
	name = "Bengal Presidency Area"
	location = 1457 # Calcutta

	division = {
		id = { type = 10029 id = 1032 }
		name = "Bengal Presidency Area"
		type = garrison
		model = 0
		strength = 30
		experience = 20
		extra = police
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1033 }
	name = "4th Indian Infantry Division"
	location = 1507 # Hyderabad

	division = {
		id = { type = 10029 id = 1034 }
		name = "4th Indian Infantry Division"
		type = militia
		model = 0
		strength = 50
		experience = 20
		extra = b_u9
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1035 }
	name = "Hyderabad State Forces"
	location = 1507 # Hyderabad

	division = {
		id = { type = 10029 id = 1036 }
		name = "Hyderabad State Forces"
		type = garrison
		model = 0
		strength = 50
		experience = 15
		}
	}

landunit = {
	id = { type = 10029 id = 1037 }
	name = "Pune Area"
	location = 1506 # Pune

	division = {
		id = { type = 10029 id = 1038 }
		name = "Pune Area"
		type = garrison
		model = 0
		strength = 30
		experience = 30
		}
	}

landunit = {
	id = { type = 10029 id = 1039 }
	name = "Bombay District"
	location = 1505 # Bombay

	division = {
		id = { type = 10029 id = 1040 }
		name = "Bombay District"
		type = garrison
		model = 0
		strength = 30
		experience = 30
		extra = police
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1041 }
	name = "Baroda State Forces"
	location = 1466 # Ahmadabad

	division = {
		id = { type = 10029 id = 1042 }
		name = "Baroda State Forces"
		type = garrison
		model = 0
		strength = 30
		experience = 20
		extra = police
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1043 }
	name = "Mewar State Forces"
	location = 1468 # Jaipur

	division = {
		id = { type = 10029 id = 1044 }
		name = "Mewar State Forces"
		type = garrison
		model = 0
		strength = 30
		experience = 20
		extra = police
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1045 }
	name = "Madras District"
	location = 1509 # Madras

	division = {
		id = { type = 10029 id = 1046 }
		name = "Madras District"
		type = garrison
		model = 0
		strength = 30
		experience = 30
		extra = police
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1047 }
	name = "Mysore State Forces"
	location = 1511 # Bangalore

	division = {
		id = { type = 10029 id = 1048 }
		name = "Mysore State Forces"
		type = garrison
		model = 0
		strength = 30
		experience = 20
		extra = police
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1049 }
	name = "Travancore State Forces"
	location = 1514 # Cochin

	division = {
		id = { type = 10029 id = 1050 }
		name = "Travancore State Forces"
		type = garrison
		model = 0
		strength = 30
		experience = 20
		extra = police
		brigade_model = 0
		}
	}

landunit = {
	id = { type = 10029 id = 1053 }
	name = "Rangoon Force"
	location = 1299 # Rangoon

	division = {
		id = { type = 10029 id = 1054 }
		name = "Rangoon Force"
		type = militia
		model = 0
		strength = 25
		experience = 40
		extra = police
		brigade_model = 0
		}
	}

#AIR UNITS

airunit = {
	id = { type = 10029 id = 2924 }
	name = "Royal Indian Air Force"
	location = 1469 # Delhi
	base = 1469

	division = {
		id = { type = 10029 id = 2925 }
		name = "No.1 Group IAF"
		type = cas
		model = 0
		strength = 30
		}
	}

#NAVAL UNITS

navalunit = {
	id = { type = 10029 id = 2926 }
	name = "Royal Indian Navy"
	location = 1505 # Bombay
	base = 1505

	division = {
		id = { type = 10029 id = 2927 }
		name = "Destroyer Division 1"
		type = destroyer
		strength = 75
		model = 0
		extra = naval_fire_controll_s
		brigade_model = 0
		}
	division = {
		id = { type = 10029 id = 2928 }
		name = "Destroyer Division 2"
		type = destroyer
		strength = 75
		model = 0
		extra = naval_fire_controll_s
		brigade_model = 0
		}
	}

#CONSTRUCTIONS

	province_development = { 
		id = { type = 10029 id = 2929 } 
		name = "" 
		progress = 0.0000 
		location = 1461 
		cost = 5.0000 
		date = { 
			year = 1939 
			month = august 
			day = 22 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 4 
		done = 0 
		days = 1313 
		days_for_first = 328 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 10029 id = 2930 } 
		name = "" 
		progress = 0.0000 
		location = 1457 
		cost = 5.0000 
		date = { 
			year = 1939 
			month = august 
			day = 22 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 4 
		done = 0 
		days = 1204 
		days_for_first = 328 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 10029 id = 2931 } 
		name = "" 
		progress = 0.0000 
		location = 1459 
		cost = 5.0000 
		date = { 
			year = 1950 
			month = july 
			day = 28 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 16 
		done = 0 
		days = 5253 
		days_for_first = 328 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 10029 id = 2932 } 
		name = "" 
		progress = 0.0000 
		location = 1460 
		cost = 5.0000 
		date = { 
			year = 1950 
			month = july 
			day = 28 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 16 
		done = 0 
		days = 5253 
		days_for_first = 328 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 10029 id = 2933 } 
		name = "" 
		progress = 0.0000 
		location = 1469 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = september 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1880 
		days_for_first = 104 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10029 id = 2934 } 
		name = "" 
		progress = 0.0000 
		location = 1459 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = september 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1880 
		days_for_first = 104 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10029 id = 2935 } 
		name = "" 
		progress = 0.0000 
		location = 1460 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = september 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1880 
		days_for_first = 104 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10029 id = 2936 } 
		name = "" 
		progress = 0.0000 
		location = 1461 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = april 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 26 
		done = 0 
		days = 2218 
		days_for_first = 156 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10029 id = 2937 } 
		name = "" 
		progress = 0.0000 
		location = 1457 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = september 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1880 
		days_for_first = 104 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10029 id = 2938 } 
		name = "" 
		progress = 0.0000 
		location = 1462 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = february 
			day = 21 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2051 
		days_for_first = 130 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	convoy_development = { 
		id = { type = 10029 id = 2939 } 
		name = "" 
		progress = 3.6000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1974 
			month = september 
			day = 2 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 69.0000 
		total_progress = 0.0000 
		size = 99 
		done = 0 
		days = 7038 
		days_for_first = 173 
		gearing_bonus = 0.0000 
		type = transports 
		} 
	province_development = { 
		id = { type = 10029 id = 2940 } 
		name = "" 
		progress = 0.0000 
		location = 1479 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = february 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 30 
		done = 0 
		days = 2551 
		days_for_first = 104 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}