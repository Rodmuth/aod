#####################
# Country main data #
#####################

country =
{ tag                    = CSX
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  puppet                 = CHI
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  consumer = 0.2143 
  supply = 0.2857 
  production = 0.5000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1225 # Taiyuan
  manpower               = 200 # 200 - building queue
  dissent                = 10

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
		relation = { tag = CGX value = 20 }
		relation = { tag = CHC value = -25 }
		relation = { tag = CHI value = 50 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 1 }
		relation = { tag = COS value = 1 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = 30 }
		relation = { tag = CYN value = 20 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 30 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 35 }
		relation = { tag = GER value = 40 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 1 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 35 }
		relation = { tag = JAP value = -50 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = -100 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = -25 }
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
		relation = { tag = SOV value = 35 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = 1 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 1 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 15 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "CSX" NumberOfSpies = 2 }
	SpyInfo = { country = "CGX" NumberOfSpies = 1 }
	SpyInfo = { country = "CHC" NumberOfSpies = 2 }
	SpyInfo = { country = "CHI" NumberOfSpies = 2 }
	SpyInfo = { country = "CXB" NumberOfSpies = 1 }
	SpyInfo = { country = "CYN" NumberOfSpies = 1 }
	SpyInfo = { country = "JAP" NumberOfSpies = 2 }
	SpyInfo = { country = "MAN" NumberOfSpies = 4 }
	SpyInfo = { country = "MON" NumberOfSpies = 1 }

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  # Shanxi
  nationalprovinces      = { 1207 1208 1272 1209 1225 1226 }
  ownedprovinces         = { 1207 1208 1272 1209 1225 1226 }
  # Shanxi
  controlledprovinces    = { 1207 1208 1272 1209 1225 1226 }
  # Shanxi
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 2290 2300 1010 1190 5080 } # allow digging
  blueprints             = { 6210 }

  headofstate            = { type = 9 id = 503001 }
  headofgovernment       = { type = 9 id = 503002 }
  foreignminister        = { type = 9 id = 503003 }
  armamentminister       = { type = 9 id = 503004 }
  ministerofsecurity     = { type = 9 id = 503005 }
  ministerofintelligence = { type = 9 id = 503006 }
  chiefofstaff           = { type = 9 id = 503007 }
  chiefofarmy            = { type = 9 id = 503008 }
  chiefofnavy            = { type = 9 id = 503009 }
  chiefofair             = { type = 9 id = 503010 }
  # ######
  # SHANXI Land 1936 OOB
  # TYPE: 22300
  # ######
  landunit =
  { location = 1225 # Taiyuan
    name     = "Shanxi Jingbei"
    # ## leader = # Yan Xishan
    id       = { type = 22300 id = 1 }
    division =
    { id       = { type = 22300 id = 2 }
      name     = "1. Duli Lü"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 3 }
      name     = "1. Qibing Shi"
      type     = cavalry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "3. Lujun"
    # ## leader = # Han Fuqu
    id       = { type = 22300 id = 4 }
    division =
    { id       = { type = 22300 id = 5 }
      name     = "22. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 6 }
      name     = "22. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1209 # Datong
    name     = "33. Jun"
    # ## leader = 50296 # Xu Yongchang
    id       = { type = 22300 id = 7 }
    division =
    { id    = { type = 22300 id = 8 }
      name  = "33. Jun"
      type  = infantry
      extra = artillery
      model = 0
    }
  }
  landunit =
  { location = 1226 # Changzhi
    name     = "34. Jun"
    # ## leader = # Yang Aiyuan
    id       = { type = 22300 id = 9 }
    division =
    { id       = { type = 22300 id = 10 }
      name     = "66. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 11 }
      name     = "71. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "35. Jun"
    # ## leader = # Fu Zuoyi
    id       = { type = 22300 id = 14 }
    division =
    { id       = { type = 22300 id = 15 }
      name     = "72. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "Suiyuan Jingbei"
    id       = { type = 22300 id = 16 }
    division =
    { id       = { type = 22300 id = 17 }
      name     = "Suiyuan Baoantui"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1205 # Beiping
    name     = "29. Jun"
    # ## leader = # Song Zheyuan
    id       = { type = 22300 id = 12 }
    division =
    { id       = { type = 22300 id = 13 }
      name     = "37. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 18 }
      name     = "37. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 19 }
      name     = "37. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 20 }
      name     = "37. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 21 }
      name     = "9. Qibing Shi"
      type     = cavalry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 22 }
      name     = "39. Duli Lü"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1210 # Baoding
    name     = "Hebei Jingbei"
    id       = { type = 22300 id = 23 }
    division =
    { id       = { type = 22300 id = 24 }
      name     = "Hebei Baoantui"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1206 # Kalgan
    name     = "Chahar Jingbei"
    id       = { type = 22300 id = 25 }
    division =
    { id       = { type = 22300 id = 26 }
      name     = "Chahar Baoantui"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "Ji-Cai-Sui-Jing Gongshu"
    # ## leader = #
    id       = { type = 22300 id = 27 }
    division =
    { id    = { type = 22300 id = 28 }
      name  = "Ji-Cai-Sui-Jing Gongshu"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "12. Jun"
    # ## leader = # Sun Tongxuan
    id       = { type = 22300 id = 29 }
    division =
    { id       = { type = 22300 id = 30 }
      name     = "20. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 31 }
      name     = "81. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "Shandong Jingbei"
    id       = { type = 22300 id = 32 }
    division =
    { id       = { type = 22300 id = 33 }
      name     = "Shandong Baoantui"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "13. Jun"
    # ## leader = 50278 # Tang Enbo
    id       = { type = 22300 id = 34 }
    division =
    { id    = { type = 22300 id = 35 }
      name  = "13. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1225 # Taiyuan
    name     = "19. Jun"
    # ## leader = # Li Shengda
    id       = { type = 22300 id = 36 }
    division =
    { id    = { type = 22300 id = 37 }
      name  = "19. Jun"
      type  = infantry
      extra = artillery
      model = 0
    }
  }
  landunit =
  { location = 1212 # Handan
    name     = "32. Jun"
    # ## leader = 50253 # Shang Zhen
    id       = { type = 22300 id = 38 }
    division =
    { id    = { type = 22300 id = 39 }
      name  = "32. Jun"
      type  = infantry
      model = 0
    }
  }

  landunit =
  { location = 1226 # Changzhi
    name     = "42. Jun"
    # ## leader = # ???
    id       = { type = 22300 id = 40 }
    division =
    { id    = { type = 22300 id = 41 }
      name  = "42. Jun"
      type  = infantry
      extra = artillery
      model = 0
    }
  }
  landunit =
  { location = 1210 # Baoding
    name     = "53. Jun"
    # ## leader = 50305 # Wan Fulin
    id       = { type = 22300 id = 42 }
    division =
    { id    = { type = 22300 id = 43 }
      name  = "53. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "63. Jun"
    # ## leader = # Feng Zhanhai
    id       = { type = 22300 id = 44 }
    division =
    { id    = { type = 22300 id = 45 }
      name  = "63. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "Dongbei Qibing Jun"
    # ## leader = 50091 # He Zhuguo
    id       = { type = 22300 id = 46 }
    division =
    { id    = { type = 22300 id = 47 }
      name  = "Dongbei Qibing Jun"
      type  = cavalry
      model = 0
    }
  }
  landunit =
  { location = 1225 # Taiyuan
    name     = "Shanxi Baoantui"
    # ## leader = #
    id       = { type = 22300 id = 48 }
    division =
    { id    = { type = 22300 id = 49 }
      name  = "Shanxi Baoantui"
      type  = militia
      model = 0
    }
  }  
#	province_development = { 
#		id = { type = 22300 id = 200 } 
#		name = "" 
#		progress = 0.0000 
#		location = 1225 
#		cost = 2.0000 
#		date = { 
#			year = 1957 
#			month = april 
#			day = 18 
#			hour = 0 
#			} 
#		manpower = 0.1000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 32 
#		done = 0 
#		days = 1195 
#		days_for_first = 300 
#		gearing_bonus = 0.0000 
#		type = infrastructure 
#		} 
}
