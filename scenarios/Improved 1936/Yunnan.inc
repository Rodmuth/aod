##############################
# Country definition for CYN #
##############################

country =
{ tag                    = CYN
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
  consumer = 0.0000 
  supply = 0.0500 
  production = 0.9500 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1307 # Kunming
  manpower               = 200 # 200 - building queue
  dissent                = 10

	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 20 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 1 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 1 }
		relation = { tag = CGX value = -5 }
		relation = { tag = CHC value = -10 }
		relation = { tag = CHI value = 45 }
		relation = { tag = CHL value = 1 }
		relation = { tag = COL value = 1 }
		relation = { tag = COS value = 1 }
		relation = { tag = CSX value = 20 }
		relation = { tag = CUB value = 1 }
		relation = { tag = CXB value = -15 }
		relation = { tag = CZE value = 1 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 1 }
		relation = { tag = ENG value = 30 }
		relation = { tag = EST value = 1 }
		relation = { tag = ETH value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 30 }
		relation = { tag = GER value = 20 }
		relation = { tag = GRE value = 1 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 1 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 40 }
		relation = { tag = IRE value = 1 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = 30 }
		relation = { tag = JAP value = -25 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 1 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = -30 }
		relation = { tag = MEX value = 1 }
		relation = { tag = MLY value = 20 }
		relation = { tag = MON value = 1 }
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
		relation = { tag = SIA value = 15 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 20 }
		relation = { tag = SPA value = 1 }
		relation = { tag = SPR value = 1 }
		relation = { tag = SWE value = 1 }
		relation = { tag = SCH value = 1 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = -10 }
		relation = { tag = TUR value = 1 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 15 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 1 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "CYN" NumberOfSpies = 1 }
	SpyInfo = { country = "CGX" NumberOfSpies = 2 }
	SpyInfo = { country = "CHC" NumberOfSpies = 1 }
	SpyInfo = { country = "CHI" NumberOfSpies = 2 }
	SpyInfo = { country = "CSX" NumberOfSpies = 1 }
	SpyInfo = { country = "CXB" NumberOfSpies = 2 }
	SpyInfo = { country = "FRA" NumberOfSpies = 2 }
	SpyInfo = { country = "IND" NumberOfSpies = 2 }
	SpyInfo = { country = "JAP" NumberOfSpies = 1 }
	SpyInfo = { country = "MLY" NumberOfSpies = 1 }
	SpyInfo = { country = "SIA" NumberOfSpies = 1 }
	SpyInfo = { country = "SIK" NumberOfSpies = 1 }
	SpyInfo = { country = "TIB" NumberOfSpies = 2 }

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
  nationalprovinces      = { 1293 1294 1305 1307 1308 1327 1362 1282 }
  ownedprovinces         = { 1293 1294 1305 1307 1308 1327 1362 1282 }
  controlledprovinces    = { 1293 1294 1305 1307 1308 1327 1362 1282 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 2290 1010 1190 5080 } # allow digging
  blueprints             = { 6210 }

  headofstate            = { type = 9 id = 501001 }
  headofgovernment       = { type = 9 id = 501002 }
  foreignminister        = { type = 9 id = 501003 }
  armamentminister       = { type = 9 id = 501004 }
  ministerofsecurity     = { type = 9 id = 501005 }
  ministerofintelligence = { type = 9 id = 501006 }
  chiefofstaff           = { type = 9 id = 501007 }
  chiefofarmy            = { type = 9 id = 501008 }
  chiefofnavy            = { type = 9 id = 501009 }
  chiefofair             = { type = 9 id = 501010 }

  nationalidentity = "policy_identity_parochial" 
  socialpolicy = "policy_social_conformism" 
  nationalculture = "policy_culture_conformist"

  # ######
  # CHINA 1936 OOB
  # ######
  landunit =
  { location = 1307 # Kunming
    name     = "Yunnan Jingbei"
    leader   = 501006 # Long Yun
    id       = { type = 22100 id = 1 }
    division =
    { id       = { type = 22100 id = 2 }
      name     = "21. Duli Lü"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 3 }
      name     = "22. Duli Lü"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 4 }
      name     = "23. Duli Lü"
      type     = infantry
      strength = 50
      model    = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "Sichuan Baoantui"
    # ## leader = #
    id       = { type = 22100 id = 5 }
    division =
    { id    = { type = 22100 id = 6 }
      name  = "Sichuan Baoantui"
      type  = militia
      model = 0
    }
  }
  landunit =
  { location = 1327 # Wenshan
    name     = "4. Jun"
    # ## leader = 50332 # Wu Qiwei
    id       = { type = 22100 id = 7 }
    division =
    { id    = { type = 22100 id = 8 }
      name  = "4. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "47. Jun"
    # ## leader = 50171 # Li Jiayu
    id       = { type = 22100 id = 9 }
    division =
    { id    = { type = 22100 id = 10 }
      name  = "47. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1282 # Kangding
    name     = "24. Jun"
    leader   = 501004 # Liu Wenhui
    id       = { type = 22100 id = 11 }
    division =
    { id       = { type = 22100 id = 12 }
      name     = "136. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 13 }
      name     = "137. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "21. Jun"
    # ## leader = 50207 # Liu Xiang
    id       = { type = 22100 id = 14 }
    division =
    { id    = { type = 22100 id = 15 }
      name  = "21. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "23. Jun"
    # ## leader = 50248 # Pan Wenhua
    id       = { type = 22100 id = 16 }
    division =
    { id    = { type = 22100 id = 17 }
      name  = "23. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "44. Jun"
    # ## leader = 50323 # Wang Zuanxu
    id       = { type = 22100 id = 18 }
    division =
    { id    = { type = 22100 id = 19 }
      name  = "44. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "45. Jun"
    # ## leader = 50284 # Deng Xihou
    id       = { type = 22100 id = 20 }
    division =
    { id    = { type = 22100 id = 21 }
      name  = "45. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1327 # Wenshan
    name     = "7. Lujun"
    # ## leader = #
    id       = { type = 22100 id = 22 }
    division =
    { id    = { type = 22100 id = 23 }
      name  = "7. Lujun"
      type  = infantry
      model = 0
    }
  }

  landunit =
  { location = 1327 # Wenshan
    name     = "5. Jun"
    # ## leader = 50115 # Xue Yue
    id       = { type = 22100 id = 24 }
    division =
    { id    = { type = 22100 id = 25 }
      name  = "5. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "20. Jun"
    # ## leader = 50343 # Yang Sen
    id       = { type = 22100 id = 26 }
    division =
    { id    = { type = 22100 id = 27 }
      name  = "20. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "Guizhou Silingbu"
    # ## leader = #
    id       = { type = 22100 id = 28 }
    division =
    { id    = { type = 22100 id = 29 }
      name  = "Guizhou Silingbu"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "Guizhou Baoantui"
    # ## leader = #
    id       = { type = 22100 id = 30 }
    division =
    { id    = { type = 22100 id = 31 }
      name  = "Guizhou Baoantui"
      type  = militia
      model = 0
    }
  } 

}
