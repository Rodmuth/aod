#####################
# Country main data #
#####################

country =
{ tag                    = SUD
  capital                = 1066
  puppet = ENG
  control = ENG
  manpower               = 18.86  #21.9
  # Resource Reserves
  energy                 = 90
  metal                  = 90
  rare_materials         = 45
  oil                    = 45
  supplies               = 45
  money                  = 0
  transports             = 10
  escorts                = 0
  diplomacy =
  { 
	relation = { tag = EGY value = 200 }
	relation = { tag = ENG value = 100 }
  }

  nationalprovinces      = { 1028 1029 1067 1068 1069 1030 1031 1040 1041 1066 1065 1032 }

  ownedprovinces         = { 1028 1029 1067 1068 1069 1030 1031 1040 1041 1066 1065 1032 }

  controlledprovinces    = { 1028 1029 1067 1068 1069 1030 1031 1040 1041 1066 1065 1032 }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 1010 1190 5080 5090}
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 8
    free_market       = 6
    professional_army = 2
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 555001 }
  headofgovernment       = { type = 9 id = 555002 }
  foreignminister        = { type = 9 id = 555003 }
  armamentminister       = { type = 9 id = 555004 }
  ministerofsecurity     = { type = 9 id = 555005 }
  ministerofintelligence = { type = 9 id = 555006 }
  chiefofstaff           = { type = 9 id = 555007 }
  chiefofarmy            = { type = 9 id = 555008 }
  chiefofnavy            = { type = 9 id = 555009 }
  chiefofair             = { type = 9 id = 555010 }
  nationalidentity = "policy_identity_imperial" 
	socialpolicy = "policy_social_enterprise" 
	nationalculture = "policy_culture_enterprise"

  landunit =
  { id       = { type = 10061 id = 1 }
    name     = "Sudan Defence Force"
    location = 1066
    division =
    { id       = { type = 10061 id = 2 }
      name     = "Equatoria Corps"
      strength = 8
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 10061 id = 3 }
      name     = "Shendi Horse"
      strength = 8
      type     = cavalry
      model    = 0
    }
    division =
    { id       = { type = 10061 id = 4 }
      name     = "Sudan Camel Corps"
      strength = 8
      type     = cavalry
      model    = 0
    }
    division =
    { id       = { type = 10061 id = 5 }
      name     = "Western Arab Corps"
      strength = 8
      type     = militia
      model    = 0
    }
    division =
    { id       = { type = 10061 id = 6 }
      name     = "Eastern Arab Corps"
      strength = 8
      type     = militia
      model    = 0
    }
  } 
	province_development = { 
		id = { type = 10061 id = 7 } 
		name = "" 
		progress = 0.0000 
		location = 1066 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = may 
			day = 29 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2780 
		days_for_first = 104 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}

