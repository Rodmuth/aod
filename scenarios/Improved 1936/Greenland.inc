#####################
# Country main data #
#####################

country =
{ tag                    = U28
  capital                = 800
  control = DEN
  puppet = DEN
  manpower               = 0.1
  # Resource Reserves
  energy                 = 100
  metal                  = 100
  rare_materials         = 50
  oil                    = 50
  supplies               = 50
  money                  = 0
  transports             = 15
  escorts                = 0
  diplomacy = { 
  relation = { tag = DEN value = 200 }
  relation = { tag = ICL value = 200 }
  }

  nationalprovinces      = { 800 }

  ownedprovinces         = { 800 }

  controlledprovinces    = { 800 }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 2450 1010 1110 5010 5020 5080 5090 6010 6020 8050 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    free_market       = 10
    freedom           = 10
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 9115800 }
  headofgovernment       = { type = 9 id = 9115801 }
  foreignminister        = { type = 9 id = 9115804 }
  armamentminister       = { type = 9 id = 9115807 }
  ministerofsecurity     = { type = 9 id = 9115806 }
  ministerofintelligence = { type = 9 id = 9115805 }
  chiefofstaff           = { type = 9 id = 9115809 }
  chiefofarmy            = { type = 9 id = 9115808 }
  chiefofnavy            = { type = 9 id = 9115810 }
  chiefofair             = { type = 9 id = 9115811 }
  nationalidentity = "policy_identity_conciliatory" 
	socialpolicy = "policy_social_liberal" 
	nationalculture = "policy_culture_enterprise"

	province_development = { 
		id = { type = 10058 id = 1 } 
		name = "" 
		progress = 0.0000 
		location = 800 
		cost = 2.0000 
		date = { 
			year = 1960 
			month = january 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 36 
		done = 0 
		days = 2753 
		days_for_first = 240 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}

