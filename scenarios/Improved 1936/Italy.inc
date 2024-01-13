##############################
# Country definition for ITA #
##############################

province =
{ id         = 534
  oilpool    = 100
  supplypool = 150 # was 800
}              # Sardinia
province =
{ id         = 932
  oilpool    = 100
  supplypool = 150 # was 200
}              # Tripoli
province =
{ id         = 1033
  oilpool    = 100
  supplypool = 300
}              # Massaua

province = { id = 1056 oilpool = 100 supplypool = 300 } # Mogadishu

#####################
# Country main data #
#####################

country =
{ tag                    = ITA
  manpower               = 893  # 900 - building queue
  # Resource Reserves
  energy                 = 10912
  metal                  = 4385
  rare_materials         = 1892
  oil                    = 882
  supplies               = 9472
  money                  = 300
  consumer = 0.1627 
  supply = 0.0000 
  production = 0.3373 
  reinforcement = 0.5000 
  upgrading = 0.0000 
  belligerence           = 0 # to avoid MP problems
  capital                = 515
  transports             = 620
  escorts                = 20

  diplomacy = {
    relation = { tag = AFG value =    1 }
    relation = { tag = ALB value =  -20 guaranteed = { day = 17 month = march year = 1934 } }
    relation = { tag = ARG value =   20 }
    relation = { tag = AST value =   25 }
    relation = { tag = AUS value =   75 guaranteed = { day = 17 month = march year = 1934 } }
    relation = { tag = BEL value =   25 }
    relation = { tag = BHU value =    1 }
    relation = { tag = BOL value =   15 }
    relation = { tag = BRA value =   40 }
    relation = { tag = BUL value =   25 }
    relation = { tag = CAN value =   25 }
    relation = { tag = CGX value =   45 }
    relation = { tag = CHC value =  -15 }
    relation = { tag = CHI value =   40 }
    relation = { tag = CHL value =   20 }
    relation = { tag = COL value =   25 }
    relation = { tag = COS value =   10 }
    relation = { tag = CSX value =   35 }
    relation = { tag = CUB value =   10 }
    relation = { tag = CXB value =   30 }
    relation = { tag = CYN value =   30 }
    relation = { tag = CZE value =   40 }
    relation = { tag = DEN value =   30 }
    relation = { tag = DOM value =   15 }
    relation = { tag = ECU value =   30 }
    relation = { tag = EGY value =   35 }
    relation = { tag = ENG value =   40 }
    relation = { tag = EST value =   20 }
    relation = { tag = ETH value = -200 }
    relation = { tag = FIN value =   40 }
    relation = { tag = FRA value =   35 }
    relation = { tag = GER value =   45 }
    relation = { tag = GRE value =   -5 guaranteed = { day = 17 month = march year = 1934 } }
    relation = { tag = GUA value =   15 }
    relation = { tag = HAI value =   15 }
    relation = { tag = HOL value =   30 }
    relation = { tag = HON value =   15 }
    relation = { tag = HUN value =   40 guaranteed = { day = 17 month = march year = 1934 } }
    relation = { tag = IND value =    1 }
    relation = { tag = IRE value =   30 }
    relation = { tag = IRQ value =   35 }
    relation = { tag = JAP value =   30 }
    relation = { tag = LAT value =   25 }
    relation = { tag = LIB value =    1 }
    relation = { tag = LIT value =   25 }
    relation = { tag = LUX value =   35 }
    relation = { tag = MAN value =   25 }
    relation = { tag = MEX value =   40 }
    relation = { tag = MLY value =    1 }
    relation = { tag = MON value =  -15 }
    relation = { tag = NEP value =    1 }
    relation = { tag = NIC value =   15 }
    relation = { tag = NOR value =   30 }
    relation = { tag = NZL value =   30 }
    relation = { tag = OMN value =    1 }
    relation = { tag = PAN value =   35 }
    relation = { tag = PAR value =   25 }
    relation = { tag = PER value =   40 }
    relation = { tag = PHI value =   15 }
    relation = { tag = POL value =   30 }
    relation = { tag = POR value =   35 }
    relation = { tag = PRU value =   30 }
    relation = { tag = ROM value =   35 guaranteed = { day = 17 month = march year = 1934 } }
    relation = { tag = SAF value =   35 }
    relation = { tag = SAL value =   15 }
    relation = { tag = SAU value =   30 }
    relation = { tag = SIA value =   20 }
    relation = { tag = SIK value =   15 }
    relation = { tag = SOV value =   20 }
    relation = { tag = SPA value =   35 }
    relation = { tag = SPR value =   15 }
    relation = { tag = SWE value =   35 }
    relation = { tag = SCH value =   50 }
    relation = { tag = TAN value =  -15 }
    relation = { tag = TIB value =    5 }
    relation = { tag = TUR value =   40 guaranteed = { day = 17 month = march year = 1934 } }
    relation = { tag = U27 value =    1 }
    relation = { tag = URU value =   20 }
    relation = { tag = USA value =   35 }
    relation = { tag = VEN value =   35 }
    relation = { tag = YEM value =    1 }
    relation = { tag = YUG value =   40 }
  }

  SpyInfo = { country = "ITA" NumberOfSpies = 6 }
  SpyInfo = { country = "ALB" NumberOfSpies = 6 }
  SpyInfo = { country = "ARG" NumberOfSpies = 1 }
  SpyInfo = { country = "AUS" NumberOfSpies = 4 }
  SpyInfo = { country = "BRA" NumberOfSpies = 1 }
  SpyInfo = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo = { country = "CGX" NumberOfSpies = 1 }
  SpyInfo = { country = "CHI" NumberOfSpies = 2 }
  SpyInfo = { country = "CSX" NumberOfSpies = 1 }
  SpyInfo = { country = "CXB" NumberOfSpies = 1 }
  SpyInfo = { country = "CYN" NumberOfSpies = 1 }
  SpyInfo = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo = { country = "EGY" NumberOfSpies = 4 }
  SpyInfo = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo = { country = "ETH" NumberOfSpies = 8 }
  SpyInfo = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo = { country = "GER" NumberOfSpies = 3 }
  SpyInfo = { country = "GRE" NumberOfSpies = 4 }
  SpyInfo = { country = "HUN" NumberOfSpies = 1 }
  SpyInfo = { country = "IRQ" NumberOfSpies = 2 }
  SpyInfo = { country = "PAN" NumberOfSpies = 1 }
  SpyInfo = { country = "PER" NumberOfSpies = 1 }
  SpyInfo = { country = "POR" NumberOfSpies = 1 }
  SpyInfo = { country = "ROM" NumberOfSpies = 1 }
  SpyInfo = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo = { country = "SPR" NumberOfSpies = 4 }
  SpyInfo = { country = "SCH" NumberOfSpies = 2 }
  SpyInfo = { country = "TUR" NumberOfSpies = 2 }
  SpyInfo = { country = "USA" NumberOfSpies = 2 }
  SpyInfo = { country = "YUG" NumberOfSpies = 6 }
  SpyInfo = { country = "CRO" NumberOfSpies = 3 }
  SpyInfo = { country = "SPA" NumberOfSpies = 4 }

  nationalidentity = "policy_identity_parochial"
	socialpolicy = "policy_social_conformism"
	nationalculture = "policy_culture_ethnic"

  # Somaliland
  nationalprovinces      = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534 367 527 366 }
  ownedprovinces         = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398 
                             399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
                             1039 1038 1034 1055 1056 1058
                           }
  # Somaliland
  controlledprovinces    = { 525  526  524  523  522  521  520  519  518  517  516  515  513  514  512  379  369  368  531  370  371  378  534  398 
                             399  927  933  932  930  929  925  924  923  922  921  920  919  916  917  918  926  928  931  1017 1018 1016 1015 1033
                             1039 1038 1034 1055 1056 1058
                           }
  # ITA 1936 techs
  # ######################
  # Early fighter
  techapps               = { 8310  4020  6120  4010  4120  4130  4190  4250     2010  2020  2030  2290  2300  2310  2450  1010  1020  1190  1200  1110  5010 
                             5080  5090  5190  5310  5320  5470  5480  9010  9020  9030  6010  6030  8010  8020  8030  8040  8050  8070  3010  3160
                             3020  3030  3070  3080  3090  3130  3140  3150  3190  3250  3260  3270  3280  3290  3400  3410  3420  14000 3100  3320  5020 8130 2150 
			     #1070 #Paratroopers
                           }
  blueprints             = { 4170 1070 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 4
    free_market       = 7
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 3001 }
  headofgovernment       = { type = 9 id = 3002 }
  foreignminister        = { type = 9 id = 3003 }
  armamentminister       = { type = 9 id = 3076 }
  ministerofsecurity     = { type = 9 id = 3005 }
  ministerofintelligence = { type = 9 id = 3006 }
  chiefofstaff           = { type = 9 id = 3007 }
  chiefofarmy            = { type = 9 id = 3008 }
  chiefofnavy            = { type = 9 id = 3009 }
  chiefofair             = { type = 9 id = 3010 }

 ###############################################
 ############ Land OOB #########################
 ###############################################
  landunit =
  { id       = { type = 23500 id = 1 }
    location = 531 # Turin
    name     = "1a Armata"
    division =
    { id            = { type = 23500 id = 3 }
      name          = "22a Divisione 'Cacciatori delle Alpi'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 4 }
    location = 531 # Turin
    name     = "II Corpo d'Armata"
    division =
    { id       = { type = 23500 id = 5 }
      name     = "4a Divisione 'Livorno'"
      type     = infantry
      strength = 70
      model    = 1
    }
    division =
    { id       = { type = 23500 id = 6 }
      name     = "25a Divisione 'Bologna'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 7 }
      name     = "4a Divisione Alpina 'Cuneense'"
      type     = bergsjaeger
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 8 }
    location = 531 # Turin
    name     = "III Corpo d'Armata"
    division =
    { id       = { type = 23500 id = 9 }
      name     = "3a Divisione 'Ravenna'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 10 }
      name     = "6a Divisione 'Cuneo'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 11 }
    location = 378 # Venezia
    name     = "2a Armata"
    division =
    { id            = { type = 23500 id = 12 }
      name          = "13a Divisione 'Re'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 13 }
    location = 378 # Venezia
    name     = "V Corpo d'Armata"
    # Gen. R. Balocco#
    division =
    { id       = { type = 23500 id = 14 }
      name     = "12a Divisione 'Sassari'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 15 }
      name     = "15a Divisione 'Bergamo'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 16 }
    location = 378 # Venezia
    name     = "VIII Corpo d'Armata"
    # Gen. F Gambelli#
    division =
    { id       = { type = 23500 id = 17 }
      name     = "9a Divisione 'Pasubio'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 18 }
      name     = "10a Divisione 'Piave'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 19 }
    location = 378 # Venezia
    name     = "XI Corpo d'Armata"
    # Gen. C. Mercalli#
    division =
    { id       = { type = 23500 id = 20 }
      name     = "14a Divisione 'Isonzo'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 21 }
      name     = "3a Divisione Alpina 'Julia'"
      type     = bergsjaeger
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 2 }
    location = 919
    name     = "Comando Superiore FF.AA. Africa SETT"
    division =
    { id       = { type = 23500 id = 22 }
      name     = "18a Divisione 'Messina'"
      type     = infantry
      model    = 1
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 78 }
      name     = "7a Divisione CC.NN. 'Cirene'"
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 23 }
    location = 378 # Venezia
    name     = "Corpo d'Armata Celere"
    # Gen. G. Messe#
    division =
    { id       = { type = 23500 id = 24 }
      name     = "1a Divisione 'Eugenio di Savoia'"
      type     = cavalry
      strength = 70
      model    = 1
    }
    division =
    { id       = { type = 23500 id = 25 }
      name     = "2a Divisione 'Emanuele Filiberto'"
      type     = cavalry
      strength = 70
      model    = 1
    }
    division =
    { id       = { type = 23500 id = 26 }
      name     = "3a Divisione 'Principe Amedeo'"
      type     = cavalry
      strength = 70
      model    = 1
      extra    = armored_car
    }
  }
  landunit =
  { id       = { type = 23500 id = 27 }
    location = 524 # Reggio di Calabria
    name     = "3a Armata"
    division =
    { id            = { type = 23500 id = 28 }
      name          = "16a Divisione 'Pistoia'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 30 }
    location = 524 # Reggio di Calabria
    name     = "VII Corpo d'Armata"
    # Gen. A. Agromini#
    division =
    { id       = { type = 23500 id = 31 }
      name     = "7a Divisione 'Lupi di Toscana'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 32 }
      name     = "20a Divisione 'Friuli'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 33 }
    location = 524 # Reggio di Calabria
    name     = "IX Corpo d'Armata"
    # Gen. C.Rossi#
    division =
    { id       = { type = 23500 id = 34 }
      name     = "17a Divisione 'Pavia'"
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 35 }
      name     = "23a Divisione 'Ferrara'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 36 }
    location = 525 # Palermo
    name     = "XII Corpo d'Armata"
    # Gen. A.Rossi#
    division =
    { id       = { type = 23500 id = 37 }
      name     = "28a Divisione 'Aosta'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 38 }
    location = 525 # Palermo
    name     = "XIII Corpo d'Armata"
    division =
    { id       = { type = 23500 id = 39 }
      name     = "31a Divisione 'Calabria'"
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 40 }
    location = 368 # Genoa
    name     = "4a Armata"
    # Gen. A Guzzoni#
    division =
    { id            = { type = 23500 id = 41 }
      name          = "11a Divisione 'Brennero'"
      type          = infantry
      extra         = artillery
      brigade_model = 2
      strength      = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 43 }
    location = 368 # Genoa
    name     = "I Corpo d'Armata"
    # Gen. C. Vecchiarelli#
    division =
    { id       = { type = 23500 id = 44 }
      name     = "1a Divisione 'Superga'"
      type     = infantry
      extra    = armored_car
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 45 }
    location = 368 # Genoa
    name     = "IV Corpo d'Armata"
    # Gen. C. Mercalli#
    division =
    { id       = { type = 23500 id = 46 }
      name     = "2a Divisione 'Sforzesca'"
      type     = infantry
      extra    = armored_car
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 47 }
    location = 368 # Genoa
    name     = "Corpo d'Armata Alpino"
    # Gen. L. Negri#
    division =
    { id       = { type = 23500 id = 48 }
      name     = "1a Divisione Alpina 'Taurinense'"
      type     = bergsjaeger
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 49 }
      name     = "2a Divisione Alpina 'Tridentina'"
      type     = bergsjaeger
      strength = 70
    }
  }
  landunit =
  { id       = { type = 23500 id = 50 }
    location = 515 # Roma
    name     = "Riserva Centrale"
    division =
    { id       = { type = 23500 id = 190 }
      name     = "Q.G. Forze Armate"   #new hq
      type     = hq
      model    = 0
      strength = 70
    }
    division =
    { id       = { type = 23500 id = 51 }
      name     = "21a Divisione 'Granatieri di Sardegna'"
      type     = infantry
      strength = 70		#reduced the strenght
    }
    #removed from AOI and placed in Rome as central reserve, strenght reduced from 100 to 70
	division =
    { id       = { type = 23500 id = 61 }
      name     = "19a Divisione 'Venezia'"
      type     = infantry
      model    = 1
      extra    = armored_car
      strength = 70
   }
    division =
    { id       = { type = 23500 id = 62 }
      name     = "24a Divisione 'Pinerolo'"
      type     = infantry
      model    = 1
      strength = 70
   }
    division =
    { id       = { type = 23500 id = 65 }
      name     = "27a Divisione 'Brescia'"
      type     = infantry
      model    = 1
      strength = 70
    }
   division =
    { id       = { type = 23500 id = 75 }
      name     = "29a Divisione 'Piemonte'"
      type     = infantry
      model    = 1
      strength = 70
    }
 }
####################################################################################
#OOB Italian Troops Campagna d'Africa 1935-1936 by Cardus
# ref. http://www.regioesercito.it/reparti/mvsn/mvsn_et35.htm
# ref http://digilander.libero.it/fiammecremisi/dopoguerra1/etiopia.htm
# ref http://it.wikipedia.org/wiki/Guerra_d%27Etiopia
# ref http://www.aeronautica.difesa.it/storiaTradizione/LaStoria/Pagine/guerreEtiopiaSpagna.aspx
#####################################################################################

  landunit =
  { id       = { type = 23500 id = 52 }
    location = 1033
    name     = "Comando Superiore dell'A.O.I."
	#Maresciallo Badoglio#
    division =
    { id       = { type = 23500 id = 53 }
      name     = "Q.G. Armata dell'A.O.I."
      type     = hq
      model    = 0
      extra = engineer
      strength = 100
    }
    #Div Gran Sasso is with the II CORPO D'ARMATA
    #Div Sila is with the III CORPO D'ARMATA
	#CC.NN. '1 Febbraio'is with IV CORPO D'ARMATA
	#6a Divisione CC.NN. 'Tevere' is with Forze Armate della Somalia
    division =
    { id       = { type = 23500 id = 59 }
      name     = "4a Divisione CC.NN. '3 Gennaio'"
	  #Gen. Alessandro Traditi
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 55 }
    location = 1038
    name     = "I Corpo d'Armata dell'A.O.I."
    # Gen. Santini
    division =
    { id       = { type = 23500 id = 56 }
      name     = "26a Divisione 'Assietta'"
      #Gen. Enrico Riccardi
	  type     = infantry
      model    = 1
	  extra = artillery
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 57 }
      name     = "30a Divisione 'Sabauda'"
      #
	  type     = infantry
      model    = 1
	  extra = artillery	  
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 58 }
      name     = "5a Divisione Alpina 'Pusteria'"
      type     = bergsjaeger
	  extra = artillery	  
      strength = 100
    }
    division =
	{ id       = { type = 23500 id = 180 }
      name     = "V-XV Indigeni e banda 'Scimezana'"
      type     = militia
      strength = 100
	  extra = armored_car
    }
  }
  landunit =
  { id       = { type = 23500 id = 60 }
    location = 1039
    name     = "II Corpo d'Armata dell'A.O.I."
    # Gen. Maravigna
#    division =
#    { id       = { type = 23500 id = 61 }
#      name     = "19a Divisione 'Venezia'"
#      type     = infantry
#      model    = 1
#      extra    = armored_car
#      strength = 100
#   }
#    division =
#    { id       = { type = 23500 id = 62 }
#      name     = "24a Divisione 'Pinerolo'"
#      type     = infantry
#      model    = 1
#      strength = 70
#   }
    division =
	{ id       = { type = 23500 id = 181 }
      name     = "19a Divisione 'Gavinana'"
	  #Gen. Nino Villasanta
      type     = infantry
      model    = 1
	  extra = artillery	  
      strength = 100
    }
    division =
    { id            = { type = 23500 id = 182 }
      name          = "24a Divisione 'Gran Sasso'"
	  #Gen. A.R. Adalberto di Savoia
      type          = infantry
      model         = 1
      extra = artillery
      strength      = 100
    }
    division =
    { id       = { type = 23500 id = 63 }
      name     = "3a Divisione CC.NN. '21 Aprile'"
	  #Gen. Giacomo Appiotti
      type     = militia
	  extra = artillery
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 184 }
      name     = "Gr. Bande Altopiano - Seraé, Cheren and Hamasien"
	  type     = militia
	  extra = armored_car
      strength = 100
    }
  } 

  landunit =
  { id       = { type = 23500 id = 64 }
    location = 1038
    name     = "III Corpo d'Armata dell'A.O.I."
    # Gen. Bastico
#    division =
#    { id       = { type = 23500 id = 65 }
#      name     = "27a Divisione 'Brescia'"
#      type     = infantry
#      model    = 1
#      strength = 100
#    }
	division =
    { id            = { type = 23500 id = 183 }
      name          = "27a Divisione 'Sila'"
	  #Gen. Francesco Bertini
      type          = infantry
      model         = 1
      extra = artillery
      strength      = 100
    }
    division =
    { id       = { type = 23500 id = 66 }
      name     = "1a Divisione CC.NN. '23 Marzo'"
	  #Gen. Domenico Siciliani
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 67 }
    location = 1039
    name     = "IV Corpo d'Armata dell'A.O.I."
    # Gen. Babbini#
    division =
    { id       = { type = 23500 id = 68 }
      name     = "5a Divisione 'Cosseria'"
	  #Gen. Adolfo Olivetti
      type     = infantry
      model    = 1
	  extra = artillery
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 69 }
      name     = "2a Divisione CC.NN. '28 Ottobre'"
	  #Gen. Umberto Somma
      type     = militia
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 70 }
      name     = "5a Divisione CC.NN. '1 Febbraio'"
	  #Gen. Attilio Teruzzi
      type     = militia
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 71 }
    location = 1039
    name     = "Corpo d'Armata Eritreo"
    # Gen. Pirzio Biroli#
    division =
    { id       = { type = 23500 id = 72 }
      name     = "1a Divisione 'Eritrea'"
      type     = infantry
      model    = 1
  	  extra = artillery
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 73 }
      name     = "2a Divisione 'Eritrea'"
      type     = infantry
      model    = 1
  	  extra = artillery
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 185 }
      name     = "1° Gr. Btg CC.NN. dell'Eritrea"
      type     = militia
  	  extra = artillery
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 186 }
      name     = "Gr. squadroni cavalleria indigena"
      type     = cavalry
 	  extra = armored_car 
	  strength = 100
    }
    division =
    { id       = { type = 23500 id = 187 }
      name     = "Banda dell'Hassamò"
      type     = militia
  	  extra = artillery
      strength = 100
    }
  }
  landunit =
  { id       = { type = 23500 id = 74 }
    location = 1034 # Obbia
    name     = "Forze Armate della Somalia"
    # Gen. Graziani#
#    division =
#    { id       = { type = 23500 id = 75 }
#      name     = "29a Divisione 'Piemonte'"
#      type     = infantry
#      model    = 1
#     strength = 100
#    }
    division =
    { id       = { type = 23500 id = 188 }
      name     = "Q.G. Forze Armate della Somalia"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 189 }
      name     = "29a Divisione 'Peloritana'"
	  #Gen. sisto Bertoldi
      type     = infantry
	  model    = 1
	  extra = artillery
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 76 }
      name     = "Divisione 'Libia'"
	  #Gen. Guglielmo Nasi
      type     = infantry
	  model    = 1
  	  extra = artillery
      strength = 100
    }
    division =
    { id       = { type = 23500 id = 77 }
      name     = "6a Divisione CC.NN. 'Tevere'"
	  #Gen. Enrico Boscardi
      type     = militia
      strength = 100
    }
  } 
  # ###########################################
	### Italian Navy OOB ###
  # ###########################################
  navalunit =
  { id       = { type = 23500 id = 79 }
    name     = "Regia Marina"
    location = 523 # Taranto
    base     = 523
    division =
    { id    = { type = 23500 id = 200 }
      name  = "RN Giuseppe Miraglia"
      type  = escort_carrier
      model = 0
      extra1 = b_u1
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 80 }
      name  = "2a Divisione Torpediniere"
      type  = destroyer
      model = 1
      extra1 = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 81 }
      name  = "RN Andrea Doria"
      type  = battleship
      model = 2
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = none
      extra4 = naval_anti_air_l
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 23500 id = 82 }
      name  = "RN Caio Duilio"
      type  = battleship
      model = 2
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = none
      extra4 = naval_anti_air_l
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 23500 id = 83 }
      name  = "RN Campania"
      type  = heavy_cruiser
      model = 0
      extra1 = none
      extra2 = none
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 84 }
      name  = "RN San Marco"
      type  = heavy_cruiser
      model = 0
      extra1 = none
      extra2 = none
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 85 }
      name  = "RN San Giorgio"
      type  = heavy_cruiser
      model = 0
      extra1 = none
      extra2 = none
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 86 }
      name  = "RN Taranto"
      type  = light_cruiser
      model = 0
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 23500 id = 87 }
      name  = "RN Bari"
      type  = light_cruiser
      model = 0
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 23500 id = 88 }
      name  = "RN Libia"
      type  = light_cruiser
      model = 0
      extra1 = none
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 23500 id = 196 }
      name  = "RN Ancona"
      type  = light_cruiser
      model = 0
      extra1 = none
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 23500 id = 89 }
      name  = "17a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 90 }
      name  = "18a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 91 }
      name  = "2a Squadriglia Torpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 92 }
      name  = "3a Squadriglia Torpediniere"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 23500 id = 93 }
      name  = "21a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 94 }
      name  = "22a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 95 }
      name  = "6a Squadriglia Torpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 96 }
      name  = "7a Squadriglia Torpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 97 }
      name  = "15a Squadriglia Torpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 98 }
    name     = "1a Squadra di Marina"
    location = 523 # Taranto
    base     = 523
    division =
    { id    = { type = 23500 id = 99 }
      name  = "RN Zara"
      type  = heavy_cruiser
      model = 2
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 100 }
      name  = "RN Gorizia"
      type  = heavy_cruiser
      model = 2
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 101 }
      name  = "RN Fiume"
      type  = heavy_cruiser
      model = 2
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 102 }
      name  = "9a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 1
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 103 }
      name  = "Squadrone Giorgio Orsini"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 23500 id = 104 }
      name  = "Squadrone Tarquinia"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 105 }
    name     = "4a Squadra di Marina"
    location = 378 # Venice
    base     = 378
    division =
    { id       = { type = 23500 id = 106 }
      name     = "RN Alberico da Barbiano"
      type     = light_cruiser
      model    = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 107 }
      name  = "RN Luigi Cadorna"
      type  = light_cruiser
      model = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id       = { type = 23500 id = 108 }
      name     = "RN Alberto da Giussano"
      type     = light_cruiser
      model    = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 109 }
      name  = "RN Armando Diaz"
      type  = light_cruiser
      model = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 23500 id = 110 }
      name  = "Squadrone Aventino"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 111 }
    name     = "5a Squadra di Marina"
    location = 523 # Taranto
    base     = 523
    division =
    { id    = { type = 23500 id = 112 }
      name  = "7a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 2
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 113 }
      name  = "8a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 2
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 114 }
      name  = "Squadrone Sagittario"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 115 }
    name     = "8a Squadra di Marina"
    location = 378 # Venice
    base     = 378
    division =
    { id    = { type = 23500 id = 116 }
      name  = "16a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 195 }
    name     = "9a Squadra di Marina"
    location = 378 # Venice
    base     = 378
    division =
    { id    = { type = 23500 id = 179 }
      name  = "15a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 1
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 117 }
    name     = "9a Squadra di Marina"
    location = 523 # Taranto
    base     = 523
    division =
    { id    = { type = 23500 id = 118 }
      name  = "RN Pola"
      type  = heavy_cruiser
      model = 2
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 119 }
    name     = "19a Squadra di Marina"
    location = 932 # Tripoli
    base     = 932
    division =
    { id       = { type = 23500 id = 120 }
      name     = "RN Giovanni dalle Bande Nere"
      type     = light_cruiser
      model    = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 121 }
      name     = "RN Bartolomeo Colleoni"
      type     = light_cruiser
      model    = 1
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 122 }
      name  = "Squadrone Vallelunga"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 123 }
    name     = "11a Squadra di Marina"
    location = 368 # Genoa
    base     = 368
    division =
    { id    = { type = 23500 id = 124 }
      name  = "RN Trento"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 125 }
      name  = "RN Bolzano"
      type  = heavy_cruiser
      model = 2
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 126 }
      name  = "RN Trieste"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_fire_controll_l
      extra2 = naval_spotter_l
      extra3 = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 23500 id = 127 }
      name  = "Squadrone Asmara"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 128 }
    name     = "17a Squadra di Marina"
    location = 368 # Genoa
    base     = 368
    division =
    { id       = { type = 23500 id = 129 }
      name     = "RN Duca d'Aosta"
      type     = light_cruiser
      model    = 2
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 130 }
      name     = "RN Muzio Attendolo"
      type     = light_cruiser
      model    = 2
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id       = { type = 23500 id = 131 }
      name     = "RN Raimondo Montecuccoli"
      type     = light_cruiser
      model    = 2
      extra1 = naval_fire_controll_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 0
      maxspeed = 34
    }
    division =
    { id    = { type = 23500 id = 132 }
      name  = "13a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 133 }
    name     = "1a Flotta Sommergibili"
    location = 534 # Sardinia
    base     = 534
    division =
    { id    = { type = 23500 id = 134 }
      name  = "4a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 135 }
      name  = "51a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 136 }
      name  = "52a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 137 }
    name     = "2a Flotta Sommergibili"
    location = 525 # Palermo
    base     = 525
    division =
    { id    = { type = 23500 id = 138 }
      name  = "11a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 139 }
      name  = "12a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
    division =
    { id    = { type = 23500 id = 140 }
      name  = "13a Flottiglia Sommergibili"
      type  = submarine
      model = 1
    }
  }
  navalunit =
  { id       = { type = 23500 id = 141 }
    name     = "3a Flotta Sommergibili"
    location = 378 # Venice
    base     = 378
    division =
    { id    = { type = 23500 id = 142 }
      name  = "21a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 143 }
    name     = "4a Flotta Sommergibili"
    location = 523 # Taranto
    base     = 523
    division =
    { id    = { type = 23500 id = 144 }
      name  = "31a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 23500 id = 145 }
      name  = "33a Flottiglia Sommergibili"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 146 }
    name     = "5a Flotta Sommergibili"
    location = 368 # Genoa
    base     = 368
    division =
    { id    = { type = 23500 id = 147 }
      name  = "40a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 148 }
    name     = "Comando Navale Libico"
    location = 932 # Tripoli
    base     = 932
    division =
    { id    = { type = 23500 id = 149 }
      name  = "1a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
  }
  navalunit =
  { id       = { type = 23500 id = 150 }
    name     = "6a Flottiglia Sommergibili"
    location = 932 # Tripoli
    base     = 932
    division =
    { id    = { type = 23500 id = 151 }
      name  = "61a Flottiglia Sommergibili"
      type  = submarine
      model = 2
    }
  }
  navalunit =
  { id       = { type = 23500 id = 152 }
    name     = "Comando Navale Mar Rosso"
    location = 1033 # Massaua
    base     = 1033
    division =
    { id    = { type = 23500 id = 153 }
      name  = "3a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1    = none
      brigade_model1 = 0
    }
    division =
    { id    = { type = 23500 id = 154 }
      name  = "5a Squadriglia Cacciatorpediniere"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  #########################################
	### Italian Air OOB ###
  #########################################

  airunit = {
    location = 370 # Milan
    base = 370
    id = { type = 23500 id = 500 }
    name = "2a Divisione Aerea 'Borea'"

    division = {
      id = { type = 23500 id = 501 }
      name = "3o Stormo CT"
      strength = 80
      type = interceptor
      model = 0
    }
  }

  airunit = {
    location = 370 # Milan
    base = 370
    id = { type = 23500 id = 502 }
    name = "6a Divisione Aerea 'Falco'"

    division = {
      id = { type = 23500 id = 503 }
      name = "18o Stormo BT"
      type = tactical_bomber
      model = 0
      strength = 60
    }
  }

  airunit = {
    location = 368 # Genoa
    base = 368
    id = { type = 23500 id = 504 }
    name = "4a Divisione Aerea 'Drago'"

    division = {
      id = { type = 23500 id = 505 }
      name = "7o Stormo BT"
      type = tactical_bomber
      model = 0
      strength = 60
    }
  }

  airunit = {
    location = 378 # Venice
    base = 378
    id = { type = 23500 id = 506 }
    name = "1a Divisione Aerea 'Aquila'"

    division = {
      id = { type = 23500 id = 507 }
      name = "1o Stormo CT"
      strength = 60
      type = interceptor
      model = 0
    }
  }

  airunit = {
    location = 378 # Venice
    base = 378
    id = { type = 23500 id = 508 }
    name = "3a Divisione Aerea 'Centauro'"

    division = {
      id = { type = 23500 id = 509 }
      name = "11o Stormo BT"
      type = tactical_bomber
      model = 0
      strength = 60
    }
  }

  airunit = {
    location = 515 # Rome
    base = 515
    id = { type = 23500 id = 510 }
    name = "5a Divisione Aerea 'Eolo'"

    division = {
      id = { type = 23500 id = 511 }
      name = "12o Stormo BT"
      type = tactical_bomber
      model = 0
      strength = 50
    }
  }

  airunit = {
    location = 515 # Rome
    base = 515
    id = { type = 23500 id = 512 }
    name = "8a Brigata Aerea 'Astore'"

    division = {
      id = { type = 23500 id = 513 }
      name = "7o Gruppo AC"
      type = cas
      model = 0
      strength = 35
    }
  }

  airunit = {
    location = 515 # Rome
    base = 515
    id = { type = 23500 id = 514 }
    name = "Comando Servizi Aerei Speciali"

    division = {
      id = { type = 23500 id = 515 }
      name = "C.S.A.S."
      type = transport_plane
      model = 0
      strength = 25
    }
  }

  airunit = {
    location = 523 # Taranto
    base = 523
    id = { type = 23500 id = 516 }
    name = "2o Gruppo Autonomo Caccia Terrestre"

    division = {
      id = { type = 23500 id = 517 }
      name = "2o Gruppo ACT"
      strength = 30
      type = interceptor
      model = 0
    }
  }
  airunit = {
    location = 523 # Taranto
    base = 523 
    id = { type = 23500 id = 518 }
    name = "35o Stormo Bombardamento Marittimo"

    division = {
      id = { type = 23500 id = 519 }
      name = "35o Stormo BM"
      type = naval_bomber
      model = 0
      strength = 50
    }
  }

  airunit = {
    location = 523 # Taranto
    base = 523
    id = { type = 23500 id = 520 }
    name = "Comando Marittimo Ionio"

    division = {
      id = { type = 23500 id = 521 }
      name = "Comando Marittimo Ionio"
      type = naval_bomber
      model = 0
      strength = 50
    }
  }

  airunit = {
    location = 534 # Sardinia
    base = 534
    id = { type = 23500 id = 522 }
    name = "Aeronautica della Sardegna"

    division = {
      id = { type = 23500 id = 523 }
      name = "Aeronautica della Sardegna"
      strength = 60
      type = interceptor
      model = 0
    }
  }

  airunit = {
    location = 534 # Sardinia
    base = 534
    id = { type = 23500 id = 524 }
    name = "10a Brigata Aerea 'Marte'"

    division = {
      id = { type = 23500 id = 525 }
      name = "8o Stormo BT"
      type = tactical_bomber
      model = 0
      strength = 60
    }
  }

  airunit = {
    location = 534 # Sardinia
    base = 534
    id = { type = 23500 id = 526 }
    name = "31o Stormo Bombardamento Marittimo"

    division = {
      id = { type = 23500 id = 527 }
      name = "31o Stormo BM"
      type = naval_bomber
      model = 0
      strength = 50
    }
  }

  airunit = {
    location = 534 # Sardinia
    base = 534
    id = { type = 23500 id = 528 }
    name = "Comando Marittimo Sardegna"

    division = {
      id = { type = 23500 id = 529 }
      name = "85o Gruppo RM"
      type = naval_bomber
      model = 0
      strength = 50
    }
  }

  airunit = {
    location = 526 # Catania
    base = 526
    id = { type = 23500 id = 530 }
    name = "Comando Marittimo Sicilia"

    division = {
      id = { type = 23500 id = 531 }
      name = "83o Gruppo RM"
      type = naval_bomber
      model = 0
      strength = 50
    }
  }

  airunit = {
    location = 932 # Tripoli 
    base = 932
    id = { type = 23500 id = 532 }
    name = "Aeronautica della Libia"

    division = {
      id = { type = 23500 id = 533 }
      name = "15o Stormo BT"
      type = tactical_bomber
      model = 0
      strength = 60
    }
  }

  airunit = {
    location = 932 # Tripoli
    base = 932
    id = { type = 23500 id = 534 }
    name = "2o Stormo CT"

  division = {
      id = { type = 23500 id = 535 }
      name = "2o Stormo CT"
      type = interceptor
      model = 0
      strength = 50
    }
  }

  airunit = {
    location = 924 # Bengazi
    base = 924
    id = { type = 23500 id = 536 }
    name = "13a Divisione Aerea 'Pegaso'"

    division = {
      id = { type = 23500 id = 537 }
      name = "10o Stormo BT"
      type = tactical_bomber
      model = 0
      strength = 50
    }
  }

  airunit = {
    location = 919 # Tobruk
    base = 919
    id = { type = 23500 id = 538 }
    name = "14a Brigata Aerea 'Rex'"

    division = {
      id = { type = 23500 id = 539 }
      name = "8o Gruppo CT"
      type = interceptor
      model = 0
      strength = 60
    }
  }

  airunit = {
    location = 1039 # Asmara
    base = 1039
    id = { type = 23500 id = 540 }
    name = "Aeronautica dell'Africa Orientale"
    leader = 6193 # Mario Ajmone Cat

    division = {
      id = { type = 23500 id = 541 }
      name = "9o Stormo BT"
      type = tactical_bomber
      model = 0
      strength = 70
    }
  }

#####################

  # ################################################
  	### Warships Under Construction ###
  # ################################################

	province_development = { 
		id = { type = 23500 id = 226 } 
		name = "" 
		progress = 0.0000 
		location = 531 
		cost = 5.0000 
		date = { 
			year = 1937 
			month = september 
			day = 4 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 1210 
		days_for_first = 302 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 23500 id = 227 } 
		name = "" 
		progress = 0.0000 
		location = 370 
		cost = 5.0000 
		date = { 
			year = 1937 
			month = september 
			day = 4 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 1210 
		days_for_first = 302 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 23500 id = 228 } 
		name = "" 
		progress = 0.0000 
		location = 378 
		cost = 5.0000 
		date = { 
			year = 1937 
			month = september 
			day = 4 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 1210 
		days_for_first = 302 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 23500 id = 208 } 
		name = "" 
		progress = 0.0000 
		location = 370 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = january 
			day = 27 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 808 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 209 } 
		name = "" 
		progress = 0.0000 
		location = 378 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = january 
			day = 27 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 808 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 218 } 
		name = "" 
		progress = 0.0000 
		location = 531 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = may 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1563 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 210 } 
		name = "" 
		progress = 0.0000 
		location = 515 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = march 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1110 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 214 } 
		name = "" 
		progress = 0.0000 
		location = 368 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = may 
			day = 6 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 20 
		done = 0 
		days = 1563 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 215 } 
		name = "" 
		progress = 0.0000 
		location = 513 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = march 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1865 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 217 } 
		name = "" 
		progress = 0.0000 
		location = 534 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = january 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2166 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 23500 id = 216 } 
		name = "" 
		progress = 0.0000 
		location = 520 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = march 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 1865 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	convoy_development = { 
		id = { type = 23500 id = 202 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1952 
			month = october 
			day = 21 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 80.0000 
		total_progress = 0.0000 
		size = 99 
		done = 0 
		days = 5940 
		days_for_first = 76 
		gearing_bonus = 0.0000 
		type = transports 
		} 
	brigade_development = { 
		id = { type = 23500 id = 222 } 
		name = "36' Secondary Armament" 
		progress = 0.0000 
		location = 515 
		cost = 0.4200 
		date = { 
			year = 1936 
			month = december 
			day = 9 
			hour = 0 
			} 
		manpower = 0.2000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 40.0000 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 299 
		days_for_first = 105 
		gearing_bonus = 0.0000 
		type = naval_sa_l 
		model = 1 
		} 
	brigade_development = { 
		id = { type = 23500 id = 223 } 
		name = "36' Capital Fire Control" 
		progress = 0.0000 
		location = 515 
		cost = 1.2600 
		date = { 
			year = 1936 
			month = july 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 40.0000 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 168 
		days_for_first = 59 
		gearing_bonus = 0.0000 
		type = naval_fire_controll_l 
		model = 1 
		} 
	brigade_development = { 
		id = { type = 23500 id = 224 } 
		name = "30' Capital AA" 
		progress = 0.0000 
		location = 515 
		cost = 0.8400 
		date = { 
			year = 1936 
			month = july 
			day = 16 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 40.0000 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 156 
		days_for_first = 55 
		gearing_bonus = 0.0000 
		type = naval_anti_air_l 
		model = 0 
		} 
	brigade_development = { 
		id = { type = 23500 id = 225 } 
		name = "36' Fire Control" 
		progress = 0.0000 
		location = 515 
		cost = 0.4200 
		date = { 
			year = 1938 
			month = february 
			day = 14 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		retooling_time = 40.0000 
		total_progress = 0.0000 
		size = 16 
		done = 0 
		days = 762 
		days_for_first = 55 
		gearing_bonus = 0.0000 
		type = naval_fire_controll_s 
		model = 1 
		} 
	division_development = { 
		id = { type = 23500 id = 201 } 
		name = "RN Littorio" 
		progress = 0.0000 
		location = 0 
		cost = 7.0217 
		date = { 
			year = 1937 
			month = october 
			day = 22 
			hour = 0 
			} 
		manpower = 2.5000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.4264 # 0.2128
		size = 2 
		done = 0 
		days = 1 
		days_for_first = 428 
		gearing_bonus = 0.0000 
		type = battleship 
		extra = none 
		extra1 = naval_sa_l 
		extra2 = naval_fire_controll_l 
		extra3 = naval_spotter_l 
		extra4 = naval_anti_air_l 
		model = 4
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 1 
		brigade_model3 = 0 
		brigade_model4 = 1 
		} 
	division_development = { 
		id = { type = 23500 id = 204 } 
		name = "RN Giulio Cesare" 
		progress = 0.0000 
		location = 0 
		cost = 5.3983 
		date = { 
			year = 1936 
			month = may 
			day = 16 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.6472 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 386 
		gearing_bonus = 0.0000 
		type = battleship 
		extra = none 
		extra1 = naval_sa_l 
		extra2 = naval_fire_controll_l 
		extra3 = naval_anti_air_l 
		extra4 = none 
		model = 1 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 1 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 23500 id = 203 } 
		name = "RN Conte di Cavour" 
		progress = 0.0000 
		location = 0 
		cost = 5.3983 
		date = { 
			year = 1936 
			month = may 
			day = 0 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.6891 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 386 
		gearing_bonus = 0.0000 
		type = battleship 
		extra = none 
		extra1 = naval_sa_l 
		extra2 = naval_fire_controll_l 
		extra3 = naval_anti_air_l 
		extra4 = none 
		model = 1 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 1 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 23500 id = 205 } 
		name = "RN Duca degli Abruzzi" 
		progress = 0.0000 
		location = 0 
		cost = 4.4025 
		date = { 
			year = 1936 
			month = march 
			day = 25 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.5117 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 176 
		gearing_bonus = 0.0000 
		type = light_cruiser 
		extra = none 
		extra1 = naval_fire_controll_s 
		extra2 = naval_spotter_s 
		extra3 = none 
		extra4 = none 
		model = 3 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 23500 id = 206 } 
		name = "RN Giuseppe Garibaldi" 
		progress = 0.0000 
		location = 0 
		cost = 4.4025 
		date = { 
			year = 1936 
			month = march 
			day = 25 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.5140 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 176 
		gearing_bonus = 0.0000 
		type = light_cruiser 
		extra = none 
		extra1 = naval_fire_controll_s 
		extra2 = naval_spotter_s 
		extra3 = none 
		extra4 = none 
		model = 3 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 23500 id = 29 } 
		name = "RN Eugenio di Savoia" 
		progress = 0.0000 
		location = 0 
		cost = 3.5625 
		date = { 
			year = 1936 
			month = january 
			day = 2 
			hour = 0 
			} 
		manpower = 1.4000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.9835 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 176 
		gearing_bonus = 0.0000 
		type = light_cruiser 
		extra = none 
		extra1 = naval_fire_controll_s 
		extra2 = naval_spotter_s 
		extra3 = none 
		extra4 = none 
		model = 2 
		brigade_model = 0 
		brigade_model1 = 1 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
}
