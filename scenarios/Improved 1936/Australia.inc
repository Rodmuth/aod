##############################
# Country definition for AST #
##############################

province =
{ id         = 1679
  oilpool    = 1
  supplypool = 50
}              # Port Moresby
province = { id = 1729 supplypool = 50 } # Tasmania

#####################
# Country main data #
#####################

country =
{ tag                    = AST
  manpower               = 24.7000   # 25 - building queue no more
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 450
  money                  = 20
  consumer = 0.2655 
  supply = 0.0845 
  production = 0.6500 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1728
  # 1st Transport Flotilla#
  transports             = 70
  escorts                = 0
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    free_market       = 8
    freedom           = 10
    professional_army = 5
    defense_lobby     = 2
    interventionism   = 6
  }
  nationalprovinces      = { 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
                             1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734
                           }
  ownedprovinces         = { 1611 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
                             1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 1668 1669 1670 1671 1681 1682
                             1666 1667 1672 1675 1676 1677 1678 1679 1680
                           }
  controlledprovinces    = { 1611 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
                             1727 1728 1729 1730 1731 1732 1733 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1734 1668 1669 1670 1671 1681 1682
                             1666 1667 1672 1675 1676 1677 1678 1679 1680
                           }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  1210  1220  14000 2010     2290  2300  2310  2450  2460  2510  3010  3020  3070  3080  3090 
                             3130  3140  3190  4010  4020  4120  4130  5010  5020  5080  5090  5190  5310  5320  6010  6030  6120  8010  8020 
                             8030  8040  8050  8070  8100  8120  9010  9020  9030  9140  1310
                           }
  blueprints             = { 2150 }
	diplomacy = {
		relation = { tag = AFG value = 10 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 15 }
		relation = { tag = AUS value = 10 }
		relation = { tag = BEL value = 30 }
		relation = { tag = BHU value = 50 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 25 }
		relation = { tag = BUL value = 10 }
		relation = { tag = CAN value = 50 }
		relation = { tag = CGX value = 15 }
		relation = { tag = CHC value = -10 }
		relation = { tag = CHI value = 35 }
		relation = { tag = CHL value = 10 }
		relation = { tag = COL value = 10 }
		relation = { tag = COS value = 10 }
		relation = { tag = CSX value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 1 }
		relation = { tag = CYN value = 20 }
		relation = { tag = CZE value = 35 }
		relation = { tag = DEN value = 15 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 10 }
		relation = { tag = EGY value = 50 }
		relation = { tag = ENG value = 150 }
		relation = { tag = EST value = 10 }
		relation = { tag = ETH value = 30 }
		relation = { tag = FIN value = 10 }
		relation = { tag = FRA value = 50 }
		relation = { tag = GER value = 15 }
		relation = { tag = GRE value = 25 }
		relation = { tag = GUA value = 10 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 30 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 10 }
		relation = { tag = IND value = 50 }
		relation = { tag = IRE value = 40 }
		relation = { tag = IRQ value = 50 }
		relation = { tag = ITA value = 25 }
		relation = { tag = JAP value = 20 }
		relation = { tag = LAT value = 10 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 10 }
		relation = { tag = LUX value = 10 }
		relation = { tag = MAN value = -10 }
		relation = { tag = MEX value = 20 }
		relation = { tag = MLY value = 50 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 50 }
		relation = { tag = NIC value = 15 }
		relation = { tag = NOR value = 10 }
		relation = { tag = NZL value = 100 }
		relation = { tag = OMN value = 50 }
		relation = { tag = PAN value = 30 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 20 }
		relation = { tag = PHI value = 35 }
		relation = { tag = POL value = 25 }
		relation = { tag = POR value = 30 }
		relation = { tag = PRU value = 20 }
		relation = { tag = ROM value = 15 }
		relation = { tag = SAF value = 50 }
		relation = { tag = SAL value = 10 }
		relation = { tag = SAU value = 20 }
		relation = { tag = SIA value = 25 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 15 }
		relation = { tag = SPA value = 20 }
		relation = { tag = SPR value = 20 }
		relation = { tag = SWE value = 15 }
		relation = { tag = SCH value = 50 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 20 }
		relation = { tag = U27 value = 50 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 65 }
		relation = { tag = VEN value = 25 }
		relation = { tag = YEM value = 50 }
		relation = { tag = YUG value = 10 }
	}

	SpyInfo = { country = "AST" NumberOfSpies = 3 }
	SpyInfo = { country = "AFG" NumberOfSpies = 1 }
	SpyInfo = { country = "IND" NumberOfSpies = 2 }
	SpyInfo = { country = "CHI" NumberOfSpies = 1 }
	SpyInfo = { country = "EGY" NumberOfSpies = 1 }
	SpyInfo = { country = "ENG" NumberOfSpies = 1 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "GER" NumberOfSpies = 1 }
	SpyInfo = { country = "HOL" NumberOfSpies = 1 }
	SpyInfo = { country = "IND" NumberOfSpies = 2 }
	SpyInfo = { country = "IRE" NumberOfSpies = 1 }
	SpyInfo = { country = "IRQ" NumberOfSpies = 1 }
	SpyInfo = { country = "JAP" NumberOfSpies = 1 }
	SpyInfo = { country = "MLY" NumberOfSpies = 4 }
	SpyInfo = { country = "NZL" NumberOfSpies = 6 }
	SpyInfo = { country = "PER" NumberOfSpies = 1 }
	SpyInfo = { country = "PHI" NumberOfSpies = 1 }
	SpyInfo = { country = "POR" NumberOfSpies = 1 }
	SpyInfo = { country = "SAF" NumberOfSpies = 1 }
	SpyInfo = { country = "SIA" NumberOfSpies = 1 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "USA" NumberOfSpies = 1 }

  headofstate            = { type = 9 id = 56001 }
  headofgovernment       = { type = 9 id = 56002 }
  foreignminister        = { type = 9 id = 56003 }
  armamentminister       = { type = 9 id = 56004 }
  ministerofsecurity     = { type = 9 id = 56005 }
  ministerofintelligence = { type = 9 id = 56006 }
  chiefofstaff           = { type = 9 id = 56007 }
  chiefofarmy            = { type = 9 id = 56008 }
  chiefofnavy            = { type = 9 id = 56009 }
  chiefofair             = { type = 9 id = 56010 }
  # ##	1932:  The total Militia was only 28,000 men strong
  # ##	Regular Army had about 1500 men (mostly coastal artillery)
  # ##	This was brought upto 46,000 by 1938
  # ##	The Militia was used in New Guinea against Japan
  # ######### Australian Army ##############
  landunit =
  { name     = "I Australian Corps"
    location = 1728
    id       = { type = 10500 id = 101 }
    division =
    { id       = { type = 10500 id = 102 }
      name     = "1st Australian Army"
      type     = hq
      strength = 100
      extra = engineer
    }
  }
  landunit =
  { id       = { type = 10500 id = 1 }
    name     = "1st Military District"
    location = 1693
    division =
    { id       = { type = 10500 id = 2 }
      name     = "1st Military District"
      strength = 100
      type     = garrison
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 10500 id = 3 }
    name     = "6th Military District"
    location = 1729
    division =
    { id       = { type = 10500 id = 4 }
      name     = "6th Military District"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10500 id = 5 }
    name     = "2nd Military District"
    location = 1727
    division =
    { id       = { type = 10500 id = 6 }
      name     = "1st Infantry Division"
      strength = 30
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 10500 id = 7 }
      name     = "2nd Infantry Division"
      strength = 30
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 10500 id = 8 }
      name     = "1st Cavalry Division"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 10500 id = 9 }
    name     = "4th Military District"
    location = 1733
    division =
    { id       = { type = 10500 id = 10 }
      name     = "4th Military District"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10500 id = 11 }
    name     = "5th Military District"
    location = 1712
    division =
    { id       = { type = 10500 id = 12 }
      name     = "5th Military District"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10500 id = 13 }
    name     = "7th Military District"
    location = 1703
    division =
    { id       = { type = 10500 id = 14 }
      name     = "Darwin Garrison"
      strength = 100
      type     = garrison
    }
  }
  landunit =
  { id       = { type = 10500 id = 15 }
    name     = "Port Moresby Garrison"
    location = 1679
    division =
    { id       = { type = 10500 id = 16 }
      name     = "Port Moresby Garrison"
      strength = 100
      type     = garrison
      extra    = anti_air
    }
  }
  landunit =
  { id       = { type = 10500 id = 17 }
    name     = "2nd Military District"
    location = 1730
    division =
    { id       = { type = 10500 id = 18 }
      name     = "3rd Infantry Division"
      strength = 30
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 10500 id = 19 }
      name     = "2nd Cavalry Division"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  # ######### Australian Navy ##############
  navalunit =
  { id       = { type = 10500 id = 20 }
    name     = "HM Australian Fleet"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id    = { type = 10500 id = 100 }
      name  = "HMAS Albatross"
      type  = escort_carrier
      model = 0
      extra1 = b_u1
      brigade_model1 = 0
    }
    division =
    { id    = { type = 10500 id = 21 }
      name  = "HMAS Australia"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 10500 id = 22 }
      name  = "HMAS Canberra"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 10500 id = 23 }
      name  = "HMAS Sydney"
      type  = light_cruiser
      model = 2
      extra1 = naval_spotter_s
      extra2 = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 10500 id = 24 }
      name  = "1st Destroyer Flotilla"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  # 1st Transport Flotilla#
  navalunit =
  { id       = { type = 10500 id = 25 }
    name     = "Transport Flotilla"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id   = { type = 10500 id = 26 }
      name = "HMAS Kanimbla Flotilla"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 10500 id = 27 }
    name     = "HM Australian Reserve Fleet"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id    = { type = 10500 id = 28 }
      name  = "HMAS Adelaide"
      type  = light_cruiser
      model = 0
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
  }
  navalunit =
  { id       = { type = 10500 id = 29 }
    name     = "Australian Transport Fleet"
    location = 1727 # Sydney
    base     = 1727
    division =
    { id   = { type = 10500 id = 30 }
      name = "1st Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 31 }
      name = "2nd Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 32 }
      name = "3rd Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 33 }
      name = "4th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 34 }
      name = "5th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 35 }
      name = "6th Transport Flotilla"
      type = transport
    }
    division =
    { id   = { type = 10500 id = 36 }
      name = "7th Transport Flotilla"
      type = transport
    }
  }
  # ################## Australian Air Force #######################
  # ## An approximation of the 13 squadron airforce in 1936.###
  airunit =
  { location = 1727
    base     = 1727
    id       = { type = 10500 id = 37 }
    name     = "No.1 RAAF Tactical Bomber Group"
    division =
    { id       = { type = 10500 id = 38 }
      name     = "No.1 RAAF Tactical Bomber Group"
      strength = 100
      type     = tactical_bomber
      model    = 1
    }
  }
  # Note on Warships Under Construction or Refit#
  # HMAS Adelaide was refitted by 1939.
  # Adelaide had a max speed of only 24 knots.

	province_development = { 
		id = { type = 10500 id = 39 } 
		name = "" 
		progress = 0.0000 
		location = 1727 
		cost = 5.0000 
		date = { 
			year = 1938 
			month = august 
			day = 21 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 634 
		days_for_first = 317 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 10500 id = 40 } 
		name = "" 
		progress = 0.0000 
		location = 1728 
		cost = 5.0000 
		date = { 
			year = 1938 
			month = august 
			day = 21 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 1584 
		days_for_first = 317 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 10500 id = 41 } 
		name = "" 
		progress = 0.0000 
		location = 1730 
		cost = 5.0000 
		date = { 
			year = 1938 
			month = august 
			day = 21 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 634 
		days_for_first = 317 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 10500 id = 42 } 
		name = "" 
		progress = 0.0000 
		location = 1730 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = october 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1969 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 43 } 
		name = "" 
		progress = 0.0000 
		location = 1727 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = october 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1969 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 44 } 
		name = "" 
		progress = 0.0000 
		location = 1728 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = october 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1969 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	convoy_development = { 
		id = { type = 10500 id = 45 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1940 
			month = september 
			day = 9 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 76.0000 
		total_progress = 0.0000 
		size = 25 
		done = 0 
		days = 672 
		days_for_first = 79 
		gearing_bonus = 0.0000 
		type = transports 
		}
	province_development = { 
		id = { type = 10500 id = 49 } 
		name = "" 
		progress = 0.0000 
		location = 1718 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = may 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2288 
		days_for_first = 100 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 50 } 
		name = "" 
		progress = 0.0000 
		location = 1724 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = march 
			day = 3 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1969 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 51 } 
		name = "" 
		progress = 0.0000 
		location = 1729 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = july 
			day = 1 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2288 
		days_for_first = 150 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 52 } 
		name = "" 
		progress = 0.0000 
		location = 1734 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = march 
			day = 19 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2608 
		days_for_first = 100 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 53 } 
		name = "" 
		progress = 0.0000 
		location = 1726 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = march 
			day = 19 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2608 
		days_for_first = 100 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 54 } 
		name = "" 
		progress = 0.0000 
		location = 1713 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = february 
			day = 7 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 36 
		done = 0 
		days = 2927 
		days_for_first = 100 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 10500 id = 55 } 
		name = "" 
		progress = 0.0000 
		location = 1698 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = may 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2288 
		days_for_first = 100 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	brigade_development = { 
		id = { type = 10500 id = 46 } 
		name = "36' Capital AA" 
		progress = 0.0000 
		location = 1728 
		cost = 0.8800 
		date = { 
			year = 1936 
			month = may 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 38.0000 
		total_progress = 0.0000 
		size = 1 
		done = 0 
		days = 70 
		days_for_first = 92 
		gearing_bonus = 0.0000 
		type = naval_anti_air_l 
		model = 1 
		} 
	brigade_development = { 
		id = { type = 10500 id = 47 } 
		name = "36' Secondary Armament" 
		progress = 0.0000 
		location = 1728 
		cost = 0.4400 
		date = { 
			year = 1936 
			month = september 
			day = 3 
			hour = 0 
			} 
		manpower = 0.2000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 28.5000 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 110 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = naval_sa_l 
		model = 1 
		} 
	brigade_development = { 
		id = { type = 10500 id = 48 } 
		name = "36' AA" 
		progress = 0.0000 
		location = 1728 
		cost = 0.4400 
		date = { 
			year = 1938 
			month = january 
			day = 15 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 28.5000 
		total_progress = 0.0000 
		size = 9 
		done = 0 
		days = 710 
		days_for_first = 92 
		gearing_bonus = 0.0000 
		type = naval_anti_air_s 
		model = 1 
		} 
}
