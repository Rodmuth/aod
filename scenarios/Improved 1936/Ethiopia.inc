##############################
# Country definition for ETH #
##############################

country =
{ tag                    = ETH
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2000 
  supply = 0.0000 
  production = 0.0000 
  reinforcement = 0.8000 
  upgrading = 0.0000 
  capital                = 1046
  manpower               = 80 # 80 - "building queue"
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 3
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 2
  }
  nationalprovinces      = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 1033 1038 1039 }
  ownedprovinces         = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 }
  controlledprovinces    = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 }
	diplomacy = {
		relation = { tag = AFG value = 1 }
		relation = { tag = ALB value = 1 }
		relation = { tag = ARG value = 1 }
		relation = { tag = AST value = 30 }
		relation = { tag = AUS value = 1 }
		relation = { tag = BEL value = 20 }
		relation = { tag = BHU value = 1 }
		relation = { tag = BOL value = 1 }
		relation = { tag = BRA value = 1 }
		relation = { tag = BUL value = 1 }
		relation = { tag = CAN value = 30 }
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
		relation = { tag = CZE value = 30 }
		relation = { tag = DEN value = 1 }
		relation = { tag = DOM value = 1 }
		relation = { tag = ECU value = 1 }
		relation = { tag = EGY value = 45 }
		relation = { tag = ENG value = 65 }
		relation = { tag = EST value = 1 }
		relation = { tag = FIN value = 1 }
		relation = { tag = FRA value = 50 }
		relation = { tag = GER value = 10 }
		relation = { tag = GRE value = 20 }
		relation = { tag = GUA value = 1 }
		relation = { tag = HAI value = 1 }
		relation = { tag = HOL value = 20 }
		relation = { tag = HON value = 1 }
		relation = { tag = HUN value = 1 }
		relation = { tag = IND value = 1 }
		relation = { tag = IRE value = 35 }
		relation = { tag = IRQ value = 1 }
		relation = { tag = ITA value = -200 }
		relation = { tag = JAP value = 15 }
		relation = { tag = LAT value = 1 }
		relation = { tag = LIB value = 30 }
		relation = { tag = LIT value = 1 }
		relation = { tag = LUX value = 1 }
		relation = { tag = MAN value = 1 }
		relation = { tag = MEX value = 20 }
		relation = { tag = MLY value = 1 }
		relation = { tag = MON value = 1 }
		relation = { tag = NEP value = 1 }
		relation = { tag = NIC value = 1 }
		relation = { tag = NOR value = 1 }
		relation = { tag = NZL value = 20 }
		relation = { tag = OMN value = 1 }
		relation = { tag = PAN value = 1 }
		relation = { tag = PAR value = 1 }
		relation = { tag = PER value = 1 }
		relation = { tag = PHI value = 1 }
		relation = { tag = POL value = 5 }
		relation = { tag = POR value = 20 }
		relation = { tag = PRU value = 1 }
		relation = { tag = ROM value = 1 }
		relation = { tag = SAF value = 1 }
		relation = { tag = SAL value = 1 }
		relation = { tag = SAU value = 25 }
		relation = { tag = SIA value = 1 }
		relation = { tag = SIK value = 1 }
		relation = { tag = SOV value = 15 }
		relation = { tag = SPA value = 30 }
		relation = { tag = SPR value = 30 }
		relation = { tag = SWE value = 20 }
		relation = { tag = SCH value = 30 }
		relation = { tag = TAN value = 1 }
		relation = { tag = TIB value = 1 }
		relation = { tag = TUR value = 35 }
		relation = { tag = U27 value = 1 }
		relation = { tag = URU value = 1 }
		relation = { tag = USA value = 30 }
		relation = { tag = VEN value = 1 }
		relation = { tag = YEM value = 20 }
		relation = { tag = YUG value = 1 }
	}

	SpyInfo = { country = "ETH" NumberOfSpies = 2 }
	SpyInfo = { country = "EGY" NumberOfSpies = 2 }
	SpyInfo = { country = "ENG" NumberOfSpies = 2 }
	SpyInfo = { country = "FRA" NumberOfSpies = 1 }
	SpyInfo = { country = "GER" NumberOfSpies = 1 }
	SpyInfo = { country = "ITA" NumberOfSpies = 2 }
	SpyInfo = { country = "OMN" NumberOfSpies = 1 }
	SpyInfo = { country = "SAU" NumberOfSpies = 1 }
	SpyInfo = { country = "SCH" NumberOfSpies = 1 }
	SpyInfo = { country = "TUR" NumberOfSpies = 1 }
	SpyInfo = { country = "YEM" NumberOfSpies = 1 }

  headofstate            = { type = 9 id = 65001 }
  headofgovernment       = { type = 9 id = 65002 }
  foreignminister        = { type = 9 id = 65003 }
  armamentminister       = { type = 9 id = 65004 }
  ministerofsecurity     = { type = 9 id = 65005 }
  ministerofintelligence = { type = 9 id = 65006 }
  chiefofstaff           = { type = 9 id = 65007 }
  chiefofarmy            = { type = 9 id = 65008 }
  chiefofnavy            = { type = 9 id = 65009 }
  chiefofair             = { type = 9 id = 65010 }
####################################################################################
#OOB Ethiopian Troops - Second Italo Abyssinian War 1935-1936 by Cardus
# ref. http://en.wikipedia.org/wiki/Ethiopian_Order_of_Battle_Second_Italo-Abyssinian_War
# ref http://it.wikipedia.org/wiki/Guerra_d%27Etiopia
# ref http://en.wikipedia.org/wiki/Ethiopian_Air_Force#Early_years_.281929-1935.29
#####################################################################################

  landunit =
  { id       = { type = 31000 id = 1 }
    location = 1046
    name     = "Imperial Army"
    division =
    { id       = { type = 31000 id = 2 }
      name     = "Imperial Guard Kebur Zabangna"
      type     = infantry
      strength = 30
      model    = 1
    }
  division =
    { id       = { type = 31000 id = 3 }
      name     = "Cadet school"
      type     = militia
      strength = 70
      model    = 1
    }
  }
  landunit =
  { id       = { type = 31000 id = 4 }
    location = 1048
    name     = "Army of the Left"
	# Ras Imru Haile Selassie
    division =
    { id       = { type = 31000 id = 5 }
      name     = "Gojjam  Provincial Armed Forces"
	  # Ras Imru Haile Selassie
      type     = infantry
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 31000 id = 6 }
      name     = "Wolqayt and Semien Sefari"
	  # Fitawrari Ayalew Birru
      type     = bergsjaeger
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 7 }
      name     = "Gojjam Levies"
	  #Dejazmach Gessesse Belew  (later deserted, revolted) 
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 31000 id = 8 }
    location = 1043
    name     = "Mahel Sefari" #Army of the Center - 70,000 regulars
	#Ras  Mulugeta Yeggazu of Illubabor
    division =
    { id       = { type = 31000 id = 9 }
      name     = "Amino Provincial Sefari"
      type     = infantry
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 10 }
      name     = "Gubba Provincial Sefari"
      type     = infantry
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 11 }
      name     = "Gurage Provincial Sefari"
      type     = infantry
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 12 }
      name     = "Jimma Provincial Sefari"
      type     = infantry
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 13	}
      name     = "Mui Provincial Sefari"
      type     = infantry
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 14 }
      name     = "Mui Provincial Sefari"
      type     = infantry
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 15 }
      name     = "Om Provincial Sefari"
      type     = infantry
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 16 }
      name     = "Sela Provincial Sefari"
      type     = infantry
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 17 }
      name     = "Sodo Provincial Sefari"
      type     = infantry
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 18 }
      name     = "Welega Provincial Sefari"
      type     = infantry
      strength = 70
      model    = 0
    }
  }
  landunit =
  { id       = { type = 31000 id = 19 }
    location = 1049
    name     = "Army of the Right" # about 50,000 men
	#Ras Kassa Haile Darge (Qegnazmach = "General/Commander of the right")
    division =
    { id       = { type = 31000 id = 20 }
      name     = "1. Begemder  Sefari"
      type     = militia
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 21 }
      name     = "2. Begemder  Sefari"
      type     = militia
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 22 }
      name     = "3. Begemder  Sefari"
      type     = militia
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 23 }
      name     = "4. Begemder  Sefari"
      type     = militia
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 24 }
      name     = "5. Begemder  Sefari"
      type     = militia
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 25 }
      name     = "Tigray Sefari Sefari"
	  # Leul Ras Seyum Mangasha
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 26 }
      name     = "1. Wag Sefari"
	  #Dejazmatch Haile Kebbede
      type     = militia
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 27 }
      name     = "2. Wag Sefari"
	  #Dejazmatch Haile Kebbede
      type     = infantry
      strength = 30
      model    = 1
    }
    division =
    { id       = { type = 31000 id = 28 }
      name     = "Lasta Sefari"
	  #Fitawrari Andarge
      type     = infantry
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 29 }
      name     = "Yejju Sefari"
	  #Dejazmach Admassu Birru
      type     = infantry
      strength = 70
      model    = 0
    }
  }
  landunit =
  { id       = { type = 31000 id = 30 }
    location = 1049
    name     = "Danakil Army"
	#Dejazmach Kassa Sebhat
    division =
    { id       = { type = 31000 id = 31 }
      name     = "Ifrata Sefari"
	  #Ras Kebbede
      type     = infantry
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 32 }
      name     = "Welega-Ardjo Sefari"
	  #Bitwoded Makonnen Demissie
      type     = infantry
      strength = 100
      model    = 1
	  extra = anti_air
    }
    division =
    { id       = { type = 31000 id = 33 }
      name     = "Kaffa Sefari"
	  #Ras Getachew Abate
      type     = infantry
      strength = 70
      model    = 0
    }
  }
 
  landunit =
  { id       = { type = 31000 id = 34 }
    location = 1046
    name     = "Wollo Army" # To subdue Gojjam revolt
	#Crown Prince Asfaw Wossen Tafari
    division =
    { id       = { type = 31000 id = 35 }
      name     = "Wollo Sefari"
	  #Nevraid Aregai
      type     = infantry
      strength = 10
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 36 }
      name     = "Lekemt Sefari"
	  #Dejazmach Hapte Gabre Mariam Gabre
      type     = infantry
      strength = 10
      model    = 0
    }
 }
  landunit =
  { id       = { type = 31000 id = 37 }
    location = 1054
    name     = "Ogaden Army"
	#Grazmach Afawarq Walda Samayat
    division =
    { id       = { type = 31000 id = 38 }
      name     = "Ogaden Sefari"
      type     = infantry
      strength = 30
      model    = 0
	  extra = artillery
	}
 }  
  landunit =
  { id       = { type = 31000 id = 39 }
    location = 1054
    name     = "Hararghe  Sefari"
	#Grazmach Afawarq Walda Samayat
    division =
    { id       = { type = 31000 id = 40 }
      name     = "Guard Battalion"
      type     = infantry
      strength = 10
      model    = 1
	}
    division =
    { id       = { type = 31000 id = 41 }
      name     = "Illubabor Sefari"
	  #Dejazmach Makonnen Endelkachew
      type     = infantry
      strength = 100
      model    = 0
	}
    division =
    { id       = { type = 31000 id = 42 }
      name     = "Gemu Gofa Battalion"
	  #Dejazmach Abebe Damtew
      type     = militia
      strength = 30
      model    = 0
	}
    division =
    { id       = { type = 31000 id = 43 }
      name     = "Arusi Sefari"
	  #Dejazmach Amde Mikael
      type     = militia
      strength = 30
      model    = 0
	}
    division =
    { id       = { type = 31000 id = 44 }
      name     = "Kula Sefari"
	  #Dejazmach Hapte Mikael
      type     = militia
      strength = 10
      model    = 0
	}
 }  
  landunit =
  { id       = { type = 31000 id = 45 }
    location = 1053
    name     = "Webi Shebelle Army"
	#Dejazmach Beine Merid
    division =
    { id       = { type = 31000 id = 46 }
      name     = "Bale Sefari"
      type     = militia
      strength = 40
      model    = 0
    }
 } 
  landunit =
  { id       = { type = 31000 id = 47 }
    location = 1053
    name     = "Juba Army"
	#Dejazmach Beine Merid
    division =
    { id       = { type = 31000 id = 48 }
      name     = "1. Sidamo Sefari"
	  #Ras Desta Damtew
      type     = infantry
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 31000 id = 49 }
      name     = "2. Sidamo Sefari"
	  #Fitawraris Ademe Anbassu and Tedeamme Zelleka
      type     = infantry
      strength = 100
      model    = 1
	  extra = anti_air
    }
    division =
    { id       = { type = 31000 id = 50 }
      name     = "Guards Battalion"
	  #Qegnazmach Bezibibeh Sileshi
      type     = infantry
      strength = 10
      model    = 1
    }
 } 

   airunit =
  { location = 1046
    base     = 1046
    id       = { type = 31000 id = 51 }
    name     = "Imperial Ethiopian Air Force"
	#Hubert Julian - Head of Ethiopian Air Force ref http://en.wikipedia.org/wiki/Hubert_Julian
    division =
    { id       = { type = 31000 id = 52 }
      name     = "Imperial fighter bomber wing"
      strength = 10
      type     = interceptor
      model    = 0
    }
  }

 }
